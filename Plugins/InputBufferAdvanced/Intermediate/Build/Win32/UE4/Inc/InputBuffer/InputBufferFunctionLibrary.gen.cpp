// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputBuffer/Classes/InputBufferFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputBufferFunctionLibrary() {}
// Cross Module References
	INPUTBUFFER_API UClass* Z_Construct_UClass_UInputBufferFunctionLibrary_NoRegister();
	INPUTBUFFER_API UClass* Z_Construct_UClass_UInputBufferFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_InputBuffer();
	INPUTBUFFER_API UScriptStruct* Z_Construct_UScriptStruct_FInputHistoryRecord();
// End Cross Module References
	DEFINE_FUNCTION(UInputBufferFunctionLibrary::execPostponeInputHistoryRecords)
	{
		P_GET_TARRAY_REF(FInputHistoryRecord,Z_Param_Out_InRecords);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_TARRAY_REF(FInputHistoryRecord,Z_Param_Out_OutRecords);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInputBufferFunctionLibrary::PostponeInputHistoryRecords(Z_Param_Out_InRecords,Z_Param_Delay,Z_Param_Out_OutRecords);
		P_NATIVE_END;
	}
	void UInputBufferFunctionLibrary::StaticRegisterNativesUInputBufferFunctionLibrary()
	{
		UClass* Class = UInputBufferFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PostponeInputHistoryRecords", &UInputBufferFunctionLibrary::execPostponeInputHistoryRecords },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInputBufferFunctionLibrary_PostponeInputHistoryRecords_Statics
	{
		struct InputBufferFunctionLibrary_eventPostponeInputHistoryRecords_Parms
		{
			TArray<FInputHistoryRecord> InRecords;
			float Delay;
			TArray<FInputHistoryRecord> OutRecords;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRecords_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRecords_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InRecords;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRecords_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutRecords;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputBufferFunctionLibrary_PostponeInputHistoryRecords_Statics::NewProp_InRecords_Inner = { "InRecords", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputHistoryRecord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputBufferFunctionLibrary_PostponeInputHistoryRecords_Statics::NewProp_InRecords_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputBufferFunctionLibrary_PostponeInputHistoryRecords_Statics::NewProp_InRecords = { "InRecords", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferFunctionLibrary_eventPostponeInputHistoryRecords_Parms, InRecords), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInputBufferFunctionLibrary_PostponeInputHistoryRecords_Statics::NewProp_InRecords_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferFunctionLibrary_PostponeInputHistoryRecords_Statics::NewProp_InRecords_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputBufferFunctionLibrary_PostponeInputHistoryRecords_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferFunctionLibrary_eventPostponeInputHistoryRecords_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputBufferFunctionLibrary_PostponeInputHistoryRecords_Statics::NewProp_OutRecords_Inner = { "OutRecords", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputHistoryRecord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputBufferFunctionLibrary_PostponeInputHistoryRecords_Statics::NewProp_OutRecords = { "OutRecords", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferFunctionLibrary_eventPostponeInputHistoryRecords_Parms, OutRecords), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputBufferFunctionLibrary_PostponeInputHistoryRecords_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferFunctionLibrary_PostponeInputHistoryRecords_Statics::NewProp_InRecords_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferFunctionLibrary_PostponeInputHistoryRecords_Statics::NewProp_InRecords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferFunctionLibrary_PostponeInputHistoryRecords_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferFunctionLibrary_PostponeInputHistoryRecords_Statics::NewProp_OutRecords_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferFunctionLibrary_PostponeInputHistoryRecords_Statics::NewProp_OutRecords,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputBufferFunctionLibrary_PostponeInputHistoryRecords_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/** \n\x09* Offsets the time of all InputHistoryRecord in a given array by given amount of time. \n\x09*\n\x09* Caution: InRecords and OutRecords must not be the same array.\n\x09**/" },
		{ "ModuleRelativePath", "Classes/InputBufferFunctionLibrary.h" },
		{ "ToolTip", "Offsets the time of all InputHistoryRecord in a given array by given amount of time.\n\nCaution: InRecords and OutRecords must not be the same array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputBufferFunctionLibrary_PostponeInputHistoryRecords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputBufferFunctionLibrary, nullptr, "PostponeInputHistoryRecords", nullptr, nullptr, sizeof(InputBufferFunctionLibrary_eventPostponeInputHistoryRecords_Parms), Z_Construct_UFunction_UInputBufferFunctionLibrary_PostponeInputHistoryRecords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferFunctionLibrary_PostponeInputHistoryRecords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputBufferFunctionLibrary_PostponeInputHistoryRecords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferFunctionLibrary_PostponeInputHistoryRecords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputBufferFunctionLibrary_PostponeInputHistoryRecords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputBufferFunctionLibrary_PostponeInputHistoryRecords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInputBufferFunctionLibrary_NoRegister()
	{
		return UInputBufferFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UInputBufferFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputBufferFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_InputBuffer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInputBufferFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputBufferFunctionLibrary_PostponeInputHistoryRecords, "PostponeInputHistoryRecords" }, // 1273886536
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBufferFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InputBufferFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/InputBufferFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputBufferFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputBufferFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputBufferFunctionLibrary_Statics::ClassParams = {
		&UInputBufferFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputBufferFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputBufferFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputBufferFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputBufferFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputBufferFunctionLibrary, 4199258557);
	template<> INPUTBUFFER_API UClass* StaticClass<UInputBufferFunctionLibrary>()
	{
		return UInputBufferFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputBufferFunctionLibrary(Z_Construct_UClass_UInputBufferFunctionLibrary, &UInputBufferFunctionLibrary::StaticClass, TEXT("/Script/InputBuffer"), TEXT("UInputBufferFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputBufferFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
