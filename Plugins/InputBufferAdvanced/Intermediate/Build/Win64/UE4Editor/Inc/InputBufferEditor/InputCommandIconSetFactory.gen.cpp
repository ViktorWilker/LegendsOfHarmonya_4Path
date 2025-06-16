// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputBufferEditor/Classes/InputCommandIconSetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputCommandIconSetFactory() {}
// Cross Module References
	INPUTBUFFEREDITOR_API UClass* Z_Construct_UClass_UInputCommandIconSetFactory_NoRegister();
	INPUTBUFFEREDITOR_API UClass* Z_Construct_UClass_UInputCommandIconSetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_InputBufferEditor();
// End Cross Module References
	void UInputCommandIconSetFactory::StaticRegisterNativesUInputCommandIconSetFactory()
	{
	}
	UClass* Z_Construct_UClass_UInputCommandIconSetFactory_NoRegister()
	{
		return UInputCommandIconSetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UInputCommandIconSetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputCommandIconSetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_InputBufferEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommandIconSetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InputCommandIconSetFactory.h" },
		{ "ModuleRelativePath", "Classes/InputCommandIconSetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputCommandIconSetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputCommandIconSetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputCommandIconSetFactory_Statics::ClassParams = {
		&UInputCommandIconSetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInputCommandIconSetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommandIconSetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputCommandIconSetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputCommandIconSetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputCommandIconSetFactory, 2587640328);
	template<> INPUTBUFFEREDITOR_API UClass* StaticClass<UInputCommandIconSetFactory>()
	{
		return UInputCommandIconSetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputCommandIconSetFactory(Z_Construct_UClass_UInputCommandIconSetFactory, &UInputCommandIconSetFactory::StaticClass, TEXT("/Script/InputBufferEditor"), TEXT("UInputCommandIconSetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputCommandIconSetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
