// Copyright Isaac Hsu

#include "Misc/AutomationTest.h"
#include "Tests/AutomationEditorCommon.h"

#include "InputBufferIconSet.h"
#include "InputBufferComponent.h"
#include "InputBufferPlayerController.h"

#if WITH_DEV_AUTOMATION_TESTS

////////////////////////////////////////////////////////////////////////////////
// FInputBufferIconSetTest

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FInputBufferIconSetTest, "Plugins.InputBuffer.InputBufferIconSet", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)

bool FInputBufferIconSetTest::RunTest(const FString& Parameters)
{
	UWorld* World = FAutomationEditorCommonUtils::CreateNewMap();
	World->Tick(LEVELTICK_All, 1.f);

	auto PlayerController = World->SpawnActor<AInputBufferPlayerController>();
	auto InputBuffer = PlayerController->GetInputBuffer();

	// Set up input events
	{
		InputBuffer->EventSetups.Reset();

		int32 Index = InputBuffer->EventSetups.AddDefaulted();
		auto* Setup = &InputBuffer->EventSetups[Index];
		Setup->Name = TEXT("Punch");
		Setup->Type = EBufferedInputEventType::Pressed;
		Setup->Keys.Add(EKeys::LeftMouseButton);

		Index = InputBuffer->EventSetups.AddDefaulted();
		Setup = &InputBuffer->EventSetups[Index];
		Setup->Name = TEXT("Kick");
		Setup->Type = EBufferedInputEventType::Pressed;
		Setup->Keys.Add(EKeys::LeftMouseButton);

		TestEqual(TEXT("The number of registered input events must be the same as input event set-up."), InputBuffer->Initialize(), InputBuffer->EventSetups.Num() + InputBuffer->TranslatedEvents.Num());
	}

	// Add input history
	{
		TArray<FInputHistoryRecord> InRecords;

		int32 Index = InRecords.AddDefaulted();
		InRecords[Index].Events.Add(TEXT("Kick"));
		InRecords[Index].StartTime = 0.8;
		InRecords[Index].EndTime = 0.8;

		Index = InRecords.AddDefaulted();
		InRecords[Index].Events.Add(TEXT("Punch"));
		InRecords[Index].StartTime = 1;
		InRecords[Index].EndTime = 1;

		TestTrue(TEXT("Input record assignment should succeed if input is valid."), InputBuffer->SetHistoryRecords(InRecords));
	}

	// Test without icon set
	{
		TArray<FCanvasTileItem> Tiles;
		InputBuffer->GenerateHistoryTiles(Tiles, 0, 0);
	}

	auto IconSet = NewObject<UInputBufferIconSet>();
	InputBuffer->SetIconSet(IconSet);

	// Test with empty icon set
	{
		TArray<FCanvasTileItem> Tiles;
		InputBuffer->GenerateHistoryTiles(Tiles, 0, 0);
		TestEqual(TEXT("The number of tiles should be zero."), Tiles.Num(), 0);
	}

	// Test before initialization
	{
		IconSet->Icons.AddDefaulted();
		IconSet->Icons[0].Events.Add("Punch");
		IconSet->Icons[0].GroupIndex = 1; // reference a non-existent group 

		IconSet->Icons.AddDefaulted();
		IconSet->Icons[1].Events.Add("Kick");
		IconSet->Icons[1].GroupIndex = -1; // reference a non-existent group 

		TArray<FCanvasTileItem> Tiles;
		InputBuffer->GenerateHistoryTiles(Tiles, 0, 0);
		TestEqual(TEXT("The number of tiles should be zero."), Tiles.Num(), 0);
	}

	// Test after initialization
	{
		InputBuffer->InitializeIconSet();

		TArray<FCanvasTileItem> Tiles;
		InputBuffer->GenerateHistoryTiles(Tiles, 0, 0);
		TestEqual(TEXT("The number of tiles should be one"), Tiles.Num(), 1); 
	}

	// Test access violation
	{
		IconSet->Icons.RemoveAt(1);

		TArray<FCanvasTileItem> Tiles;
		InputBuffer->GenerateHistoryTiles(Tiles, 0, 0);
	}

	return true;
}

#endif //WITH_DEV_AUTOMATION_TESTS
