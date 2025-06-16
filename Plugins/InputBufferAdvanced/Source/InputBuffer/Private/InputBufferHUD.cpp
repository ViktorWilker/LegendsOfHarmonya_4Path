// Copyright Isaac Hsu

#include "InputBufferHUD.h"

#include "InputBufferComponent.h"
#include "InputCommand.h"

////////////////////////////////////////////////////////////////////////////////
// AInputBufferHUD

void AInputBufferHUD::DrawInputHistory(class UInputBufferComponent* InputBuffer, float X, float Y, const FVector2D& TileSize, const FVector2D& TileGap, int32 MaxRecords, bool bIncludeInvalidRecords)
{
	if (IsCanvasValid_WarnIfNot() && InputBuffer)
	{
		InputBuffer->DrawHistory(Canvas, X, Y, TileSize, TileGap, MaxRecords, bIncludeInvalidRecords);
	}
}

void AInputBufferHUD::DrawInputCommand(class UInputCommand* InputCommand, int32 SequenceIndex, float X, float Y, const FVector2D& TileSize, const FVector2D& TileGap, int32 MaxColumns)
{
	if (IsCanvasValid_WarnIfNot() && InputCommand)
	{
		InputCommand->DrawSequence(Canvas, SequenceIndex, X, Y, TileSize, TileGap, MaxColumns);
	}
}

