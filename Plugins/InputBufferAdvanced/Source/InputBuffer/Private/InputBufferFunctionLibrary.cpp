// Copyright Isaac Hsu

#include "InputBufferFunctionLibrary.h"

////////////////////////////////////////////////////////////////////////////////
// UInputBufferFunctionLibrary

void UInputBufferFunctionLibrary::PostponeInputHistoryRecords(const TArray<struct FInputHistoryRecord>& InRecords, float Delay, TArray<struct FInputHistoryRecord>& OutRecords)
{
	OutRecords.Reset(InRecords.Num());

	for (FInputHistoryRecord Record : InRecords)
	{
		Record.StartTime += Delay;
		Record.EndTime += Delay;

		OutRecords.Add(Record);
	}
}
