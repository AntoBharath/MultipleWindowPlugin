// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMultipleViewport/Public/MyBlueprintFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBlueprintFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
RUNTIMEMULTIPLEVIEWPORT_API UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary();
RUNTIMEMULTIPLEVIEWPORT_API UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister();
RUNTIMEMULTIPLEVIEWPORT_API UFunction* Z_Construct_UDelegateFunction_RuntimeMultipleViewport_WindowCreatedDelegate__DelegateSignature();
RUNTIMEMULTIPLEVIEWPORT_API UFunction* Z_Construct_UDelegateFunction_RuntimeMultipleViewport_WindowDestroyedDelegate__DelegateSignature();
RUNTIMEMULTIPLEVIEWPORT_API UScriptStruct* Z_Construct_UScriptStruct_FOutValue();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_RuntimeMultipleViewport();
// End Cross Module References

// Begin ScriptStruct FOutValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OutValue;
class UScriptStruct* FOutValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OutValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OutValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOutValue, (UObject*)Z_Construct_UPackage__Script_RuntimeMultipleViewport(), TEXT("OutValue"));
	}
	return Z_Registration_Info_UScriptStruct_OutValue.OuterSingleton;
}
template<> RUNTIMEMULTIPLEVIEWPORT_API UScriptStruct* StaticStruct<FOutValue>()
{
	return FOutValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOutValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowObject_MetaData[] = {
		{ "Category", "OutValue" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "Category", "Runtime Window" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedWidget_MetaData[] = {
		{ "Category", "Runtime Window" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WindowObject;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOutValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOutValue_Statics::NewProp_WindowObject = { "WindowObject", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOutValue, WindowObject), Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowObject_MetaData), NewProp_WindowObject_MetaData) };
void Z_Construct_UScriptStruct_FOutValue_Statics::NewProp_Success_SetBit(void* Obj)
{
	((FOutValue*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOutValue_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOutValue), &Z_Construct_UScriptStruct_FOutValue_Statics::NewProp_Success_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOutValue_Statics::NewProp_CreatedWidget = { "CreatedWidget", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOutValue, CreatedWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedWidget_MetaData), NewProp_CreatedWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOutValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutValue_Statics::NewProp_WindowObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutValue_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutValue_Statics::NewProp_CreatedWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOutValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMultipleViewport,
	nullptr,
	&NewStructOps,
	"OutValue",
	Z_Construct_UScriptStruct_FOutValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutValue_Statics::PropPointers),
	sizeof(FOutValue),
	alignof(FOutValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOutValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOutValue()
{
	if (!Z_Registration_Info_UScriptStruct_OutValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OutValue.InnerSingleton, Z_Construct_UScriptStruct_FOutValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OutValue.InnerSingleton;
}
// End ScriptStruct FOutValue

// Begin Delegate FWindowCreatedDelegate
struct Z_Construct_UDelegateFunction_RuntimeMultipleViewport_WindowCreatedDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeMultipleViewport_WindowCreatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeMultipleViewport, nullptr, "WindowCreatedDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeMultipleViewport_WindowCreatedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeMultipleViewport_WindowCreatedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_RuntimeMultipleViewport_WindowCreatedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeMultipleViewport_WindowCreatedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWindowCreatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& WindowCreatedDelegate)
{
	WindowCreatedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FWindowCreatedDelegate

// Begin Delegate FWindowDestroyedDelegate
struct Z_Construct_UDelegateFunction_RuntimeMultipleViewport_WindowDestroyedDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeMultipleViewport_WindowDestroyedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeMultipleViewport, nullptr, "WindowDestroyedDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeMultipleViewport_WindowDestroyedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeMultipleViewport_WindowDestroyedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_RuntimeMultipleViewport_WindowDestroyedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeMultipleViewport_WindowDestroyedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWindowDestroyedDelegate_DelegateWrapper(const FMulticastScriptDelegate& WindowDestroyedDelegate)
{
	WindowDestroyedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FWindowDestroyedDelegate

// Begin Class UMyBlueprintFunctionLibrary Function CustomWindowCreated
struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CustomWindowCreated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Window" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CustomWindowCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "CustomWindowCreated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CustomWindowCreated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CustomWindowCreated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CustomWindowCreated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CustomWindowCreated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyBlueprintFunctionLibrary::execCustomWindowCreated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UMyBlueprintFunctionLibrary::CustomWindowCreated();
	P_NATIVE_END;
}
// End Class UMyBlueprintFunctionLibrary Function CustomWindowCreated

// Begin Class UMyBlueprintFunctionLibrary Function CustomWindowDestroyed
struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CustomWindowDestroyed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Window" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CustomWindowDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "CustomWindowDestroyed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CustomWindowDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CustomWindowDestroyed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CustomWindowDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CustomWindowDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyBlueprintFunctionLibrary::execCustomWindowDestroyed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UMyBlueprintFunctionLibrary::CustomWindowDestroyed();
	P_NATIVE_END;
}
// End Class UMyBlueprintFunctionLibrary Function CustomWindowDestroyed

// Begin Class UMyBlueprintFunctionLibrary Function DestroyCreatedWindow
struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DestroyCreatedWindow_Statics
{
	struct MyBlueprintFunctionLibrary_eventDestroyCreatedWindow_Parms
	{
		UMyBlueprintFunctionLibrary* WindowObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Window" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WindowObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DestroyCreatedWindow_Statics::NewProp_WindowObject = { "WindowObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventDestroyCreatedWindow_Parms, WindowObject), Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DestroyCreatedWindow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MyBlueprintFunctionLibrary_eventDestroyCreatedWindow_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DestroyCreatedWindow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyBlueprintFunctionLibrary_eventDestroyCreatedWindow_Parms), &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DestroyCreatedWindow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DestroyCreatedWindow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DestroyCreatedWindow_Statics::NewProp_WindowObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DestroyCreatedWindow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DestroyCreatedWindow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DestroyCreatedWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "DestroyCreatedWindow", nullptr, nullptr, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DestroyCreatedWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DestroyCreatedWindow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DestroyCreatedWindow_Statics::MyBlueprintFunctionLibrary_eventDestroyCreatedWindow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DestroyCreatedWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DestroyCreatedWindow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DestroyCreatedWindow_Statics::MyBlueprintFunctionLibrary_eventDestroyCreatedWindow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DestroyCreatedWindow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DestroyCreatedWindow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyBlueprintFunctionLibrary::execDestroyCreatedWindow)
{
	P_GET_OBJECT(UMyBlueprintFunctionLibrary,Z_Param_WindowObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMyBlueprintFunctionLibrary::DestroyCreatedWindow(Z_Param_WindowObject);
	P_NATIVE_END;
}
// End Class UMyBlueprintFunctionLibrary Function DestroyCreatedWindow

// Begin Class UMyBlueprintFunctionLibrary Function DrawWindow
struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics
{
	struct MyBlueprintFunctionLibrary_eventDrawWindow_Parms
	{
		UUserWidget* CreatedWidget;
		FVector2D WindowResolution;
		bool HasWindowTitle;
		float Opacity;
		FText TitleBarName;
		bool Maximized;
		bool CanDrag;
		UMyBlueprintFunctionLibrary* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Window" },
		{ "CPP_Default_CanDrag", "true" },
		{ "CPP_Default_CreatedWidget", "None" },
		{ "CPP_Default_HasWindowTitle", "true" },
		{ "CPP_Default_Maximized", "false" },
		{ "CPP_Default_Opacity", "1.000000" },
		{ "CPP_Default_TitleBarName", "" },
		{ "CPP_Default_WindowResolution", "(X=1280.000,Y=720.000)" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedWidget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WindowResolution;
	static void NewProp_HasWindowTitle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasWindowTitle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Opacity;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TitleBarName;
	static void NewProp_Maximized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Maximized;
	static void NewProp_CanDrag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanDrag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::NewProp_CreatedWidget = { "CreatedWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventDrawWindow_Parms, CreatedWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedWidget_MetaData), NewProp_CreatedWidget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::NewProp_WindowResolution = { "WindowResolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventDrawWindow_Parms, WindowResolution), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::NewProp_HasWindowTitle_SetBit(void* Obj)
{
	((MyBlueprintFunctionLibrary_eventDrawWindow_Parms*)Obj)->HasWindowTitle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::NewProp_HasWindowTitle = { "HasWindowTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyBlueprintFunctionLibrary_eventDrawWindow_Parms), &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::NewProp_HasWindowTitle_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventDrawWindow_Parms, Opacity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::NewProp_TitleBarName = { "TitleBarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventDrawWindow_Parms, TitleBarName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::NewProp_Maximized_SetBit(void* Obj)
{
	((MyBlueprintFunctionLibrary_eventDrawWindow_Parms*)Obj)->Maximized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::NewProp_Maximized = { "Maximized", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyBlueprintFunctionLibrary_eventDrawWindow_Parms), &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::NewProp_Maximized_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::NewProp_CanDrag_SetBit(void* Obj)
{
	((MyBlueprintFunctionLibrary_eventDrawWindow_Parms*)Obj)->CanDrag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::NewProp_CanDrag = { "CanDrag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyBlueprintFunctionLibrary_eventDrawWindow_Parms), &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::NewProp_CanDrag_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventDrawWindow_Parms, ReturnValue), Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::NewProp_CreatedWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::NewProp_WindowResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::NewProp_HasWindowTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::NewProp_Opacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::NewProp_TitleBarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::NewProp_Maximized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::NewProp_CanDrag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "DrawWindow", nullptr, nullptr, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::MyBlueprintFunctionLibrary_eventDrawWindow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::MyBlueprintFunctionLibrary_eventDrawWindow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyBlueprintFunctionLibrary::execDrawWindow)
{
	P_GET_OBJECT(UUserWidget,Z_Param_CreatedWidget);
	P_GET_STRUCT(FVector2D,Z_Param_WindowResolution);
	P_GET_UBOOL(Z_Param_HasWindowTitle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Opacity);
	P_GET_PROPERTY(FTextProperty,Z_Param_TitleBarName);
	P_GET_UBOOL(Z_Param_Maximized);
	P_GET_UBOOL(Z_Param_CanDrag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMyBlueprintFunctionLibrary**)Z_Param__Result=UMyBlueprintFunctionLibrary::DrawWindow(Z_Param_CreatedWidget,Z_Param_WindowResolution,Z_Param_HasWindowTitle,Z_Param_Opacity,Z_Param_TitleBarName,Z_Param_Maximized,Z_Param_CanDrag);
	P_NATIVE_END;
}
// End Class UMyBlueprintFunctionLibrary Function DrawWindow

// Begin Class UMyBlueprintFunctionLibrary Function WindowDrawnCallDelegate
struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_WindowDrawnCallDelegate_Statics
{
	struct MyBlueprintFunctionLibrary_eventWindowDrawnCallDelegate_Parms
	{
		UMyBlueprintFunctionLibrary* WindowObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Window" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WindowObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_WindowDrawnCallDelegate_Statics::NewProp_WindowObject = { "WindowObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventWindowDrawnCallDelegate_Parms, WindowObject), Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMyBlueprintFunctionLibrary_WindowDrawnCallDelegate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MyBlueprintFunctionLibrary_eventWindowDrawnCallDelegate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_WindowDrawnCallDelegate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyBlueprintFunctionLibrary_eventWindowDrawnCallDelegate_Parms), &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_WindowDrawnCallDelegate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_WindowDrawnCallDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_WindowDrawnCallDelegate_Statics::NewProp_WindowObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_WindowDrawnCallDelegate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_WindowDrawnCallDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_WindowDrawnCallDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "WindowDrawnCallDelegate", nullptr, nullptr, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_WindowDrawnCallDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_WindowDrawnCallDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_WindowDrawnCallDelegate_Statics::MyBlueprintFunctionLibrary_eventWindowDrawnCallDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_WindowDrawnCallDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_WindowDrawnCallDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_WindowDrawnCallDelegate_Statics::MyBlueprintFunctionLibrary_eventWindowDrawnCallDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_WindowDrawnCallDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_WindowDrawnCallDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyBlueprintFunctionLibrary::execWindowDrawnCallDelegate)
{
	P_GET_OBJECT(UMyBlueprintFunctionLibrary,Z_Param_WindowObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMyBlueprintFunctionLibrary::WindowDrawnCallDelegate(Z_Param_WindowObject);
	P_NATIVE_END;
}
// End Class UMyBlueprintFunctionLibrary Function WindowDrawnCallDelegate

// Begin Class UMyBlueprintFunctionLibrary
void UMyBlueprintFunctionLibrary::StaticRegisterNativesUMyBlueprintFunctionLibrary()
{
	UClass* Class = UMyBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CustomWindowCreated", &UMyBlueprintFunctionLibrary::execCustomWindowCreated },
		{ "CustomWindowDestroyed", &UMyBlueprintFunctionLibrary::execCustomWindowDestroyed },
		{ "DestroyCreatedWindow", &UMyBlueprintFunctionLibrary::execDestroyCreatedWindow },
		{ "DrawWindow", &UMyBlueprintFunctionLibrary::execDrawWindow },
		{ "WindowDrawnCallDelegate", &UMyBlueprintFunctionLibrary::execWindowDrawnCallDelegate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBlueprintFunctionLibrary);
UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister()
{
	return UMyBlueprintFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MyBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWindowCreated_MetaData[] = {
		{ "Category", "Runtime Window" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWindowDestroyed_MetaData[] = {
		{ "Category", "Runtime Window" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowInfoStruct_MetaData[] = {
		{ "Category", "Runtime Window" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWindowCreated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWindowDestroyed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WindowInfoStruct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CustomWindowCreated, "CustomWindowCreated" }, // 3472316402
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CustomWindowDestroyed, "CustomWindowDestroyed" }, // 88770162
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DestroyCreatedWindow, "DestroyCreatedWindow" }, // 2123607375
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_DrawWindow, "DrawWindow" }, // 2620400383
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_WindowDrawnCallDelegate, "WindowDrawnCallDelegate" }, // 967107488
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::NewProp_OnWindowCreated = { "OnWindowCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBlueprintFunctionLibrary, OnWindowCreated), Z_Construct_UDelegateFunction_RuntimeMultipleViewport_WindowCreatedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWindowCreated_MetaData), NewProp_OnWindowCreated_MetaData) }; // 2856362545
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::NewProp_OnWindowDestroyed = { "OnWindowDestroyed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBlueprintFunctionLibrary, OnWindowDestroyed), Z_Construct_UDelegateFunction_RuntimeMultipleViewport_WindowDestroyedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWindowDestroyed_MetaData), NewProp_OnWindowDestroyed_MetaData) }; // 1574829401
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::NewProp_WindowInfoStruct = { "WindowInfoStruct", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBlueprintFunctionLibrary, WindowInfoStruct), Z_Construct_UScriptStruct_FOutValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowInfoStruct_MetaData), NewProp_WindowInfoStruct_MetaData) }; // 989792335
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::NewProp_OnWindowCreated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::NewProp_OnWindowDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::NewProp_WindowInfoStruct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMultipleViewport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::ClassParams = {
	&UMyBlueprintFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.OuterSingleton;
}
template<> RUNTIMEMULTIPLEVIEWPORT_API UClass* StaticClass<UMyBlueprintFunctionLibrary>()
{
	return UMyBlueprintFunctionLibrary::StaticClass();
}
UMyBlueprintFunctionLibrary::UMyBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBlueprintFunctionLibrary);
UMyBlueprintFunctionLibrary::~UMyBlueprintFunctionLibrary() {}
// End Class UMyBlueprintFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_MultipleWindowPlugin_Plugins_RuntimeMultipleViewport_Source_RuntimeMultipleViewport_Public_MyBlueprintFunctionLibrary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOutValue::StaticStruct, Z_Construct_UScriptStruct_FOutValue_Statics::NewStructOps, TEXT("OutValue"), &Z_Registration_Info_UScriptStruct_OutValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOutValue), 989792335U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyBlueprintFunctionLibrary, UMyBlueprintFunctionLibrary::StaticClass, TEXT("UMyBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBlueprintFunctionLibrary), 2587924363U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultipleWindowPlugin_Plugins_RuntimeMultipleViewport_Source_RuntimeMultipleViewport_Public_MyBlueprintFunctionLibrary_h_727061338(TEXT("/Script/RuntimeMultipleViewport"),
	Z_CompiledInDeferFile_FID_MultipleWindowPlugin_Plugins_RuntimeMultipleViewport_Source_RuntimeMultipleViewport_Public_MyBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultipleWindowPlugin_Plugins_RuntimeMultipleViewport_Source_RuntimeMultipleViewport_Public_MyBlueprintFunctionLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MultipleWindowPlugin_Plugins_RuntimeMultipleViewport_Source_RuntimeMultipleViewport_Public_MyBlueprintFunctionLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultipleWindowPlugin_Plugins_RuntimeMultipleViewport_Source_RuntimeMultipleViewport_Public_MyBlueprintFunctionLibrary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
