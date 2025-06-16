// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputCommand;
struct FVector2D;
class UInputBufferComponent;
#ifdef INPUTBUFFER_InputBufferHUD_generated_h
#error "InputBufferHUD.generated.h already included, missing '#pragma once' in InputBufferHUD.h"
#endif
#define INPUTBUFFER_InputBufferHUD_generated_h

#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferHUD_h_15_SPARSE_DATA
#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferHUD_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDrawInputCommand); \
	DECLARE_FUNCTION(execDrawInputHistory);


#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDrawInputCommand); \
	DECLARE_FUNCTION(execDrawInputHistory);


#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInputBufferHUD(); \
	friend struct Z_Construct_UClass_AInputBufferHUD_Statics; \
public: \
	DECLARE_CLASS(AInputBufferHUD, AHUD, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/InputBuffer"), NO_API) \
	DECLARE_SERIALIZER(AInputBufferHUD)


#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAInputBufferHUD(); \
	friend struct Z_Construct_UClass_AInputBufferHUD_Statics; \
public: \
	DECLARE_CLASS(AInputBufferHUD, AHUD, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/InputBuffer"), NO_API) \
	DECLARE_SERIALIZER(AInputBufferHUD)


#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInputBufferHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInputBufferHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInputBufferHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInputBufferHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInputBufferHUD(AInputBufferHUD&&); \
	NO_API AInputBufferHUD(const AInputBufferHUD&); \
public:


#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInputBufferHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInputBufferHUD(AInputBufferHUD&&); \
	NO_API AInputBufferHUD(const AInputBufferHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInputBufferHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInputBufferHUD); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInputBufferHUD)


#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferHUD_h_15_PRIVATE_PROPERTY_OFFSET
#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferHUD_h_12_PROLOG
#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferHUD_h_15_SPARSE_DATA \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferHUD_h_15_RPC_WRAPPERS \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferHUD_h_15_INCLASS \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferHUD_h_15_SPARSE_DATA \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferHUD_h_15_INCLASS_NO_PURE_DECLS \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INPUTBUFFER_API UClass* StaticClass<class AInputBufferHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
