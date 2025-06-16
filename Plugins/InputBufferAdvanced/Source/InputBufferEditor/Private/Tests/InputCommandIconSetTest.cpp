// Copyright Isaac Hsu

#include "Misc/AutomationTest.h"
#include "Tests/AutomationEditorCommon.h"

#include "InputCommand.h"
#include "InputCommandIconSet.h"

#if WITH_DEV_AUTOMATION_TESTS

////////////////////////////////////////////////////////////////////////////////
// FInputCommandIconSetTest

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FInputCommandIconSetTest, "Plugins.InputBuffer.InputCommandIconSet", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)

bool FInputCommandIconSetTest::RunTest(const FString& Parameters)
{
	auto IconSet = NewObject<UInputCommandIconSet>();

	// Set up icon set
	{
		IconSet->Icons.AddDefaulted();
		IconSet->Icons[0].Entries.AddDefaulted();
		IconSet->Icons[0].Entries[0].Events.Add("Punch");
		IconSet->Icons[0].GroupIndex = 1; // reference a non-existent group 

		IconSet->Icons.AddDefaulted();
		IconSet->Icons[1].Entries.AddDefaulted();
		IconSet->Icons[1].Entries[0].Events.Add("Kick");
		IconSet->Icons[1].GroupIndex = -1; // reference a non-existent group 
	}

	{
		TArray<FInputCommandEntry> Entries;
		Entries.AddDefaulted();
		Entries.AddDefaulted();
		Entries[1].EventsToMatch.Add("Punch");

		// Test without initialzation
		{
			TArray<FCanvasTileItem> Tiles;
			auto Result = IconSet->GenerateCanvasTiles(Tiles, Entries, 0, 0);
			TestEqual(TEXT("The number of columns should be the same as entries."), Result.Columns, Entries.Num());
		}

		// Test with initialzation
		{
			IconSet->SetNeedUpdateIconMap();

			TArray<FCanvasTileItem> Tiles;
			auto Result = IconSet->GenerateCanvasTiles(Tiles, Entries, 0, 0);
			TestEqual(TEXT("The number of columns should be the same as entries."), Result.Columns, Entries.Num());
		}
	}

	// Test access violation
	{
		IconSet->Icons.RemoveAt(1);

		TArray<FInputCommandEntry> Entries;
		Entries.AddDefaulted();
		Entries.AddDefaulted();
		Entries[1].EventsToMatch.Add("Punch");
		Entries.AddDefaulted();
		Entries[2].EventsToMatch.Add("Kick");

		TArray<FCanvasTileItem> Tiles;
		auto Result = IconSet->GenerateCanvasTiles(Tiles, Entries, 0, 0);
		TestEqual(TEXT("The number of columns should be the same as entries."), Result.Columns, Entries.Num());
	}

	return true;
}

#endif //WITH_DEV_AUTOMATION_TESTS
