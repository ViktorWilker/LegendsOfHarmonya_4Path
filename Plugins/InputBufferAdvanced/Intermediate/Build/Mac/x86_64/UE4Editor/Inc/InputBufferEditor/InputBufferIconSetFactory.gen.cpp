// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputBufferEditor/Classes/InputBufferIconSetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputBufferIconSetFactory() {}
// Cross Module References
	INPUTBUFFEREDITOR_API UClass* Z_Construct_UClass_UInputBufferIconSetFactory_NoRegister();
	INPUTBUFFEREDITOR_API UClass* Z_Construct_UClass_UInputBufferIconSetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_InputBufferEditor();
// End Cross Module References
	void UInputBufferIconSetFactory::StaticRegisterNativesUInputBufferIconSetFactory()
	{
	}
	UClass* Z_Construct_UClass_UInputBufferIconSetFactory_NoRegister()
	{
		return UInputBufferIconSetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UInputBufferIconSetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputBufferIconSetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_InputBufferEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBufferIconSetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InputBufferIconSetFactory.h" },
		{ "ModuleRelativePath", "Classes/InputBufferIconSetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputBufferIconSetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputBufferIconSetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputBufferIconSetFactory_Statics::ClassParams = {
		&UInputBufferIconSetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputBufferIconSetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputBufferIconSetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputBufferIconSetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputBufferIconSetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputBufferIconSetFactory, 1377618006);
	template<> INPUTBUFFEREDITOR_API UClass* StaticClass<UInputBufferIconSetFactory>()
	{
		return UInputBufferIconSetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputBufferIconSetFactory(Z_Construct_UClass_UInputBufferIconSetFactory, &UInputBufferIconSetFactory::StaticClass, TEXT("/Script/InputBufferEditor"), TEXT("UInputBufferIconSetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputBufferIconSetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
