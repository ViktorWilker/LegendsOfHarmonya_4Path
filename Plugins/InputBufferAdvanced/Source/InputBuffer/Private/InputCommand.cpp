// Copyright Isaac Hsu

#include "InputCommand.h"

#include "InputCommandIconSet.h"

////////////////////////////////////////////////////////////////////////////////
// UInputCommand

void UInputCommand::GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const
{
	Super::GetAssetRegistryTags(OutTags);

	OutTags.Add(FAssetRegistryTag("Sequences", FString::FromInt(Sequences.Num()), FAssetRegistryTag::TT_Numerical));

	int32 SeqIdx = FindFirstNonEmptySequence();
	int32 EntryNum = (SeqIdx >= 0) ? Sequences[SeqIdx].Entries.Num() : 0;
	OutTags.Add(FAssetRegistryTag("Entries", FString::FromInt(EntryNum), FAssetRegistryTag::TT_Numerical));

	//const int32 MaxSequencesToTag = 2;
	//for (int32 Idx = 0; Idx < MaxSequencesToTag; Idx++)
	//{
	//	FString EntryNum = Sequences.IsValidIndex(Idx) ? FString::FromInt(Sequences[Idx].Entries.Num()) : TEXT("");
	//	OutTags.Add(FAssetRegistryTag(*FString::Printf(TEXT("Sequence%d Entries"), Idx), EntryNum, FAssetRegistryTag::TT_Alphabetical));
	//}
}
#if WITH_EDITOR
void UInputCommand::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	bAreThumbnailTilesValid = false;
}

void UInputCommand::ConditionalUpdateThumbnailTiles()
{
	if (!bAreThumbnailTilesValid || (IconSet && (IconSet->NeedUpdateIconMap() || IconSet->GetSerialNumber() != LastUpdateIconSetSerialNumber)))
	{
		UpdateThumbnailTiles();

		bAreThumbnailTilesValid = true;
        LastUpdateIconSetSerialNumber = IconSet->GetSerialNumber();
	}
}

void UInputCommand::UpdateThumbnailTiles()
{
	ThumbnailTiles.Reset();

	if (IconSet)
	{
		int32 SeqIdx = FindFirstNonEmptySequence();
		if (SeqIdx != INDEX_NONE)
		{
			// Leave positions and sizes of tiles to the thumbnail renderer 
			ThumbnailTilingResult = IconSet->GenerateCanvasTiles(ThumbnailTiles, Sequences[SeqIdx].Entries, 0, 0, FVector2D(1, 1), FVector2D(0, 0), IconSet->CommandThumbnail_MaxTileColumns);
		}
	}
}
#endif
int32 UInputCommand::FindFirstNonEmptySequence() const
{
	for (int Idx = 0; Idx < Sequences.Num(); Idx++)
	{
		if (Sequences[Idx].Entries.Num() > 0)
		{
			return Idx;
		}
	}

	return INDEX_NONE;
}

void UInputCommand::DrawSequence(class UCanvas* Canvas, int32 SequenceIndex, int32 X, int32 Y, const FVector2D& TileSize, const FVector2D& TileGap, int32 MaxColumns)
{
	if (Canvas)
	{
		TArray<FCanvasTileItem> Tiles;
		GenerateSequenceTiles(Tiles, SequenceIndex, X, Y, TileSize, TileGap, MaxColumns);

		for (auto& Tile : Tiles)
		{
			Canvas->DrawItem(Tile);
		}
	}
}

FInputCommandTilingResult UInputCommand::GenerateSequenceTiles(TArray<FCanvasTileItem>& OutTiles, int32 SequenceIndex, int32 X, int32 Y, const FVector2D& TileSize, const FVector2D& TileGap, int32 MaxColumns)
{
	if (IconSet && Sequences.IsValidIndex(SequenceIndex))
	{
		return IconSet->GenerateCanvasTiles(OutTiles, Sequences[SequenceIndex].Entries, X, Y, TileSize, TileGap, MaxColumns);
	}

	return FInputCommandTilingResult();
}
