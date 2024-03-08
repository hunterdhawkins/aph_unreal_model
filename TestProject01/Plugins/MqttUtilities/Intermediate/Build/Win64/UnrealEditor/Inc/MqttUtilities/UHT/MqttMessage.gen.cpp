// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Entities/MqttMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMqttMessage() {}
// Cross Module References
	MQTTUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMqttMessage();
	UPackage* Z_Construct_UPackage__Script_MqttUtilities();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MqttMessage;
class UScriptStruct* FMqttMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MqttMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MqttMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMqttMessage, (UObject*)Z_Construct_UPackage__Script_MqttUtilities(), TEXT("MqttMessage"));
	}
	return Z_Registration_Info_UScriptStruct_MqttMessage.OuterSingleton;
}
template<> MQTTUTILITIES_API UScriptStruct* StaticStruct<FMqttMessage>()
{
	return FMqttMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMqttMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MessageBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MessageBuffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Topic_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Topic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Retain_MetaData[];
#endif
		static void NewProp_Retain_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Retain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Qos_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Qos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Entities/MqttMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMqttMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMqttMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Message content. */" },
#endif
		{ "ModuleRelativePath", "Public/Entities/MqttMessage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Message content." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMqttMessage, Message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Message_MetaData), Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Message_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_MessageBuffer_Inner = { "MessageBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_MessageBuffer_MetaData[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Message content buffer. */" },
#endif
		{ "ModuleRelativePath", "Public/Entities/MqttMessage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Message content buffer." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_MessageBuffer = { "MessageBuffer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMqttMessage, MessageBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_MessageBuffer_MetaData), Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_MessageBuffer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Topic_MetaData[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Message topic. */" },
#endif
		{ "ModuleRelativePath", "Public/Entities/MqttMessage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Message topic." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Topic = { "Topic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMqttMessage, Topic), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Topic_MetaData), Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Topic_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Retain_MetaData[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Retain flag. */" },
#endif
		{ "ModuleRelativePath", "Public/Entities/MqttMessage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retain flag." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Retain_SetBit(void* Obj)
	{
		((FMqttMessage*)Obj)->Retain = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Retain = { "Retain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMqttMessage), &Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Retain_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Retain_MetaData), Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Retain_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Qos_MetaData[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Quality of signal. */" },
#endif
		{ "ModuleRelativePath", "Public/Entities/MqttMessage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Quality of signal." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Qos = { "Qos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMqttMessage, Qos), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Qos_MetaData), Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Qos_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMqttMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_MessageBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_MessageBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Topic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Retain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Qos,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMqttMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MqttUtilities,
		nullptr,
		&NewStructOps,
		"MqttMessage",
		Z_Construct_UScriptStruct_FMqttMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttMessage_Statics::PropPointers),
		sizeof(FMqttMessage),
		alignof(FMqttMessage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMqttMessage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttMessage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMqttMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_MqttMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MqttMessage.InnerSingleton, Z_Construct_UScriptStruct_FMqttMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MqttMessage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttMessage_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttMessage_h_Statics::ScriptStructInfo[] = {
		{ FMqttMessage::StaticStruct, Z_Construct_UScriptStruct_FMqttMessage_Statics::NewStructOps, TEXT("MqttMessage"), &Z_Registration_Info_UScriptStruct_MqttMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMqttMessage), 2365351904U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttMessage_h_3713538811(TEXT("/Script/MqttUtilities"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttMessage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttMessage_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
