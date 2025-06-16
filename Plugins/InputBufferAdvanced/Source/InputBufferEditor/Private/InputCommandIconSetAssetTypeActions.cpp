// Copyright Isaac Hsu

#include "InputCommandIconSetAssetTypeActions.h"

#include "InputCommandIconSet.h"

#define LOCTEXT_NAMESPACE "AssetTypeActions"

////////////////////////////////////////////////////////////////////////////////
// FInputCommandAssetTypeActions

FInputCommandIconSetAssetTypeActions::FInputCommandIconSetAssetTypeActions(EAssetTypeCategories::Type InAssetCategory)
	: MyAssetCategory(InAssetCategory)
{
}

FText FInputCommandIconSetAssetTypeActions::GetName() const
{
	return LOCTEXT("FInputCommandIconSetAssetTypeActionsName", "Input Command Icon Set");
}

FColor FInputCommandIconSetAssetTypeActions::GetTypeColor() const
{
	return FColor(196, 196, 115);
}

UClass* FInputCommandIconSetAssetTypeActions::GetSupportedClass() const
{
	return UInputCommandIconSet::StaticClass();
}

uint32 FInputCommandIconSetAssetTypeActions::GetCategories()
{
	return MyAssetCategory;
}

//////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE
