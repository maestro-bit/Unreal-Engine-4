// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDecalComponent;
class UAnimMontage;
class AWeaponDefault;
#ifdef TOPDOWNSHOOTER_TopDownShooterCharacter_generated_h
#error "TopDownShooterCharacter.generated.h already included, missing '#pragma once' in TopDownShooterCharacter.h"
#endif
#define TOPDOWNSHOOTER_TopDownShooterCharacter_generated_h

#define TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_23_SPARSE_DATA
#define TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_23_RPC_WRAPPERS \
	virtual void WeaponReloadEnd_BP_Implementation(); \
	virtual void WeaponReloadStart_BP_Implementation(UAnimMontage* Anim); \
 \
	DECLARE_FUNCTION(execGetCursorToWorld); \
	DECLARE_FUNCTION(execWeaponReloadEnd_BP); \
	DECLARE_FUNCTION(execWeaponReloadStart_BP); \
	DECLARE_FUNCTION(execWeaponReloadEnd); \
	DECLARE_FUNCTION(execWeaponReloadStart); \
	DECLARE_FUNCTION(execTryReloadWeapon); \
	DECLARE_FUNCTION(execInitWeapon); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execChangeMovementState); \
	DECLARE_FUNCTION(execCharacterUpdate); \
	DECLARE_FUNCTION(execAttackCharEvent); \
	DECLARE_FUNCTION(execMovementTick); \
	DECLARE_FUNCTION(execInputAttackReleased); \
	DECLARE_FUNCTION(execInputAttackPressed); \
	DECLARE_FUNCTION(execInputAxisX); \
	DECLARE_FUNCTION(execInputAxisY);


#define TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void WeaponReloadEnd_BP_Implementation(); \
	virtual void WeaponReloadStart_BP_Implementation(UAnimMontage* Anim); \
 \
	DECLARE_FUNCTION(execGetCursorToWorld); \
	DECLARE_FUNCTION(execWeaponReloadEnd_BP); \
	DECLARE_FUNCTION(execWeaponReloadStart_BP); \
	DECLARE_FUNCTION(execWeaponReloadEnd); \
	DECLARE_FUNCTION(execWeaponReloadStart); \
	DECLARE_FUNCTION(execTryReloadWeapon); \
	DECLARE_FUNCTION(execInitWeapon); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execChangeMovementState); \
	DECLARE_FUNCTION(execCharacterUpdate); \
	DECLARE_FUNCTION(execAttackCharEvent); \
	DECLARE_FUNCTION(execMovementTick); \
	DECLARE_FUNCTION(execInputAttackReleased); \
	DECLARE_FUNCTION(execInputAttackPressed); \
	DECLARE_FUNCTION(execInputAxisX); \
	DECLARE_FUNCTION(execInputAxisY);


#define TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_23_EVENT_PARMS \
	struct TopDownShooterCharacter_eventWeaponReloadStart_BP_Parms \
	{ \
		UAnimMontage* Anim; \
	};


#define TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_23_CALLBACK_WRAPPERS
#define TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATopDownShooterCharacter(); \
	friend struct Z_Construct_UClass_ATopDownShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(ATopDownShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownShooter"), NO_API) \
	DECLARE_SERIALIZER(ATopDownShooterCharacter)


#define TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesATopDownShooterCharacter(); \
	friend struct Z_Construct_UClass_ATopDownShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(ATopDownShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownShooter"), NO_API) \
	DECLARE_SERIALIZER(ATopDownShooterCharacter)


#define TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATopDownShooterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATopDownShooterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopDownShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopDownShooterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopDownShooterCharacter(ATopDownShooterCharacter&&); \
	NO_API ATopDownShooterCharacter(const ATopDownShooterCharacter&); \
public:


#define TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopDownShooterCharacter(ATopDownShooterCharacter&&); \
	NO_API ATopDownShooterCharacter(const ATopDownShooterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopDownShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopDownShooterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATopDownShooterCharacter)


#define TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(ATopDownShooterCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATopDownShooterCharacter, CameraBoom); }


#define TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_20_PROLOG \
	TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_23_EVENT_PARMS


#define TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_23_SPARSE_DATA \
	TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_23_RPC_WRAPPERS \
	TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_23_CALLBACK_WRAPPERS \
	TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_23_INCLASS \
	TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_23_SPARSE_DATA \
	TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_23_CALLBACK_WRAPPERS \
	TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_23_INCLASS_NO_PURE_DECLS \
	TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNSHOOTER_API UClass* StaticClass<class ATopDownShooterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopDownShooter_Source_TopDownShooter_Character_TopDownShooterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
