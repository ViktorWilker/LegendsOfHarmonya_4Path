// Copyright Isaac Hsu

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include "InputHistoryRecordArray.h"

#include "InputBufferFunctionLibrary.generated.h"

UCLASS()
class UInputBufferFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/** 
	* Offsets the time of all InputHistoryRecord in a given array by given amount of time. 
	*
	* Caution: InRecords and OutRecords must not be the same array.
	**/
	UFUNCTION(BlueprintCallable, Category = "Input Buffer")
	static void PostponeInputHistoryRecords(const TArray<FInputHistoryRecord>& InRecords, float Delay, TArray<FInputHistoryRecord>& OutRecords);
};
