// Copyright Isaac Hsu

#pragma once

#include "ThumbnailRendering/DefaultSizedThumbnailRenderer.h"

#include "DrawableTileSetThumbnailRenderer.generated.h"

/* Thumbnail renderer for IDrawableTileSetInterface objects. */
UCLASS()
class INPUTBUFFEREDITOR_API UDrawableTileSetThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
	GENERATED_BODY()

public:

	UDrawableTileSetThumbnailRenderer();

	// UThumbnailRenderer interface
	virtual void Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height, FRenderTarget*, FCanvas* Canvas, bool bAdditionalViewFamily) override;
	// End of UThumbnailRenderer interface

protected:

	UPROPERTY()
	class UTexture2D* DefaultTexture;

protected:

	int32 CalculateColumnNumber(int32 TileNumber, float TileRatio);

	void DrawTexture(class UTexture2D* Texture, int32 X, int32 Y, uint32 Width, uint32 Height, class FCanvas* Canvas);
};
