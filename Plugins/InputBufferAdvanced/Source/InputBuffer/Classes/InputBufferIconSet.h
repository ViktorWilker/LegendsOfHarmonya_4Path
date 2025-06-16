// Copyright Isaac Hsu

#pragma once

#include "DrawableTileSetInterface.h"

#include "InputBufferIconSet.generated.h"

USTRUCT()
struct FInputBufferIcon
{
	GENERATED_BODY()

	FInputBufferIcon()
		: Texture(nullptr)
		, GroupIndex(0)
	{}

	/* The texture of this icon. */
	UPROPERTY(EditAnywhere, Category = "Input Buffer")
	class UTexture2D* Texture;

	/* The associate input events of this icon. */
	UPROPERTY(EditAnywhere, Category = "Input Buffer")
	TArray<FName> Events;

	/* The index of the icon group that this icon belongs to. */
	UPROPERTY(EditAnywhere, Category = "Input Buffer", Meta = (ClampMin = 0, UIMin = 0, ArrayClamp = "Groups"))
	int32 GroupIndex;
};

USTRUCT()
struct FInputBufferIconGroup
{
	GENERATED_BODY()

	FInputBufferIconGroup()
		: bShouldOverlap(false)
		//, bHideSameEvents(true)
		, MaxRows(1)
		, Background(nullptr)
	{}

	/* Whether icons in this group should overlap? */
	UPROPERTY(EditAnywhere, Category = "Input Buffer")
	bool bShouldOverlap;

	//UPROPERTY(EditAnywhere, Category = "Input Buffer")
	//bool bHideSameEvents;

	/* The number of rows of this group. */
	UPROPERTY(EditAnywhere, Category = "Input Buffer", Meta = (ClampMin = 0, UIMin = 0))
	int32 MaxRows;

	/* Background texture of this group. */
	UPROPERTY(EditAnywhere, Category = "Input Buffer")
	class UTexture2D* Background;
};

/* A set of icons used to draw input history of InputBufferComponent. */
UCLASS(ClassGroup=(Input))
class INPUTBUFFER_API UInputBufferIconSet : public UObject, public IDrawableTileSetInterface
{
	GENERATED_BODY()

	friend class UInputBufferComponent;

public:

	UInputBufferIconSet();

public:

	/* A list of icon set-up information. */
	UPROPERTY(EditAnywhere, Category = "Display")
	TArray<FInputBufferIcon> Icons;

	/* A list of icon group set-up information. */
	UPROPERTY(EditAnywhere, Category = "Display")
	TArray<FInputBufferIconGroup> Groups;

#if WITH_EDITORONLY_DATA
    /* Specifies the size of tiles when drawing the thumbnail. If zero, the sizes of icon textures will be used instead. */
    UPROPERTY(EditAnywhere, Category = "Thumbnail", Meta = (ClampMin = 0, UIMin = 0))
    FVector2D ThumbnailTileSize;

	/* Specifies the gap between tiles when drawing the thumbnail. */
	UPROPERTY(EditAnywhere, Category = "Thumbnail", Meta = (ClampMin = 0, UIMin = 0))
	FVector2D ThumbnailTileGap;

	/* Specifies the padding of the thumbnail. */
	UPROPERTY(EditAnywhere, Category = "Thumbnail", Meta = (ClampMin = 0, UIMin = 0))
	FMargin ThumbnailPadding;

	/* Specifies the maximal number of tiles that should be drawn on the thumbnail. */
	UPROPERTY(EditAnywhere, Category = "Thumbnail", Meta = (ClampMin = 0, UIMin = 0))
	int32 ThumbnailMaxTiles;

	/* Specifies the background texture of the thumbnail. */
	UPROPERTY(EditAnywhere, Category = "Thumbnail")
	class UTexture2D* ThumbnailBackground;
#endif

public:

	//~ Begin UObject interface
#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	//~ End UObject interface

	//~ Begin IDrawableTileSetInterface interface
	virtual void GetTileTextures(TArray<TArray<class UTexture*>>& OutTextures, FVector2D& OutTileSize, FVector2D& OutTileGap, FMargin& OutFramePadding, class UTexture2D*& OutBackground) const override;
	//~ End IDrawableTileSetInterface interface

	/* Returns the number of groups based on group indices referenced in the icon set-up. */
	FORCEINLINE int32 GetRefGroupCount() const { return RefGroupCount; }

	/* Updates the value of RefGroupCount. */
	void UpdateRefGroupCount();

#if WITH_EDITOR
	/* Returns the size of tiles. */
	FVector2D GetThumbnailTileSize() const;
#endif

protected:

	/* This is the maximal group index referenced in icons plus one. It may be incorrect if UpdateRefGroupCount is not called after modification. */
	UPROPERTY()
	int32 RefGroupCount;
};
