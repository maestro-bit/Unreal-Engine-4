// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef TOPDOWNSHOOTER_WeaponDefault_generated_h
#error "WeaponDefault.generated.h already included, missing '#pragma once' in WeaponDefault.h"
#endif
#define TOPDOWNSHOOTER_WeaponDefault_generated_h

#define TopDownShooter_Source_TopDownShooter_Weapons_WeaponDefault_h_15_DELEGATE \
static inline void FOnWeaponReloadEnd_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponReloadEnd) \
{ \
	OnWeaponReloadEnd.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TopDownShooter_Source_TopDownShooter_Weapons_WeaponDefault_h_14_DELEGATE \
struct _Script_TopDownShooter_eventOnWeaponReloadStart_Parms \
{ \
	UAnimMontage* Anim; \
}; \
static inline void FOnWeaponReloadStart_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponReloadStart, UAnimMontage* Anim) \
{ \
	_Script_TopDownShooter_eventOnWeaponReloadStart_Parms Parms; \
	Parms.Anim=Anim; \
	OnWeaponReloadStart.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TopDownShooter_Source_TopDownShooter_Weapons_WeaponDefault_h_20_SPARSE_DATA
#define TopDownShooter_Source_TopDownShooter_Weapons_WeaponDefault_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWeaponRound); \
	DECLARE_FUNCTION(execSetWeaponStateFire);


#define TopDownShooter_Source_TopDownShooter_Weapons_WeaponDefault_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWeaponRound); \
	DECLARE_FUNCTION(execSetWeaponStateFire);


#define TopDownShooter_Source_TopDownShooter_Weapons_WeaponDefault_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponDefault(); \
	friend struct Z_Construct_UClass_AWeaponDefault_Statics; \
public: \
	DECLARE_CLASS(AWeaponDefault, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownShooter"), NO_API) \
	DECLARE_SERIALIZER(AWeaponDefault)


#define TopDownShooter_Source_TopDownShooter_Weapons_WeaponDefault_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponDefault(); \
	friend struct Z_Construct_UClass_AWeaponDefault_Statics; \
public: \
	DECLARE_CLASS(AWeaponDefault, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownShooter"), NO_API) \
	DECLARE_SERIALIZER(AWeaponDefault)


#define TopDownShooter_Source_TopDownShooter_Weapons_WeaponDefault_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponDefault(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponDefault) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponDefault); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponDefault); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponDefault(AWeaponDefault&&); \
	NO_API AWeaponDefault(const AWeaponDefault&); \
public:


#define TopDownShooter_Source_TopDownShooter_Weapons_WeaponDefault_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponDefault(AWeaponDefault&&); \
	NO_API AWeaponDefault(const AWeaponDefault&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponDefault); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponDefault); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponDefault)


#define TopDownShooter_Source_TopDownShooter_Weapons_WeaponDefault_h_20_PRIVATE_PROPERTY_OFFSET
#define TopDownShooter_Source_TopDownShooter_Weapons_WeaponDefault_h_17_PROLOG
#define TopDownShooter_Source_TopDownShooter_Weapons_WeaponDefault_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownShooter_Source_TopDownShooter_Weapons_WeaponDefault_h_20_PRIVATE_PROPERTY_OFFSET \
	TopDownShooter_Source_TopDownShooter_Weapons_WeaponDefault_h_20_SPARSE_DATA \
	TopDownShooter_Source_TopDownShooter_Weapons_WeaponDefault_h_20_RPC_WRAPPERS \
	TopDownShooter_Source_TopDownShooter_Weapons_WeaponDefault_h_20_INCLASS \
	TopDownShooter_Source_TopDownShooter_Weapons_WeaponDefault_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopDownShooter_Source_TopDownShooter_Weapons_WeaponDefault_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownShooter_Source_TopDownShooter_Weapons_WeaponDefault_h_20_PRIVATE_PROPERTY_OFFSET \
	TopDownShooter_Source_TopDownShooter_Weapons_WeaponDefault_h_20_SPARSE_DATA \
	TopDownShooter_Source_TopDownShooter_Weapons_WeaponDefault_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	TopDownShooter_Source_TopDownShooter_Weapons_WeaponDefault_h_20_INCLASS_NO_PURE_DECLS \
	TopDownShooter_Source_TopDownShooter_Weapons_WeaponDefault_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNSHOOTER_API UClass* StaticClass<class AWeaponDefault>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopDownShooter_Source_TopDownShooter_Weapons_WeaponDefault_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
