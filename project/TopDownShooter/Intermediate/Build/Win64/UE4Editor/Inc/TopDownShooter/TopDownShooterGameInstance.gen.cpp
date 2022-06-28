// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownShooter/Game/TopDownShooterGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownShooterGameInstance() {}
// Cross Module References
	TOPDOWNSHOOTER_API UClass* Z_Construct_UClass_UTopDownShooterGameInstance_NoRegister();
	TOPDOWNSHOOTER_API UClass* Z_Construct_UClass_UTopDownShooterGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_TopDownShooter();
	TOPDOWNSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponInfo();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTopDownShooterGameInstance::execGetWeaponInfoByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NameWeapon);
		P_GET_STRUCT_REF(FWeaponInfo,Z_Param_Out_OutInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWeaponInfoByName(Z_Param_NameWeapon,Z_Param_Out_OutInfo);
		P_NATIVE_END;
	}
	void UTopDownShooterGameInstance::StaticRegisterNativesUTopDownShooterGameInstance()
	{
		UClass* Class = UTopDownShooterGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWeaponInfoByName", &UTopDownShooterGameInstance::execGetWeaponInfoByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTopDownShooterGameInstance_GetWeaponInfoByName_Statics
	{
		struct TopDownShooterGameInstance_eventGetWeaponInfoByName_Parms
		{
			FName NameWeapon;
			FWeaponInfo OutInfo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NameWeapon;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTopDownShooterGameInstance_GetWeaponInfoByName_Statics::NewProp_NameWeapon = { "NameWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TopDownShooterGameInstance_eventGetWeaponInfoByName_Parms, NameWeapon), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTopDownShooterGameInstance_GetWeaponInfoByName_Statics::NewProp_OutInfo = { "OutInfo", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TopDownShooterGameInstance_eventGetWeaponInfoByName_Parms, OutInfo), Z_Construct_UScriptStruct_FWeaponInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTopDownShooterGameInstance_GetWeaponInfoByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TopDownShooterGameInstance_eventGetWeaponInfoByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTopDownShooterGameInstance_GetWeaponInfoByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TopDownShooterGameInstance_eventGetWeaponInfoByName_Parms), &Z_Construct_UFunction_UTopDownShooterGameInstance_GetWeaponInfoByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTopDownShooterGameInstance_GetWeaponInfoByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTopDownShooterGameInstance_GetWeaponInfoByName_Statics::NewProp_NameWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTopDownShooterGameInstance_GetWeaponInfoByName_Statics::NewProp_OutInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTopDownShooterGameInstance_GetWeaponInfoByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTopDownShooterGameInstance_GetWeaponInfoByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game/TopDownShooterGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTopDownShooterGameInstance_GetWeaponInfoByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTopDownShooterGameInstance, nullptr, "GetWeaponInfoByName", nullptr, nullptr, sizeof(TopDownShooterGameInstance_eventGetWeaponInfoByName_Parms), Z_Construct_UFunction_UTopDownShooterGameInstance_GetWeaponInfoByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownShooterGameInstance_GetWeaponInfoByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTopDownShooterGameInstance_GetWeaponInfoByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownShooterGameInstance_GetWeaponInfoByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTopDownShooterGameInstance_GetWeaponInfoByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTopDownShooterGameInstance_GetWeaponInfoByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTopDownShooterGameInstance_NoRegister()
	{
		return UTopDownShooterGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTopDownShooterGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponInfoTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponInfoTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTopDownShooterGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTopDownShooterGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTopDownShooterGameInstance_GetWeaponInfoByName, "GetWeaponInfoByName" }, // 3285983205
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTopDownShooterGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Game/TopDownShooterGameInstance.h" },
		{ "ModuleRelativePath", "Game/TopDownShooterGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTopDownShooterGameInstance_Statics::NewProp_WeaponInfoTable_MetaData[] = {
		{ "Category", "WeaponSetting" },
		{ "Comment", "//table\n" },
		{ "ModuleRelativePath", "Game/TopDownShooterGameInstance.h" },
		{ "ToolTip", "table" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTopDownShooterGameInstance_Statics::NewProp_WeaponInfoTable = { "WeaponInfoTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTopDownShooterGameInstance, WeaponInfoTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTopDownShooterGameInstance_Statics::NewProp_WeaponInfoTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownShooterGameInstance_Statics::NewProp_WeaponInfoTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTopDownShooterGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTopDownShooterGameInstance_Statics::NewProp_WeaponInfoTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTopDownShooterGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTopDownShooterGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTopDownShooterGameInstance_Statics::ClassParams = {
		&UTopDownShooterGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTopDownShooterGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownShooterGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTopDownShooterGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownShooterGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTopDownShooterGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTopDownShooterGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTopDownShooterGameInstance, 1283904519);
	template<> TOPDOWNSHOOTER_API UClass* StaticClass<UTopDownShooterGameInstance>()
	{
		return UTopDownShooterGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTopDownShooterGameInstance(Z_Construct_UClass_UTopDownShooterGameInstance, &UTopDownShooterGameInstance::StaticClass, TEXT("/Script/TopDownShooter"), TEXT("UTopDownShooterGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTopDownShooterGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
