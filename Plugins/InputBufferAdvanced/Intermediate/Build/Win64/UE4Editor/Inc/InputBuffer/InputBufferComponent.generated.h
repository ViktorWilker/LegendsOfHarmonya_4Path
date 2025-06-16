// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputCommand;
struct FInputHistoryRecord;
class UInputBufferIconSet;
#ifdef INPUTBUFFER_InputBufferComponent_generated_h
#error "InputBufferComponent.generated.h already included, missing '#pragma once' in InputBufferComponent.h"
#endif
#define INPUTBUFFER_InputBufferComponent_generated_h

#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferComponent_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Statics; \
	INPUTBUFFER_API static class UScriptStruct* StaticStruct();


template<> INPUTBUFFER_API UScriptStruct* StaticStruct<struct FBufferedInputEventKeyMapping>();

#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferComponent_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics; \
	INPUTBUFFER_API static class UScriptStruct* StaticStruct();


template<> INPUTBUFFER_API UScriptStruct* StaticStruct<struct FBufferedInputEventSetup>();

#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferComponent_h_123_SPARSE_DATA
#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferComponent_h_123_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMatchCommand); \
	DECLARE_FUNCTION(execMatchEvents); \
	DECLARE_FUNCTION(execSetHistoryRecords); \
	DECLARE_FUNCTION(execGetHistoryRecords); \
	DECLARE_FUNCTION(execGetLastEvents); \
	DECLARE_FUNCTION(execGetCurrentEvents); \
	DECLARE_FUNCTION(execPrint); \
	DECLARE_FUNCTION(execInvalidateHistory); \
	DECLARE_FUNCTION(execClearHistory); \
	DECLARE_FUNCTION(execSetIconSet); \
	DECLARE_FUNCTION(execInitializeIconSet); \
	DECLARE_FUNCTION(execInitialize);


#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferComponent_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMatchCommand); \
	DECLARE_FUNCTION(execMatchEvents); \
	DECLARE_FUNCTION(execSetHistoryRecords); \
	DECLARE_FUNCTION(execGetHistoryRecords); \
	DECLARE_FUNCTION(execGetLastEvents); \
	DECLARE_FUNCTION(execGetCurrentEvents); \
	DECLARE_FUNCTION(execPrint); \
	DECLARE_FUNCTION(execInvalidateHistory); \
	DECLARE_FUNCTION(execClearHistory); \
	DECLARE_FUNCTION(execSetIconSet); \
	DECLARE_FUNCTION(execInitializeIconSet); \
	DECLARE_FUNCTION(execInitialize);


#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferComponent_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputBufferComponent(); \
	friend struct Z_Construct_UClass_UInputBufferComponent_Statics; \
public: \
	DECLARE_CLASS(UInputBufferComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InputBuffer"), NO_API) \
	DECLARE_SERIALIZER(UInputBufferComponent)


#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferComponent_h_123_INCLASS \
private: \
	static void StaticRegisterNativesUInputBufferComponent(); \
	friend struct Z_Construct_UClass_UInputBufferComponent_Statics; \
public: \
	DECLARE_CLASS(UInputBufferComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InputBuffer"), NO_API) \
	DECLARE_SERIALIZER(UInputBufferComponent)


#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferComponent_h_123_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputBufferComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputBufferComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputBufferComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputBufferComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputBufferComponent(UInputBufferComponent&&); \
	NO_API UInputBufferComponent(const UInputBufferComponent&); \
public:


#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferComponent_h_123_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputBufferComponent(UInputBufferComponent&&); \
	NO_API UInputBufferComponent(const UInputBufferComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputBufferComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputBufferComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputBufferComponent)


#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferComponent_h_123_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IconSet() { return STRUCT_OFFSET(UInputBufferComponent, IconSet); }


#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferComponent_h_120_PROLOG
#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferComponent_h_123_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferComponent_h_123_PRIVATE_PROPERTY_OFFSET \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferComponent_h_123_SPARSE_DATA \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferComponent_h_123_RPC_WRAPPERS \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferComponent_h_123_INCLASS \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferComponent_h_123_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferComponent_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferComponent_h_123_PRIVATE_PROPERTY_OFFSET \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferComponent_h_123_SPARSE_DATA \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferComponent_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferComponent_h_123_INCLASS_NO_PURE_DECLS \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferComponent_h_123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INPUTBUFFER_API UClass* StaticClass<class UInputBufferComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferComponent_h


#define FOREACH_ENUM_EBUFFEREDINPUTEVENTTYPE(op) \
	op(EBufferedInputEventType::Pressed) \
	op(EBufferedInputEventType::Released) \
	op(EBufferedInputEventType::Held) 

enum class EBufferedInputEventType : uint8;
template<> INPUTBUFFER_API UEnum* StaticEnum<EBufferedInputEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
