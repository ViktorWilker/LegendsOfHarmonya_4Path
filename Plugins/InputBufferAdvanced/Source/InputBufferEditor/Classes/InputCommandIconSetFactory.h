// Copyright Isaac Hsu

#pragma once

#include "Factories/Factory.h"

#include "InputCommandIconSetFactory.generated.h"

UCLASS()
class INPUTBUFFEREDITOR_API UInputCommandIconSetFactory : public UFactory
{
	GENERATED_UCLASS_BODY()

	//~ Begin UFactory Interface
	virtual UObject* FactoryCreateNew(UClass* Class,UObject* InParent,FName Name,EObjectFlags Flags,UObject* Context,FFeedbackContext* Warn) override;
	//~ Begin UFactory Interface	
};
