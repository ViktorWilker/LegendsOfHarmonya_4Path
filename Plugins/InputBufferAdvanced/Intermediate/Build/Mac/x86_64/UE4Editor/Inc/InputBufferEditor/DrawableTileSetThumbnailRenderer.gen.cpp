// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputBufferEditor/Classes/DrawableTileSetThumbnailRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrawableTileSetThumbnailRenderer() {}
// Cross Module References
	INPUTBUFFEREDITOR_API UClass* Z_Construct_UClass_UDrawableTileSetThumbnailRenderer_NoRegister();
	INPUTBUFFEREDITOR_API UClass* Z_Construct_UClass_UDrawableTileSetThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_InputBufferEditor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UDrawableTileSetThumbnailRenderer::StaticRegisterNativesUDrawableTileSetThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_UDrawableTileSetThumbnailRenderer_NoRegister()
	{
		return UDrawableTileSetThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UDrawableTileSetThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDrawableTileSetThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_InputBufferEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawableTileSetThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* Thumbnail renderer for IDrawableTileSetInterface objects. */" },
		{ "IncludePath", "DrawableTileSetThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/DrawableTileSetThumbnailRenderer.h" },
		{ "ToolTip", "Thumbnail renderer for IDrawableTileSetInterface objects." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawableTileSetThumbnailRenderer_Statics::NewProp_DefaultTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DrawableTileSetThumbnailRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDrawableTileSetThumbnailRenderer_Statics::NewProp_DefaultTexture = { "DefaultTexture", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDrawableTileSetThumbnailRenderer, DefaultTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDrawableTileSetThumbnailRenderer_Statics::NewProp_DefaultTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawableTileSetThumbnailRenderer_Statics::NewProp_DefaultTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDrawableTileSetThumbnailRenderer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawableTileSetThumbnailRenderer_Statics::NewProp_DefaultTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDrawableTileSetThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawableTileSetThumbnailRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDrawableTileSetThumbnailRenderer_Statics::ClassParams = {
		&UDrawableTileSetThumbnailRenderer::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDrawableTileSetThumbnailRenderer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDrawableTileSetThumbnailRenderer_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDrawableTileSetThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawableTileSetThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDrawableTileSetThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDrawableTileSetThumbnailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDrawableTileSetThumbnailRenderer, 3031290393);
	template<> INPUTBUFFEREDITOR_API UClass* StaticClass<UDrawableTileSetThumbnailRenderer>()
	{
		return UDrawableTileSetThumbnailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDrawableTileSetThumbnailRenderer(Z_Construct_UClass_UDrawableTileSetThumbnailRenderer, &UDrawableTileSetThumbnailRenderer::StaticClass, TEXT("/Script/InputBufferEditor"), TEXT("UDrawableTileSetThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawableTileSetThumbnailRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
