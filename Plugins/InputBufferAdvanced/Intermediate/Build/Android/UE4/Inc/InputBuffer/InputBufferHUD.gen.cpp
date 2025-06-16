// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputBuffer/Classes/InputBufferHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputBufferHUD() {}
// Cross Module References
	INPUTBUFFER_API UClass* Z_Construct_UClass_AInputBufferHUD_NoRegister();
	INPUTBUFFER_API UClass* Z_Construct_UClass_AInputBufferHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_InputBuffer();
	INPUTBUFFER_API UClass* Z_Construct_UClass_UInputCommand_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	INPUTBUFFER_API UClass* Z_Construct_UClass_UInputBufferComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AInputBufferHUD::execDrawInputCommand)
	{
		P_GET_OBJECT(UInputCommand,Z_Param_InputCommand);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_TileSize);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_TileGap);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxColumns);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawInputCommand(Z_Param_InputCommand,Z_Param_SequenceIndex,Z_Param_X,Z_Param_Y,Z_Param_Out_TileSize,Z_Param_Out_TileGap,Z_Param_MaxColumns);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInputBufferHUD::execDrawInputHistory)
	{
		P_GET_OBJECT(UInputBufferComponent,Z_Param_InputBuffer);
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_TileSize);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_TileGap);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxRecords);
		P_GET_UBOOL(Z_Param_bIncludeInvalidRecords);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawInputHistory(Z_Param_InputBuffer,Z_Param_X,Z_Param_Y,Z_Param_Out_TileSize,Z_Param_Out_TileGap,Z_Param_MaxRecords,Z_Param_bIncludeInvalidRecords);
		P_NATIVE_END;
	}
	void AInputBufferHUD::StaticRegisterNativesAInputBufferHUD()
	{
		UClass* Class = AInputBufferHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawInputCommand", &AInputBufferHUD::execDrawInputCommand },
			{ "DrawInputHistory", &AInputBufferHUD::execDrawInputHistory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics
	{
		struct InputBufferHUD_eventDrawInputCommand_Parms
		{
			UInputCommand* InputCommand;
			int32 SequenceIndex;
			float X;
			float Y;
			FVector2D TileSize;
			FVector2D TileGap;
			int32 MaxColumns;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputCommand;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileGap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TileGap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxColumns;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::NewProp_InputCommand = { "InputCommand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferHUD_eventDrawInputCommand_Parms, InputCommand), Z_Construct_UClass_UInputCommand_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferHUD_eventDrawInputCommand_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferHUD_eventDrawInputCommand_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferHUD_eventDrawInputCommand_Parms, Y), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::NewProp_TileSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferHUD_eventDrawInputCommand_Parms, TileSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::NewProp_TileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::NewProp_TileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::NewProp_TileGap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::NewProp_TileGap = { "TileGap", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferHUD_eventDrawInputCommand_Parms, TileGap), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::NewProp_TileGap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::NewProp_TileGap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::NewProp_MaxColumns = { "MaxColumns", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferHUD_eventDrawInputCommand_Parms, MaxColumns), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::NewProp_InputCommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::NewProp_TileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::NewProp_TileGap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::NewProp_MaxColumns,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "TileSize,TileGap" },
		{ "Category", "HUD" },
		{ "Comment", "/**\n\x09* Draw an InputCommand.\n\x09*\n\x09* @param InputCommand\x09\x09\x09The InputCommand to draw.\n\x09* @param SequenceIndex\x09\x09\x09The index of sequence in the InputCommand to draw.\n\x09* @param X\x09\x09\x09\x09\x09\x09Screen-space X coordinate of start position.\n\x09* @param Y\x09\x09\x09\x09\x09\x09Screen-space Y coordinate of start position.\n\x09* @param TileSize\x09\x09\x09\x09Screen-space size of the tiles (in pixels).\n\x09* @param TileGap\x09\x09\x09\x09Screen-space size of the gaps between tiles (in pixels).\n\x09* @param MaxColumns\x09\x09\x09\x09Maximal number of columns of tiles to draw. Zero means all entries.\n\x09*\n\x09* Caution: an icon set should be set before calling this function or nothing will be drawn.\n\x09*/" },
		{ "CPP_Default_MaxColumns", "0" },
		{ "CPP_Default_TileGap", "" },
		{ "CPP_Default_TileSize", "" },
		{ "ModuleRelativePath", "Classes/InputBufferHUD.h" },
		{ "ToolTip", "Draw an InputCommand.\n\n@param InputCommand                   The InputCommand to draw.\n@param SequenceIndex                  The index of sequence in the InputCommand to draw.\n@param X                                              Screen-space X coordinate of start position.\n@param Y                                              Screen-space Y coordinate of start position.\n@param TileSize                               Screen-space size of the tiles (in pixels).\n@param TileGap                                Screen-space size of the gaps between tiles (in pixels).\n@param MaxColumns                             Maximal number of columns of tiles to draw. Zero means all entries.\n\nCaution: an icon set should be set before calling this function or nothing will be drawn." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInputBufferHUD, nullptr, "DrawInputCommand", nullptr, nullptr, sizeof(InputBufferHUD_eventDrawInputCommand_Parms), Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics
	{
		struct InputBufferHUD_eventDrawInputHistory_Parms
		{
			UInputBufferComponent* InputBuffer;
			float X;
			float Y;
			FVector2D TileSize;
			FVector2D TileGap;
			int32 MaxRecords;
			bool bIncludeInvalidRecords;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputBuffer;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileGap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TileGap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxRecords;
		static void NewProp_bIncludeInvalidRecords_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeInvalidRecords;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::NewProp_InputBuffer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::NewProp_InputBuffer = { "InputBuffer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferHUD_eventDrawInputHistory_Parms, InputBuffer), Z_Construct_UClass_UInputBufferComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::NewProp_InputBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::NewProp_InputBuffer_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferHUD_eventDrawInputHistory_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferHUD_eventDrawInputHistory_Parms, Y), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::NewProp_TileSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferHUD_eventDrawInputHistory_Parms, TileSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::NewProp_TileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::NewProp_TileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::NewProp_TileGap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::NewProp_TileGap = { "TileGap", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferHUD_eventDrawInputHistory_Parms, TileGap), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::NewProp_TileGap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::NewProp_TileGap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::NewProp_MaxRecords = { "MaxRecords", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferHUD_eventDrawInputHistory_Parms, MaxRecords), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::NewProp_bIncludeInvalidRecords_SetBit(void* Obj)
	{
		((InputBufferHUD_eventDrawInputHistory_Parms*)Obj)->bIncludeInvalidRecords = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::NewProp_bIncludeInvalidRecords = { "bIncludeInvalidRecords", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InputBufferHUD_eventDrawInputHistory_Parms), &Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::NewProp_bIncludeInvalidRecords_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::NewProp_InputBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::NewProp_TileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::NewProp_TileGap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::NewProp_MaxRecords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::NewProp_bIncludeInvalidRecords,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "TileSize,TileGap" },
		{ "Category", "HUD" },
		{ "Comment", "/**\n\x09* Draw input history.\n\x09*\n\x09* @param InputBuffer\x09\x09\x09The InputBufferComponent to draw.\n\x09* @param X\x09\x09\x09\x09\x09\x09Screen-space X coordinate of start position.\n\x09* @param Y\x09\x09\x09\x09\x09\x09Screen-space Y coordinate of start position.\n\x09* @param TileSize\x09\x09\x09\x09Screen-space size of the tiles (in pixels).\n\x09* @param TileGap\x09\x09\x09\x09Screen-space size of the gaps between tiles (in pixels).\n\x09* @param MaxRecords\x09\x09\x09\x09Maximal number of input records to draw.\n\x09* @param bIncludeInvalidRecords\x09Whether invalidated records are included.\n\x09*\n\x09* Caution: an icon set should be set before calling this function or nothing will be drawn.\n\x09*/" },
		{ "CPP_Default_bIncludeInvalidRecords", "false" },
		{ "CPP_Default_MaxRecords", "0" },
		{ "CPP_Default_TileGap", "" },
		{ "CPP_Default_TileSize", "" },
		{ "ModuleRelativePath", "Classes/InputBufferHUD.h" },
		{ "ToolTip", "Draw input history.\n\n@param InputBuffer                    The InputBufferComponent to draw.\n@param X                                              Screen-space X coordinate of start position.\n@param Y                                              Screen-space Y coordinate of start position.\n@param TileSize                               Screen-space size of the tiles (in pixels).\n@param TileGap                                Screen-space size of the gaps between tiles (in pixels).\n@param MaxRecords                             Maximal number of input records to draw.\n@param bIncludeInvalidRecords Whether invalidated records are included.\n\nCaution: an icon set should be set before calling this function or nothing will be drawn." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInputBufferHUD, nullptr, "DrawInputHistory", nullptr, nullptr, sizeof(InputBufferHUD_eventDrawInputHistory_Parms), Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInputBufferHUD_NoRegister()
	{
		return AInputBufferHUD::StaticClass();
	}
	struct Z_Construct_UClass_AInputBufferHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInputBufferHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_InputBuffer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInputBufferHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInputBufferHUD_DrawInputCommand, "DrawInputCommand" }, // 804543998
		{ &Z_Construct_UFunction_AInputBufferHUD_DrawInputHistory, "DrawInputHistory" }, // 2760458271
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInputBufferHUD_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An extended HUD able to draw input history and InputCommands.\n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "InputBufferHUD.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/InputBufferHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "An extended HUD able to draw input history and InputCommands." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInputBufferHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInputBufferHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInputBufferHUD_Statics::ClassParams = {
		&AInputBufferHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ADu,
		METADATA_PARAMS(Z_Construct_UClass_AInputBufferHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInputBufferHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInputBufferHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInputBufferHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInputBufferHUD, 489614862);
	template<> INPUTBUFFER_API UClass* StaticClass<AInputBufferHUD>()
	{
		return AInputBufferHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInputBufferHUD(Z_Construct_UClass_AInputBufferHUD, &AInputBufferHUD::StaticClass, TEXT("/Script/InputBuffer"), TEXT("AInputBufferHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInputBufferHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
