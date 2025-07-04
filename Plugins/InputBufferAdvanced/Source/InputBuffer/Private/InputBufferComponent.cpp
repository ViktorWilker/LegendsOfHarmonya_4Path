// Copyright Isaac Hsu

#include "InputBufferComponent.h"

#include "Engine/Canvas.h"
#include "Engine/Texture2D.h"
#include "GameFramework/PlayerInput.h"
#include "KeyState.h"

#include "ArrayKit.h"
#include "InputBufferGlobalAssets.h"
#include "InputBufferIconSet.h"
#include "InputBufferPlayerController.h"
#include "InputCommand.h"

////////////////////////////////////////////////////////////////////////////////
// UInputBufferComponent

// Sets default values for this component's properties
UInputBufferComponent::UInputBufferComponent()
	: MaxInputHistory(10)
	, EmptyEventIconIndex(-1)
{	
}

void UInputBufferComponent::BeginPlay()
{
	Super::BeginPlay();

	Initialize();
}

int32 UInputBufferComponent::Initialize()
{
	const auto MAX_EVENTS = FInputBufferRecord::MAX_EVENTS;

	RuntimeEvents.Reset(EventSetups.Num() + TranslatedEvents.Num());
	EventIndexMap.Empty(RuntimeEvents.Num());
    KeyIndexMap.Reset();

	KeyStates1.Reset();
	KeyStates2.Reset();

	TMap<FName, int32> KeyMappingIndexMap;
	for (int Idx = 0; Idx < KeyMappings.Num(); Idx++)
	{
		const FBufferedInputEventKeyMapping& Mapping = KeyMappings[Idx];
		if (Mapping.Name != NAME_None && Mapping.Keys.Num() > 0 && KeyMappingIndexMap.Find(Mapping.Name) == nullptr)
		{
			KeyMappingIndexMap.Add(Mapping.Name, Idx);
		}
	}

	for (const FBufferedInputEventSetup& Setup : EventSetups)
	{
		if (Setup.bEnabled && Setup.Name != NAME_None && EventIndexMap.Find(Setup.Name) == nullptr)
		{
			if (RuntimeEvents.Num() >= MAX_EVENTS)
			{
				UE_LOG(InputBufferLog, Warning, TEXT("Cannot register input events more than %d."), MAX_EVENTS);
				break;
			}

			// The use of a set makes sure there will be no duplicate keys.
			TSet<FKey> KeySet;

			for (const FKey& Key : Setup.Keys)
			{
				if (Key.IsValid())
				{
					KeySet.Add(Key);
				}
			}

			if (Setup.KeyMappingName != NAME_None)
			{
				int32* Index = KeyMappingIndexMap.Find(Setup.KeyMappingName);
				if (Index)
				{
					for (const FKey& Key : KeyMappings[*Index].Keys)
					{
						if (Key.IsValid())
						{
							KeySet.Add(Key);
						}						
					}
				}
			}

			if (KeySet.Num() > 0)
			{
				for (FKey& Key : KeySet)
				{
					if (KeyIndexMap.Find(Key) == nullptr)
					{
						int32 Index1 = KeyStates1.Add(false);
						int32 Index2 = KeyStates2.Add(false);
						check(Index1 == Index2);
						KeyIndexMap.Add(Key, Index1);
					}
				}

				int32 Index = RuntimeEvents.Add(Setup);
				EventIndexMap.Add(Setup.Name, Index);
				RuntimeEvents[Index].Keys = KeySet.Array();
			}
			else
			{
				UE_LOG(InputBufferLog, Warning, TEXT("Input event '%s' does not have any valid key mappings."), *Setup.Name.ToString());
			}
		}
	}

	NumOfKeyedEvents = RuntimeEvents.Num();

	for (FName Event : TranslatedEvents)
	{
		if (Event != NAME_None && EventIndexMap.Find(Event) == nullptr)
		{
			if (RuntimeEvents.Num() >= MAX_EVENTS)
			{
				UE_LOG(InputBufferLog, Warning, TEXT("Cannot register input events more than %d."), MAX_EVENTS);
				break;
			}

			FBufferedInputEventSetup Setup;
			Setup.Name = Event;
			int32 Index = RuntimeEvents.Add(Setup);
			EventIndexMap.Add(Setup.Name, Index);
		}
	}

	check(KeyStates1.Num() == KeyStates2.Num());

	PreviousKeyStates = &KeyStates1;
	CurrentKeyStates = &KeyStates2;

    CurrentRecord = FInputBufferRecord();

	InputHistory.Reset(MaxInputHistory);	

	InitializeIconSet();

	return EventIndexMap.Num();
}

void UInputBufferComponent::InitializeIconSet()
{
	EventToIconIndices.Init(INDEX_NONE, RuntimeEvents.Num());
	EventsToIconIndexMap.Reset();

	if (IconSet)
	{
		for (int32 IconIdx = 0; IconIdx < IconSet->Icons.Num(); IconIdx++)
		{
			// Also update RefGroupCount
			const FInputBufferIcon& Icon = IconSet->Icons[IconIdx];
			if (IconSet->RefGroupCount <= Icon.GroupIndex)
			{
				IconSet->RefGroupCount = Icon.GroupIndex + 1;
			}

			const TArray<FName>& Events = IconSet->Icons[IconIdx].Events;
			if (Events.Num() == 0)
			{
				EmptyEventIconIndex = IconIdx;
			}
			else if (Events.Num() == 1)
			{
				int32* Index = EventIndexMap.Find(Events[0]);
				if (Index)
				{
                    if (EventToIconIndices.IsValidIndex(*Index) && EventToIconIndices[*Index] >= 0)
                    {
                        UE_LOG(InputBufferLog, Warning, TEXT("%s: Cannot register icon (%d). Input event (%s) has been registered by icon (%d)."), *(IconSet->GetName()), IconIdx, *(Events[0].ToString()), EventToIconIndices[*Index]);
                    }
                    else
                    {
                        ArraySetItem<int32>(EventToIconIndices, *Index, IconIdx, INDEX_NONE);
                    }
				}
			}
			else if (Events.Num() > 1)
			{
				uint64 Flags = 0;
				if (ConvertEventsToFlags(Events, Flags))
				{
                    int32* OldIdx = EventsToIconIndexMap.Find(Flags);
                    if (OldIdx)
                    {
                        UE_LOG(InputBufferLog, Warning, TEXT("%s: Cannot register icon (%d). Input events have been registered by icon (%d)."), *(IconSet->GetName()), IconIdx, *OldIdx);
                    }
                    else
                    {
                        EventsToIconIndexMap.Add(Flags, IconIdx);
                    }
				}
			}
		}
	}
}

void UInputBufferComponent::SetIconSet(UInputBufferIconSet* NewIconSet)
{
	IconSet = NewIconSet;
	InitializeIconSet();
}

void UInputBufferComponent::OnPreProcessInput(UPlayerInput* PlayerInput, const bool bGamePaused)
{
}

void UInputBufferComponent::OnPostProcessInput(UPlayerInput* PlayerInput, const bool bGamePaused)
{
	ProcessInput(PlayerInput, bGamePaused);
}

void UInputBufferComponent::ProcessInput(UPlayerInput* PlayerInput, const bool bGamePaused)
{
	const float CurrTime = GetCurrentTime();

	// Reset the current record because we may add it to the input buffer later.
	CurrentRecord.bValid = true;
	CurrentRecord.StartTime = CurrTime;
	CurrentRecord.EndTime = CurrTime;
	CurrentRecord.Events = 0;
	CurrentRecord.TranslatedEvents = 0;

	AInputBufferPlayerController* Controller = Cast<AInputBufferPlayerController>(GetOwner());

	if (PlayerInput)
	{
		Swap(PreviousKeyStates, CurrentKeyStates);

		// Update key states so we can determine if a key is just pressed or released.
		for (const TPair<FKey, int32>& Pair : KeyIndexMap)
		{
			FKeyState* State = PlayerInput->GetKeyState(Pair.Key);
			(*CurrentKeyStates)[Pair.Value] = State ? (State->bDown != 0) : false;
		}

		// Set event flags according key states
		check(NumOfKeyedEvents <= RuntimeEvents.Num());
		for (int32 Idx = 0; Idx < NumOfKeyedEvents; Idx++)
		{
			const FBufferedInputEventSetup& Event = RuntimeEvents[Idx];

			if (!bGamePaused || Event.bExecuteWhenPaused)
			{
				if (Event.Type == EBufferedInputEventType::Pressed)
				{
					for (const FKey& Key : Event.Keys)
					{
						int32* KeyIndex = KeyIndexMap.Find(Key);
						if (KeyIndex)
						{
							if (!(*PreviousKeyStates)[*KeyIndex] && (*CurrentKeyStates)[*KeyIndex])
							{
								RecordEvent(Idx, Controller);
								break;
							}
						}
					}
				}
				else if (Event.Type == EBufferedInputEventType::Released)
				{
					for (const FKey& Key : Event.Keys)
					{
						int32* KeyIndex = KeyIndexMap.Find(Key);
						if (KeyIndex)
						{
							if ((*PreviousKeyStates)[*KeyIndex] && !(*CurrentKeyStates)[*KeyIndex])
							{
								RecordEvent(Idx, Controller);
								break;
							}
						}
					}
				}
				else if (Event.Type == EBufferedInputEventType::Held)
				{
					for (const FKey& Key : Event.Keys)
					{
						int32* KeyIndex = KeyIndexMap.Find(Key);
						if (KeyIndex)
						{
							if ((*CurrentKeyStates)[*KeyIndex])
							{
								RecordEvent(Idx, Controller);
								break;
							}
						}
					}
				}
			}
		}
	}

	// Add the current record to the input buffer if the input events are different from the previous. Otherwise, just prolong the last record.
	FInputBufferRecord* LastRecord = InputHistory.Last();
	if (LastRecord && LastRecord->Events == CurrentRecord.Events && LastRecord->TranslatedEvents == CurrentRecord.TranslatedEvents)
	{
		LastRecord->EndTime = CurrentRecord.StartTime;
	}
	else
	{
		InputHistory.Push(CurrentRecord);
	}

	// Trigger PostBufferInput event when the current events are not empty.
	if (CurrentRecord.Events != 0 && Controller)
	{
		Controller->PostBufferInput();
	}
}

void UInputBufferComponent::RecordEvent(uint64 EventIndex, AInputBufferPlayerController* Controller)
{
	check(EventIndex < RuntimeEvents.Num());
	check(Controller == GetOwner());

	// Translate given input event and find out an event index for translated event
	if (Controller)
	{
		FName OriginalEvent = RuntimeEvents[EventIndex].Name;
		FName TranslatedEvent = Controller->TranslateInputEvent(OriginalEvent);
		if (OriginalEvent != TranslatedEvent)
		{
			// Set the original event bit
			CurrentRecord.TranslatedEvents |= (1LL << EventIndex);

			int32* FoundIndex = EventIndexMap.Find(TranslatedEvent);
			if (FoundIndex == nullptr)
			{
				if (TranslatedEvent == NAME_None)
				{
					return; // Skip event flag recording
				}
				else
				{
					UE_LOG(InputBufferLog, Warning, TEXT("Unknown input event '%s' translated from '%s'."), *TranslatedEvent.ToString(), *OriginalEvent.ToString());
				}
			}
			else
			{
				EventIndex = *FoundIndex;
			}
		}
	}

	// Set the event bit
	CurrentRecord.Events |= (1LL << EventIndex); 
}

void UInputBufferComponent::ClearHistory()
{
	InputHistory.Reset(MaxInputHistory);
}

void UInputBufferComponent::InvalidateHistory()
{
	FInputBufferRecord* Record = InputHistory.GetData();
	FInputBufferRecord* RecordEnd = Record + InputHistory.Num();
	for (; Record != RecordEnd; Record++)
	{
		Record->bValid = false;
	}
}

bool UInputBufferComponent::ConvertEventsToFlags(const TArray<FName>& Events, uint64& Flags) const
{
	bool bSucceeded = true;
	for (int32 Idx = 0; Idx < Events.Num(); Idx++)
	{
		const int32* Index = EventIndexMap.Find(Events[Idx]);
		if (Index)
		{
			Flags |= (1LL << *Index); // Set the event bit
		}
		else
		{
			bSucceeded = false; // Any unknown event means a failure.
		}
	}

	return bSucceeded;
}

void UInputBufferComponent::ConvertFlagsToEvents(uint64 Flags, TArray<FName>& Events) const
{
	// TODO: Reduce complexity
	for (int Idx = 0; Idx < RuntimeEvents.Num() && Flags != 0; Idx++)
	{
		if (Flags & 0x1)
		{
			Events.Add(RuntimeEvents[Idx].Name);
		}

		Flags >>= 1;
	}
}

void UInputBufferComponent::GetCurrentEvents(TArray<FName>& Events) const
{
	ConvertFlagsToEvents(CurrentRecord.Events, Events);
}

const FInputBufferRecord* UInputBufferComponent::GetLastRecord(float TimeLimit, bool bSkipEmptyTrail) const
{
	if (bSkipEmptyTrail)
	{
		return GetLastNonEmptyRecord(TimeLimit);
	}
	else
	{
		return GetLastRecord(TimeLimit);
	}
}

const FInputBufferRecord* UInputBufferComponent::GetLastRecord(float TimeLimit) const
{
	float CurrTime = GetCurrentTime();

	for (auto It = InputHistory.CreateConstReverseIterator(); It; ++It)
	{
		const FInputBufferRecord& Record = *It;
		if (Record.bValid && (CurrTime - Record.EndTime <= TimeLimit || TimeLimit == 0.f))
		{
			return &Record;
		}
		else
		{
			break;
		}
	}

	return nullptr;
}

const FInputBufferRecord* UInputBufferComponent::GetLastNonEmptyRecord(float TimeLimit) const
{
	float CurrTime = GetCurrentTime();

	for (auto It = InputHistory.CreateConstReverseIterator(); It; ++It)
	{
		const FInputBufferRecord& Record = *It;
		if (Record.bValid && (CurrTime - Record.EndTime <= TimeLimit || TimeLimit == 0.f))
		{
			if (Record.Events != 0)
			{
				return &Record;
			}
		}
		else
		{
			break;
		}
	}

	return nullptr;
}

float UInputBufferComponent::GetLastEvents(TArray<FName>& Events, float TimeLimit, bool bSkipEmptyTrail) const
{
	const FInputBufferRecord* Record = GetLastRecord(TimeLimit, bSkipEmptyTrail);
	if (Record)
	{
		ConvertFlagsToEvents(Record->Events, Events);
		return Record->EndTime;
	}
	else
	{
		return 0.f;
	}
}

void UInputBufferComponent::GetHistoryRecords(TArray<FInputHistoryRecord>& Records, float TimeLimit, bool bIncludeInvalidRecords) const
{
	float CurrTime = GetCurrentTime();

	for (auto It = InputHistory.CreateConstReverseIterator(); It; ++It)
	{
		const FInputBufferRecord& Record = *It;
		if ((Record.bValid || bIncludeInvalidRecords) && (CurrTime - Record.EndTime <= TimeLimit || TimeLimit == 0.f))
		{
			FInputHistoryRecord Copy(Record.StartTime, Record.EndTime, Record.bValid);
			ConvertFlagsToEvents(Record.Events, Copy.Events);
			ConvertFlagsToEvents(Record.TranslatedEvents, Copy.TranslatedEvents);

			Records.Add(Copy);
		}
		else
		{
			break;
		}
	}

	Algo::Reverse(Records);
}

bool UInputBufferComponent::SetHistoryRecords(const TArray<FInputHistoryRecord>& Records)
{
	bool AllSucceeded = true;
	InputHistory.Reset(Records.Num());

	for (const FInputHistoryRecord& Record : Records)
	{
		uint64 Flags = 0;
		uint64 TranslatedFlags = 0;
		AllSucceeded = AllSucceeded && ConvertEventsToFlags(Record.Events, Flags);
		AllSucceeded = AllSucceeded && ConvertEventsToFlags(Record.TranslatedEvents, TranslatedFlags);

		InputHistory.Push(FInputBufferRecord(Record.StartTime, Record.EndTime, Flags, TranslatedFlags, Record.bValid));
	}

	return AllSucceeded;
}

bool UInputBufferComponent::MatchEvents(const TArray<FName>& EventsToMatch, const TArray<FName>& EventsToIgnore, float TimeLimit, bool bSkipEmptyTrail) const
{
	const FInputBufferRecord* Record = GetLastRecord(TimeLimit, bSkipEmptyTrail);
	if (Record)
	{
		uint64 MatchingFlags = 0; // The bit flags of events to match.
		if (ConvertEventsToFlags(EventsToMatch, MatchingFlags))
		{
			uint64 IgnoringFlags = 0; // The bit flags of events to ignore.
			ConvertEventsToFlags(EventsToIgnore, IgnoringFlags);

			if (CompareEventFlags(Record->Events, MatchingFlags, IgnoringFlags))
			{
				return true;					
			}
		}
	}

	return false;
}

bool UInputBufferComponent::MatchCommand(class UInputCommand* Command) const
{
	if (Command == nullptr || InputHistory.Num() == 0)
	{
		return false; // because of nothing to match
	}

	uint64 OuterIgnoreFlags = 0;
	ConvertEventsToFlags(Command->EventsToIgnore, OuterIgnoreFlags);

	const float CurrTime = GetCurrentTime();

	for (FInputCommandSequence& Sequence : Command->Sequences)
	{
		if (Sequence.bEnabled)
		{
			bool bRepeating = false; // Are we trying to repeat the current entry?
			float CurrEntryStartTime = 0; // The start time of the oldest matching record for the current entry. Used to check durations of entries.
			float CurrEntryEndTime = 0; // The end time of the latest matching record for the current entry. Used to check durations of entries.
			float PrevEntryStartTime = 0; // The start time of the oldest matching record for the previous entry. Used to check durations and interval of entries.
			float PrevEntryEndTime = 0; // The end time of the latest matching record for the previous entry. Used to check durations of entries.
			int32 EntryIdx = Sequence.Entries.Num() - 1; // The index of the command entry to match in the current iteration.
			auto It = InputHistory.CreateConstReverseIterator(); // Input history iterator.

			while (EntryIdx >= 0)
			{
				const FInputCommandEntry& Entry = Sequence.Entries[EntryIdx];
				//if (Entry.EventsToMatch.Num() == 0)
				//{
				//	break; // because of nothing to match
				//}

				const FInputBufferRecord& Record = *It;
				if (!Record.bValid)
				{
					if (bRepeating && EntryIdx == 0)
					{
						if (!Entry.CheckDuration(CurrEntryEndTime - CurrEntryStartTime))
						{
							break;
						}
						// Even if we failed to repeat the first entry, command recognition still succeeds since we have found matching records for all entries.
						return true;
					}
					else
					{
						break; // Need not check the previous records since they should be invalid too.
					}
				}

				if (CurrTime - Record.EndTime > Command->TimeLimit && Command->TimeLimit != 0.f && !bRepeating)
				{
					break;
				}

				//TArray<FName> RecordedEvents;
				//ConvertFlagsToEvents(Record.Events, RecordedEvents);

				bool bMatched = false; // Whether the current record matches the current entry?
				bool bNextEntry = false; // Should we advance to the next entry in the next iteraion?
				bool bNextRecord = false; // Should we advance to the next record in the next iteraion?
				uint64 MatchingFlags = 0; // The bit flags of events to match.
				uint64 IgnoringFlags = 0; // The bit flags of events to ignore.
				if (ConvertEventsToFlags(Entry.EventsToMatch, MatchingFlags))
				{
					// For events to match, unknown events means mismatch. But for events to ignore, unknown events are omitted.
					ConvertEventsToFlags(Entry.EventsToIgnore, IgnoringFlags);

					if (Entry.bIgnoreOthers)
					{
						bMatched = HasEventFlags(Record.Events, MatchingFlags);
					}
					else
					{
						IgnoringFlags |= OuterIgnoreFlags;
						bMatched = CompareEventFlags(Record.Events, MatchingFlags, IgnoringFlags);
					}
				}
				else
				{
					break; // Fails since we cannot find flags for unknown events.
				}

				if (bMatched)
				{
					if (CurrEntryEndTime == 0)
					{
						// Check limits of the duration of the previous entry.
						if (PrevEntryEndTime != 0.f)
						{
							const FInputCommandEntry& PrevEntry = Sequence.Entries[EntryIdx + 1];
							if (!PrevEntry.CheckDuration(PrevEntryEndTime - PrevEntryStartTime))
							{
								break;
							}
						}

						// Check limits of the internal between the current entry and previous entry.
						if (PrevEntryStartTime != 0.f && !Entry.CheckInterval(PrevEntryStartTime - Record.EndTime))
						{
							break;
						}

						CurrEntryEndTime = Record.EndTime;
					}
					CurrEntryStartTime = Record.StartTime;

					bRepeating = true;
					bNextRecord = true;
				}
				else if (bRepeating)
				{
					if (EntryIdx == 0)
					{
						if (!Entry.CheckDuration(CurrEntryEndTime - CurrEntryStartTime))
						{
							break;
						}
						// Even if we failed to repeat the first entry, command recognition still succeeds since we have found matching records for all entries.
						return true;
					}
					else
					{
						bRepeating = false;
						bNextEntry = true;
					}
				}
				else if (Record.Events == 0)
				{
					// Skip the current record when there is no input.
					bRepeating = false;
					bNextRecord = true;
				}
				else if (Entry.bIgnoreOthers || ((Record.Events | IgnoringFlags) == IgnoringFlags))
				{
					// If the input events do not match but are all neglectable, we can try the next record with the current entry.
					bRepeating = false;
					bNextRecord = true;
				}
				else
				{
					break; // Fails due to mismatch.
				}

				if (bNextRecord)
				{
					++It;
					if (!It) // If there is no remaining history.
					{
						if (EntryIdx == 0 && bMatched)
						{
							if (!Entry.CheckDuration(CurrEntryEndTime - CurrEntryStartTime))
							{
								break;
							}

							return true; // Succeeds since we have checked all the entries and didn't fail.
						}
						else
						{
							break; // Fails because of mismatch or no remaining history to match the next entry.
						}
					}
				}

				if (bNextEntry)
				{
					if (CurrEntryEndTime != 0)
					{
						PrevEntryStartTime = CurrEntryStartTime;
						PrevEntryEndTime = CurrEntryEndTime;
						CurrEntryStartTime = 0.f;
						CurrEntryEndTime = 0.f;							
					}

					EntryIdx--;
				}
			}

			if (EntryIdx == -1)
			{
				return true; // Succeeds since we have checked all the entries and didn't fail.
			}
		}
	}

	return false;
}

float UInputBufferComponent::GetCurrentTime() const
{
	UWorld* World = GetWorld();
	return World ? World->GetRealTimeSeconds() : 0.f;
}

FString UInputBufferComponent::EventFlagsToString(uint64 Events, const FString& Separator) const
{
	FString Result;
	bool bFirst = true;
	for (int Idx = 0; Idx < RuntimeEvents.Num(); Idx++)
	{
		if (Events & 0x1)
		{
			if (bFirst)
			{
				bFirst = false;
			}
			else
			{
				Result += Separator;
			}

			Result += RuntimeEvents[Idx].Name.ToString();
		}

		Events >>= 1;
	}

	return Result;
}

FString UInputBufferComponent::Print(int32 MaxRecords, bool bIncludeInvalidRecords, bool bReverseChronological) const
{
	FString Result;

	if (MaxRecords == 0)
	{
		MaxRecords = InputHistory.Num();
	}
	else
	{
		MaxRecords = FMath::Clamp(MaxRecords, 0, InputHistory.Num());
	}

	if (bReverseChronological)
	{
		int32 Count = 0;
		for (auto It = InputHistory.CreateConstReverseIterator(); It && Count < MaxRecords; ++It, ++Count)
		{
			if (It->bValid)
			{
				Result += FString::Printf(TEXT("[%s] "), *EventFlagsToString(It->Events));
			}
			else if (bIncludeInvalidRecords)
			{
				Result += FString::Printf(TEXT("(%s) "), *EventFlagsToString(It->Events));
			}
		}
	}
	else
	{
		int32 StartIndex = InputHistory.Num() - MaxRecords;
		for (auto It = InputHistory.CreateConstIterator(StartIndex); It; ++It)
		{
			if (It->bValid)
			{
				Result += FString::Printf(TEXT("[%s] "), *EventFlagsToString(It->Events));
			}
			else if (bIncludeInvalidRecords)
			{
				Result += FString::Printf(TEXT("(%s) "), *EventFlagsToString(It->Events));
			}
		}
	}

	return Result;
}

void UInputBufferComponent::DrawHistory(UCanvas* Canvas, int32 X, int32 Y, const FVector2D& TileSize, const FVector2D& TileGap, int32 MaxRecords, bool bIncludeInvalidRecords)
{
	if (Canvas)
	{
		TArray<FCanvasTileItem> Tiles;
		GenerateHistoryTiles(Tiles, X, Y, TileSize, TileGap, MaxRecords, bIncludeInvalidRecords);

		for (FCanvasTileItem& Tile : Tiles)
		{
			Canvas->DrawItem(Tile);
		}
	}
}

void UInputBufferComponent::GenerateHistoryTiles(TArray<FCanvasTileItem>& OutTiles, int32 X, int32 Y, const FVector2D& TileSize, const FVector2D& TileGap, int32 MaxRecords, bool bIncludeInvalidRecords)
{
	OutTiles.Reset();

	if (IconSet == nullptr) return;

	UInputBufferGlobalAssets* GlobalAssets = UInputBufferGlobalAssets::StaticClass()->GetDefaultObject<UInputBufferGlobalAssets>();

	if (MaxRecords == 0)
	{
		MaxRecords = InputHistory.Num();
	}

	TArray<FInputBufferIconGroup> Groups(IconSet->Groups);
	int32 GroupCountDelta = IconSet->GetRefGroupCount() - Groups.Num();
	if (GroupCountDelta > 0)
	{
		Groups.AddDefaulted(GroupCountDelta);
	}

	const int32 GroupNum = Groups.Num();
    const FVector2D TileSpan = TileSize + TileGap;

	TArray<float> GroupTops;
    float Top = Y;
	for (const FInputBufferIconGroup& Group : Groups)
	{
		GroupTops.Add(Top);
		Top += Group.MaxRows * TileSpan.Y;
	}

	TArray<FCanvasTileItem> Tiles; // Temporary storage for tiles in an iteration.

	// All the following arrays will have the same size as Groups.
	TArray<int32> TextureCountsPerGroup; // Numbers of textures in each group, excluding background
	TArray<uint64> CurrFlagsPerGroup; // Event flags of current iteration for each group. Used to tell difference between current and previous iterations.
	TArray<uint64> PrevFlagsPerGroup; // Event flags of previous iteration for each group. Used to tell difference between current and previous iterations.
	PrevFlagsPerGroup.Init(0, GroupNum);

	int32 Column = 0;
	const TArray<FInputBufferIcon>& Icons = IconSet->Icons;	

	auto AddTile = [&](int32 IconIdx, uint64 Flags)
	{
		if (!Icons.IsValidIndex(IconIdx)) return;
		const FInputBufferIcon& Icon = Icons[IconIdx];
		if (!Groups.IsValidIndex(Icon.GroupIndex)) return;
		const FInputBufferIconGroup& Group = Groups[Icon.GroupIndex];

		CurrFlagsPerGroup[Icon.GroupIndex] |= Flags;

		FVector2D TilePos(Column, GroupTops[Icon.GroupIndex]);
		if (Group.bShouldOverlap)
		{
			if (Group.MaxRows <= 0)
			{
				return;
			}
			else if (TextureCountsPerGroup[Icon.GroupIndex] == 0)
			{
				if (Group.Background)
				{
					FCanvasTileItem Tile(TilePos, Group.Background->Resource, TileSize, FLinearColor::White);
					Tile.BlendMode = SE_BLEND_Translucent;
					Tiles.Add(Tile);
				}
			}
		}
		else
		{
			if (Group.MaxRows <= TextureCountsPerGroup[Icon.GroupIndex])
			{
				return;
			}
			else
			{
				TilePos.Y += TextureCountsPerGroup[Icon.GroupIndex] * TileSpan.Y;

				if (Group.Background)
				{
					FCanvasTileItem Tile(TilePos, Group.Background->Resource, TileSize, FLinearColor::White);
					Tile.BlendMode = SE_BLEND_Translucent;
					Tiles.Add(Tile);
				}
			}
		}

		UTexture2D* Tex = Icon.Texture ? Icon.Texture : GlobalAssets->NullIconTexture;
		if (Tex)
		{
			FCanvasTileItem Tile(TilePos, Tex->Resource, TileSize, FLinearColor::White);
			Tile.BlendMode = SE_BLEND_Translucent;
			Tiles.Add(Tile);
		}

		TextureCountsPerGroup[Icon.GroupIndex]++;
	};

	// We are iterating in reverse chronological order because we only want to process the last n records.
	for (auto It = InputHistory.CreateConstReverseIterator(); It && Column < MaxRecords; ++It)
	{
		if (!bIncludeInvalidRecords && !It->bValid)
		{
			break; // No need for further iteration since the rest should be invalid too.
		}

		bool bShow = false; // Whether we should show tiles gathered in current iteration?
		Tiles.Reset();
		TextureCountsPerGroup.Init(0, GroupNum);
		CurrFlagsPerGroup.Init(0, GroupNum);

		uint64 Flags = It->Events | It->TranslatedEvents;
		if (Flags == 0 && EmptyEventIconIndex >= 0)
		{
			AddTile(EmptyEventIconIndex, Flags);
		}
		else if (int32* FoundIconIdx = EventsToIconIndexMap.Find(Flags))
		{
			AddTile(*FoundIconIdx, Flags);
		}
		else
		{
			for (TPair<uint64, int32>& Pair : EventsToIconIndexMap)
			{
				if (HasEventFlags(Flags, Pair.Key))
				{
					AddTile(Pair.Value, Pair.Key);

					Flags &= ~Pair.Key; // remove matching bits
				}
			}

			for (int32 EventIdx = 0; EventIdx < RuntimeEvents.Num() && Flags != 0; EventIdx++)
			{
				if (Flags & 0x1)
				{
					int32 IconIdx = EventToIconIndices[EventIdx];
					if (IconIdx >= 0)
					{
						AddTile(IconIdx, 1LL << EventIdx);
					}
				}

				Flags >>= 1;
			}
		}

		for (int32 Idx = 0; Idx < CurrFlagsPerGroup.Num(); Idx++)
		{
			if (PrevFlagsPerGroup[Idx] != CurrFlagsPerGroup[Idx])
			{
				bShow = true;
				break;
			}
			//else if (!Groups[Idx].bHideSameEvents && CurrFlags[Idx] != 0)
			//{
			//	bShow = true;
			//	break;
			//}
		}
		PrevFlagsPerGroup = CurrFlagsPerGroup;

		if (bShow)
		{
			OutTiles.Append(Tiles);

			if (Tiles.Num() != 0)
			{
				++Column;
			}
		}
	}

	// Calculate actual x positions.
	for (FCanvasTileItem& Tile : OutTiles)
	{
		Tile.Position.X = X + (Column - Tile.Position.X - 1) * TileSpan.X;
	}
}
