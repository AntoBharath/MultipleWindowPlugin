// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMultipleViewport_init() {}
	RUNTIMEMULTIPLEVIEWPORT_API UFunction* Z_Construct_UDelegateFunction_RuntimeMultipleViewport_WindowCreatedDelegate__DelegateSignature();
	RUNTIMEMULTIPLEVIEWPORT_API UFunction* Z_Construct_UDelegateFunction_RuntimeMultipleViewport_WindowDestroyedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RuntimeMultipleViewport;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RuntimeMultipleViewport()
	{
		if (!Z_Registration_Info_UPackage__Script_RuntimeMultipleViewport.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_RuntimeMultipleViewport_WindowCreatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RuntimeMultipleViewport_WindowDestroyedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RuntimeMultipleViewport",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x54341DB7,
				0x369809E6,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RuntimeMultipleViewport.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RuntimeMultipleViewport.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RuntimeMultipleViewport(Z_Construct_UPackage__Script_RuntimeMultipleViewport, TEXT("/Script/RuntimeMultipleViewport"), Z_Registration_Info_UPackage__Script_RuntimeMultipleViewport, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x54341DB7, 0x369809E6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
