// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Entities/MqttClientConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMqttClientConfig() {}
// Cross Module References
	MQTTUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMqttClientConfig();
	UPackage* Z_Construct_UPackage__Script_MqttUtilities();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MqttClientConfig;
class UScriptStruct* FMqttClientConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MqttClientConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MqttClientConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMqttClientConfig, (UObject*)Z_Construct_UPackage__Script_MqttUtilities(), TEXT("MqttClientConfig"));
	}
	return Z_Registration_Info_UScriptStruct_MqttClientConfig.OuterSingleton;
}
template<> MQTTUTILITIES_API UScriptStruct* StaticStruct<FMqttClientConfig>()
{
	return FMqttClientConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMqttClientConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HostUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HostUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClientId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventLoopDeltaMs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EventLoopDeltaMs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttClientConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Entities/MqttClientConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMqttClientConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_HostUrl_MetaData[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Host URL. */" },
#endif
		{ "ModuleRelativePath", "Public/Entities/MqttClientConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Host URL." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_HostUrl = { "HostUrl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMqttClientConfig, HostUrl), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_HostUrl_MetaData), Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_HostUrl_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Host port. */" },
#endif
		{ "ModuleRelativePath", "Public/Entities/MqttClientConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Host port." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMqttClientConfig, Port), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_Port_MetaData), Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_Port_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_ClientId_MetaData[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Unique client identifier. */" },
#endif
		{ "ModuleRelativePath", "Public/Entities/MqttClientConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unique client identifier." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMqttClientConfig, ClientId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_ClientId_MetaData), Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_ClientId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_EventLoopDeltaMs_MetaData[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum time between two pusblish/subscribe tasks executions expressed in miliseconds. */" },
#endif
		{ "ModuleRelativePath", "Public/Entities/MqttClientConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum time between two pusblish/subscribe tasks executions expressed in miliseconds." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_EventLoopDeltaMs = { "EventLoopDeltaMs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMqttClientConfig, EventLoopDeltaMs), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_EventLoopDeltaMs_MetaData), Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_EventLoopDeltaMs_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMqttClientConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_HostUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_ClientId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_EventLoopDeltaMs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMqttClientConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MqttUtilities,
		nullptr,
		&NewStructOps,
		"MqttClientConfig",
		Z_Construct_UScriptStruct_FMqttClientConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::PropPointers),
		sizeof(FMqttClientConfig),
		alignof(FMqttClientConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMqttClientConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMqttClientConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_MqttClientConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MqttClientConfig.InnerSingleton, Z_Construct_UScriptStruct_FMqttClientConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MqttClientConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttClientConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttClientConfig_h_Statics::ScriptStructInfo[] = {
		{ FMqttClientConfig::StaticStruct, Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewStructOps, TEXT("MqttClientConfig"), &Z_Registration_Info_UScriptStruct_MqttClientConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMqttClientConfig), 3540533356U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttClientConfig_h_1396743985(TEXT("/Script/MqttUtilities"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttClientConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttClientConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
