// Copyright Isaac Hsu

#include "DrawableTileSetThumbnailRenderer.h"

#include "AssetToolsModule.h"
#include "IAssetTypeActions.h"

#include "DrawableTileSetInterface.h"
#include "InputBufferEditor.h"

////////////////////////////////////////////////////////////////////////////////
// UDrawableTileSetThumbnailRenderer

UDrawableTileSetThumbnailRenderer::UDrawableTileSetThumbnailRenderer()
{
	DefaultTexture = LoadObject<UTexture2D>(nullptr, TEXT("/InputBufferAdvanced/T_IconSet.T_IconSet"), nullptr, LOAD_None, nullptr);
}

int32 UDrawableTileSetThumbnailRenderer::CalculateColumnNumber(int32 TileNumber, float TileRatio)
{
	float SquareRoot = FMath::Pow(TileNumber * TileRatio, 0.5f);
	return FMath::CeilToInt(SquareRoot / TileRatio);
}

void UDrawableTileSetThumbnailRenderer::Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height, FRenderTarget*, FCanvas* Canvas, bool bAdditionalViewFamily)
{
	auto TileSet = Cast<IDrawableTileSetInterface>(Object);
	if (TileSet == nullptr) return;

	TArray<TArray<UTexture*>> Textures;
	FVector2D TileSize;
	FVector2D TileGap;
	FMargin Padding;
	UTexture2D* Background = nullptr;
	TileSet->GetTileTextures(Textures, TileSize, TileGap, Padding, Background);

	if (Background)
	{
		DrawTexture(Background, X, Y, Width, Height, Canvas);
	}

	if (Textures.Num() == 0)
	{
		if (Background == nullptr && DefaultTexture != nullptr)
		{
			FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>(TEXT("AssetTools"));
			TWeakPtr<IAssetTypeActions> AssetTypeActions = AssetToolsModule.Get().GetAssetTypeActionsForClass(Object->GetClass());
			if (AssetTypeActions.IsValid())
			{
				FLinearColor AssetColor = AssetTypeActions.Pin()->GetTypeColor();
				Canvas->DrawTile(X, Y, Width, Height, 0, 0, 1, 1, AssetColor, nullptr, false);
			}

			DrawTexture(DefaultTexture, X, Y, Width, Height, Canvas);
		}
		return;
	}

	float TileRatio = (TileSize.Y > 0.f) ? (TileSize.X / TileSize.Y) : 1.f;
	if (TileRatio < 0.f)
	{
		TileRatio = 1.f;
	}

	const int32 ColumnNum = CalculateColumnNumber(Textures.Num(), TileRatio);
	const int32 RowNum = FMath::CeilToInt(float(Textures.Num()) / ColumnNum);
	check(ColumnNum > 0 && RowNum > 0);

	const float ContentX = X + Padding.Left;
	const float ContentY = Y + Padding.Top;
	const float ContentWidth = Width - Padding.Left - Padding.Right;
	const float ContentHeight = Height - Padding.Top - Padding.Bottom;

	const float AvailableTileWidth = ContentWidth - (ColumnNum - 1) * TileGap.X;
	const float AvailableTileHeight = ContentHeight - (RowNum - 1) * TileGap.Y;

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

		TileSize.X = TileWidth;
		TileSize.Y = TileHeight;
		const FVector2D TileSpan = TileSize + TileGap;

		const float TotalTileWidth = ColumnNum * TileWidth + (ColumnNum - 1) * TileGap.X;
		const float TotalTileHeight = RowNum * TileHeight + (RowNum - 1) * TileGap.Y;
		const float StartX = ContentX + (ContentWidth - TotalTileWidth) * 0.5f;
		const float StartY = ContentY + (ContentHeight - TotalTileHeight) * 0.5f;

		for (int32 Idx = 0; Idx < Textures.Num(); Idx++)
		{
			int32 Col = Idx % ColumnNum;
			int32 Row = Idx / ColumnNum;
			for (auto Tex : Textures[Idx])
			{
				if (Tex)
				{
					FCanvasTileItem Tile(FVector2D(StartX + Col*TileSpan.X, StartY + Row*TileSpan.Y), Tex->Resource, TileSize, FLinearColor::White);
					Tile.BlendMode = SE_BLEND_Translucent;
					Canvas->DrawItem(Tile);
				}
			}
		}
	}
}

void UDrawableTileSetThumbnailRenderer::DrawTexture(UTexture2D* Texture, int32 X, int32 Y, uint32 Width, uint32 Height, FCanvas* Canvas)
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
