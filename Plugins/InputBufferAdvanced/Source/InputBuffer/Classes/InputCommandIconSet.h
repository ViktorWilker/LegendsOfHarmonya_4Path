// Copyright Isaac Hsu

#pragma once

#include "CanvasItem.h"

#include "BufferedInputEventKit.h"
#include "DrawableTileSetInterface.h"

#include "InputCommandIconSet.generated.h"

USTRUCT(BlueprintType)
struct FBufferedInputEventArray
{
	GENERATED_BODY()

	/* An array of input events. */
	UPROPERTY(EditAnywhere, Category = "Input Command")
	TArray<FName> Events;
};

USTRUCT()
struct FInputCommandIcon
{
	GENERATED_BODY()

	FInputCommandIcon()
		: Texture(nullptr)
		, GroupIndex(0)
	{}

	/* The texture of this icon. */
	UPROPERTY(EditAnywhere, Category = "Input Command")
	class UTexture2D* Texture;

	/* lists of the associate input events of this icon. */
	UPROPERTY(EditAnywhere, Category = "Input Command")
	TArray<FBufferedInputEventArray> Entries;

	/* The index of the icon group that this icon belongs to. */
	UPROPERTY(EditAnywhere, Category = "Input Command", Meta = (ClampMin = 0, UIMin = 0, ArrayClamp = "Groups"))
	int32 GroupIndex;
};

USTRUCT()
struct FInputCommandIconGroup
{
	GENERATED_BODY()

	FInputCommandIconGroup()
		: bShouldOverlap(false)
		, Background(nullptr)
	{}

	/* Whether icons in this group should overlap? */
	UPROPERTY(EditAnywhere, Category = "Input Command")
	bool bShouldOverlap;

	/* Background texture of this group. */
	UPROPERTY(EditAnywhere, Category = "Input Command")
	class UTexture2D* Background;
};

USTRUCT()
struct FBitFlagsWithIndex
{
	GENERATED_BODY()

	FBitFlagsWithIndex() : Index(0) {}
	FBitFlagsWithIndex(int32 InIndex) : Index(InIndex) {}

	UPROPERTY()
	TArray<uint64> Flags;

	UPROPERTY()
	int32 Index;
};

struct FInputCommandTilingResult
{
	int32 Columns;
	int32 Rows;
	bool bEllipsis;

	FInputCommandTilingResult()
		: Columns(0)
		, Rows(0)
		, bEllipsis(false)
	{}

	FInputCommandTilingResult(int32 InColumns, int32 InRows, bool bInEllipsis)
		: Columns(InColumns)
		, Rows(InRows)
		, bEllipsis(bInEllipsis)
	{}
};

/* A set of icons used to draw InputComponent. */
UCLASS(ClassGroup=(Input), AutoExpandCategories = "Display")
class INPUTBUFFER_API UInputCommandIconSet : public UObject, public FBufferedInputEventKit, public IDrawableTileSetInterface
{
	GENERATED_BODY()

public:

	UInputCommandIconSet();

public:

	static const int32 MAX_EVENTS = sizeof(uint64) * 8;

	/* A list of icon set-up information. */
	UPROPERTY(EditAnywhere, Category = "Display")
	TArray<FInputCommandIcon> Icons;

	/* A list of icon group set-up information. */
	UPROPERTY(EditAnywhere, Category = "Display")
	TArray<FInputCommandIconGroup> Groups;	

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

	/* Specifies the maximal columns of tiles that should be drawn when this icon set is used for rendering InputCommand thumbnails. */
	UPROPERTY(EditAnywhere, Category = "Thumbnail", Meta = (ClampMin = 0, UIMin = 0))
	int32 CommandThumbnail_MaxTileColumns;
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

	bool NeedUpdateIconMap() const { return bNeedUpdateIconMap; }

	/* Sets internal icon maps needing to be updated. Call this function if icon set-up has been changed. */
	void SetNeedUpdateIconMap() { bNeedUpdateIconMap = true; }

	/* Rebuilds internal icon maps if needed. */
	void ConditionalUpdateIconMap();

	/* Rebuilds internal data structures according to icon set-up. */
	void UpdateIconMap();

#if WITH_EDITOR
    uint32 GetSerialNumber() const { return SerialNumber; }

	/* Returns the size of tiles. */
	FVector2D GetThumbnailTileSize() const;
#endif

	/**
	* Generates canvas tiles for a given array of InputCommandEntry.
	*
	* @param OutTiles				An output array of tiles.
	* @param Entries				An array of InputCommandEntry to draw.
	* @param X						Screen-space X coordinate of start position.
	* @param Y						Screen-space Y coordinate of start position.
	* @param TileSize				Screen-space size of the tiles (in pixels).
	* @param TileGap				Screen-space size of the gaps between tiles (in pixels).
	* @param MaxColumns				Maximal number of columns of tiles to draw. Zero means all entries.
	*/
	FInputCommandTilingResult GenerateCanvasTiles(TArray<FCanvasTileItem>& OutTiles, const TArray<struct FInputCommandEntry>& Entries, int32 X, int32 Y, const FVector2D& TileSize = FVector2D::ZeroVector, const FVector2D& TileGap = FVector2D::ZeroVector, int32 MaxColumns = 0);

protected:

	UPROPERTY()
	bool bNeedUpdateIconMap;

#if WITH_EDITORONLY_DATA
    /* Every time the icon map is updated, this number increases. */
    UPROPERTY()
    uint32 SerialNumber;
#endif

	/* This is the maximal group index referenced in icons plus one. It may be incorrect if UpdateIconMap is not called after modification. */
	UPROPERTY()
	int32 RefGroupCount;

    /* Stores the icon index of the empty event, if given. */
	UPROPERTY()
	int32 EmptyEventIconIndex;

	UPROPERTY()
	TMap<FName, int32> EventIndexMap;

    /* Stores information for icons with single event. */
	UPROPERTY()
	TArray<int32> EventToIconIndices;

    /* Stores information for icons with multiple events. */
	UPROPERTY()
	TMap<uint64, int32> EventsToIconIndexMap;

    /* Stores information for icons with multiple entries. */
	UPROPERTY()
	TArray<FBitFlagsWithIndex> EntriesToIconIndices;

protected:

	const int32* GetEventIndex(FName Event) const { return EventIndexMap.Find(Event); }
	int32 MakeEventIndex(FName Event);

	bool GetEventFlags(const TArray<FName>& Events, uint64& Flags) const;
	bool MakeEventFlags(const TArray<FName>& Events, uint64& Flags);
};
