// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputBuffer/Classes/InputCommandIconSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputCommandIconSet() {}
// Cross Module References
	INPUTBUFFER_API UScriptStruct* Z_Construct_UScriptStruct_FBitFlagsWithIndex();
	UPackage* Z_Construct_UPackage__Script_InputBuffer();
	INPUTBUFFER_API UScriptStruct* Z_Construct_UScriptStruct_FInputCommandIconGroup();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	INPUTBUFFER_API UScriptStruct* Z_Construct_UScriptStruct_FInputCommandIcon();
	INPUTBUFFER_API UScriptStruct* Z_Construct_UScriptStruct_FBufferedInputEventArray();
	INPUTBUFFER_API UClass* Z_Construct_UClass_UInputCommandIconSet_NoRegister();
	INPUTBUFFER_API UClass* Z_Construct_UClass_UInputCommandIconSet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	INPUTBUFFER_API UClass* Z_Construct_UClass_UDrawableTileSetInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FBitFlagsWithIndex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INPUTBUFFER_API uint32 Get_Z_Construct_UScriptStruct_FBitFlagsWithIndex_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBitFlagsWithIndex, Z_Construct_UPackage__Script_InputBuffer(), TEXT("BitFlagsWithIndex"), sizeof(FBitFlagsWithIndex), Get_Z_Construct_UScriptStruct_FBitFlagsWithIndex_Hash());
	}
	return Singleton;
}
template<> INPUTBUFFER_API UScriptStruct* StaticStruct<FBitFlagsWithIndex>()
{
	return FBitFlagsWithIndex::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBitFlagsWithIndex(FBitFlagsWithIndex::StaticStruct, TEXT("/Script/InputBuffer"), TEXT("BitFlagsWithIndex"), false, nullptr, nullptr);
static struct FScriptStruct_InputBuffer_StaticRegisterNativesFBitFlagsWithIndex
{
	FScriptStruct_InputBuffer_StaticRegisterNativesFBitFlagsWithIndex()
	{
		UScriptStruct::DeferCppStructOps<FBitFlagsWithIndex>(FName(TEXT("BitFlagsWithIndex")));
	}
} ScriptStruct_InputBuffer_StaticRegisterNativesFBitFlagsWithIndex;
	struct Z_Construct_UScriptStruct_FBitFlagsWithIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_Flags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Flags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBitFlagsWithIndex_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBitFlagsWithIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBitFlagsWithIndex>();
	}
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FBitFlagsWithIndex_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBitFlagsWithIndex_Statics::NewProp_Flags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBitFlagsWithIndex_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBitFlagsWithIndex, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBitFlagsWithIndex_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBitFlagsWithIndex_Statics::NewProp_Flags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBitFlagsWithIndex_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBitFlagsWithIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBitFlagsWithIndex, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FBitFlagsWithIndex_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBitFlagsWithIndex_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBitFlagsWithIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBitFlagsWithIndex_Statics::NewProp_Flags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBitFlagsWithIndex_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBitFlagsWithIndex_Statics::NewProp_Index,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBitFlagsWithIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InputBuffer,
		nullptr,
		&NewStructOps,
		"BitFlagsWithIndex",
		sizeof(FBitFlagsWithIndex),
		alignof(FBitFlagsWithIndex),
		Z_Construct_UScriptStruct_FBitFlagsWithIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBitFlagsWithIndex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBitFlagsWithIndex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBitFlagsWithIndex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBitFlagsWithIndex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBitFlagsWithIndex_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InputBuffer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BitFlagsWithIndex"), sizeof(FBitFlagsWithIndex), Get_Z_Construct_UScriptStruct_FBitFlagsWithIndex_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBitFlagsWithIndex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBitFlagsWithIndex_Hash() { return 2692823991U; }
class UScriptStruct* FInputCommandIconGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INPUTBUFFER_API uint32 Get_Z_Construct_UScriptStruct_FInputCommandIconGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputCommandIconGroup, Z_Construct_UPackage__Script_InputBuffer(), TEXT("InputCommandIconGroup"), sizeof(FInputCommandIconGroup), Get_Z_Construct_UScriptStruct_FInputCommandIconGroup_Hash());
	}
	return Singleton;
}
template<> INPUTBUFFER_API UScriptStruct* StaticStruct<FInputCommandIconGroup>()
{
	return FInputCommandIconGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputCommandIconGroup(FInputCommandIconGroup::StaticStruct, TEXT("/Script/InputBuffer"), TEXT("InputCommandIconGroup"), false, nullptr, nullptr);
static struct FScriptStruct_InputBuffer_StaticRegisterNativesFInputCommandIconGroup
{
	FScriptStruct_InputBuffer_StaticRegisterNativesFInputCommandIconGroup()
	{
		UScriptStruct::DeferCppStructOps<FInputCommandIconGroup>(FName(TEXT("InputCommandIconGroup")));
	}
} ScriptStruct_InputBuffer_StaticRegisterNativesFInputCommandIconGroup;
	struct Z_Construct_UScriptStruct_FInputCommandIconGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldOverlap_MetaData[];
#endif
		static void NewProp_bShouldOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldOverlap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Background;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputCommandIconGroup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputCommandIconGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputCommandIconGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputCommandIconGroup_Statics::NewProp_bShouldOverlap_MetaData[] = {
		{ "Category", "Input Command" },
		{ "Comment", "/* Whether icons in this group should overlap? */" },
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
		{ "ToolTip", "Whether icons in this group should overlap?" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputCommandIconGroup_Statics::NewProp_bShouldOverlap_SetBit(void* Obj)
	{
		((FInputCommandIconGroup*)Obj)->bShouldOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputCommandIconGroup_Statics::NewProp_bShouldOverlap = { "bShouldOverlap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInputCommandIconGroup), &Z_Construct_UScriptStruct_FInputCommandIconGroup_Statics::NewProp_bShouldOverlap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputCommandIconGroup_Statics::NewProp_bShouldOverlap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCommandIconGroup_Statics::NewProp_bShouldOverlap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputCommandIconGroup_Statics::NewProp_Background_MetaData[] = {
		{ "Category", "Input Command" },
		{ "Comment", "/* Background texture of this group. */" },
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
		{ "ToolTip", "Background texture of this group." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputCommandIconGroup_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputCommandIconGroup, Background), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputCommandIconGroup_Statics::NewProp_Background_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCommandIconGroup_Statics::NewProp_Background_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputCommandIconGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCommandIconGroup_Statics::NewProp_bShouldOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCommandIconGroup_Statics::NewProp_Background,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputCommandIconGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InputBuffer,
		nullptr,
		&NewStructOps,
		"InputCommandIconGroup",
		sizeof(FInputCommandIconGroup),
		alignof(FInputCommandIconGroup),
		Z_Construct_UScriptStruct_FInputCommandIconGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCommandIconGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputCommandIconGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCommandIconGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputCommandIconGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputCommandIconGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InputBuffer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputCommandIconGroup"), sizeof(FInputCommandIconGroup), Get_Z_Construct_UScriptStruct_FInputCommandIconGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputCommandIconGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputCommandIconGroup_Hash() { return 3322464521U; }
class UScriptStruct* FInputCommandIcon::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INPUTBUFFER_API uint32 Get_Z_Construct_UScriptStruct_FInputCommandIcon_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputCommandIcon, Z_Construct_UPackage__Script_InputBuffer(), TEXT("InputCommandIcon"), sizeof(FInputCommandIcon), Get_Z_Construct_UScriptStruct_FInputCommandIcon_Hash());
	}
	return Singleton;
}
template<> INPUTBUFFER_API UScriptStruct* StaticStruct<FInputCommandIcon>()
{
	return FInputCommandIcon::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputCommandIcon(FInputCommandIcon::StaticStruct, TEXT("/Script/InputBuffer"), TEXT("InputCommandIcon"), false, nullptr, nullptr);
static struct FScriptStruct_InputBuffer_StaticRegisterNativesFInputCommandIcon
{
	FScriptStruct_InputBuffer_StaticRegisterNativesFInputCommandIcon()
	{
		UScriptStruct::DeferCppStructOps<FInputCommandIcon>(FName(TEXT("InputCommandIcon")));
	}
} ScriptStruct_InputBuffer_StaticRegisterNativesFInputCommandIcon;
	struct Z_Construct_UScriptStruct_FInputCommandIcon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Entries;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputCommandIcon_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputCommandIcon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputCommandIcon>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputCommandIcon_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Input Command" },
		{ "Comment", "/* The texture of this icon. */" },
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
		{ "ToolTip", "The texture of this icon." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputCommandIcon_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputCommandIcon, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputCommandIcon_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCommandIcon_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputCommandIcon_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBufferedInputEventArray, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputCommandIcon_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "Input Command" },
		{ "Comment", "/* lists of the associate input events of this icon. */" },
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
		{ "ToolTip", "lists of the associate input events of this icon." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputCommandIcon_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputCommandIcon, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputCommandIcon_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCommandIcon_Statics::NewProp_Entries_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputCommandIcon_Statics::NewProp_GroupIndex_MetaData[] = {
		{ "ArrayClamp", "Groups" },
		{ "Category", "Input Command" },
		{ "ClampMin", "0" },
		{ "Comment", "/* The index of the icon group that this icon belongs to. */" },
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
		{ "ToolTip", "The index of the icon group that this icon belongs to." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInputCommandIcon_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputCommandIcon, GroupIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputCommandIcon_Statics::NewProp_GroupIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCommandIcon_Statics::NewProp_GroupIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputCommandIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCommandIcon_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCommandIcon_Statics::NewProp_Entries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCommandIcon_Statics::NewProp_Entries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCommandIcon_Statics::NewProp_GroupIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputCommandIcon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InputBuffer,
		nullptr,
		&NewStructOps,
		"InputCommandIcon",
		sizeof(FInputCommandIcon),
		alignof(FInputCommandIcon),
		Z_Construct_UScriptStruct_FInputCommandIcon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCommandIcon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputCommandIcon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCommandIcon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputCommandIcon()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputCommandIcon_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InputBuffer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputCommandIcon"), sizeof(FInputCommandIcon), Get_Z_Construct_UScriptStruct_FInputCommandIcon_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputCommandIcon_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputCommandIcon_Hash() { return 3662361094U; }
class UScriptStruct* FBufferedInputEventArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INPUTBUFFER_API uint32 Get_Z_Construct_UScriptStruct_FBufferedInputEventArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBufferedInputEventArray, Z_Construct_UPackage__Script_InputBuffer(), TEXT("BufferedInputEventArray"), sizeof(FBufferedInputEventArray), Get_Z_Construct_UScriptStruct_FBufferedInputEventArray_Hash());
	}
	return Singleton;
}
template<> INPUTBUFFER_API UScriptStruct* StaticStruct<FBufferedInputEventArray>()
{
	return FBufferedInputEventArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBufferedInputEventArray(FBufferedInputEventArray::StaticStruct, TEXT("/Script/InputBuffer"), TEXT("BufferedInputEventArray"), false, nullptr, nullptr);
static struct FScriptStruct_InputBuffer_StaticRegisterNativesFBufferedInputEventArray
{
	FScriptStruct_InputBuffer_StaticRegisterNativesFBufferedInputEventArray()
	{
		UScriptStruct::DeferCppStructOps<FBufferedInputEventArray>(FName(TEXT("BufferedInputEventArray")));
	}
} ScriptStruct_InputBuffer_StaticRegisterNativesFBufferedInputEventArray;
	struct Z_Construct_UScriptStruct_FBufferedInputEventArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Events_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Events;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBufferedInputEventArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBufferedInputEventArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBufferedInputEventArray>();
	}
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBufferedInputEventArray_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBufferedInputEventArray_Statics::NewProp_Events_MetaData[] = {
		{ "Category", "Input Command" },
		{ "Comment", "/* An array of input events. */" },
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
		{ "ToolTip", "An array of input events." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBufferedInputEventArray_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBufferedInputEventArray, Events), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBufferedInputEventArray_Statics::NewProp_Events_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBufferedInputEventArray_Statics::NewProp_Events_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBufferedInputEventArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBufferedInputEventArray_Statics::NewProp_Events_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBufferedInputEventArray_Statics::NewProp_Events,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBufferedInputEventArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InputBuffer,
		nullptr,
		&NewStructOps,
		"BufferedInputEventArray",
		sizeof(FBufferedInputEventArray),
		alignof(FBufferedInputEventArray),
		Z_Construct_UScriptStruct_FBufferedInputEventArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBufferedInputEventArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBufferedInputEventArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBufferedInputEventArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBufferedInputEventArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBufferedInputEventArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InputBuffer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BufferedInputEventArray"), sizeof(FBufferedInputEventArray), Get_Z_Construct_UScriptStruct_FBufferedInputEventArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBufferedInputEventArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBufferedInputEventArray_Hash() { return 2540580628U; }
	void UInputCommandIconSet::StaticRegisterNativesUInputCommandIconSet()
	{
	}
	UClass* Z_Construct_UClass_UInputCommandIconSet_NoRegister()
	{
		return UInputCommandIconSet::StaticClass();
	}
	struct Z_Construct_UClass_UInputCommandIconSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Icons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Icons;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Groups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Groups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Groups;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailTileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThumbnailTileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailTileGap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThumbnailTileGap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThumbnailPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailMaxTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ThumbnailMaxTiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandThumbnail_MaxTileColumns_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CommandThumbnail_MaxTileColumns;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedUpdateIconMap_MetaData[];
#endif
		static void NewProp_bNeedUpdateIconMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedUpdateIconMap;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SerialNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SerialNumber;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefGroupCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RefGroupCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptyEventIconIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EmptyEventIconIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EventIndexMap_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventIndexMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventIndexMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_EventIndexMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EventToIconIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventToIconIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventToIconIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EventsToIconIndexMap_ValueProp;
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_EventsToIconIndexMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventsToIconIndexMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_EventsToIconIndexMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntriesToIconIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntriesToIconIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EntriesToIconIndices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputCommandIconSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InputBuffer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommandIconSet_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Display" },
		{ "ClassGroupNames", "Input" },
		{ "Comment", "/* A set of icons used to draw InputComponent. */" },
		{ "IncludePath", "InputCommandIconSet.h" },
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
		{ "ToolTip", "A set of icons used to draw InputComponent." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_Icons_Inner = { "Icons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputCommandIcon, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_Icons_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/* A list of icon set-up information. */" },
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
		{ "ToolTip", "A list of icon set-up information." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_Icons = { "Icons", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputCommandIconSet, Icons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_Icons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_Icons_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputCommandIconGroup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_Groups_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/* A list of icon group set-up information. */" },
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
		{ "ToolTip", "A list of icon group set-up information." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputCommandIconSet, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_Groups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_Groups_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_ThumbnailTileSize_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Specifies the size of tiles when drawing the thumbnail. If zero, the sizes of icon textures will be used instead. */" },
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
		{ "ToolTip", "Specifies the size of tiles when drawing the thumbnail. If zero, the sizes of icon textures will be used instead." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_ThumbnailTileSize = { "ThumbnailTileSize", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputCommandIconSet, ThumbnailTileSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_ThumbnailTileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_ThumbnailTileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_ThumbnailTileGap_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Specifies the gap between tiles when drawing the thumbnail. */" },
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
		{ "ToolTip", "Specifies the gap between tiles when drawing the thumbnail." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_ThumbnailTileGap = { "ThumbnailTileGap", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputCommandIconSet, ThumbnailTileGap), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_ThumbnailTileGap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_ThumbnailTileGap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_ThumbnailPadding_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Specifies the padding of the thumbnail. */" },
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
		{ "ToolTip", "Specifies the padding of the thumbnail." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_ThumbnailPadding = { "ThumbnailPadding", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputCommandIconSet, ThumbnailPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_ThumbnailPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_ThumbnailPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_ThumbnailMaxTiles_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Specifies the maximal number of tiles that should be drawn on the thumbnail. */" },
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
		{ "ToolTip", "Specifies the maximal number of tiles that should be drawn on the thumbnail." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_ThumbnailMaxTiles = { "ThumbnailMaxTiles", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputCommandIconSet, ThumbnailMaxTiles), METADATA_PARAMS(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_ThumbnailMaxTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_ThumbnailMaxTiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_ThumbnailBackground_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "Comment", "/* Specifies the background texture of the thumbnail. */" },
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
		{ "ToolTip", "Specifies the background texture of the thumbnail." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_ThumbnailBackground = { "ThumbnailBackground", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputCommandIconSet, ThumbnailBackground), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_ThumbnailBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_ThumbnailBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_CommandThumbnail_MaxTileColumns_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Specifies the maximal columns of tiles that should be drawn when this icon set is used for rendering InputCommand thumbnails. */" },
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
		{ "ToolTip", "Specifies the maximal columns of tiles that should be drawn when this icon set is used for rendering InputCommand thumbnails." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_CommandThumbnail_MaxTileColumns = { "CommandThumbnail_MaxTileColumns", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputCommandIconSet, CommandThumbnail_MaxTileColumns), METADATA_PARAMS(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_CommandThumbnail_MaxTileColumns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_CommandThumbnail_MaxTileColumns_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_bNeedUpdateIconMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
	};
#endif
	void Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_bNeedUpdateIconMap_SetBit(void* Obj)
	{
		((UInputCommandIconSet*)Obj)->bNeedUpdateIconMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_bNeedUpdateIconMap = { "bNeedUpdateIconMap", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInputCommandIconSet), &Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_bNeedUpdateIconMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_bNeedUpdateIconMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_bNeedUpdateIconMap_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_SerialNumber_MetaData[] = {
		{ "Comment", "/* Every time the icon map is updated, this number increases. */" },
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
		{ "ToolTip", "Every time the icon map is updated, this number increases." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_SerialNumber = { "SerialNumber", nullptr, (EPropertyFlags)0x0020080800000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputCommandIconSet, SerialNumber), METADATA_PARAMS(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_SerialNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_SerialNumber_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_RefGroupCount_MetaData[] = {
		{ "Comment", "/* This is the maximal group index referenced in icons plus one. It may be incorrect if UpdateIconMap is not called after modification. */" },
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
		{ "ToolTip", "This is the maximal group index referenced in icons plus one. It may be incorrect if UpdateIconMap is not called after modification." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_RefGroupCount = { "RefGroupCount", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputCommandIconSet, RefGroupCount), METADATA_PARAMS(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_RefGroupCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_RefGroupCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EmptyEventIconIndex_MetaData[] = {
		{ "Comment", "/* Stores the icon index of the empty event, if given. */" },
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
		{ "ToolTip", "Stores the icon index of the empty event, if given." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EmptyEventIconIndex = { "EmptyEventIconIndex", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputCommandIconSet, EmptyEventIconIndex), METADATA_PARAMS(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EmptyEventIconIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EmptyEventIconIndex_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EventIndexMap_ValueProp = { "EventIndexMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EventIndexMap_Key_KeyProp = { "EventIndexMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EventIndexMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EventIndexMap = { "EventIndexMap", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputCommandIconSet, EventIndexMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EventIndexMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EventIndexMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EventToIconIndices_Inner = { "EventToIconIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EventToIconIndices_MetaData[] = {
		{ "Comment", "/* Stores information for icons with single event. */" },
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
		{ "ToolTip", "Stores information for icons with single event." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EventToIconIndices = { "EventToIconIndices", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputCommandIconSet, EventToIconIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EventToIconIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EventToIconIndices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EventsToIconIndexMap_ValueProp = { "EventsToIconIndexMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EventsToIconIndexMap_Key_KeyProp = { "EventsToIconIndexMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EventsToIconIndexMap_MetaData[] = {
		{ "Comment", "/* Stores information for icons with multiple events. */" },
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
		{ "ToolTip", "Stores information for icons with multiple events." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EventsToIconIndexMap = { "EventsToIconIndexMap", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputCommandIconSet, EventsToIconIndexMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EventsToIconIndexMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EventsToIconIndexMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EntriesToIconIndices_Inner = { "EntriesToIconIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBitFlagsWithIndex, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EntriesToIconIndices_MetaData[] = {
		{ "Comment", "/* Stores information for icons with multiple entries. */" },
		{ "ModuleRelativePath", "Classes/InputCommandIconSet.h" },
		{ "ToolTip", "Stores information for icons with multiple entries." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EntriesToIconIndices = { "EntriesToIconIndices", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputCommandIconSet, EntriesToIconIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EntriesToIconIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EntriesToIconIndices_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputCommandIconSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_Icons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_Icons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_Groups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_Groups,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_ThumbnailTileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_ThumbnailTileGap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_ThumbnailPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_ThumbnailMaxTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_ThumbnailBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_CommandThumbnail_MaxTileColumns,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_bNeedUpdateIconMap,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_SerialNumber,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_RefGroupCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EmptyEventIconIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EventIndexMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EventIndexMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EventIndexMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EventToIconIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EventToIconIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EventsToIconIndexMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EventsToIconIndexMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EventsToIconIndexMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EntriesToIconIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommandIconSet_Statics::NewProp_EntriesToIconIndices,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInputCommandIconSet_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDrawableTileSetInterface_NoRegister, (int32)VTABLE_OFFSET(UInputCommandIconSet, IDrawableTileSetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputCommandIconSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputCommandIconSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputCommandIconSet_Statics::ClassParams = {
		&UInputCommandIconSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputCommandIconSet_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommandIconSet_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputCommandIconSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommandIconSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputCommandIconSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputCommandIconSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputCommandIconSet, 1396678634);
	template<> INPUTBUFFER_API UClass* StaticClass<UInputCommandIconSet>()
	{
		return UInputCommandIconSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputCommandIconSet(Z_Construct_UClass_UInputCommandIconSet, &UInputCommandIconSet::StaticClass, TEXT("/Script/InputBuffer"), TEXT("UInputCommandIconSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputCommandIconSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
