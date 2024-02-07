// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Entities/MqttConnectionData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMqttConnectionData() {}
// Cross Module References
	MQTTUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMqttConnectionData();
	UPackage* Z_Construct_UPackage__Script_MqttUtilities();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MqttConnectionData;
class UScriptStruct* FMqttConnectionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MqttConnectionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MqttConnectionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMqttConnectionData, (UObject*)Z_Construct_UPackage__Script_MqttUtilities(), TEXT("MqttConnectionData"));
	}
	return Z_Registration_Info_UScriptStruct_MqttConnectionData.OuterSingleton;
}
template<> MQTTUTILITIES_API UScriptStruct* StaticStruct<FMqttConnectionData>()
{
	return FMqttConnectionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMqttConnectionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Login_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Login;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttConnectionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Entities/MqttConnectionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMqttConnectionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Login_MetaData[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** User login. */" },
#endif
		{ "ModuleRelativePath", "Public/Entities/MqttConnectionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "User login." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Login = { "Login", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMqttConnectionData, Login), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Login_MetaData), Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Login_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Password_MetaData[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** User password. */" },
#endif
		{ "ModuleRelativePath", "Public/Entities/MqttConnectionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "User password." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMqttConnectionData, Password), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Password_MetaData), Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Password_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMqttConnectionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Login,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Password,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMqttConnectionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MqttUtilities,
		nullptr,
		&NewStructOps,
		"MqttConnectionData",
		Z_Construct_UScriptStruct_FMqttConnectionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttConnectionData_Statics::PropPointers),
		sizeof(FMqttConnectionData),
		alignof(FMqttConnectionData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttConnectionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMqttConnectionData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttConnectionData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMqttConnectionData()
	{
		if (!Z_Registration_Info_UScriptStruct_MqttConnectionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MqttConnectionData.InnerSingleton, Z_Construct_UScriptStruct_FMqttConnectionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MqttConnectionData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttConnectionData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttConnectionData_h_Statics::ScriptStructInfo[] = {
		{ FMqttConnectionData::StaticStruct, Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewStructOps, TEXT("MqttConnectionData"), &Z_Registration_Info_UScriptStruct_MqttConnectionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMqttConnectionData), 1353518006U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttConnectionData_h_2965951778(TEXT("/Script/MqttUtilities"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttConnectionData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttConnectionData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
