// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputBuffer/Classes/DrawableTileSetInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrawableTileSetInterface() {}
// Cross Module References
	INPUTBUFFER_API UClass* Z_Construct_UClass_UDrawableTileSetInterface_NoRegister();
	INPUTBUFFER_API UClass* Z_Construct_UClass_UDrawableTileSetInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_InputBuffer();
// End Cross Module References
	void UDrawableTileSetInterface::StaticRegisterNativesUDrawableTileSetInterface()
	{
	}
	UClass* Z_Construct_UClass_UDrawableTileSetInterface_NoRegister()
	{
		return UDrawableTileSetInterface::StaticClass();
	}
	struct Z_Construct_UClass_UDrawableTileSetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDrawableTileSetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InputBuffer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawableTileSetInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/DrawableTileSetInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDrawableTileSetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDrawableTileSetInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDrawableTileSetInterface_Statics::ClassParams = {
		&UDrawableTileSetInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDrawableTileSetInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawableTileSetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDrawableTileSetInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDrawableTileSetInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDrawableTileSetInterface, 2311340397);
	template<> INPUTBUFFER_API UClass* StaticClass<UDrawableTileSetInterface>()
	{
		return UDrawableTileSetInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDrawableTileSetInterface(Z_Construct_UClass_UDrawableTileSetInterface, &UDrawableTileSetInterface::StaticClass, TEXT("/Script/InputBuffer"), TEXT("UDrawableTileSetInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawableTileSetInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
