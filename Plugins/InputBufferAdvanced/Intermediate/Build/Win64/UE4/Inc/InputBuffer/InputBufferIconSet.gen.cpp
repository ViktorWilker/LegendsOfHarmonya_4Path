// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputBuffer/Classes/InputBufferIconSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputBufferIconSet() {}
// Cross Module References
	INPUTBUFFER_API UScriptStruct* Z_Construct_UScriptStruct_FInputBufferIconGroup();
	UPackage* Z_Construct_UPackage__Script_InputBuffer();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	INPUTBUFFER_API UScriptStruct* Z_Construct_UScriptStruct_FInputBufferIcon();
	INPUTBUFFER_API UClass* Z_Construct_UClass_UInputBufferIconSet_NoRegister();
	INPUTBUFFER_API UClass* Z_Construct_UClass_UInputBufferIconSet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	INPUTBUFFER_API UClass* Z_Construct_UClass_UDrawableTileSetInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FInputBufferIconGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INPUTBUFFER_API uint32 Get_Z_Construct_UScriptStruct_FInputBufferIconGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputBufferIconGroup, Z_Construct_UPackage__Script_InputBuffer(), TEXT("InputBufferIconGroup"), sizeof(FInputBufferIconGroup), Get_Z_Construct_UScriptStruct_FInputBufferIconGroup_Hash());
	}
	return Singleton;
}
template<> INPUTBUFFER_API UScriptStruct* StaticStruct<FInputBufferIconGroup>()
{
	return FInputBufferIconGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputBufferIconGroup(FInputBufferIconGroup::StaticStruct, TEXT("/Script/InputBuffer"), TEXT("InputBufferIconGroup"), false, nullptr, nullptr);
static struct FScriptStruct_InputBuffer_StaticRegisterNativesFInputBufferIconGroup
{
	FScriptStruct_InputBuffer_StaticRegisterNativesFInputBufferIconGroup()
	{
		UScriptStruct::DeferCppStructOps<FInputBufferIconGroup>(FName(TEXT("InputBufferIconGroup")));
	}
} ScriptStruct_InputBuffer_StaticRegisterNativesFInputBufferIconGroup;
	struct Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRows_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxRows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Background;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InputBufferIconSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputBufferIconGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::NewProp_bShouldOverlap_MetaData[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/* Whether icons in this group should overlap? */" },
		{ "ModuleRelativePath", "Classes/InputBufferIconSet.h" },
		{ "ToolTip", "Whether icons in this group should overlap?" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::NewProp_bShouldOverlap_SetBit(void* Obj)
	{
		((FInputBufferIconGroup*)Obj)->bShouldOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::NewProp_bShouldOverlap = { "bShouldOverlap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInputBufferIconGroup), &Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::NewProp_bShouldOverlap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::NewProp_bShouldOverlap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::NewProp_bShouldOverlap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::NewProp_MaxRows_MetaData[] = {
		{ "Category", "Input Buffer" },
		{ "ClampMin", "0" },
		{ "Comment", "/* The number of rows of this group. */" },
		{ "ModuleRelativePath", "Classes/InputBufferIconSet.h" },
		{ "ToolTip", "The number of rows of this group." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::NewProp_MaxRows = { "MaxRows", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputBufferIconGroup, MaxRows), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::NewProp_MaxRows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::NewProp_MaxRows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::NewProp_Background_MetaData[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/* Background texture of this group. */" },
		{ "ModuleRelativePath", "Classes/InputBufferIconSet.h" },
		{ "ToolTip", "Background texture of this group." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputBufferIconGroup, Background), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::NewProp_Background_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::NewProp_Background_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::NewProp_bShouldOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::NewProp_MaxRows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::NewProp_Background,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InputBuffer,
		nullptr,
		&NewStructOps,
		"InputBufferIconGroup",
		sizeof(FInputBufferIconGroup),
		alignof(FInputBufferIconGroup),
		Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputBufferIconGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputBufferIconGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InputBuffer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputBufferIconGroup"), sizeof(FInputBufferIconGroup), Get_Z_Construct_UScriptStruct_FInputBufferIconGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputBufferIconGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputBufferIconGroup_Hash() { return 1547915232U; }
class UScriptStruct* FInputBufferIcon::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INPUTBUFFER_API uint32 Get_Z_Construct_UScriptStruct_FInputBufferIcon_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputBufferIcon, Z_Construct_UPackage__Script_InputBuffer(), TEXT("InputBufferIcon"), sizeof(FInputBufferIcon), Get_Z_Construct_UScriptStruct_FInputBufferIcon_Hash());
	}
	return Singleton;
}
template<> INPUTBUFFER_API UScriptStruct* StaticStruct<FInputBufferIcon>()
{
	return FInputBufferIcon::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputBufferIcon(FInputBufferIcon::StaticStruct, TEXT("/Script/InputBuffer"), TEXT("InputBufferIcon"), false, nullptr, nullptr);
static struct FScriptStruct_InputBuffer_StaticRegisterNativesFInputBufferIcon
{
	FScriptStruct_InputBuffer_StaticRegisterNativesFInputBufferIcon()
	{
		UScriptStruct::DeferCppStructOps<FInputBufferIcon>(FName(TEXT("InputBufferIcon")));
	}
} ScriptStruct_InputBuffer_StaticRegisterNativesFInputBufferIcon;
	struct Z_Construct_UScriptStruct_FInputBufferIcon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Events_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Events;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputBufferIcon_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InputBufferIconSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputBufferIcon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputBufferIcon>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputBufferIcon_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/* The texture of this icon. */" },
		{ "ModuleRelativePath", "Classes/InputBufferIconSet.h" },
		{ "ToolTip", "The texture of this icon." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputBufferIcon_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputBufferIcon, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputBufferIcon_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputBufferIcon_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInputBufferIcon_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputBufferIcon_Statics::NewProp_Events_MetaData[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/* The associate input events of this icon. */" },
		{ "ModuleRelativePath", "Classes/InputBufferIconSet.h" },
		{ "ToolTip", "The associate input events of this icon." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputBufferIcon_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputBufferIcon, Events), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputBufferIcon_Statics::NewProp_Events_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputBufferIcon_Statics::NewProp_Events_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputBufferIcon_Statics::NewProp_GroupIndex_MetaData[] = {
		{ "ArrayClamp", "Groups" },
		{ "Category", "Input Buffer" },
		{ "ClampMin", "0" },
		{ "Comment", "/* The index of the icon group that this icon belongs to. */" },
		{ "ModuleRelativePath", "Classes/InputBufferIconSet.h" },
		{ "ToolTip", "The index of the icon group that this icon belongs to." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInputBufferIcon_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputBufferIcon, GroupIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputBufferIcon_Statics::NewProp_GroupIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputBufferIcon_Statics::NewProp_GroupIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputBufferIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputBufferIcon_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputBufferIcon_Statics::NewProp_Events_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputBufferIcon_Statics::NewProp_Events,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputBufferIcon_Statics::NewProp_GroupIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputBufferIcon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InputBuffer,
		nullptr,
		&NewStructOps,
		"InputBufferIcon",
		sizeof(FInputBufferIcon),
		alignof(FInputBufferIcon),
		Z_Construct_UScriptStruct_FInputBufferIcon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputBufferIcon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputBufferIcon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputBufferIcon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputBufferIcon()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputBufferIcon_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InputBuffer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputBufferIcon"), sizeof(FInputBufferIcon), Get_Z_Construct_UScriptStruct_FInputBufferIcon_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputBufferIcon_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputBufferIcon_Hash() { return 3324522393U; }
	void UInputBufferIconSet::StaticRegisterNativesUInputBufferIconSet()
	{
	}
	UClass* Z_Construct_UClass_UInputBufferIconSet_NoRegister()
	{
		return UInputBufferIconSet::StaticClass();
	}
	struct Z_Construct_UClass_UInputBufferIconSet_Statics
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
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefGroupCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RefGroupCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputBufferIconSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InputBuffer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBufferIconSet_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Input" },
		{ "Comment", "/* A set of icons used to draw input history of InputBufferComponent. */" },
		{ "IncludePath", "InputBufferIconSet.h" },
		{ "ModuleRelativePath", "Classes/InputBufferIconSet.h" },
		{ "ToolTip", "A set of icons used to draw input history of InputBufferComponent." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_Icons_Inner = { "Icons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputBufferIcon, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_Icons_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/* A list of icon set-up information. */" },
		{ "ModuleRelativePath", "Classes/InputBufferIconSet.h" },
		{ "ToolTip", "A list of icon set-up information." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_Icons = { "Icons", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputBufferIconSet, Icons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_Icons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_Icons_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputBufferIconGroup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_Groups_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/* A list of icon group set-up information. */" },
		{ "ModuleRelativePath", "Classes/InputBufferIconSet.h" },
		{ "ToolTip", "A list of icon group set-up information." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputBufferIconSet, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_Groups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_Groups_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_ThumbnailTileSize_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Specifies the size of tiles when drawing the thumbnail. If zero, the sizes of icon textures will be used instead. */" },
		{ "ModuleRelativePath", "Classes/InputBufferIconSet.h" },
		{ "ToolTip", "Specifies the size of tiles when drawing the thumbnail. If zero, the sizes of icon textures will be used instead." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_ThumbnailTileSize = { "ThumbnailTileSize", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputBufferIconSet, ThumbnailTileSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_ThumbnailTileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_ThumbnailTileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_ThumbnailTileGap_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Specifies the gap between tiles when drawing the thumbnail. */" },
		{ "ModuleRelativePath", "Classes/InputBufferIconSet.h" },
		{ "ToolTip", "Specifies the gap between tiles when drawing the thumbnail." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_ThumbnailTileGap = { "ThumbnailTileGap", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputBufferIconSet, ThumbnailTileGap), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_ThumbnailTileGap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_ThumbnailTileGap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_ThumbnailPadding_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Specifies the padding of the thumbnail. */" },
		{ "ModuleRelativePath", "Classes/InputBufferIconSet.h" },
		{ "ToolTip", "Specifies the padding of the thumbnail." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_ThumbnailPadding = { "ThumbnailPadding", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputBufferIconSet, ThumbnailPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_ThumbnailPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_ThumbnailPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_ThumbnailMaxTiles_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Specifies the maximal number of tiles that should be drawn on the thumbnail. */" },
		{ "ModuleRelativePath", "Classes/InputBufferIconSet.h" },
		{ "ToolTip", "Specifies the maximal number of tiles that should be drawn on the thumbnail." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_ThumbnailMaxTiles = { "ThumbnailMaxTiles", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputBufferIconSet, ThumbnailMaxTiles), METADATA_PARAMS(Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_ThumbnailMaxTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_ThumbnailMaxTiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_ThumbnailBackground_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "Comment", "/* Specifies the background texture of the thumbnail. */" },
		{ "ModuleRelativePath", "Classes/InputBufferIconSet.h" },
		{ "ToolTip", "Specifies the background texture of the thumbnail." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_ThumbnailBackground = { "ThumbnailBackground", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputBufferIconSet, ThumbnailBackground), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_ThumbnailBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_ThumbnailBackground_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_RefGroupCount_MetaData[] = {
		{ "Comment", "/* This is the maximal group index referenced in icons plus one. It may be incorrect if UpdateRefGroupCount is not called after modification. */" },
		{ "ModuleRelativePath", "Classes/InputBufferIconSet.h" },
		{ "ToolTip", "This is the maximal group index referenced in icons plus one. It may be incorrect if UpdateRefGroupCount is not called after modification." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_RefGroupCount = { "RefGroupCount", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputBufferIconSet, RefGroupCount), METADATA_PARAMS(Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_RefGroupCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_RefGroupCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputBufferIconSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_Icons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_Icons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_Groups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_Groups,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_ThumbnailTileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_ThumbnailTileGap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_ThumbnailPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_ThumbnailMaxTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_ThumbnailBackground,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputBufferIconSet_Statics::NewProp_RefGroupCount,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInputBufferIconSet_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDrawableTileSetInterface_NoRegister, (int32)VTABLE_OFFSET(UInputBufferIconSet, IDrawableTileSetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputBufferIconSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputBufferIconSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputBufferIconSet_Statics::ClassParams = {
		&UInputBufferIconSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputBufferIconSet_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputBufferIconSet_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputBufferIconSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputBufferIconSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputBufferIconSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputBufferIconSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputBufferIconSet, 2997524428);
	template<> INPUTBUFFER_API UClass* StaticClass<UInputBufferIconSet>()
	{
		return UInputBufferIconSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputBufferIconSet(Z_Construct_UClass_UInputBufferIconSet, &UInputBufferIconSet::StaticClass, TEXT("/Script/InputBuffer"), TEXT("UInputBufferIconSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputBufferIconSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
