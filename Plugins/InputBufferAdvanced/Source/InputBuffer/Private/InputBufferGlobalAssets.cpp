// Copyright Isaac Hsu

#include "InputBufferGlobalAssets.h"

////////////////////////////////////////////////////////////////////////////////
// UInputBufferGlobalAssets

UInputBufferGlobalAssets::UInputBufferGlobalAssets()
{
	NullIconTexture = LoadObject<UTexture2D>(nullptr, TEXT("/InputBufferAdvanced/T_Null.T_Null"), nullptr, LOAD_None, nullptr);
	UnknownEventTexture = LoadObject<UTexture2D>(nullptr, TEXT("/InputBufferAdvanced/T_Unknown.T_Unknown"), nullptr, LOAD_None, nullptr);
    EmptyEventTexture = LoadObject<UTexture2D>(nullptr, TEXT("/InputBufferAdvanced/T_Empty.T_Empty"), nullptr, LOAD_None, nullptr);
}