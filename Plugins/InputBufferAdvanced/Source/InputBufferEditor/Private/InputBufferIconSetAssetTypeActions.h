// Copyright Isaac Hsu

#pragma once

#include "AssetTypeActions_Base.h"

class FInputBufferIconSetAssetTypeActions : public FAssetTypeActions_Base
{
public:
	FInputBufferIconSetAssetTypeActions(EAssetTypeCategories::Type InAssetCategory);

	// IAssetTypeActions interface
	virtual FText GetName() const override;
	virtual FColor GetTypeColor() const override;
	virtual UClass* GetSupportedClass() const override;
	virtual uint32 GetCategories() override;
	// End of IAssetTypeActions interface

private:
	EAssetTypeCategories::Type MyAssetCategory;
};
