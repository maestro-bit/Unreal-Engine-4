// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
struct FVector;
#ifdef TOPDOWNSHOOTER_ProjectileDefault_generated_h
#error "ProjectileDefault.generated.h already included, missing '#pragma once' in ProjectileDefault.h"
#endif
#define TOPDOWNSHOOTER_ProjectileDefault_generated_h

#define TopDownShooter_Source_TopDownShooter_Weapons_Projectiles_ProjectileDefault_h_17_SPARSE_DATA
#define TopDownShooter_Source_TopDownShooter_Weapons_Projectiles_ProjectileDefault_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execImpactProjectile); \
	DECLARE_FUNCTION(execBulletCollisionSphereEndOverlap); \
	DECLARE_FUNCTION(execBulletCollisionSphereBeginOverlap); \
	DECLARE_FUNCTION(execBulletCollisionSphereHit);


#define TopDownShooter_Source_TopDownShooter_Weapons_Projectiles_ProjectileDefault_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execImpactProjectile); \
	DECLARE_FUNCTION(execBulletCollisionSphereEndOverlap); \
	DECLARE_FUNCTION(execBulletCollisionSphereBeginOverlap); \
	DECLARE_FUNCTION(execBulletCollisionSphereHit);


#define TopDownShooter_Source_TopDownShooter_Weapons_Projectiles_ProjectileDefault_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileDefault(); \
	friend struct Z_Construct_UClass_AProjectileDefault_Statics; \
public: \
	DECLARE_CLASS(AProjectileDefault, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownShooter"), NO_API) \
	DECLARE_SERIALIZER(AProjectileDefault)


#define TopDownShooter_Source_TopDownShooter_Weapons_Projectiles_ProjectileDefault_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAProjectileDefault(); \
	friend struct Z_Construct_UClass_AProjectileDefault_Statics; \
public: \
	DECLARE_CLASS(AProjectileDefault, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownShooter"), NO_API) \
	DECLARE_SERIALIZER(AProjectileDefault)


#define TopDownShooter_Source_TopDownShooter_Weapons_Projectiles_ProjectileDefault_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileDefault(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectileDefault) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileDefault); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileDefault); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileDefault(AProjectileDefault&&); \
	NO_API AProjectileDefault(const AProjectileDefault&); \
public:


#define TopDownShooter_Source_TopDownShooter_Weapons_Projectiles_ProjectileDefault_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileDefault(AProjectileDefault&&); \
	NO_API AProjectileDefault(const AProjectileDefault&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileDefault); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileDefault); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileDefault)


#define TopDownShooter_Source_TopDownShooter_Weapons_Projectiles_ProjectileDefault_h_17_PRIVATE_PROPERTY_OFFSET
#define TopDownShooter_Source_TopDownShooter_Weapons_Projectiles_ProjectileDefault_h_14_PROLOG
#define TopDownShooter_Source_TopDownShooter_Weapons_Projectiles_ProjectileDefault_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownShooter_Source_TopDownShooter_Weapons_Projectiles_ProjectileDefault_h_17_PRIVATE_PROPERTY_OFFSET \
	TopDownShooter_Source_TopDownShooter_Weapons_Projectiles_ProjectileDefault_h_17_SPARSE_DATA \
	TopDownShooter_Source_TopDownShooter_Weapons_Projectiles_ProjectileDefault_h_17_RPC_WRAPPERS \
	TopDownShooter_Source_TopDownShooter_Weapons_Projectiles_ProjectileDefault_h_17_INCLASS \
	TopDownShooter_Source_TopDownShooter_Weapons_Projectiles_ProjectileDefault_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopDownShooter_Source_TopDownShooter_Weapons_Projectiles_ProjectileDefault_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownShooter_Source_TopDownShooter_Weapons_Projectiles_ProjectileDefault_h_17_PRIVATE_PROPERTY_OFFSET \
	TopDownShooter_Source_TopDownShooter_Weapons_Projectiles_ProjectileDefault_h_17_SPARSE_DATA \
	TopDownShooter_Source_TopDownShooter_Weapons_Projectiles_ProjectileDefault_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TopDownShooter_Source_TopDownShooter_Weapons_Projectiles_ProjectileDefault_h_17_INCLASS_NO_PURE_DECLS \
	TopDownShooter_Source_TopDownShooter_Weapons_Projectiles_ProjectileDefault_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNSHOOTER_API UClass* StaticClass<class AProjectileDefault>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopDownShooter_Source_TopDownShooter_Weapons_Projectiles_ProjectileDefault_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
