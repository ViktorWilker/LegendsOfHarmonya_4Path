// Copyright Isaac Hsu

#include "InputCommandThumbnailRenderer.h"

#include "InputBufferEditor.h"
#include "InputCommand.h"
#include "InputCommandIconSet.h"

const float UInputCommandThumbnailRenderer::ELLIPSIS_HEIGHT_RATIO = 0.2f;

////////////////////////////////////////////////////////////////////////////////
// UInputCommandThumbnailRenderer

UInputCommandThumbnailRenderer::UInputCommandThumbnailRenderer()
{
	DefaultTexture = LoadObject<UTexture2D>(nullptr, TEXT("/InputBufferAdvanced/T_InputCommand.T_InputCommand"), nullptr, LOAD_None, nullptr);
	EmptyCommandTexture = LoadObject<UTexture2D>(nullptr, TEXT("/InputBufferAdvanced/T_Empty.T_Empty"), nullptr, LOAD_None, nullptr);
	EllipsisTexture = LoadObject<UTexture2D>(nullptr, TEXT("/InputBufferAdvanced/T_Ellipsis.T_Ellipsis"), nullptr, LOAD_None, nullptr);
}

void UInputCommandThumbnailRenderer::Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height, FRenderTarget*, FCanvas* Canvas, bool bAdditionalViewFamily)
{
	auto InputCommand = Cast<UInputCommand>(Object);
	if (InputCommand == nullptr) return;

	if (InputCommand->Thumbnail)
	{
		DrawTexture(InputCommand->Thumbnail, X, Y, Width, Height, Canvas);
	}
	else if (InputCommand->IconSet == nullptr)
	{
		CheckedDrawTexture(DefaultTexture, X, Y, Width, Height, Canvas);
	}
	else
	{
		DrawIcons(InputCommand, X, Y, Width, Height, Canvas);
	}
}

void UInputCommandThumbnailRenderer::DrawTexture(UTexture2D* Texture, int32 X, int32 Y, uint32 Width, uint32 Height, FCanvas* Canvas)
{
	Canvas->DrawTile(
		(float)X,
		(float)Y,
		(float)Width,
		(float)Height,
		0.0f,
		0.0f,
		1.0f,
		1.0f,
		FLinearColor::White,
		Texture->Resource,
		true);
}

void UInputCommandThumbnailRenderer::DrawIcons(UInputCommand* InputCommand, int32 X, int32 Y, uint32 Width, uint32 Height, FCanvas* Canvas)
{
	UInputCommandIconSet* IconSet = InputCommand->IconSet;
	check(IconSet);

	InputCommand->ConditionalUpdateThumbnailTiles();

	if (InputCommand->ThumbnailTiles.Num() == 0)
	{
		CheckedDrawTexture(EmptyCommandTexture, X, Y, Width, Height, Canvas);
	}
	else
	{
		CheckedDrawTexture(IconSet->ThumbnailBackground, X, Y, Width, Height, Canvas);

		FVector2D DesiredTileSize = IconSet->GetThumbnailTileSize();
        if (DesiredTileSize.X <= 0.f || DesiredTileSize.Y <= 0.f)
        {
            DesiredTileSize.X = FMath::Min(Width, Height);
            DesiredTileSize.Y = DesiredTileSize.X;
        }
        float TileRatio = (DesiredTileSize.Y >= 0.f) ? (DesiredTileSize.X / DesiredTileSize.Y) : 1.f;

		FVector2D TileGap = IconSet->ThumbnailTileGap;
		TileGap.X = FMath::Max(TileGap.X, 0.f);
		TileGap.Y = FMath::Max(TileGap.Y, 0.f);

		const float ContentX = X + IconSet->ThumbnailPadding.Left;
		const float ContentY = Y + IconSet->ThumbnailPadding.Top;
		const float ContentWidth = Width - IconSet->ThumbnailPadding.Left - IconSet->ThumbnailPadding.Right;
		const float ContentHeight = Height - IconSet->ThumbnailPadding.Top - IconSet->ThumbnailPadding.Bottom;

		const int32 ColumnNum = InputCommand->ThumbnailTilingResult.Columns;
		const int32 RowNum = InputCommand->ThumbnailTilingResult.Rows;
		check(ColumnNum > 0 && RowNum > 0);

		const bool bEllipsis = InputCommand->ThumbnailTilingResult.bEllipsis && EllipsisTexture;
		const float EllipsisHeight = bEllipsis ? (ContentWidth * ELLIPSIS_HEIGHT_RATIO) : 0.f;
		const float EllipsisWidth = bEllipsis ? (EllipsisHeight * EllipsisTexture->GetSizeX() / EllipsisTexture->GetSizeY()) : 0.f;
		const float AvailableTileWidth = ContentWidth - (ColumnNum - 1) * TileGap.X;
		const float AvailableTileHeight = ContentHeight - (RowNum - 1) * TileGap.Y - EllipsisHeight;

		if (AvailableTileWidth > 0 && AvailableTileHeight > 0)
		{
			const float FilledTileWidth = AvailableTileWidth / ColumnNum;
			const float FilledTileHeight = AvailableTileHeight / RowNum;
			const float FilledTileRatio = FilledTileWidth / FilledTileHeight;

			float TileWidth, TileHeight;
			if (FilledTileRatio >= TileRatio)
			{
				TileWidth = FilledTileHeight * TileRatio;
				TileHeight = FilledTileHeight;
			}
			else
			{
				TileWidth = FilledTileWidth;
				TileHeight = FilledTileWidth / TileRatio;
			}
			TileWidth = FMath::Min(TileWidth, DesiredTileSize.X);
			TileHeight = FMath::Min(TileHeight, DesiredTileSize.Y);

			const FVector2D TileSize(TileWidth, TileHeight);
			const FVector2D TileSpan = TileSize + TileGap;

			const float TotalTileWidth = ColumnNum * TileWidth + (ColumnNum - 1) * TileGap.X;
			const float TotalTileHeight = RowNum * TileHeight + (RowNum - 1) * TileGap.Y;
			const float StartX = ContentX + (ContentWidth - TotalTileWidth) * 0.5f;
			const float StartY = ContentY + (ContentHeight - TotalTileHeight - EllipsisHeight) * 0.5f;
			
			for (auto Tile : InputCommand->ThumbnailTiles) // Copy the tile. Do NOT change it.
			{
				Tile.Position.X = StartX + Tile.Position.X*TileSpan.X;
				Tile.Position.Y = StartY + Tile.Position.Y*TileSpan.Y;
				Tile.Size = TileSize;

				Canvas->DrawItem(Tile);
			}

			if (bEllipsis)
			{
				FVector2D Pos(ContentX + (ContentWidth - EllipsisWidth) * 0.5f, StartY + TotalTileHeight);
				FCanvasTileItem Tile(Pos, EllipsisTexture->Resource, FVector2D(EllipsisWidth, EllipsisHeight), FLinearColor::White);
				Tile.BlendMode = SE_BLEND_Translucent;
				Canvas->DrawItem(Tile);
			}
		}
	}
}

