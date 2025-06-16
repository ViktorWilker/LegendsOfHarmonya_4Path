// Copyright Isaac Hsu

#include "InputCommandIconSetFactory.h"

#include "InputCommandIconSet.h"

////////////////////////////////////////////////////////////////////////////////
// UInputCommandIconSetFactory

UInputCommandIconSetFactory::UInputCommandIconSetFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UInputCommandIconSet::StaticClass();
}

UObject* UInputCommandIconSetFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	UInputCommandIconSet* NewAsset = NewObject<UInputCommandIconSet>(InParent, Class, Name, Flags);
	NewAsset->Groups.AddDefaulted();
	return NewAsset;
}

