// Copyright Isaac Hsu

#include "InputCommandIconSet.h"

#include "Engine/Texture2D.h"

#include "ArrayKit.h"
#include "InputBufferGlobalAssets.h"

////////////////////////////////////////////////////////////////////////////////
// UInputCommandIconSet

UInputCommandIconSet::UInputCommandIconSet()
#if WITH_EDITORONLY_DATA
    : ThumbnailPadding(FMargin(2.f, 2.f, 2.f, 14.f))
    , SerialNumber(1)
#endif
{
    EmptyEventIconIndex = INDEX_NONE;
}

void UInputCommandIconSet::GetTileTextures(TArray<TArray<class UTexture*>>& OutTextures, FVector2D& OutTileSize, FVector2D& OutTileGap, FMargin& OutFramePadding, class UTexture2D*& OutBackground) const
{
#if WITH_EDITOR
	int32 TileNumber = (ThumbnailMaxTiles > 0) ? FMath::Min(Icons.Num(), ThumbnailMaxTiles) : Icons.Num();

	OutTextures.Reset(TileNumber);
	OutTextures.AddDefaulted(TileNumber);

	UInputBufferGlobalAssets* GlobalAssets = UInputBufferGlobalAssets::StaticClass()->GetDefaultObject<UInputBufferGlobalAssets>();

	for (int32 Idx = 0; Idx < TileNumber; Idx++)
	{
		auto& Icon = Icons[Idx];
		if (Groups.IsValidIndex(Icon.GroupIndex))
		{
			if (auto Background = Groups[Icon.GroupIndex].Background)
			{
				OutTextures[Idx].Add(Background);
			}
		}

		UTexture2D* Tex = Icon.Texture ? Icon.Texture : GlobalAssets->NullIconTexture;
		if (Tex)
		{
			OutTextures[Idx].Add(Tex);
		}
	}

	OutTileSize = GetThumbnailTileSize();
	OutTileGap = ThumbnailTileGap;
	OutFramePadding = ThumbnailPadding;
	OutBackground = ThumbnailBackground;
#endif
}

void UInputCommandIconSet::GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const
{
	Super::GetAssetRegistryTags(OutTags);

	OutTags.Add(FAssetRegistryTag("Icons", FString::FromInt(Icons.Num()), FAssetRegistryTag::TT_Numerical));
	OutTags.Add(FAssetRegistryTag("Groups", FString::FromInt(Groups.Num()), FAssetRegistryTag::TT_Numerical));
	OutTags.Add(FAssetRegistryTag("RefGroupCount", FString::FromInt(RefGroupCount), FAssetRegistryTag::TT_Numerical));
}
#if WITH_EDITOR
void UInputCommandIconSet::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	bNeedUpdateIconMap = true;
}

FVector2D UInputCommandIconSet::GetThumbnailTileSize() const
{
    if (ThumbnailTileSize.X <= 0 || ThumbnailTileSize.Y <= 0)
    {
        for (const auto& Icon : Icons)
        {
            if (Icon.Texture)
            {
                return FVector2D(Icon.Texture->GetSizeX(), Icon.Texture->GetSizeY());
            }
        }

        for (const auto& Group : Groups)
        {
            if (Group.Background)
            {
                return FVector2D(Group.Background->GetSizeX(), Group.Background->GetSizeY());
            }
        }
    }

    return ThumbnailTileSize;
}
#endif
void UInputCommandIconSet::ConditionalUpdateIconMap()
{
	if (bNeedUpdateIconMap)
	{
		bNeedUpdateIconMap = false;
#if WITH_EDITOR
        SerialNumber++;
#endif
		UpdateIconMap();
	}
}

void UInputCommandIconSet::UpdateIconMap()
{
	EmptyEventIconIndex = INDEX_NONE;
	EventIndexMap.Reset();
	EventToIconIndices.Reset(Icons.Num());
	EventsToIconIndexMap.Reset();
	EntriesToIconIndices.Reset(Icons.Num());

	for (int32 IconIdx = 0; IconIdx < Icons.Num(); IconIdx++)
	{
		auto& Icon = Icons[IconIdx];
		if (RefGroupCount <= Icon.GroupIndex)
		{
			RefGroupCount = Icon.GroupIndex + 1;
		}

		auto& Entries = Icon.Entries;
		if (Entries.Num() == 1)
		{
			auto& Events = Entries[0].Events;
			if (Events.Num() == 1)
			{
				int32 Index = MakeEventIndex(Events[0]);
				if (Index != INDEX_NONE)
				{
                    if (EventToIconIndices.IsValidIndex(Index) && EventToIconIndices[Index] >= 0)
                    {
                        UE_LOG(InputBufferLog, Warning, TEXT("%s: Cannot register icon (%d). Input event (%s) has been registered by icon (%d)."), *GetName(), IconIdx, *(Events[0].ToString()), EventToIconIndices[Index]);
                    }
                    else
                    {
                        ArraySetItem<int32>(EventToIconIndices, Index, IconIdx, INDEX_NONE);
                    }
				}
			}
			else if (Events.Num() == 0)
			{
                if (EmptyEventIconIndex >= 0)
                {
                    UE_LOG(InputBufferLog, Warning, TEXT("%s: Cannot register icon (%d). Empty input event has been registered by icon (%d)."), *GetName(), IconIdx, EmptyEventIconIndex);
                }
                else
                {
                    EmptyEventIconIndex = IconIdx;
                }
			}
			else
			{
				uint64 Flags = 0;
				if (MakeEventFlags(Events, Flags))
				{
                    int32* OldIdx = EventsToIconIndexMap.Find(Flags);
                    if (OldIdx)
                    {
                        UE_LOG(InputBufferLog, Warning, TEXT("%s: Cannot register icon (%d). Input events have been registered by icon (%d)."), *GetName(), IconIdx, *OldIdx);
                    }
                    else
                    {
                        EventsToIconIndexMap.Add(Flags, IconIdx);
                    }
				}
			}
		}
		else if (Entries.Num() > 1)
		{
			FBitFlagsWithIndex Item(IconIdx);

			int32 EntryIdx = 0;
			for (; EntryIdx < Entries.Num(); EntryIdx++)
			{
				uint64 Flags = 0;
				if (MakeEventFlags(Entries[EntryIdx].Events, Flags))
				{
					Item.Flags.Add(Flags);
				}
				else
				{
					break;
				}
			}

			if (EntryIdx == Entries.Num())
			{
                bool bAdd = true;
                for (auto Element : EntriesToIconIndices)
                {
                    if (Element.Flags == Item.Flags)
                    {
                        UE_LOG(InputBufferLog, Warning, TEXT("%s: Cannot register icon (%d). Input entries have been registered by icon (%d)."), *GetName(), IconIdx, Element.Index);
                        bAdd = false;
                        break;
                    }
                }
                
                if (bAdd)
                {
                    EntriesToIconIndices.Add(Item);
                }
			}
		}
	}
}

int32 UInputCommandIconSet::MakeEventIndex(FName Event)
{
	int32 Index;
	if (Event.IsNone())
	{
		Index = INDEX_NONE;
	}
	else
	{
		int32* FoundIndex = EventIndexMap.Find(Event);
		if (FoundIndex == nullptr)
		{
			Index = EventIndexMap.Num();
			if (Index < MAX_EVENTS)
			{
				EventIndexMap.Add(Event, Index);
			}
			else
			{
				Index = INDEX_NONE;
			}
		}
		else
		{
			Index = *FoundIndex;
		}
	}

	return Index;
}

bool UInputCommandIconSet::MakeEventFlags(const TArray<FName>& Events, uint64& Flags)
{
	for (FName Event : Events)
	{
		int32 Index = MakeEventIndex(Event);
		if (Index == INDEX_NONE)
		{
			return false;
		}

		Flags |= 1LL << Index;
	}

	return true;
}

bool UInputCommandIconSet::GetEventFlags(const TArray<FName>& Events, uint64& Flags) const
{
	bool bSucceeded = true;
	for (FName Event : Events)
	{
		const int32* Index = GetEventIndex(Event);
		if (Index)
		{
			Flags |= 1LL << *Index;
		}
		else
		{
			bSucceeded = false; // Any unknown event means a failure.
		}
	}

	return bSucceeded;
}

FInputCommandTilingResult UInputCommandIconSet::GenerateCanvasTiles(TArray<FCanvasTileItem>& OutTiles, const TArray<FInputCommandEntry>& InEntries, int32 X, int32 Y, const FVector2D& TileSize, const FVector2D& TileGap, int32 MaxColumns)
{
	UInputBufferGlobalAssets* GlobalAssets = UInputBufferGlobalAssets::StaticClass()->GetDefaultObject<UInputBufferGlobalAssets>();
	UTexture2D* NullIconTex = GlobalAssets->NullIconTexture;
	UTexture2D* UnknownEventTex = GlobalAssets->UnknownEventTexture;
    UTexture2D* EmptyEventTex = GlobalAssets->EmptyEventTexture;

	ConditionalUpdateIconMap();

	OutTiles.Reset();

	int MaxRows = 0;
	if (MaxColumns == 0 || MaxColumns > InEntries.Num())
	{
		MaxColumns = InEntries.Num();
	}

	int32 GroupCountDelta = RefGroupCount - Groups.Num();
	if (GroupCountDelta > 0)
	{
		Groups.AddDefaulted(GroupCountDelta);
	}

	TArray<uint64> EventFlags;
	EventFlags.AddDefaulted(InEntries.Num());
	for (int32 EntryIdx = 0; EntryIdx < InEntries.Num(); EntryIdx++)
	{
		GetEventFlags(InEntries[EntryIdx].EventsToMatch, EventFlags[EntryIdx]);
	}

	TArray<TArray<UTexture2D*>> Textures;
	Textures.AddDefaulted(Groups.Num());

	auto MyIcons = this->Icons;
	auto AddIconTexture = [&Textures, &MyIcons, NullIconTex](int32 IconIdx)
	{
		if (MyIcons.IsValidIndex(IconIdx))
		{
			const auto& Icon = MyIcons[IconIdx];
			UTexture2D* Tex = Icon.Texture ? Icon.Texture : NullIconTex;
			if (Textures.IsValidIndex(Icon.GroupIndex) && Tex)
			{
				Textures[Icon.GroupIndex].Add(Tex);
			}
		}
	};

    const FVector2D TileSpan = TileSize + TileGap;

	int32 Column = 0;
	int32 EntryIdx = 0;
	for (; EntryIdx < InEntries.Num() && Column < MaxColumns; EntryIdx++, Column++)
	{
		for (auto& Array : Textures)
		{
			Array.Reset();
		}

		const TArray<FName>& Events = InEntries[EntryIdx].EventsToMatch;
		if (Events.Num() == 0)
		{
            // If there is an icon for empty events, we should use it.
			if (EmptyEventIconIndex >= 0)
			{
				AddIconTexture(EmptyEventIconIndex);
			}
		}
		else
		{
			uint64 Flags = EventFlags[EntryIdx];
			if (Flags != 0)
			{
				bool bMatched = false; // Whether we have found a matching icon.
				for (const auto& Item : EntriesToIconIndices)
				{
					check(Item.Flags.Num() > 0);
					if (EntryIdx + Item.Flags.Num() - 1 < InEntries.Num())
					{
						int32 FlagIdx = 0;
						for (; FlagIdx < Item.Flags.Num(); FlagIdx++)
						{
							if (EventFlags[EntryIdx + FlagIdx] != Item.Flags[FlagIdx])
							{
								break;
							}
						}

						if (FlagIdx == Item.Flags.Num())
						{
							AddIconTexture(Item.Index);

							EntryIdx += Item.Flags.Num() - 1; // We always add one to the index in the for statement so we have subtract one here in advance.
							bMatched = true;
							break;
						}
					}
				}

				if (!bMatched)
				{
					const int32* FoundIconIdx = EventsToIconIndexMap.Find(Flags);
					if (FoundIconIdx)
					{
						AddIconTexture(*FoundIconIdx);
					}
					else
					{
						for (const auto& Pair : EventsToIconIndexMap)
						{
							if (HasEventFlags(Flags, Pair.Key))
							{
								AddIconTexture(Pair.Value);

								Flags &= ~Pair.Key; // Remove matching bits
							}
						}

						for (int32 EventIdx = 0; EventIdx < EventToIconIndices.Num() && Flags != 0; EventIdx++)
						{
							if (Flags & 0x1)
							{
								int32 IconIdx = EventToIconIndices[EventIdx];
								if (IconIdx >= 0)
								{
									AddIconTexture(IconIdx);
								}
							}

							Flags >>= 1;
						}
					}
				}
			}
		}

		int RowCount = 0;
		for (int32 GroupIdx = 0; GroupIdx < Textures.Num(); GroupIdx++)
		{
			auto& Group = Groups[GroupIdx];
			const auto& Cell = Textures[GroupIdx];
			if (Cell.Num() > 0)
			{
				for (int32 TexIdx = 0; TexIdx < Cell.Num(); TexIdx++)
				{
					UTexture2D* Tex = Cell[TexIdx];
					check(Tex);
					FVector2D Pos(X + Column*TileSpan.X, Y + RowCount*TileSpan.Y);
					FCanvasTileItem Tile(Pos, TileSize, FLinearColor::White);
					Tile.BlendMode = SE_BLEND_Translucent;

					if (Group.Background && (!Group.bShouldOverlap || TexIdx == 0))
					{
						Tile.Texture = Group.Background->Resource;
						OutTiles.Add(Tile);
					}

					Tile.Texture = Tex->Resource;
					OutTiles.Add(Tile);

					if (!Group.bShouldOverlap)
					{
						RowCount++;
					}
				}

				if (Group.bShouldOverlap)
				{
					RowCount++;
				}
			}
		}

        // If no tile is added, try to add an empty/unknown event icon.
		if (RowCount == 0)
		{
            UTexture2D* Tex = (Events.Num() == 0) ? EmptyEventTex : UnknownEventTex;
            if (Tex)
            {
                FVector2D Pos(X + Column*TileSpan.X, Y);
                FCanvasTileItem Tile(Pos, Tex->Resource, TileSize, FLinearColor::White);
                Tile.BlendMode = SE_BLEND_Translucent;
                OutTiles.Add(Tile);

                RowCount++;
            }
		}

		if (MaxRows < RowCount)
		{
			MaxRows = RowCount;
		}
	}

	return FInputCommandTilingResult(Column, MaxRows, EntryIdx < InEntries.Num());
}


