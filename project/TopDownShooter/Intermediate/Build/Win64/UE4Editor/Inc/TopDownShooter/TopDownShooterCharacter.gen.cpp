// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownShooter/Character/TopDownShooterCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownShooterCharacter() {}
// Cross Module References
	TOPDOWNSHOOTER_API UClass* Z_Construct_UClass_ATopDownShooterCharacter_NoRegister();
	TOPDOWNSHOOTER_API UClass* Z_Construct_UClass_ATopDownShooterCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TopDownShooter();
	TOPDOWNSHOOTER_API UClass* Z_Construct_UClass_AWeaponDefault_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TOPDOWNSHOOTER_API UEnum* Z_Construct_UEnum_TopDownShooter_EMovementState();
	TOPDOWNSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterSpeed();
// End Cross Module References
	DEFINE_FUNCTION(ATopDownShooterCharacter::execGetCursorToWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDecalComponent**)Z_Param__Result=P_THIS->GetCursorToWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopDownShooterCharacter::execWeaponReloadEnd_BP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WeaponReloadEnd_BP_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopDownShooterCharacter::execWeaponReloadStart_BP)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Anim);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WeaponReloadStart_BP_Implementation(Z_Param_Anim);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopDownShooterCharacter::execWeaponReloadEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WeaponReloadEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopDownShooterCharacter::execWeaponReloadStart)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Anim);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WeaponReloadStart(Z_Param_Anim);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopDownShooterCharacter::execTryReloadWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryReloadWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopDownShooterCharacter::execInitWeapon)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_IdWeaponName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitWeapon(Z_Param_IdWeaponName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopDownShooterCharacter::execGetCurrentWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWeaponDefault**)Z_Param__Result=P_THIS->GetCurrentWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopDownShooterCharacter::execChangeMovementState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMovementState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopDownShooterCharacter::execCharacterUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CharacterUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopDownShooterCharacter::execAttackCharEvent)
	{
		P_GET_UBOOL(Z_Param_bIsFiring);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackCharEvent(Z_Param_bIsFiring);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopDownShooterCharacter::execMovementTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovementTick(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopDownShooterCharacter::execInputAttackReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputAttackReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopDownShooterCharacter::execInputAttackPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputAttackPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopDownShooterCharacter::execInputAxisX)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputAxisX(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopDownShooterCharacter::execInputAxisY)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputAxisY(Z_Param_Value);
		P_NATIVE_END;
	}
	static FName NAME_ATopDownShooterCharacter_WeaponReloadEnd_BP = FName(TEXT("WeaponReloadEnd_BP"));
	void ATopDownShooterCharacter::WeaponReloadEnd_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATopDownShooterCharacter_WeaponReloadEnd_BP),NULL);
	}
	static FName NAME_ATopDownShooterCharacter_WeaponReloadStart_BP = FName(TEXT("WeaponReloadStart_BP"));
	void ATopDownShooterCharacter::WeaponReloadStart_BP(UAnimMontage* Anim)
	{
		TopDownShooterCharacter_eventWeaponReloadStart_BP_Parms Parms;
		Parms.Anim=Anim;
		ProcessEvent(FindFunctionChecked(NAME_ATopDownShooterCharacter_WeaponReloadStart_BP),&Parms);
	}
	void ATopDownShooterCharacter::StaticRegisterNativesATopDownShooterCharacter()
	{
		UClass* Class = ATopDownShooterCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttackCharEvent", &ATopDownShooterCharacter::execAttackCharEvent },
			{ "ChangeMovementState", &ATopDownShooterCharacter::execChangeMovementState },
			{ "CharacterUpdate", &ATopDownShooterCharacter::execCharacterUpdate },
			{ "GetCurrentWeapon", &ATopDownShooterCharacter::execGetCurrentWeapon },
			{ "GetCursorToWorld", &ATopDownShooterCharacter::execGetCursorToWorld },
			{ "InitWeapon", &ATopDownShooterCharacter::execInitWeapon },
			{ "InputAttackPressed", &ATopDownShooterCharacter::execInputAttackPressed },
			{ "InputAttackReleased", &ATopDownShooterCharacter::execInputAttackReleased },
			{ "InputAxisX", &ATopDownShooterCharacter::execInputAxisX },
			{ "InputAxisY", &ATopDownShooterCharacter::execInputAxisY },
			{ "MovementTick", &ATopDownShooterCharacter::execMovementTick },
			{ "TryReloadWeapon", &ATopDownShooterCharacter::execTryReloadWeapon },
			{ "WeaponReloadEnd", &ATopDownShooterCharacter::execWeaponReloadEnd },
			{ "WeaponReloadEnd_BP", &ATopDownShooterCharacter::execWeaponReloadEnd_BP },
			{ "WeaponReloadStart", &ATopDownShooterCharacter::execWeaponReloadStart },
			{ "WeaponReloadStart_BP", &ATopDownShooterCharacter::execWeaponReloadStart_BP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATopDownShooterCharacter_AttackCharEvent_Statics
	{
		struct TopDownShooterCharacter_eventAttackCharEvent_Parms
		{
			bool bIsFiring;
		};
		static void NewProp_bIsFiring_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFiring;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATopDownShooterCharacter_AttackCharEvent_Statics::NewProp_bIsFiring_SetBit(void* Obj)
	{
		((TopDownShooterCharacter_eventAttackCharEvent_Parms*)Obj)->bIsFiring = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATopDownShooterCharacter_AttackCharEvent_Statics::NewProp_bIsFiring = { "bIsFiring", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TopDownShooterCharacter_eventAttackCharEvent_Parms), &Z_Construct_UFunction_ATopDownShooterCharacter_AttackCharEvent_Statics::NewProp_bIsFiring_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopDownShooterCharacter_AttackCharEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownShooterCharacter_AttackCharEvent_Statics::NewProp_bIsFiring,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownShooterCharacter_AttackCharEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Func\n" },
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
		{ "ToolTip", "Func" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownShooterCharacter_AttackCharEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownShooterCharacter, nullptr, "AttackCharEvent", nullptr, nullptr, sizeof(TopDownShooterCharacter_eventAttackCharEvent_Parms), Z_Construct_UFunction_ATopDownShooterCharacter_AttackCharEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_AttackCharEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownShooterCharacter_AttackCharEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_AttackCharEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownShooterCharacter_AttackCharEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopDownShooterCharacter_AttackCharEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownShooterCharacter_ChangeMovementState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownShooterCharacter_ChangeMovementState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownShooterCharacter_ChangeMovementState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownShooterCharacter, nullptr, "ChangeMovementState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownShooterCharacter_ChangeMovementState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_ChangeMovementState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownShooterCharacter_ChangeMovementState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopDownShooterCharacter_ChangeMovementState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownShooterCharacter_CharacterUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownShooterCharacter_CharacterUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownShooterCharacter_CharacterUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownShooterCharacter, nullptr, "CharacterUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownShooterCharacter_CharacterUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_CharacterUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownShooterCharacter_CharacterUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopDownShooterCharacter_CharacterUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownShooterCharacter_GetCurrentWeapon_Statics
	{
		struct TopDownShooterCharacter_eventGetCurrentWeapon_Parms
		{
			AWeaponDefault* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATopDownShooterCharacter_GetCurrentWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TopDownShooterCharacter_eventGetCurrentWeapon_Parms, ReturnValue), Z_Construct_UClass_AWeaponDefault_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopDownShooterCharacter_GetCurrentWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownShooterCharacter_GetCurrentWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownShooterCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownShooterCharacter_GetCurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownShooterCharacter, nullptr, "GetCurrentWeapon", nullptr, nullptr, sizeof(TopDownShooterCharacter_eventGetCurrentWeapon_Parms), Z_Construct_UFunction_ATopDownShooterCharacter_GetCurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_GetCurrentWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownShooterCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownShooterCharacter_GetCurrentWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopDownShooterCharacter_GetCurrentWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownShooterCharacter_GetCursorToWorld_Statics
	{
		struct TopDownShooterCharacter_eventGetCursorToWorld_Parms
		{
			UDecalComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownShooterCharacter_GetCursorToWorld_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATopDownShooterCharacter_GetCursorToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TopDownShooterCharacter_eventGetCursorToWorld_Parms, ReturnValue), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATopDownShooterCharacter_GetCursorToWorld_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_GetCursorToWorld_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopDownShooterCharacter_GetCursorToWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownShooterCharacter_GetCursorToWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownShooterCharacter_GetCursorToWorld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownShooterCharacter_GetCursorToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownShooterCharacter, nullptr, "GetCursorToWorld", nullptr, nullptr, sizeof(TopDownShooterCharacter_eventGetCursorToWorld_Parms), Z_Construct_UFunction_ATopDownShooterCharacter_GetCursorToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_GetCursorToWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownShooterCharacter_GetCursorToWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_GetCursorToWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownShooterCharacter_GetCursorToWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopDownShooterCharacter_GetCursorToWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownShooterCharacter_InitWeapon_Statics
	{
		struct TopDownShooterCharacter_eventInitWeapon_Parms
		{
			FName IdWeaponName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_IdWeaponName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATopDownShooterCharacter_InitWeapon_Statics::NewProp_IdWeaponName = { "IdWeaponName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TopDownShooterCharacter_eventInitWeapon_Parms, IdWeaponName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopDownShooterCharacter_InitWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownShooterCharacter_InitWeapon_Statics::NewProp_IdWeaponName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownShooterCharacter_InitWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownShooterCharacter_InitWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownShooterCharacter, nullptr, "InitWeapon", nullptr, nullptr, sizeof(TopDownShooterCharacter_eventInitWeapon_Parms), Z_Construct_UFunction_ATopDownShooterCharacter_InitWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_InitWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownShooterCharacter_InitWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_InitWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownShooterCharacter_InitWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopDownShooterCharacter_InitWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownShooterCharacter_InputAttackPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownShooterCharacter_InputAttackPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownShooterCharacter_InputAttackPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownShooterCharacter, nullptr, "InputAttackPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownShooterCharacter_InputAttackPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_InputAttackPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownShooterCharacter_InputAttackPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopDownShooterCharacter_InputAttackPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownShooterCharacter_InputAttackReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownShooterCharacter_InputAttackReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownShooterCharacter_InputAttackReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownShooterCharacter, nullptr, "InputAttackReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownShooterCharacter_InputAttackReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_InputAttackReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownShooterCharacter_InputAttackReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopDownShooterCharacter_InputAttackReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisX_Statics
	{
		struct TopDownShooterCharacter_eventInputAxisX_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisX_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TopDownShooterCharacter_eventInputAxisX_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisX_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownShooterCharacter, nullptr, "InputAxisX", nullptr, nullptr, sizeof(TopDownShooterCharacter_eventInputAxisX_Parms), Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisY_Statics
	{
		struct TopDownShooterCharacter_eventInputAxisY_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisY_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TopDownShooterCharacter_eventInputAxisY_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisY_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisY_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Inputs\n" },
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
		{ "ToolTip", "Inputs" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownShooterCharacter, nullptr, "InputAxisY", nullptr, nullptr, sizeof(TopDownShooterCharacter_eventInputAxisY_Parms), Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownShooterCharacter_MovementTick_Statics
	{
		struct TopDownShooterCharacter_eventMovementTick_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATopDownShooterCharacter_MovementTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TopDownShooterCharacter_eventMovementTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopDownShooterCharacter_MovementTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownShooterCharacter_MovementTick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownShooterCharacter_MovementTick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Tick Func\n" },
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
		{ "ToolTip", "Tick Func" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownShooterCharacter_MovementTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownShooterCharacter, nullptr, "MovementTick", nullptr, nullptr, sizeof(TopDownShooterCharacter_eventMovementTick_Parms), Z_Construct_UFunction_ATopDownShooterCharacter_MovementTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_MovementTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownShooterCharacter_MovementTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_MovementTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownShooterCharacter_MovementTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopDownShooterCharacter_MovementTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownShooterCharacter_TryReloadWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownShooterCharacter_TryReloadWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownShooterCharacter_TryReloadWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownShooterCharacter, nullptr, "TryReloadWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownShooterCharacter_TryReloadWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_TryReloadWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownShooterCharacter_TryReloadWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopDownShooterCharacter_TryReloadWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownShooterCharacter, nullptr, "WeaponReloadEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadEnd_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadEnd_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadEnd_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownShooterCharacter, nullptr, "WeaponReloadEnd_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadEnd_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadEnd_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadEnd_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadEnd_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart_Statics
	{
		struct TopDownShooterCharacter_eventWeaponReloadStart_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart_Statics::NewProp_Anim = { "Anim", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TopDownShooterCharacter_eventWeaponReloadStart_Parms, Anim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart_Statics::NewProp_Anim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownShooterCharacter, nullptr, "WeaponReloadStart", nullptr, nullptr, sizeof(TopDownShooterCharacter_eventWeaponReloadStart_Parms), Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart_BP_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Anim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart_BP_Statics::NewProp_Anim = { "Anim", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TopDownShooterCharacter_eventWeaponReloadStart_BP_Parms, Anim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart_BP_Statics::NewProp_Anim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownShooterCharacter, nullptr, "WeaponReloadStart_BP", nullptr, nullptr, sizeof(TopDownShooterCharacter_eventWeaponReloadStart_BP_Parms), Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATopDownShooterCharacter_NoRegister()
	{
		return ATopDownShooterCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownShooterCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CursorMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CursorSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeedInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementSpeedInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintRunEnabled_MetaData[];
#endif
		static void NewProp_SprintRunEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SprintRunEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkEnabled_MetaData[];
#endif
		static void NewProp_WalkEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WalkEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimEnabled_MetaData[];
#endif
		static void NewProp_AimEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AimEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitWeaponName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InitWeaponName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownShooterCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATopDownShooterCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATopDownShooterCharacter_AttackCharEvent, "AttackCharEvent" }, // 1181909188
		{ &Z_Construct_UFunction_ATopDownShooterCharacter_ChangeMovementState, "ChangeMovementState" }, // 3526659905
		{ &Z_Construct_UFunction_ATopDownShooterCharacter_CharacterUpdate, "CharacterUpdate" }, // 1381863182
		{ &Z_Construct_UFunction_ATopDownShooterCharacter_GetCurrentWeapon, "GetCurrentWeapon" }, // 3440183562
		{ &Z_Construct_UFunction_ATopDownShooterCharacter_GetCursorToWorld, "GetCursorToWorld" }, // 3909205961
		{ &Z_Construct_UFunction_ATopDownShooterCharacter_InitWeapon, "InitWeapon" }, // 522156411
		{ &Z_Construct_UFunction_ATopDownShooterCharacter_InputAttackPressed, "InputAttackPressed" }, // 2865561343
		{ &Z_Construct_UFunction_ATopDownShooterCharacter_InputAttackReleased, "InputAttackReleased" }, // 1912772517
		{ &Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisX, "InputAxisX" }, // 933869781
		{ &Z_Construct_UFunction_ATopDownShooterCharacter_InputAxisY, "InputAxisY" }, // 947757236
		{ &Z_Construct_UFunction_ATopDownShooterCharacter_MovementTick, "MovementTick" }, // 81159752
		{ &Z_Construct_UFunction_ATopDownShooterCharacter_TryReloadWeapon, "TryReloadWeapon" }, // 3648146190
		{ &Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadEnd, "WeaponReloadEnd" }, // 485925998
		{ &Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadEnd_BP, "WeaponReloadEnd_BP" }, // 3038113515
		{ &Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart, "WeaponReloadStart" }, // 2817148752
		{ &Z_Construct_UFunction_ATopDownShooterCharacter_WeaponReloadStart_BP, "WeaponReloadStart_BP" }, // 1087127222
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownShooterCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//USTRUCT(BlueprintType)\n//struct FCharacterSpeedInfo\n//{\n//\x09GENERATED_BODY()\n//\n//\n//};\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/TopDownShooterCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
		{ "ToolTip", "USTRUCT(BlueprintType)\nstruct FCharacterSpeedInfo\n{\n       GENERATED_BODY()\n\n\n};" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Top down camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
		{ "ToolTip", "Top down camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownShooterCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_TopDownCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_TopDownCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera above the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownShooterCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_CursorMaterial_MetaData[] = {
		{ "Category", "Cursor" },
		{ "Comment", "//Cursor\n" },
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
		{ "ToolTip", "Cursor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_CursorMaterial = { "CursorMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownShooterCharacter, CursorMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_CursorMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_CursorMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_CursorSize_MetaData[] = {
		{ "Category", "Cursor" },
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_CursorSize = { "CursorSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownShooterCharacter, CursorSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_CursorSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_CursorSize_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_MovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_MovementState_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//Movement\n" },
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
		{ "ToolTip", "Movement" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_MovementState = { "MovementState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownShooterCharacter, MovementState), Z_Construct_UEnum_TopDownShooter_EMovementState, METADATA_PARAMS(Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_MovementState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_MovementState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_MovementSpeedInfo_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_MovementSpeedInfo = { "MovementSpeedInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownShooterCharacter, MovementSpeedInfo), Z_Construct_UScriptStruct_FCharacterSpeed, METADATA_PARAMS(Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_MovementSpeedInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_MovementSpeedInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_SprintRunEnabled_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_SprintRunEnabled_SetBit(void* Obj)
	{
		((ATopDownShooterCharacter*)Obj)->SprintRunEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_SprintRunEnabled = { "SprintRunEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATopDownShooterCharacter), &Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_SprintRunEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_SprintRunEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_SprintRunEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_WalkEnabled_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_WalkEnabled_SetBit(void* Obj)
	{
		((ATopDownShooterCharacter*)Obj)->WalkEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_WalkEnabled = { "WalkEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATopDownShooterCharacter), &Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_WalkEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_WalkEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_WalkEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_AimEnabled_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_AimEnabled_SetBit(void* Obj)
	{
		((ATopDownShooterCharacter*)Obj)->AimEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_AimEnabled = { "AimEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATopDownShooterCharacter), &Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_AimEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_AimEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_AimEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_InitWeaponName_MetaData[] = {
		{ "Category", "Demo" },
		{ "Comment", "//for demo \n" },
		{ "ModuleRelativePath", "Character/TopDownShooterCharacter.h" },
		{ "ToolTip", "for demo" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_InitWeaponName = { "InitWeaponName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownShooterCharacter, InitWeaponName), METADATA_PARAMS(Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_InitWeaponName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_InitWeaponName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopDownShooterCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_TopDownCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_CursorMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_CursorSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_MovementState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_MovementState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_MovementSpeedInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_SprintRunEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_WalkEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_AimEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownShooterCharacter_Statics::NewProp_InitWeaponName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownShooterCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownShooterCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATopDownShooterCharacter_Statics::ClassParams = {
		&ATopDownShooterCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATopDownShooterCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownShooterCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATopDownShooterCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownShooterCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDownShooterCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATopDownShooterCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATopDownShooterCharacter, 394202592);
	template<> TOPDOWNSHOOTER_API UClass* StaticClass<ATopDownShooterCharacter>()
	{
		return ATopDownShooterCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATopDownShooterCharacter(Z_Construct_UClass_ATopDownShooterCharacter, &ATopDownShooterCharacter::StaticClass, TEXT("/Script/TopDownShooter"), TEXT("ATopDownShooterCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownShooterCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
