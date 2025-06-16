// Copyright Isaac Hsu

#pragma once

#include "Layout/Margin.h"
#include "UObject/Interface.h"

#include "DrawableTileSetInterface.generated.h"

UINTERFACE(Meta = (CannotImplementInterfaceInBlueprint))
class INPUTBUFFER_API UDrawableTileSetInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

/** 
* An interface to retrieve fixed-sized tiles. 
* Each tile can has more than one texture but they will overlap.
* Used to draw InputBufferIconSet and InputCommandIconSet.
**/
class INPUTBUFFER_API IDrawableTileSetInterface
{
	GENERATED_IINTERFACE_BODY()

public:

	virtual void GetTileTextures(TArray<TArray<class UTexture*>>& OutTextures, FVector2D& OutTileSize, FVector2D& OutTileGap, FMargin& OutFramePadding, class UTexture2D*& OutBackground) const {}
};
