// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownShooter/FuncLibrary/Types.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypes() {}
// Cross Module References
	TOPDOWNSHOOTER_API UEnum* Z_Construct_UEnum_TopDownShooter_EMovementState();
	UPackage* Z_Construct_UPackage__Script_TopDownShooter();
	TOPDOWNSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FAddicionalWeaponInfo();
	TOPDOWNSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOPDOWNSHOOTER_API UClass* Z_Construct_UClass_AWeaponDefault_NoRegister();
	TOPDOWNSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponDispersion();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	TOPDOWNSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileInfo();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	TOPDOWNSHOOTER_API UClass* Z_Construct_UClass_AProjectileDefault_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	TOPDOWNSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterSpeed();
	TOPDOWNSHOOTER_API UClass* Z_Construct_UClass_UTypes_NoRegister();
	TOPDOWNSHOOTER_API UClass* Z_Construct_UClass_UTypes();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	static UEnum* EMovementState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TopDownShooter_EMovementState, Z_Construct_UPackage__Script_TopDownShooter(), TEXT("EMovementState"));
		}
		return Singleton;
	}
	template<> TOPDOWNSHOOTER_API UEnum* StaticEnum<EMovementState>()
	{
		return EMovementState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovementState(EMovementState_StaticEnum, TEXT("/Script/TopDownShooter"), TEXT("EMovementState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TopDownShooter_EMovementState_Hash() { return 3471651867U; }
	UEnum* Z_Construct_UEnum_TopDownShooter_EMovementState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TopDownShooter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovementState"), 0, Get_Z_Construct_UEnum_TopDownShooter_EMovementState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovementState::Aim_State", (int64)EMovementState::Aim_State },
				{ "EMovementState::AimWalk_State", (int64)EMovementState::AimWalk_State },
				{ "EMovementState::Walk_State", (int64)EMovementState::Walk_State },
				{ "EMovementState::Run_State", (int64)EMovementState::Run_State },
				{ "EMovementState::SprintRun_State", (int64)EMovementState::SprintRun_State },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aim_State.DisplayName", "Aim State" },
				{ "Aim_State.Name", "EMovementState::Aim_State" },
				{ "AimWalk_State.DisplayName", "AimWalk State" },
				{ "AimWalk_State.Name", "EMovementState::AimWalk_State" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "FuncLibrary/Types.h" },
				{ "Run_State.DisplayName", "Run State" },
				{ "Run_State.Name", "EMovementState::Run_State" },
				{ "SprintRun_State.DisplayName", "SprintRun State" },
				{ "SprintRun_State.Name", "EMovementState::SprintRun_State" },
				{ "Walk_State.DisplayName", "Walk State" },
				{ "Walk_State.Name", "EMovementState::Walk_State" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TopDownShooter,
				nullptr,
				"EMovementState",
				"EMovementState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAddicionalWeaponInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TOPDOWNSHOOTER_API uint32 Get_Z_Construct_UScriptStruct_FAddicionalWeaponInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAddicionalWeaponInfo, Z_Construct_UPackage__Script_TopDownShooter(), TEXT("AddicionalWeaponInfo"), sizeof(FAddicionalWeaponInfo), Get_Z_Construct_UScriptStruct_FAddicionalWeaponInfo_Hash());
	}
	return Singleton;
}
template<> TOPDOWNSHOOTER_API UScriptStruct* StaticStruct<FAddicionalWeaponInfo>()
{
	return FAddicionalWeaponInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAddicionalWeaponInfo(FAddicionalWeaponInfo::StaticStruct, TEXT("/Script/TopDownShooter"), TEXT("AddicionalWeaponInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TopDownShooter_StaticRegisterNativesFAddicionalWeaponInfo
{
	FScriptStruct_TopDownShooter_StaticRegisterNativesFAddicionalWeaponInfo()
	{
		UScriptStruct::DeferCppStructOps<FAddicionalWeaponInfo>(FName(TEXT("AddicionalWeaponInfo")));
	}
} ScriptStruct_TopDownShooter_StaticRegisterNativesFAddicionalWeaponInfo;
	struct Z_Construct_UScriptStruct_FAddicionalWeaponInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Round_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Round;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddicionalWeaponInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAddicionalWeaponInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAddicionalWeaponInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddicionalWeaponInfo_Statics::NewProp_Round_MetaData[] = {
		{ "Category", "Weapon Stats" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAddicionalWeaponInfo_Statics::NewProp_Round = { "Round", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAddicionalWeaponInfo, Round), METADATA_PARAMS(Z_Construct_UScriptStruct_FAddicionalWeaponInfo_Statics::NewProp_Round_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddicionalWeaponInfo_Statics::NewProp_Round_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAddicionalWeaponInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddicionalWeaponInfo_Statics::NewProp_Round,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAddicionalWeaponInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownShooter,
		nullptr,
		&NewStructOps,
		"AddicionalWeaponInfo",
		sizeof(FAddicionalWeaponInfo),
		alignof(FAddicionalWeaponInfo),
		Z_Construct_UScriptStruct_FAddicionalWeaponInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddicionalWeaponInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAddicionalWeaponInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddicionalWeaponInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAddicionalWeaponInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAddicionalWeaponInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TopDownShooter();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AddicionalWeaponInfo"), sizeof(FAddicionalWeaponInfo), Get_Z_Construct_UScriptStruct_FAddicionalWeaponInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAddicionalWeaponInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAddicionalWeaponInfo_Hash() { return 3679306453U; }

static_assert(std::is_polymorphic<FWeaponInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWeaponInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FWeaponInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TOPDOWNSHOOTER_API uint32 Get_Z_Construct_UScriptStruct_FWeaponInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponInfo, Z_Construct_UPackage__Script_TopDownShooter(), TEXT("WeaponInfo"), sizeof(FWeaponInfo), Get_Z_Construct_UScriptStruct_FWeaponInfo_Hash());
	}
	return Singleton;
}
template<> TOPDOWNSHOOTER_API UScriptStruct* StaticStruct<FWeaponInfo>()
{
	return FWeaponInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponInfo(FWeaponInfo::StaticStruct, TEXT("/Script/TopDownShooter"), TEXT("WeaponInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TopDownShooter_StaticRegisterNativesFWeaponInfo
{
	FScriptStruct_TopDownShooter_StaticRegisterNativesFWeaponInfo()
	{
		UScriptStruct::DeferCppStructOps<FWeaponInfo>(FName(TEXT("WeaponInfo")));
	}
} ScriptStruct_TopDownShooter_StaticRegisterNativesFWeaponInfo;
	struct Z_Construct_UScriptStruct_FWeaponInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateOfFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RateOfFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRound_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxRound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberProjectileByShot_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberProjectileByShot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DispersionWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DispersionWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundFireWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundFireWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundReloadWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundReloadWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectFireWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectFireWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectileSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistacneTrace_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistacneTrace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalOnHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalOnHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimCharFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimCharFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimCharReload_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimCharReload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MagazineDrop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShellBullets_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShellBullets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponClass_MetaData[] = {
		{ "Category", "Class" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInfo, WeaponClass), Z_Construct_UClass_AWeaponDefault_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_RateOfFire_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_RateOfFire = { "RateOfFire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInfo, RateOfFire), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_RateOfFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_RateOfFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_ReloadTime_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_ReloadTime = { "ReloadTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInfo, ReloadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_ReloadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_ReloadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_MaxRound_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_MaxRound = { "MaxRound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInfo, MaxRound), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_MaxRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_MaxRound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_NumberProjectileByShot_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_NumberProjectileByShot = { "NumberProjectileByShot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInfo, NumberProjectileByShot), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_NumberProjectileByShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_NumberProjectileByShot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_DispersionWeapon_MetaData[] = {
		{ "Category", "Dispersion" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_DispersionWeapon = { "DispersionWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInfo, DispersionWeapon), Z_Construct_UScriptStruct_FWeaponDispersion, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_DispersionWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_DispersionWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_SoundFireWeapon_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_SoundFireWeapon = { "SoundFireWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInfo, SoundFireWeapon), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_SoundFireWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_SoundFireWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_SoundReloadWeapon_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_SoundReloadWeapon = { "SoundReloadWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInfo, SoundReloadWeapon), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_SoundReloadWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_SoundReloadWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_EffectFireWeapon_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_EffectFireWeapon = { "EffectFireWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInfo, EffectFireWeapon), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_EffectFireWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_EffectFireWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_ProjectileSetting_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "//if null use trace logic (TSubclassOf<class AProjectileDefault> Projectile = nullptr)\n" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
		{ "ToolTip", "if null use trace logic (TSubclassOf<class AProjectileDefault> Projectile = nullptr)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_ProjectileSetting = { "ProjectileSetting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInfo, ProjectileSetting), Z_Construct_UScriptStruct_FProjectileInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_ProjectileSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_ProjectileSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponDamage_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponDamage = { "WeaponDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInfo, WeaponDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_DistacneTrace_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_DistacneTrace = { "DistacneTrace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInfo, DistacneTrace), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_DistacneTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_DistacneTrace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_DecalOnHit_MetaData[] = {
		{ "Category", "HitEffect" },
		{ "Comment", "//one decal on all?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
		{ "ToolTip", "one decal on all?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_DecalOnHit = { "DecalOnHit", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInfo, DecalOnHit), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_DecalOnHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_DecalOnHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_AnimCharFire_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_AnimCharFire = { "AnimCharFire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInfo, AnimCharFire), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_AnimCharFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_AnimCharFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_AnimCharReload_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_AnimCharReload = { "AnimCharReload", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInfo, AnimCharReload), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_AnimCharReload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_AnimCharReload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_MagazineDrop_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_MagazineDrop = { "MagazineDrop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInfo, MagazineDrop), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_MagazineDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_MagazineDrop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_ShellBullets_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_ShellBullets = { "ShellBullets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInfo, ShellBullets), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_ShellBullets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_ShellBullets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_RateOfFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_ReloadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_MaxRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_NumberProjectileByShot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_DispersionWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_SoundFireWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_SoundReloadWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_EffectFireWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_ProjectileSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_DistacneTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_DecalOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_AnimCharFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_AnimCharReload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_MagazineDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_ShellBullets,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownShooter,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"WeaponInfo",
		sizeof(FWeaponInfo),
		alignof(FWeaponInfo),
		Z_Construct_UScriptStruct_FWeaponInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TopDownShooter();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponInfo"), sizeof(FWeaponInfo), Get_Z_Construct_UScriptStruct_FWeaponInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponInfo_Hash() { return 2116941048U; }
class UScriptStruct* FWeaponDispersion::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TOPDOWNSHOOTER_API uint32 Get_Z_Construct_UScriptStruct_FWeaponDispersion_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponDispersion, Z_Construct_UPackage__Script_TopDownShooter(), TEXT("WeaponDispersion"), sizeof(FWeaponDispersion), Get_Z_Construct_UScriptStruct_FWeaponDispersion_Hash());
	}
	return Singleton;
}
template<> TOPDOWNSHOOTER_API UScriptStruct* StaticStruct<FWeaponDispersion>()
{
	return FWeaponDispersion::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponDispersion(FWeaponDispersion::StaticStruct, TEXT("/Script/TopDownShooter"), TEXT("WeaponDispersion"), false, nullptr, nullptr);
static struct FScriptStruct_TopDownShooter_StaticRegisterNativesFWeaponDispersion
{
	FScriptStruct_TopDownShooter_StaticRegisterNativesFWeaponDispersion()
	{
		UScriptStruct::DeferCppStructOps<FWeaponDispersion>(FName(TEXT("WeaponDispersion")));
	}
} ScriptStruct_TopDownShooter_StaticRegisterNativesFWeaponDispersion;
	struct Z_Construct_UScriptStruct_FWeaponDispersion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aim_StateDispersionAimMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Aim_StateDispersionAimMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aim_StateDispersionAimMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Aim_StateDispersionAimMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aim_StateDispersionAimRecoil_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Aim_StateDispersionAimRecoil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aim_StateDispersionReduction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Aim_StateDispersionReduction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimWalk_StateDispersionAimMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimWalk_StateDispersionAimMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimWalk_StateDispersionAimMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimWalk_StateDispersionAimMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimWalk_StateDispersionAimRecoil_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimWalk_StateDispersionAimRecoil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimWalk_StateDispersionReduction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimWalk_StateDispersionReduction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Walk_StateDispersionAimMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Walk_StateDispersionAimMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Walk_StateDispersionAimMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Walk_StateDispersionAimMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Walk_StateDispersionAimRecoil_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Walk_StateDispersionAimRecoil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Walk_StateDispersionReduction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Walk_StateDispersionReduction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Run_StateDispersionAimMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Run_StateDispersionAimMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Run_StateDispersionAimMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Run_StateDispersionAimMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Run_StateDispersionAimRecoil_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Run_StateDispersionAimRecoil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Run_StateDispersionReduction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Run_StateDispersionReduction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDispersion_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponDispersion>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Aim_StateDispersionAimMax_MetaData[] = {
		{ "Category", "Dispersion" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Aim_StateDispersionAimMax = { "Aim_StateDispersionAimMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDispersion, Aim_StateDispersionAimMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Aim_StateDispersionAimMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Aim_StateDispersionAimMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Aim_StateDispersionAimMin_MetaData[] = {
		{ "Category", "Dispersion" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Aim_StateDispersionAimMin = { "Aim_StateDispersionAimMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDispersion, Aim_StateDispersionAimMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Aim_StateDispersionAimMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Aim_StateDispersionAimMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Aim_StateDispersionAimRecoil_MetaData[] = {
		{ "Category", "Dispersion" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Aim_StateDispersionAimRecoil = { "Aim_StateDispersionAimRecoil", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDispersion, Aim_StateDispersionAimRecoil), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Aim_StateDispersionAimRecoil_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Aim_StateDispersionAimRecoil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Aim_StateDispersionReduction_MetaData[] = {
		{ "Category", "Dispersion" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Aim_StateDispersionReduction = { "Aim_StateDispersionReduction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDispersion, Aim_StateDispersionReduction), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Aim_StateDispersionReduction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Aim_StateDispersionReduction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_AimWalk_StateDispersionAimMax_MetaData[] = {
		{ "Category", "Dispersion" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_AimWalk_StateDispersionAimMax = { "AimWalk_StateDispersionAimMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDispersion, AimWalk_StateDispersionAimMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_AimWalk_StateDispersionAimMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_AimWalk_StateDispersionAimMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_AimWalk_StateDispersionAimMin_MetaData[] = {
		{ "Category", "Dispersion" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_AimWalk_StateDispersionAimMin = { "AimWalk_StateDispersionAimMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDispersion, AimWalk_StateDispersionAimMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_AimWalk_StateDispersionAimMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_AimWalk_StateDispersionAimMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_AimWalk_StateDispersionAimRecoil_MetaData[] = {
		{ "Category", "Dispersion" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_AimWalk_StateDispersionAimRecoil = { "AimWalk_StateDispersionAimRecoil", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDispersion, AimWalk_StateDispersionAimRecoil), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_AimWalk_StateDispersionAimRecoil_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_AimWalk_StateDispersionAimRecoil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_AimWalk_StateDispersionReduction_MetaData[] = {
		{ "Category", "Dispersion" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_AimWalk_StateDispersionReduction = { "AimWalk_StateDispersionReduction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDispersion, AimWalk_StateDispersionReduction), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_AimWalk_StateDispersionReduction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_AimWalk_StateDispersionReduction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Walk_StateDispersionAimMax_MetaData[] = {
		{ "Category", "Dispersion" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Walk_StateDispersionAimMax = { "Walk_StateDispersionAimMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDispersion, Walk_StateDispersionAimMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Walk_StateDispersionAimMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Walk_StateDispersionAimMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Walk_StateDispersionAimMin_MetaData[] = {
		{ "Category", "Dispersion" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Walk_StateDispersionAimMin = { "Walk_StateDispersionAimMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDispersion, Walk_StateDispersionAimMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Walk_StateDispersionAimMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Walk_StateDispersionAimMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Walk_StateDispersionAimRecoil_MetaData[] = {
		{ "Category", "Dispersion" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Walk_StateDispersionAimRecoil = { "Walk_StateDispersionAimRecoil", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDispersion, Walk_StateDispersionAimRecoil), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Walk_StateDispersionAimRecoil_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Walk_StateDispersionAimRecoil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Walk_StateDispersionReduction_MetaData[] = {
		{ "Category", "Dispersion" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Walk_StateDispersionReduction = { "Walk_StateDispersionReduction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDispersion, Walk_StateDispersionReduction), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Walk_StateDispersionReduction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Walk_StateDispersionReduction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Run_StateDispersionAimMax_MetaData[] = {
		{ "Category", "Dispersion" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Run_StateDispersionAimMax = { "Run_StateDispersionAimMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDispersion, Run_StateDispersionAimMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Run_StateDispersionAimMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Run_StateDispersionAimMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Run_StateDispersionAimMin_MetaData[] = {
		{ "Category", "Dispersion" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Run_StateDispersionAimMin = { "Run_StateDispersionAimMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDispersion, Run_StateDispersionAimMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Run_StateDispersionAimMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Run_StateDispersionAimMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Run_StateDispersionAimRecoil_MetaData[] = {
		{ "Category", "Dispersion" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Run_StateDispersionAimRecoil = { "Run_StateDispersionAimRecoil", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDispersion, Run_StateDispersionAimRecoil), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Run_StateDispersionAimRecoil_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Run_StateDispersionAimRecoil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Run_StateDispersionReduction_MetaData[] = {
		{ "Category", "Dispersion" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Run_StateDispersionReduction = { "Run_StateDispersionReduction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDispersion, Run_StateDispersionReduction), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Run_StateDispersionReduction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Run_StateDispersionReduction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponDispersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Aim_StateDispersionAimMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Aim_StateDispersionAimMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Aim_StateDispersionAimRecoil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Aim_StateDispersionReduction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_AimWalk_StateDispersionAimMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_AimWalk_StateDispersionAimMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_AimWalk_StateDispersionAimRecoil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_AimWalk_StateDispersionReduction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Walk_StateDispersionAimMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Walk_StateDispersionAimMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Walk_StateDispersionAimRecoil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Walk_StateDispersionReduction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Run_StateDispersionAimMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Run_StateDispersionAimMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Run_StateDispersionAimRecoil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDispersion_Statics::NewProp_Run_StateDispersionReduction,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponDispersion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownShooter,
		nullptr,
		&NewStructOps,
		"WeaponDispersion",
		sizeof(FWeaponDispersion),
		alignof(FWeaponDispersion),
		Z_Construct_UScriptStruct_FWeaponDispersion_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDispersion_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponDispersion()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponDispersion_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TopDownShooter();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponDispersion"), sizeof(FWeaponDispersion), Get_Z_Construct_UScriptStruct_FWeaponDispersion_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponDispersion_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponDispersion_Hash() { return 3269125506U; }
class UScriptStruct* FProjectileInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TOPDOWNSHOOTER_API uint32 Get_Z_Construct_UScriptStruct_FProjectileInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileInfo, Z_Construct_UPackage__Script_TopDownShooter(), TEXT("ProjectileInfo"), sizeof(FProjectileInfo), Get_Z_Construct_UScriptStruct_FProjectileInfo_Hash());
	}
	return Singleton;
}
template<> TOPDOWNSHOOTER_API UScriptStruct* StaticStruct<FProjectileInfo>()
{
	return FProjectileInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProjectileInfo(FProjectileInfo::StaticStruct, TEXT("/Script/TopDownShooter"), TEXT("ProjectileInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TopDownShooter_StaticRegisterNativesFProjectileInfo
{
	FScriptStruct_TopDownShooter_StaticRegisterNativesFProjectileInfo()
	{
		UScriptStruct::DeferCppStructOps<FProjectileInfo>(FName(TEXT("ProjectileInfo")));
	}
} ScriptStruct_TopDownShooter_StaticRegisterNativesFProjectileInfo;
	struct Z_Construct_UScriptStruct_FProjectileInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Projectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Projectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileLifeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileLifeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileInitSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileInitSpeed;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitDecals_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HitDecals_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_HitDecals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitSound;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitFXs_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HitFXs_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitFXs_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_HitFXs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExploseFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExploseFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExploseSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExploseSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMaxRadiusDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileMaxRadiusDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExploseMaxDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExploseMaxDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_Projectile_MetaData[] = {
		{ "Category", "ProjectileSetting" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileInfo, Projectile), Z_Construct_UClass_AProjectileDefault_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_Projectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_Projectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileDamage_MetaData[] = {
		{ "Category", "ProjectileSetting" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileDamage = { "ProjectileDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileInfo, ProjectileDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileLifeTime_MetaData[] = {
		{ "Category", "ProjectileSetting" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileLifeTime = { "ProjectileLifeTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileInfo, ProjectileLifeTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileLifeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileLifeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileInitSpeed_MetaData[] = {
		{ "Category", "ProjectileSetting" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileInitSpeed = { "ProjectileInitSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileInfo, ProjectileInitSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileInitSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileInitSpeed_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_HitDecals_ValueProp = { "HitDecals", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_HitDecals_Key_KeyProp = { "HitDecals_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_HitDecals_MetaData[] = {
		{ "Category", "ProjectileSetting" },
		{ "Comment", "//material to decal on hit\n" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
		{ "ToolTip", "material to decal on hit" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_HitDecals = { "HitDecals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileInfo, HitDecals), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_HitDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_HitDecals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_HitSound_MetaData[] = {
		{ "Category", "ProjectileSetting" },
		{ "Comment", "//Sound when hit\n" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
		{ "ToolTip", "Sound when hit" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_HitSound = { "HitSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileInfo, HitSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_HitSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_HitSound_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_HitFXs_ValueProp = { "HitFXs", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_HitFXs_Key_KeyProp = { "HitFXs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_HitFXs_MetaData[] = {
		{ "Category", "ProjectileSetting" },
		{ "Comment", "//fx when hit check by surface\n" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
		{ "ToolTip", "fx when hit check by surface" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_HitFXs = { "HitFXs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileInfo, HitFXs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_HitFXs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_HitFXs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ExploseFX_MetaData[] = {
		{ "Category", "ProjectileSetting" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ExploseFX = { "ExploseFX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileInfo, ExploseFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ExploseFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ExploseFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ExploseSound_MetaData[] = {
		{ "Category", "ProjectileSetting" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ExploseSound = { "ExploseSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileInfo, ExploseSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ExploseSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ExploseSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileMaxRadiusDamage_MetaData[] = {
		{ "Category", "ProjectileSetting" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileMaxRadiusDamage = { "ProjectileMaxRadiusDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileInfo, ProjectileMaxRadiusDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileMaxRadiusDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileMaxRadiusDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ExploseMaxDamage_MetaData[] = {
		{ "Category", "ProjectileSetting" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ExploseMaxDamage = { "ExploseMaxDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileInfo, ExploseMaxDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ExploseMaxDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ExploseMaxDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_Projectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileLifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileInitSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_HitDecals_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_HitDecals_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_HitDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_HitSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_HitFXs_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_HitFXs_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_HitFXs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ExploseFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ExploseSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileMaxRadiusDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ExploseMaxDamage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownShooter,
		nullptr,
		&NewStructOps,
		"ProjectileInfo",
		sizeof(FProjectileInfo),
		alignof(FProjectileInfo),
		Z_Construct_UScriptStruct_FProjectileInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProjectileInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProjectileInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TopDownShooter();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProjectileInfo"), sizeof(FProjectileInfo), Get_Z_Construct_UScriptStruct_FProjectileInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProjectileInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProjectileInfo_Hash() { return 2012002514U; }
class UScriptStruct* FCharacterSpeed::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TOPDOWNSHOOTER_API uint32 Get_Z_Construct_UScriptStruct_FCharacterSpeed_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterSpeed, Z_Construct_UPackage__Script_TopDownShooter(), TEXT("CharacterSpeed"), sizeof(FCharacterSpeed), Get_Z_Construct_UScriptStruct_FCharacterSpeed_Hash());
	}
	return Singleton;
}
template<> TOPDOWNSHOOTER_API UScriptStruct* StaticStruct<FCharacterSpeed>()
{
	return FCharacterSpeed::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterSpeed(FCharacterSpeed::StaticStruct, TEXT("/Script/TopDownShooter"), TEXT("CharacterSpeed"), false, nullptr, nullptr);
static struct FScriptStruct_TopDownShooter_StaticRegisterNativesFCharacterSpeed
{
	FScriptStruct_TopDownShooter_StaticRegisterNativesFCharacterSpeed()
	{
		UScriptStruct::DeferCppStructOps<FCharacterSpeed>(FName(TEXT("CharacterSpeed")));
	}
} ScriptStruct_TopDownShooter_StaticRegisterNativesFCharacterSpeed;
	struct Z_Construct_UScriptStruct_FCharacterSpeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimSpeedNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimSpeedNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkSpeedNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkSpeedNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunSpeedNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunSpeedNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimSpeedWalk_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimSpeedWalk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintRunSpeedRun_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintRunSpeedRun;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSpeed_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterSpeed>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_AimSpeedNormal_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_AimSpeedNormal = { "AimSpeedNormal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSpeed, AimSpeedNormal), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_AimSpeedNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_AimSpeedNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_WalkSpeedNormal_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_WalkSpeedNormal = { "WalkSpeedNormal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSpeed, WalkSpeedNormal), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_WalkSpeedNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_WalkSpeedNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_RunSpeedNormal_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_RunSpeedNormal = { "RunSpeedNormal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSpeed, RunSpeedNormal), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_RunSpeedNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_RunSpeedNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_AimSpeedWalk_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_AimSpeedWalk = { "AimSpeedWalk", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSpeed, AimSpeedWalk), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_AimSpeedWalk_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_AimSpeedWalk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_SprintRunSpeedRun_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_SprintRunSpeedRun = { "SprintRunSpeedRun", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSpeed, SprintRunSpeedRun), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_SprintRunSpeedRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_SprintRunSpeedRun_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_AimSpeedNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_WalkSpeedNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_RunSpeedNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_AimSpeedWalk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_SprintRunSpeedRun,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterSpeed_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownShooter,
		nullptr,
		&NewStructOps,
		"CharacterSpeed",
		sizeof(FCharacterSpeed),
		alignof(FCharacterSpeed),
		Z_Construct_UScriptStruct_FCharacterSpeed_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterSpeed()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterSpeed_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TopDownShooter();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterSpeed"), sizeof(FCharacterSpeed), Get_Z_Construct_UScriptStruct_FCharacterSpeed_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterSpeed_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterSpeed_Hash() { return 1491826025U; }
	void UTypes::StaticRegisterNativesUTypes()
	{
	}
	UClass* Z_Construct_UClass_UTypes_NoRegister()
	{
		return UTypes::StaticClass();
	}
	struct Z_Construct_UClass_UTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FuncLibrary/Types.h" },
		{ "ModuleRelativePath", "FuncLibrary/Types.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTypes_Statics::ClassParams = {
		&UTypes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTypes, 3130609013);
	template<> TOPDOWNSHOOTER_API UClass* StaticClass<UTypes>()
	{
		return UTypes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTypes(Z_Construct_UClass_UTypes, &UTypes::StaticClass, TEXT("/Script/TopDownShooter"), TEXT("UTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
