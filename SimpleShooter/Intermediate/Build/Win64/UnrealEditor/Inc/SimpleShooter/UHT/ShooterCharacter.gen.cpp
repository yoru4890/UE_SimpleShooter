// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleShooter/ShooterCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AGun_NoRegister();
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AShooterCharacter();
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleShooter();
// End Cross Module References
	DEFINE_FUNCTION(AShooterCharacter::execGetHealthPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthPercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDead();
		P_NATIVE_END;
	}
	void AShooterCharacter::StaticRegisterNativesAShooterCharacter()
	{
		UClass* Class = AShooterCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHealthPercent", &AShooterCharacter::execGetHealthPercent },
			{ "IsDead", &AShooterCharacter::execIsDead },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics
	{
		struct ShooterCharacter_eventGetHealthPercent_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterCharacter_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "GetHealthPercent", nullptr, nullptr, Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics::ShooterCharacter_eventGetHealthPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics::ShooterCharacter_eventGetHealthPercent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AShooterCharacter_GetHealthPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_IsDead_Statics
	{
		struct ShooterCharacter_eventIsDead_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ShooterCharacter_eventIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ShooterCharacter_eventIsDead_Parms), &Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "IsDead", nullptr, nullptr, Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::ShooterCharacter_eventIsDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::ShooterCharacter_eventIsDead_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AShooterCharacter_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterCharacter);
	UClass* Z_Construct_UClass_AShooterCharacter_NoRegister()
	{
		return AShooterCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AShooterCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GunClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GunClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gun_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Gun;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterCharacter_GetHealthPercent, "GetHealthPercent" }, // 3673979126
		{ &Z_Construct_UFunction_AShooterCharacter_IsDead, "IsDead" }, // 1097448352
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShooterCharacter.h" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_RotationRate_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, RotationRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_RotationRate_MetaData), Z_Construct_UClass_AShooterCharacter_Statics::NewProp_RotationRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Health_MetaData), Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Health_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_GunClass_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_GunClass = { "GunClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, GunClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AGun_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_GunClass_MetaData), Z_Construct_UClass_AShooterCharacter_Statics::NewProp_GunClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Gun_MetaData[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Gun = { "Gun", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, Gun), Z_Construct_UClass_AGun_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Gun_MetaData), Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Gun_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_RotationRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_GunClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Gun,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterCharacter_Statics::ClassParams = {
		&AShooterCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShooterCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AShooterCharacter()
	{
		if (!Z_Registration_Info_UClass_AShooterCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterCharacter.OuterSingleton, Z_Construct_UClass_AShooterCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooterCharacter.OuterSingleton;
	}
	template<> SIMPLESHOOTER_API UClass* StaticClass<AShooterCharacter>()
	{
		return AShooterCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterCharacter);
	AShooterCharacter::~AShooterCharacter() {}
	struct Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterCharacter, AShooterCharacter::StaticClass, TEXT("AShooterCharacter"), &Z_Registration_Info_UClass_AShooterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterCharacter), 2341309354U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterCharacter_h_3157142449(TEXT("/Script/SimpleShooter"),
		Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
