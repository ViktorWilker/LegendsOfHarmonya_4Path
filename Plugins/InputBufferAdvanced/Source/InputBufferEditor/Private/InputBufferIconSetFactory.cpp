// Copyright Isaac Hsu

#include "InputBufferIconSetFactory.h"

#include "InputBufferIconSet.h"

////////////////////////////////////////////////////////////////////////////////
// UInputBufferIconSetFactory

UInputBufferIconSetFactory::UInputBufferIconSetFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UInputBufferIconSet::StaticClass();
}

UObject* UInputBufferIconSetFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	UInputBufferIconSet* NewAsset = NewObject<UInputBufferIconSet>(InParent, Class, Name, Flags);
	NewAsset->Groups.AddDefaulted();
	return NewAsset;
}

