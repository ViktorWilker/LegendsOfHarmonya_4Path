// Copyright Isaac Hsu

#include "InputBufferIconSet.h"

#include "InputBufferGlobalAssets.h"

////////////////////////////////////////////////////////////////////////////////
// UInputBufferIconSet

UInputBufferIconSet::UInputBufferIconSet()
#if WITH_EDITORONLY_DATA
	: ThumbnailPadding(FMargin(2.f, 2.f, 2.f, 14.f))
#endif
{
}

void UInputBufferIconSet::GetTileTextures(TArray<TArray<class UTexture*>>& OutTextures, FVector2D& OutTileSize, FVector2D& OutTileGap, FMargin& OutFramePadding, class UTexture2D*& OutBackground) const
{
#if WITH_EDITOR
	int32 TileNumber = (ThumbnailMaxTiles > 0) ? FMath::Min(Icons.Num(), ThumbnailMaxTiles) : Icons.Num();

	OutTextures.Reset(TileNumber);
	OutTextures.AddDefaulted(TileNumber);

	UInputBufferGlobalAssets* GlobalAssets = UInputBufferGlobalAssets::StaticClass()->GetDefaultObject<UInputBufferGlobalAssets>();

	for (int32 Idx = 0; Idx < TileNumber; Idx++)
	{
		auto& Icon = Icons[Idx];
		if (Groups.IsValidIndex(Icon.GroupIndex))
		{
			if (auto Background = Groups[Icon.GroupIndex].Background)
			{
				OutTextures[Idx].Add(Background);
			}
		}

		UTexture2D* Tex = Icon.Texture ? Icon.Texture : GlobalAssets->NullIconTexture;
		if (Tex)
		{
			OutTextures[Idx].Add(Tex);
		}
	}

	OutTileSize = GetThumbnailTileSize();
	OutTileGap = ThumbnailTileGap;
	OutFramePadding = ThumbnailPadding;
	OutBackground = ThumbnailBackground;
#endif
}

void UInputBufferIconSet::GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const
{
    Super::GetAssetRegistryTags(OutTags);

    OutTags.Add(FAssetRegistryTag("Icons", FString::FromInt(Icons.Num()), FAssetRegistryTag::TT_Numerical));
    OutTags.Add(FAssetRegistryTag("Groups", FString::FromInt(Groups.Num()), FAssetRegistryTag::TT_Numerical));
    OutTags.Add(FAssetRegistryTag("RefGroupCount", FString::FromInt(RefGroupCount), FAssetRegistryTag::TT_Numerical));
}
#if WITH_EDITOR
void UInputBufferIconSet::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	FName PropertyName = (PropertyChangedEvent.Property != NULL) ? PropertyChangedEvent.Property->GetFName() : NAME_None;
	if (PropertyName == TEXT("GroupIndex"))
	{
		UpdateRefGroupCount();
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}

FVector2D UInputBufferIconSet::GetThumbnailTileSize() const
{
    if (ThumbnailTileSize.X <= 0 || ThumbnailTileSize.Y <= 0)
    {
        for (const auto& Icon : Icons)
        {
            if (Icon.Texture)
            {
                return FVector2D(Icon.Texture->GetSizeX(), Icon.Texture->GetSizeY());
            }
        }

        for (const auto& Group : Groups)
        {
            if (Group.Background)
            {
                return FVector2D(Group.Background->GetSizeX(), Group.Background->GetSizeY());
            }
        }
    }

    return ThumbnailTileSize;
}
#endif
void UInputBufferIconSet::UpdateRefGroupCount()
{
	RefGroupCount = 0;

	for (const auto& Icon : Icons)
	{
		if (RefGroupCount <= Icon.GroupIndex)
		{
			RefGroupCount = Icon.GroupIndex + 1;
		}
	}
}
