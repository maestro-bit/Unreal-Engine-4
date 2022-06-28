// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownShooter/Weapons/WeaponDefault.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponDefault() {}
// Cross Module References
	TOPDOWNSHOOTER_API UFunction* Z_Construct_UDelegateFunction_TopDownShooter_OnWeaponReloadEnd__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TopDownShooter();
	TOPDOWNSHOOTER_API UFunction* Z_Construct_UDelegateFunction_TopDownShooter_OnWeaponReloadStart__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	TOPDOWNSHOOTER_API UClass* Z_Construct_UClass_AWeaponDefault_NoRegister();
	TOPDOWNSHOOTER_API UClass* Z_Construct_UClass_AWeaponDefault();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	TOPDOWNSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponInfo();
	TOPDOWNSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FAddicionalWeaponInfo();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TopDownShooter_OnWeaponReloadEnd__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TopDownShooter_OnWeaponReloadEnd__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/WeaponDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TopDownShooter_OnWeaponReloadEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TopDownShooter, nullptr, "OnWeaponReloadEnd__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TopDownShooter_OnWeaponReloadEnd__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TopDownShooter_OnWeaponReloadEnd__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TopDownShooter_OnWeaponReloadEnd__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TopDownShooter_OnWeaponReloadEnd__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TopDownShooter_OnWeaponReloadStart__DelegateSignature_Statics
	{
		struct _Script_TopDownShooter_eventOnWeaponReloadStart_Parms
		{
			UAnimMontage* Anim;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Anim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TopDownShooter_OnWeaponReloadStart__DelegateSignature_Statics::NewProp_Anim = { "Anim", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TopDownShooter_eventOnWeaponReloadStart_Parms, Anim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TopDownShooter_OnWeaponReloadStart__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TopDownShooter_OnWeaponReloadStart__DelegateSignature_Statics::NewProp_Anim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TopDownShooter_OnWeaponReloadStart__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWeaponFireStart);//ToDo Delegate on event weapon fire - Anim char, state char...\n" },
		{ "ModuleRelativePath", "Weapons/WeaponDefault.h" },
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWeaponFireStart);ToDo Delegate on event weapon fire - Anim char, state char..." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TopDownShooter_OnWeaponReloadStart__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TopDownShooter, nullptr, "OnWeaponReloadStart__DelegateSignature", nullptr, nullptr, sizeof(_Script_TopDownShooter_eventOnWeaponReloadStart_Parms), Z_Construct_UDelegateFunction_TopDownShooter_OnWeaponReloadStart__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TopDownShooter_OnWeaponReloadStart__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TopDownShooter_OnWeaponReloadStart__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TopDownShooter_OnWeaponReloadStart__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TopDownShooter_OnWeaponReloadStart__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TopDownShooter_OnWeaponReloadStart__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AWeaponDefault::execGetWeaponRound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWeaponRound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponDefault::execSetWeaponStateFire)
	{
		P_GET_UBOOL(Z_Param_bIsFire);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWeaponStateFire(Z_Param_bIsFire);
		P_NATIVE_END;
	}
	void AWeaponDefault::StaticRegisterNativesAWeaponDefault()
	{
		UClass* Class = AWeaponDefault::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWeaponRound", &AWeaponDefault::execGetWeaponRound },
			{ "SetWeaponStateFire", &AWeaponDefault::execSetWeaponStateFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeaponDefault_GetWeaponRound_Statics
	{
		struct WeaponDefault_eventGetWeaponRound_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWeaponDefault_GetWeaponRound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponDefault_eventGetWeaponRound_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponDefault_GetWeaponRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponDefault_GetWeaponRound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponDefault_GetWeaponRound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/WeaponDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponDefault_GetWeaponRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponDefault, nullptr, "GetWeaponRound", nullptr, nullptr, sizeof(WeaponDefault_eventGetWeaponRound_Parms), Z_Construct_UFunction_AWeaponDefault_GetWeaponRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponDefault_GetWeaponRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponDefault_GetWeaponRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponDefault_GetWeaponRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponDefault_GetWeaponRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponDefault_GetWeaponRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics
	{
		struct WeaponDefault_eventSetWeaponStateFire_Parms
		{
			bool bIsFire;
		};
		static void NewProp_bIsFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFire;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics::NewProp_bIsFire_SetBit(void* Obj)
	{
		((WeaponDefault_eventSetWeaponStateFire_Parms*)Obj)->bIsFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics::NewProp_bIsFire = { "bIsFire", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponDefault_eventSetWeaponStateFire_Parms), &Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics::NewProp_bIsFire_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics::NewProp_bIsFire,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/WeaponDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponDefault, nullptr, "SetWeaponStateFire", nullptr, nullptr, sizeof(WeaponDefault_eventSetWeaponStateFire_Parms), Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeaponDefault_NoRegister()
	{
		return AWeaponDefault::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponDefault_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShootLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponFiring_MetaData[];
#endif
		static void NewProp_WeaponFiring_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponFiring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponReloading_MetaData[];
#endif
		static void NewProp_WeaponReloading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponReloading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowDebug_MetaData[];
#endif
		static void NewProp_ShowDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeVectorToChangeShootDirectionLogic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SizeVectorToChangeShootDirectionLogic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponDefault_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeaponDefault_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponDefault_GetWeaponRound, "GetWeaponRound" }, // 1192348608
		{ &Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire, "SetWeaponStateFire" }, // 1608275549
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponDefault_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/WeaponDefault.h" },
		{ "ModuleRelativePath", "Weapons/WeaponDefault.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponDefault_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/WeaponDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponDefault_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponDefault, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponDefault_Statics::NewProp_SkeletalMeshWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/WeaponDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponDefault_Statics::NewProp_SkeletalMeshWeapon = { "SkeletalMeshWeapon", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponDefault, SkeletalMeshWeapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_SkeletalMeshWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_SkeletalMeshWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponDefault_Statics::NewProp_StaticMeshWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/WeaponDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponDefault_Statics::NewProp_StaticMeshWeapon = { "StaticMeshWeapon", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponDefault, StaticMeshWeapon), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_StaticMeshWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_StaticMeshWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ShootLocation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/WeaponDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ShootLocation = { "ShootLocation", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponDefault, ShootLocation), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ShootLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ShootLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponSetting_MetaData[] = {
		{ "ModuleRelativePath", "Weapons/WeaponDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponSetting = { "WeaponSetting", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponDefault, WeaponSetting), Z_Construct_UScriptStruct_FWeaponInfo, METADATA_PARAMS(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponInfo_MetaData[] = {
		{ "Category", "Weapon Info" },
		{ "ModuleRelativePath", "Weapons/WeaponDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponInfo = { "WeaponInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponDefault, WeaponInfo), Z_Construct_UScriptStruct_FAddicionalWeaponInfo, METADATA_PARAMS(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponFiring_MetaData[] = {
		{ "Category", "FireLogic" },
		{ "ModuleRelativePath", "Weapons/WeaponDefault.h" },
	};
#endif
	void Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponFiring_SetBit(void* Obj)
	{
		((AWeaponDefault*)Obj)->WeaponFiring = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponFiring = { "WeaponFiring", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeaponDefault), &Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponFiring_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponFiring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponFiring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponReloading_MetaData[] = {
		{ "Category", "ReloadLogic" },
		{ "ModuleRelativePath", "Weapons/WeaponDefault.h" },
	};
#endif
	void Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponReloading_SetBit(void* Obj)
	{
		((AWeaponDefault*)Obj)->WeaponReloading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponReloading = { "WeaponReloading", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeaponDefault), &Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponReloading_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponReloading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponReloading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ReloadTimer_MetaData[] = {
		{ "Category", "ReloadLogic" },
		{ "ModuleRelativePath", "Weapons/WeaponDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ReloadTimer = { "ReloadTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponDefault, ReloadTimer), METADATA_PARAMS(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ReloadTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ReloadTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ReloadTime_MetaData[] = {
		{ "Category", "ReloadLogic Debug" },
		{ "Comment", "//Remove !!! Debug\n" },
		{ "ModuleRelativePath", "Weapons/WeaponDefault.h" },
		{ "ToolTip", "Remove !!! Debug" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ReloadTime = { "ReloadTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponDefault, ReloadTime), METADATA_PARAMS(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ReloadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ReloadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ShowDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Weapons/WeaponDefault.h" },
	};
#endif
	void Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ShowDebug_SetBit(void* Obj)
	{
		((AWeaponDefault*)Obj)->ShowDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ShowDebug = { "ShowDebug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeaponDefault), &Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ShowDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ShowDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ShowDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponDefault_Statics::NewProp_SizeVectorToChangeShootDirectionLogic_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Weapons/WeaponDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponDefault_Statics::NewProp_SizeVectorToChangeShootDirectionLogic = { "SizeVectorToChangeShootDirectionLogic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponDefault, SizeVectorToChangeShootDirectionLogic), METADATA_PARAMS(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_SizeVectorToChangeShootDirectionLogic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_SizeVectorToChangeShootDirectionLogic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponDefault_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponDefault_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponDefault_Statics::NewProp_SkeletalMeshWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponDefault_Statics::NewProp_StaticMeshWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ShootLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponFiring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponReloading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ReloadTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ReloadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ShowDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponDefault_Statics::NewProp_SizeVectorToChangeShootDirectionLogic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponDefault_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponDefault>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponDefault_Statics::ClassParams = {
		&AWeaponDefault::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeaponDefault_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDefault_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponDefault_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDefault_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponDefault()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponDefault_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponDefault, 753466860);
	template<> TOPDOWNSHOOTER_API UClass* StaticClass<AWeaponDefault>()
	{
		return AWeaponDefault::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponDefault(Z_Construct_UClass_AWeaponDefault, &AWeaponDefault::StaticClass, TEXT("/Script/TopDownShooter"), TEXT("AWeaponDefault"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponDefault);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
