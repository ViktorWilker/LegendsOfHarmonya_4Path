// Copyright Isaac Hsu

#pragma once

#include "CanvasItem.h"

#include "InputCommandIconSet.h"

#include "InputCommand.generated.h"

USTRUCT(BlueprintType)
struct FInputCommandEntry
{
	GENERATED_BODY()

	FInputCommandEntry()
        : bIgnoreOthers(false)
		, MinDuration(0.f)
		, MaxDuration(0.f)
		, MinInterval(0.f)
		, MaxInterval(0.f)		
	{}

	/* Input events to match. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input Command")
	TArray<FName> EventsToMatch;

	/* Input events to ignore. Unused if bIgnoreOthers is true. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input Command")
	TArray<FName> EventsToIgnore;

	/* If true, ignore the presence of the other input events except EventsToMatch. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input Command")
	bool bIgnoreOthers;

	/* Minimal duration for input to be considered as valid. Should be used for input events of held type. Unused if zero. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input Command", Meta = (ClampMin = 0, UIMin = 0))
	float MinDuration;

	/* Maximal duration for input to be considered as valid. Should be used for input events of held type. Unused if zero. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input Command", Meta = (ClampMin = 0, UIMin = 0))
	float MaxDuration;

	/* Minimal time limit between input for this entry and the next one to be considered as valid. Unused if zero. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input Command", Meta = (ClampMin = 0, UIMin = 0))
	float MinInterval;

	/* Maximal time limit between input for this entry and the next one to be considered as valid. Unused if zero. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input Command", Meta = (ClampMin = 0, UIMin = 0))
	float MaxInterval;

	FORCEINLINE bool CheckDuration(float Duration) const
	{
		if (MaxDuration != 0.f && Duration > MaxDuration)
		{
			return false;
		}
		if (MinDuration != 0.f && Duration < MinDuration)
		{
			return false;
		}

		return true;
	}

	FORCEINLINE bool CheckInterval(float Interval) const
	{
		if (MinInterval != 0.f && Interval < MinInterval)
		{
			return false;
		}
		if (MaxInterval != 0.f && Interval > MaxInterval)
		{
			return false;
		}

		return true;
	}
};

USTRUCT(BlueprintType)
struct FInputCommandSequence
{
	GENERATED_BODY()

	FInputCommandSequence() : bEnabled(true) {}

	/** Whether this sequence is enabled. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input Command")
	bool bEnabled;

	/* A list of input snapshots to match. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input Command")
	TArray<FInputCommandEntry> Entries;
};

/**
* Represents an input command commonly found in fighting games, such as Quarter-Circle-Forward Punch.
* Can be used with UInputBufferComponent to detect combinations of buttons.
**/
UCLASS(BlueprintType, Blueprintable, ClassGroup=(Input))
class INPUTBUFFER_API UInputCommand : public UObject
{
	GENERATED_BODY()

public:

	/* Time limit of valid input. Unused if zero. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input Command", AssetRegistrySearchable, Meta = (ClampMin = 0, UIMin = 0))
	float TimeLimit;

	/* Input events to ignore. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input Command")
	TArray<FName> EventsToIgnore;

	/* Each sequence contains a series of input snapshots to match. A command is considered matched if any of its sequences matches. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input Command")
	TArray<FInputCommandSequence> Sequences;

#if WITH_EDITORONLY_DATA
	/* If specified, use this texture for the thumbnail. */
	UPROPERTY(EditAnywhere, Category = "Thumbnail")
	class UTexture2D* Thumbnail;

	/* Stores cached tiles for the thumbnail. */
	TArray<FCanvasTileItem> ThumbnailTiles;

	/* Thumbnail tile row and column counts */
	FInputCommandTilingResult ThumbnailTilingResult;
#endif

	/* If specified, use this icon set for thumbnail rendering. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Display", AssetRegistrySearchable)
	class UInputCommandIconSet* IconSet;

public:

	//~ Begin UObject interface
#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	//~ End UObject interface

	/* Returns the index of the first sequence having at least one entry. */
	int32 FindFirstNonEmptySequence() const;

	/**
	* Draw a specified command sequence.
	*
	* @param Canvas					The Canvas to draw on.
	* @param SequenceIndex			The index of sequence in the InputCommand to draw.
	* @param X						Screen-space X coordinate of start position.
	* @param Y						Screen-space Y coordinate of start position.
	* @param TileSize				Screen-space size of the tiles (in pixels).
	* @param TileGap				Screen-space size of the gaps between tiles (in pixels).
	* @param MaxColumns				Maximal number of columns of tiles to draw. Zero means all entries.
	*
	* Caution: an icon set should be set before calling this function or nothing will be drawn.
	*/
	UFUNCTION(BlueprintCallable, Category = "Input Command", Meta = (AutoCreateRefTerm = "TileSize,TileGap"))
	void DrawSequence(class UCanvas* Canvas, int32 SequenceIndex, int32 X, int32 Y, const FVector2D& TileSize = FVector2D::ZeroVector, const FVector2D& TileGap = FVector2D::ZeroVector, int32 MaxColumns = 0);

	/**
	* Generates canvas tiles for a specified command sequence.
	*
	* @param OutTiles				An output array of tiles.
	* @param SequenceIndex			The index of sequence in the InputCommand to draw.
	* @param X						Screen-space X coordinate of start position.
	* @param Y						Screen-space Y coordinate of start position.
	* @param TileSize				Screen-space size of the tiles (in pixels).
	* @param TileGap				Screen-space size of the gaps between tiles (in pixels).
	* @param MaxColumns				Maximal number of columns of tiles to draw. Zero means all entries.
	*
	* Caution: an icon set should be set before calling this function or nothing will be drawn.
	*/
	FInputCommandTilingResult GenerateSequenceTiles(TArray<FCanvasTileItem>& OutTiles, int32 SequenceIndex, int32 X, int32 Y, const FVector2D& TileSize = FVector2D::ZeroVector, const FVector2D& TileGap = FVector2D::ZeroVector, int32 MaxColumns = 0);
	
#if WITH_EDITOR
	void ConditionalUpdateThumbnailTiles();
#endif
protected:
#if WITH_EDITORONLY_DATA
	bool bAreThumbnailTilesValid;

    /* The serial number of the icon set when last time the thumbnail tiles were updated. */
    UPROPERTY()
    uint32 LastUpdateIconSetSerialNumber;
#endif
protected:
#if WITH_EDITOR
	void UpdateThumbnailTiles();
#endif
};
