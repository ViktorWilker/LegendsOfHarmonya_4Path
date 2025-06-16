// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INPUTBUFFER_InputBufferPlayerController_generated_h
#error "InputBufferPlayerController.generated.h already included, missing '#pragma once' in InputBufferPlayerController.h"
#endif
#define INPUTBUFFER_InputBufferPlayerController_generated_h

#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_SPARSE_DATA
#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_RPC_WRAPPERS \
	virtual FName TranslateInputEvent_Implementation(FName Event); \
	virtual void PostBufferInput_Implementation(); \
 \
	DECLARE_FUNCTION(execTranslateInputEvent); \
	DECLARE_FUNCTION(execPostBufferInput);


#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FName TranslateInputEvent_Implementation(FName Event); \
	virtual void PostBufferInput_Implementation(); \
 \
	DECLARE_FUNCTION(execTranslateInputEvent); \
	DECLARE_FUNCTION(execPostBufferInput);


#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_EVENT_PARMS \
	struct InputBufferPlayerController_eventTranslateInputEvent_Parms \
	{ \
		FName Event; \
		FName ReturnValue; \
	};


#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_CALLBACK_WRAPPERS
#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInputBufferPlayerController(); \
	friend struct Z_Construct_UClass_AInputBufferPlayerController_Statics; \
public: \
	DECLARE_CLASS(AInputBufferPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InputBuffer"), NO_API) \
	DECLARE_SERIALIZER(AInputBufferPlayerController)


#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAInputBufferPlayerController(); \
	friend struct Z_Construct_UClass_AInputBufferPlayerController_Statics; \
public: \
	DECLARE_CLASS(AInputBufferPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InputBuffer"), NO_API) \
	DECLARE_SERIALIZER(AInputBufferPlayerController)


#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInputBufferPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInputBufferPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInputBufferPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInputBufferPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInputBufferPlayerController(AInputBufferPlayerController&&); \
	NO_API AInputBufferPlayerController(const AInputBufferPlayerController&); \
public:


#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInputBufferPlayerController(AInputBufferPlayerController&&); \
	NO_API AInputBufferPlayerController(const AInputBufferPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInputBufferPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInputBufferPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInputBufferPlayerController)


#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InputBuffer() { return STRUCT_OFFSET(AInputBufferPlayerController, InputBuffer); }


#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_16_PROLOG \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_EVENT_PARMS


#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_PRIVATE_PROPERTY_OFFSET \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_SPARSE_DATA \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_RPC_WRAPPERS \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_CALLBACK_WRAPPERS \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_INCLASS \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_PRIVATE_PROPERTY_OFFSET \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_SPARSE_DATA \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_CALLBACK_WRAPPERS \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INPUTBUFFER_API UClass* StaticClass<class AInputBufferPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Legends_Of_Harmonya_Plugins_InputBufferAdvanced_Source_InputBuffer_Classes_InputBufferPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
