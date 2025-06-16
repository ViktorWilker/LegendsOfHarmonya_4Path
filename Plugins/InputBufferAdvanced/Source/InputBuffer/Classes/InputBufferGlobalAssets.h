// Copyright Isaac Hsu

#pragma once

#include "InputBufferGlobalAssets.generated.h"

/* Used to store global assets for the module of InputBuffer. */
UCLASS()
class UInputBufferGlobalAssets : public UObject
{
	GENERATED_BODY()

	UInputBufferGlobalAssets();

public:

	UPROPERTY()
	class UTexture2D* NullIconTexture;

	UPROPERTY()
	class UTexture2D* UnknownEventTexture;

    UPROPERTY()
    class UTexture2D* EmptyEventTexture;
};
