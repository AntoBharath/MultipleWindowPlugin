// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyBlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMyBlueprintFunctionLibrary;
class UUserWidget;
#ifdef RUNTIMEMULTIPLEVIEWPORT_MyBlueprintFunctionLibrary_generated_h
#error "MyBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in MyBlueprintFunctionLibrary.h"
#endif
#define RUNTIMEMULTIPLEVIEWPORT_MyBlueprintFunctionLibrary_generated_h

#define FID_MultipleWindowPlugin_Plugins_RuntimeMultipleViewport_Source_RuntimeMultipleViewport_Public_MyBlueprintFunctionLibrary_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOutValue_Statics; \
	RUNTIMEMULTIPLEVIEWPORT_API static class UScriptStruct* StaticStruct();


template<> RUNTIMEMULTIPLEVIEWPORT_API UScriptStruct* StaticStruct<struct FOutValue>();

#define FID_MultipleWindowPlugin_Plugins_RuntimeMultipleViewport_Source_RuntimeMultipleViewport_Public_MyBlueprintFunctionLibrary_h_36_DELEGATE \
RUNTIMEMULTIPLEVIEWPORT_API void FWindowCreatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& WindowCreatedDelegate);


#define FID_MultipleWindowPlugin_Plugins_RuntimeMultipleViewport_Source_RuntimeMultipleViewport_Public_MyBlueprintFunctionLibrary_h_37_DELEGATE \
RUNTIMEMULTIPLEVIEWPORT_API void FWindowDestroyedDelegate_DelegateWrapper(const FMulticastScriptDelegate& WindowDestroyedDelegate);


#define FID_MultipleWindowPlugin_Plugins_RuntimeMultipleViewport_Source_RuntimeMultipleViewport_Public_MyBlueprintFunctionLibrary_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCustomWindowDestroyed); \
	DECLARE_FUNCTION(execCustomWindowCreated); \
	DECLARE_FUNCTION(execDestroyCreatedWindow); \
	DECLARE_FUNCTION(execWindowDrawnCallDelegate); \
	DECLARE_FUNCTION(execDrawWindow);


#define FID_MultipleWindowPlugin_Plugins_RuntimeMultipleViewport_Source_RuntimeMultipleViewport_Public_MyBlueprintFunctionLibrary_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMyBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMultipleViewport"), NO_API) \
	DECLARE_SERIALIZER(UMyBlueprintFunctionLibrary)


#define FID_MultipleWindowPlugin_Plugins_RuntimeMultipleViewport_Source_RuntimeMultipleViewport_Public_MyBlueprintFunctionLibrary_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyBlueprintFunctionLibrary(UMyBlueprintFunctionLibrary&&); \
	UMyBlueprintFunctionLibrary(const UMyBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyBlueprintFunctionLibrary) \
	NO_API virtual ~UMyBlueprintFunctionLibrary();


#define FID_MultipleWindowPlugin_Plugins_RuntimeMultipleViewport_Source_RuntimeMultipleViewport_Public_MyBlueprintFunctionLibrary_h_43_PROLOG
#define FID_MultipleWindowPlugin_Plugins_RuntimeMultipleViewport_Source_RuntimeMultipleViewport_Public_MyBlueprintFunctionLibrary_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultipleWindowPlugin_Plugins_RuntimeMultipleViewport_Source_RuntimeMultipleViewport_Public_MyBlueprintFunctionLibrary_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MultipleWindowPlugin_Plugins_RuntimeMultipleViewport_Source_RuntimeMultipleViewport_Public_MyBlueprintFunctionLibrary_h_46_INCLASS_NO_PURE_DECLS \
	FID_MultipleWindowPlugin_Plugins_RuntimeMultipleViewport_Source_RuntimeMultipleViewport_Public_MyBlueprintFunctionLibrary_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEMULTIPLEVIEWPORT_API UClass* StaticClass<class UMyBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultipleWindowPlugin_Plugins_RuntimeMultipleViewport_Source_RuntimeMultipleViewport_Public_MyBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
