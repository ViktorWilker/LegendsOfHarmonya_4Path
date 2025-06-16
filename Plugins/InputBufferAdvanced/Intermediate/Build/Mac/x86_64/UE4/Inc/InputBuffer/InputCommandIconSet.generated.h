// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INPUTBUFFER_InputCommandIconSet_generated_h
#error "InputCommandIconSet.generated.h already included, missing '#pragma once' in InputCommandIconSet.h"
#endif
#define INPUTBUFFER_InputCommandIconSet_generated_h

#define HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBitFlagsWithIndex_Statics; \
	INPUTBUFFER_API static class UScriptStruct* StaticStruct();


template<> INPUTBUFFER_API UScriptStruct* StaticStruct<struct FBitFlagsWithIndex>();

#define HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputCommandIconGroup_Statics; \
	INPUTBUFFER_API static class UScriptStruct* StaticStruct();


template<> INPUTBUFFER_API UScriptStruct* StaticStruct<struct FInputCommandIconGroup>();

#define HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputCommandIcon_Statics; \
	INPUTBUFFER_API static class UScriptStruct* StaticStruct();


template<> INPUTBUFFER_API UScriptStruct* StaticStruct<struct FInputCommandIcon>();

#define HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBufferedInputEventArray_Statics; \
	INPUTBUFFER_API static class UScriptStruct* StaticStruct();


template<> INPUTBUFFER_API UScriptStruct* StaticStruct<struct FBufferedInputEventArray>();

#define HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h_102_SPARSE_DATA
#define HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h_102_RPC_WRAPPERS
#define HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h_102_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputCommandIconSet(); \
	friend struct Z_Construct_UClass_UInputCommandIconSet_Statics; \
public: \
	DECLARE_CLASS(UInputCommandIconSet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InputBuffer"), NO_API) \
	DECLARE_SERIALIZER(UInputCommandIconSet) \
	virtual UObject* _getUObject() const override { return const_cast<UInputCommandIconSet*>(this); }


#define HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h_102_INCLASS \
private: \
	static void StaticRegisterNativesUInputCommandIconSet(); \
	friend struct Z_Construct_UClass_UInputCommandIconSet_Statics; \
public: \
	DECLARE_CLASS(UInputCommandIconSet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InputBuffer"), NO_API) \
	DECLARE_SERIALIZER(UInputCommandIconSet) \
	virtual UObject* _getUObject() const override { return const_cast<UInputCommandIconSet*>(this); }


#define HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h_102_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputCommandIconSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputCommandIconSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputCommandIconSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputCommandIconSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputCommandIconSet(UInputCommandIconSet&&); \
	NO_API UInputCommandIconSet(const UInputCommandIconSet&); \
public:


#define HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h_102_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputCommandIconSet(UInputCommandIconSet&&); \
	NO_API UInputCommandIconSet(const UInputCommandIconSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputCommandIconSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputCommandIconSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputCommandIconSet)


#define HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h_102_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bNeedUpdateIconMap() { return STRUCT_OFFSET(UInputCommandIconSet, bNeedUpdateIconMap); } \
	FORCEINLINE static uint32 __PPO__RefGroupCount() { return STRUCT_OFFSET(UInputCommandIconSet, RefGroupCount); } \
	FORCEINLINE static uint32 __PPO__EmptyEventIconIndex() { return STRUCT_OFFSET(UInputCommandIconSet, EmptyEventIconIndex); } \
	FORCEINLINE static uint32 __PPO__EventIndexMap() { return STRUCT_OFFSET(UInputCommandIconSet, EventIndexMap); } \
	FORCEINLINE static uint32 __PPO__EventToIconIndices() { return STRUCT_OFFSET(UInputCommandIconSet, EventToIconIndices); } \
	FORCEINLINE static uint32 __PPO__EventsToIconIndexMap() { return STRUCT_OFFSET(UInputCommandIconSet, EventsToIconIndexMap); } \
	FORCEINLINE static uint32 __PPO__EntriesToIconIndices() { return STRUCT_OFFSET(UInputCommandIconSet, EntriesToIconIndices); }


#define HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h_99_PROLOG
#define HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h_102_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h_102_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h_102_SPARSE_DATA \
	HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h_102_RPC_WRAPPERS \
	HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h_102_INCLASS \
	HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h_102_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h_102_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h_102_SPARSE_DATA \
	HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h_102_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INPUTBUFFER_API UClass* StaticClass<class UInputCommandIconSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputCommandIconSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
