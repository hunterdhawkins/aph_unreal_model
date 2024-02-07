// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject01/TestProject01GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestProject01GameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TESTPROJECT01_API UClass* Z_Construct_UClass_ATestProject01GameMode();
	TESTPROJECT01_API UClass* Z_Construct_UClass_ATestProject01GameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TestProject01();
// End Cross Module References
	void ATestProject01GameMode::StaticRegisterNativesATestProject01GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestProject01GameMode);
	UClass* Z_Construct_UClass_ATestProject01GameMode_NoRegister()
	{
		return ATestProject01GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATestProject01GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestProject01GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject01,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestProject01GameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestProject01GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TestProject01GameMode.h" },
		{ "ModuleRelativePath", "TestProject01GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestProject01GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestProject01GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestProject01GameMode_Statics::ClassParams = {
		&ATestProject01GameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestProject01GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestProject01GameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATestProject01GameMode()
	{
		if (!Z_Registration_Info_UClass_ATestProject01GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestProject01GameMode.OuterSingleton, Z_Construct_UClass_ATestProject01GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestProject01GameMode.OuterSingleton;
	}
	template<> TESTPROJECT01_API UClass* StaticClass<ATestProject01GameMode>()
	{
		return ATestProject01GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestProject01GameMode);
	ATestProject01GameMode::~ATestProject01GameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Source_TestProject01_TestProject01GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Source_TestProject01_TestProject01GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestProject01GameMode, ATestProject01GameMode::StaticClass, TEXT("ATestProject01GameMode"), &Z_Registration_Info_UClass_ATestProject01GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestProject01GameMode), 2009103826U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Source_TestProject01_TestProject01GameMode_h_64487717(TEXT("/Script/TestProject01"),
		Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Source_TestProject01_TestProject01GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Source_TestProject01_TestProject01GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
