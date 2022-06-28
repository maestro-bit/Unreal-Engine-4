// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownShooter_init() {}
	TOPDOWNSHOOTER_API UFunction* Z_Construct_UDelegateFunction_TopDownShooter_OnWeaponReloadStart__DelegateSignature();
	TOPDOWNSHOOTER_API UFunction* Z_Construct_UDelegateFunction_TopDownShooter_OnWeaponReloadEnd__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TopDownShooter()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TopDownShooter_OnWeaponReloadStart__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TopDownShooter_OnWeaponReloadEnd__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/TopDownShooter",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x27FF54C2,
				0xBC568A9C,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
