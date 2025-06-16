// Copyright Isaac Hsu

#include "InputBufferIconSetAssetTypeActions.h"

#include "InputBufferIconSet.h"

#define LOCTEXT_NAMESPACE "AssetTypeActions"

////////////////////////////////////////////////////////////////////////////////
// FInputBufferAssetTypeActions

FInputBufferIconSetAssetTypeActions::FInputBufferIconSetAssetTypeActions(EAssetTypeCategories::Type InAssetCategory)
	: MyAssetCategory(InAssetCategory)
{
}

FText FInputBufferIconSetAssetTypeActions::GetName() const
{
	return LOCTEXT("FInputBufferIconSetAssetTypeActionsName", "Input Buffer Icon Set");
}

FColor FInputBufferIconSetAssetTypeActions::GetTypeColor() const
{
	return FColor(129, 196, 115);
}

UClass* FInputBufferIconSetAssetTypeActions::GetSupportedClass() const
{
	return UInputBufferIconSet::StaticClass();
}

uint32 FInputBufferIconSetAssetTypeActions::GetCategories()
{
	return MyAssetCategory;
}

//////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE
