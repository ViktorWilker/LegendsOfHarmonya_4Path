// Copyright Isaac Hsu

#pragma once

#include "GameFramework/HUD.h"

#include "InputBufferHUD.generated.h"

/**
 * An extended HUD able to draw input history and InputCommands.
 */
UCLASS(Abstract, BlueprintType, Blueprintable)
class INPUTBUFFER_API AInputBufferHUD : public AHUD
{
	GENERATED_BODY()
	
public:		

	/**
	* Draw input history.
	*
	* @param InputBuffer			The InputBufferComponent to draw.
	* @param X						Screen-space X coordinate of start position.
	* @param Y						Screen-space Y coordinate of start position.
	* @param TileSize				Screen-space size of the tiles (in pixels).
	* @param TileGap				Screen-space size of the gaps between tiles (in pixels).
	* @param MaxRecords				Maximal number of input records to draw.
	* @param bIncludeInvalidRecords	Whether invalidated records are included.
	*
	* Caution: an icon set should be set before calling this function or nothing will be drawn.
	*/
	UFUNCTION(BlueprintCallable, Category = "HUD", Meta = (AutoCreateRefTerm = "TileSize,TileGap"))
	void DrawInputHistory(class UInputBufferComponent* InputBuffer, float X, float Y, const FVector2D& TileSize = FVector2D::ZeroVector, const FVector2D& TileGap = FVector2D::ZeroVector, int32 MaxRecords = 0, bool bIncludeInvalidRecords = false);

	/**
	* Draw an InputCommand.
	*
	* @param InputCommand			The InputCommand to draw.
	* @param SequenceIndex			The index of sequence in the InputCommand to draw.
	* @param X						Screen-space X coordinate of start position.
	* @param Y						Screen-space Y coordinate of start position.
	* @param TileSize				Screen-space size of the tiles (in pixels).
	* @param TileGap				Screen-space size of the gaps between tiles (in pixels).
	* @param MaxColumns				Maximal number of columns of tiles to draw. Zero means all entries.
	*
	* Caution: an icon set should be set before calling this function or nothing will be drawn.
	*/
	UFUNCTION(BlueprintCallable, Category = "HUD", Meta = (AutoCreateRefTerm = "TileSize,TileGap"))
	void DrawInputCommand(class UInputCommand* InputCommand, int32 SequenceIndex, float X, float Y, const FVector2D& TileSize = FVector2D::ZeroVector, const FVector2D& TileGap = FVector2D::ZeroVector, int32 MaxColumns = 0);

};
