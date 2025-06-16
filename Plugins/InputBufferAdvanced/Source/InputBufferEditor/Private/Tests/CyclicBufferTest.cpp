// Copyright Isaac Hsu

#include "Misc/AutomationTest.h"
#include "Tests/AutomationEditorCommon.h"

#include "CyclicBuffer.h"

#if WITH_DEV_AUTOMATION_TESTS

////////////////////////////////////////////////////////////////////////////////
// FCyclicBufferTest

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FCyclicBufferTest, "Plugins.InputBuffer.CyclicBuffer", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)

bool FCyclicBufferTest::RunTest(const FString& Parameters)
{
	TCyclicBuffer<int32> IntBuffer;

	TestTrue(TEXT("An empty buffer must be full."), IntBuffer.IsFull());
	TestNull(TEXT("An empty buffer must have no first element."), IntBuffer.First());
	TestNull(TEXT("An empty buffer must have no last element."), IntBuffer.Last());

	int IntArray[] = { 1,2,3,4,5 };
	for (int Int : IntArray)
	{
		TestEqual(TEXT("Cannot push into an empty buffer."), IntBuffer.Push(Int), INDEX_NONE);
	}

	for (int Int : IntArray)
	{
		TestTrue(TEXT("Adding items must always succeed."), IntBuffer.Add(Int) >= 0);
	}

	return true;
}

#endif //WITH_DEV_AUTOMATION_TESTS
