// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleShooter/ASimpleShooterGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASimpleShooterGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AASimpleShooterGameModeBase();
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AASimpleShooterGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleShooter();
// End Cross Module References
	void AASimpleShooterGameModeBase::StaticRegisterNativesAASimpleShooterGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AASimpleShooterGameModeBase);
	UClass* Z_Construct_UClass_AASimpleShooterGameModeBase_NoRegister()
	{
		return AASimpleShooterGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AASimpleShooterGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AASimpleShooterGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AASimpleShooterGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASimpleShooterGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ASimpleShooterGameModeBase.h" },
		{ "ModuleRelativePath", "ASimpleShooterGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AASimpleShooterGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AASimpleShooterGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AASimpleShooterGameModeBase_Statics::ClassParams = {
		&AASimpleShooterGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AASimpleShooterGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AASimpleShooterGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AASimpleShooterGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AASimpleShooterGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AASimpleShooterGameModeBase.OuterSingleton, Z_Construct_UClass_AASimpleShooterGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AASimpleShooterGameModeBase.OuterSingleton;
	}
	template<> SIMPLESHOOTER_API UClass* StaticClass<AASimpleShooterGameModeBase>()
	{
		return AASimpleShooterGameModeBase::StaticClass();
	}
	AASimpleShooterGameModeBase::AASimpleShooterGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AASimpleShooterGameModeBase);
	AASimpleShooterGameModeBase::~AASimpleShooterGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ASimpleShooterGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ASimpleShooterGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AASimpleShooterGameModeBase, AASimpleShooterGameModeBase::StaticClass, TEXT("AASimpleShooterGameModeBase"), &Z_Registration_Info_UClass_AASimpleShooterGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AASimpleShooterGameModeBase), 2420288975U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ASimpleShooterGameModeBase_h_3328062055(TEXT("/Script/SimpleShooter"),
		Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ASimpleShooterGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ASimpleShooterGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
