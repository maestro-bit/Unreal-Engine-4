// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWeaponInfo;
#ifdef TOPDOWNSHOOTER_TopDownShooterGameInstance_generated_h
#error "TopDownShooterGameInstance.generated.h already included, missing '#pragma once' in TopDownShooterGameInstance.h"
#endif
#define TOPDOWNSHOOTER_TopDownShooterGameInstance_generated_h

#define TopDownShooter_Source_TopDownShooter_Game_TopDownShooterGameInstance_h_18_SPARSE_DATA
#define TopDownShooter_Source_TopDownShooter_Game_TopDownShooterGameInstance_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWeaponInfoByName);


#define TopDownShooter_Source_TopDownShooter_Game_TopDownShooterGameInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWeaponInfoByName);


#define TopDownShooter_Source_TopDownShooter_Game_TopDownShooterGameInstance_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTopDownShooterGameInstance(); \
	friend struct Z_Construct_UClass_UTopDownShooterGameInstance_Statics; \
public: \
	DECLARE_CLASS(UTopDownShooterGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TopDownShooter"), NO_API) \
	DECLARE_SERIALIZER(UTopDownShooterGameInstance)


#define TopDownShooter_Source_TopDownShooter_Game_TopDownShooterGameInstance_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUTopDownShooterGameInstance(); \
	friend struct Z_Construct_UClass_UTopDownShooterGameInstance_Statics; \
public: \
	DECLARE_CLASS(UTopDownShooterGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TopDownShooter"), NO_API) \
	DECLARE_SERIALIZER(UTopDownShooterGameInstance)


#define TopDownShooter_Source_TopDownShooter_Game_TopDownShooterGameInstance_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTopDownShooterGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTopDownShooterGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTopDownShooterGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTopDownShooterGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTopDownShooterGameInstance(UTopDownShooterGameInstance&&); \
	NO_API UTopDownShooterGameInstance(const UTopDownShooterGameInstance&); \
public:


#define TopDownShooter_Source_TopDownShooter_Game_TopDownShooterGameInstance_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTopDownShooterGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTopDownShooterGameInstance(UTopDownShooterGameInstance&&); \
	NO_API UTopDownShooterGameInstance(const UTopDownShooterGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTopDownShooterGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTopDownShooterGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTopDownShooterGameInstance)


#define TopDownShooter_Source_TopDownShooter_Game_TopDownShooterGameInstance_h_18_PRIVATE_PROPERTY_OFFSET
#define TopDownShooter_Source_TopDownShooter_Game_TopDownShooterGameInstance_h_15_PROLOG
#define TopDownShooter_Source_TopDownShooter_Game_TopDownShooterGameInstance_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownShooter_Source_TopDownShooter_Game_TopDownShooterGameInstance_h_18_PRIVATE_PROPERTY_OFFSET \
	TopDownShooter_Source_TopDownShooter_Game_TopDownShooterGameInstance_h_18_SPARSE_DATA \
	TopDownShooter_Source_TopDownShooter_Game_TopDownShooterGameInstance_h_18_RPC_WRAPPERS \
	TopDownShooter_Source_TopDownShooter_Game_TopDownShooterGameInstance_h_18_INCLASS \
	TopDownShooter_Source_TopDownShooter_Game_TopDownShooterGameInstance_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopDownShooter_Source_TopDownShooter_Game_TopDownShooterGameInstance_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownShooter_Source_TopDownShooter_Game_TopDownShooterGameInstance_h_18_PRIVATE_PROPERTY_OFFSET \
	TopDownShooter_Source_TopDownShooter_Game_TopDownShooterGameInstance_h_18_SPARSE_DATA \
	TopDownShooter_Source_TopDownShooter_Game_TopDownShooterGameInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	TopDownShooter_Source_TopDownShooter_Game_TopDownShooterGameInstance_h_18_INCLASS_NO_PURE_DECLS \
	TopDownShooter_Source_TopDownShooter_Game_TopDownShooterGameInstance_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNSHOOTER_API UClass* StaticClass<class UTopDownShooterGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopDownShooter_Source_TopDownShooter_Game_TopDownShooterGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
