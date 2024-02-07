// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MqttUtilitiesBPL.h"
#include "Entities/MqttClientConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMqttUtilitiesBPL() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClientInterface_NoRegister();
	MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttUtilitiesBPL();
	MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttUtilitiesBPL_NoRegister();
	MQTTUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMqttClientConfig();
	UPackage* Z_Construct_UPackage__Script_MqttUtilities();
// End Cross Module References
	DEFINE_FUNCTION(UMqttUtilitiesBPL::execCreateMqttClient)
	{
		P_GET_STRUCT(FMqttClientConfig,Z_Param_config);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IMqttClientInterface>*)Z_Param__Result=UMqttUtilitiesBPL::CreateMqttClient(Z_Param_config);
		P_NATIVE_END;
	}
	void UMqttUtilitiesBPL::StaticRegisterNativesUMqttUtilitiesBPL()
	{
		UClass* Class = UMqttUtilitiesBPL::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateMqttClient", &UMqttUtilitiesBPL::execCreateMqttClient },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics
	{
		struct MqttUtilitiesBPL_eventCreateMqttClient_Parms
		{
			FMqttClientConfig config;
			TScriptInterface<IMqttClientInterface> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_config;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::NewProp_config = { "config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttUtilitiesBPL_eventCreateMqttClient_Parms, config), Z_Construct_UScriptStruct_FMqttClientConfig, METADATA_PARAMS(0, nullptr) }; // 3540533356
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttUtilitiesBPL_eventCreateMqttClient_Parms, ReturnValue), Z_Construct_UClass_UMqttClientInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::NewProp_config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/MqttUtilitiesBPL.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttUtilitiesBPL, nullptr, "CreateMqttClient", nullptr, nullptr, Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::MqttUtilitiesBPL_eventCreateMqttClient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::MqttUtilitiesBPL_eventCreateMqttClient_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMqttUtilitiesBPL);
	UClass* Z_Construct_UClass_UMqttUtilitiesBPL_NoRegister()
	{
		return UMqttUtilitiesBPL::StaticClass();
	}
	struct Z_Construct_UClass_UMqttUtilitiesBPL_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMqttUtilitiesBPL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MqttUtilities,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMqttUtilitiesBPL_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMqttUtilitiesBPL_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient, "CreateMqttClient" }, // 2470384
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMqttUtilitiesBPL_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttUtilitiesBPL_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MqttUtilitiesBPL.h" },
		{ "ModuleRelativePath", "Public/MqttUtilitiesBPL.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMqttUtilitiesBPL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMqttUtilitiesBPL>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMqttUtilitiesBPL_Statics::ClassParams = {
		&UMqttUtilitiesBPL::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMqttUtilitiesBPL_Statics::Class_MetaDataParams), Z_Construct_UClass_UMqttUtilitiesBPL_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMqttUtilitiesBPL()
	{
		if (!Z_Registration_Info_UClass_UMqttUtilitiesBPL.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMqttUtilitiesBPL.OuterSingleton, Z_Construct_UClass_UMqttUtilitiesBPL_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMqttUtilitiesBPL.OuterSingleton;
	}
	template<> MQTTUTILITIES_API UClass* StaticClass<UMqttUtilitiesBPL>()
	{
		return UMqttUtilitiesBPL::StaticClass();
	}
	UMqttUtilitiesBPL::UMqttUtilitiesBPL(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMqttUtilitiesBPL);
	UMqttUtilitiesBPL::~UMqttUtilitiesBPL() {}
	struct Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMqttUtilitiesBPL, UMqttUtilitiesBPL::StaticClass, TEXT("UMqttUtilitiesBPL"), &Z_Registration_Info_UClass_UMqttUtilitiesBPL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMqttUtilitiesBPL), 1302744452U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_1439114018(TEXT("/Script/MqttUtilities"),
		Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_MqttUtilities_Source_MqttUtilities_Public_MqttUtilitiesBPL_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
