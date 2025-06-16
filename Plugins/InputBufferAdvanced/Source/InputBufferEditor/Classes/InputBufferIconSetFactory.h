// Copyright Isaac Hsu

#pragma once

#include "Factories/Factory.h"

#include "InputBufferIconSetFactory.generated.h"

UCLASS()
class INPUTBUFFEREDITOR_API UInputBufferIconSetFactory : public UFactory
{
	GENERATED_UCLASS_BODY()

	//~ Begin UFactory Interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	//~ Begin UFactory Interface	
};
