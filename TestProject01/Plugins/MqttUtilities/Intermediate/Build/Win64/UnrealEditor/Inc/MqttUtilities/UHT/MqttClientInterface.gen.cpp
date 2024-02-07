// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interface/MqttClientInterface.h"
#include "Entities/MqttConnectionData.h"
#include "Entities/MqttMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMqttClientInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClientInterface();
	MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClientInterface_NoRegister();
	MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature();
	MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature();
	MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature();
	MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature();
	MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature();
	MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature();
	MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature();
	MQTTUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMqttConnectionData();
	MQTTUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMqttMessage();
	UPackage* Z_Construct_UPackage__Script_MqttUtilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MqttUtilities, nullptr, "OnConnectDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnConnectDelegate_DelegateWrapper(const FScriptDelegate& OnConnectDelegate)
{
	OnConnectDelegate.ProcessDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MqttUtilities, nullptr, "OnDisconnectDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDisconnectDelegate_DelegateWrapper(const FScriptDelegate& OnDisconnectDelegate)
{
	OnDisconnectDelegate.ProcessDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics
	{
		struct _Script_MqttUtilities_eventOnPublishDelegate_Parms
		{
			int32 mid;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_mid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::NewProp_mid = { "mid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MqttUtilities_eventOnPublishDelegate_Parms, mid), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::NewProp_mid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MqttUtilities, nullptr, "OnPublishDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::_Script_MqttUtilities_eventOnPublishDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::_Script_MqttUtilities_eventOnPublishDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPublishDelegate_DelegateWrapper(const FScriptDelegate& OnPublishDelegate, int32 mid)
{
	struct _Script_MqttUtilities_eventOnPublishDelegate_Parms
	{
		int32 mid;
	};
	_Script_MqttUtilities_eventOnPublishDelegate_Parms Parms;
	Parms.mid=mid;
	OnPublishDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics
	{
		struct _Script_MqttUtilities_eventOnMessageDelegate_Parms
		{
			FMqttMessage message;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MqttUtilities_eventOnMessageDelegate_Parms, message), Z_Construct_UScriptStruct_FMqttMessage, METADATA_PARAMS(0, nullptr) }; // 2365351904
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MqttUtilities, nullptr, "OnMessageDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::_Script_MqttUtilities_eventOnMessageDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::_Script_MqttUtilities_eventOnMessageDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMessageDelegate_DelegateWrapper(const FScriptDelegate& OnMessageDelegate, FMqttMessage message)
{
	struct _Script_MqttUtilities_eventOnMessageDelegate_Parms
	{
		FMqttMessage message;
	};
	_Script_MqttUtilities_eventOnMessageDelegate_Parms Parms;
	Parms.message=message;
	OnMessageDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics
	{
		struct _Script_MqttUtilities_eventOnSubscribeDelegate_Parms
		{
			int32 mid;
			TArray<int32> qos;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_mid;
		static const UECodeGen_Private::FIntPropertyParams NewProp_qos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_qos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_qos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_mid = { "mid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MqttUtilities_eventOnSubscribeDelegate_Parms, mid), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_qos_Inner = { "qos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_qos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_qos = { "qos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MqttUtilities_eventOnSubscribeDelegate_Parms, qos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_qos_MetaData), Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_qos_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_mid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_qos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_qos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MqttUtilities, nullptr, "OnSubscribeDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::_Script_MqttUtilities_eventOnSubscribeDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::_Script_MqttUtilities_eventOnSubscribeDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSubscribeDelegate_DelegateWrapper(const FScriptDelegate& OnSubscribeDelegate, int32 mid, TArray<int32> const& qos)
{
	struct _Script_MqttUtilities_eventOnSubscribeDelegate_Parms
	{
		int32 mid;
		TArray<int32> qos;
	};
	_Script_MqttUtilities_eventOnSubscribeDelegate_Parms Parms;
	Parms.mid=mid;
	Parms.qos=qos;
	OnSubscribeDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics
	{
		struct _Script_MqttUtilities_eventOnUnsubscribeDelegate_Parms
		{
			int32 mid;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_mid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::NewProp_mid = { "mid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MqttUtilities_eventOnUnsubscribeDelegate_Parms, mid), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::NewProp_mid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MqttUtilities, nullptr, "OnUnsubscribeDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::_Script_MqttUtilities_eventOnUnsubscribeDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::_Script_MqttUtilities_eventOnUnsubscribeDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnUnsubscribeDelegate_DelegateWrapper(const FScriptDelegate& OnUnsubscribeDelegate, int32 mid)
{
	struct _Script_MqttUtilities_eventOnUnsubscribeDelegate_Parms
	{
		int32 mid;
	};
	_Script_MqttUtilities_eventOnUnsubscribeDelegate_Parms Parms;
	Parms.mid=mid;
	OnUnsubscribeDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics
	{
		struct _Script_MqttUtilities_eventOnMqttErrorDelegate_Parms
		{
			int32 code;
			FString message;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_code;
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::NewProp_code = { "code", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MqttUtilities_eventOnMqttErrorDelegate_Parms, code), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MqttUtilities_eventOnMqttErrorDelegate_Parms, message), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::NewProp_code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MqttUtilities, nullptr, "OnMqttErrorDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::_Script_MqttUtilities_eventOnMqttErrorDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::_Script_MqttUtilities_eventOnMqttErrorDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMqttErrorDelegate_DelegateWrapper(const FScriptDelegate& OnMqttErrorDelegate, int32 code, const FString& message)
{
	struct _Script_MqttUtilities_eventOnMqttErrorDelegate_Parms
	{
		int32 code;
		FString message;
	};
	_Script_MqttUtilities_eventOnMqttErrorDelegate_Parms Parms;
	Parms.code=code;
	Parms.message=message;
	OnMqttErrorDelegate.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(IMqttClientInterface::execSetOnErrorHandler)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onErrorCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnErrorHandler(FOnMqttErrorDelegate(Z_Param_Out_onErrorCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMqttClientInterface::execSetOnUnsubscribeHandler)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onUnsubscribeCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnUnsubscribeHandler(FOnUnsubscribeDelegate(Z_Param_Out_onUnsubscribeCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMqttClientInterface::execSetOnSubscribeHandler)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onSubscribeCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnSubscribeHandler(FOnSubscribeDelegate(Z_Param_Out_onSubscribeCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMqttClientInterface::execSetOnMessageHandler)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onMessageCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnMessageHandler(FOnMessageDelegate(Z_Param_Out_onMessageCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMqttClientInterface::execSetOnPublishHandler)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onPublishCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnPublishHandler(FOnPublishDelegate(Z_Param_Out_onPublishCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMqttClientInterface::execPublish)
	{
		P_GET_STRUCT(FMqttMessage,Z_Param_message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Publish(Z_Param_message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMqttClientInterface::execUnsubscribe)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_topic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unsubscribe(Z_Param_topic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMqttClientInterface::execSubscribe)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_topic);
		P_GET_PROPERTY(FIntProperty,Z_Param_qos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Subscribe(Z_Param_topic,Z_Param_qos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMqttClientInterface::execDisconnect)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onDisconnectCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disconnect(FOnDisconnectDelegate(Z_Param_Out_onDisconnectCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMqttClientInterface::execConnect)
	{
		P_GET_STRUCT(FMqttConnectionData,Z_Param_connectionData);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onConnectCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Connect(Z_Param_connectionData,FOnConnectDelegate(Z_Param_Out_onConnectCallback));
		P_NATIVE_END;
	}
	void UMqttClientInterface::StaticRegisterNativesUMqttClientInterface()
	{
		UClass* Class = UMqttClientInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Connect", &IMqttClientInterface::execConnect },
			{ "Disconnect", &IMqttClientInterface::execDisconnect },
			{ "Publish", &IMqttClientInterface::execPublish },
			{ "SetOnErrorHandler", &IMqttClientInterface::execSetOnErrorHandler },
			{ "SetOnMessageHandler", &IMqttClientInterface::execSetOnMessageHandler },
			{ "SetOnPublishHandler", &IMqttClientInterface::execSetOnPublishHandler },
			{ "SetOnSubscribeHandler", &IMqttClientInterface::execSetOnSubscribeHandler },
			{ "SetOnUnsubscribeHandler", &IMqttClientInterface::execSetOnUnsubscribeHandler },
			{ "Subscribe", &IMqttClientInterface::execSubscribe },
			{ "Unsubscribe", &IMqttClientInterface::execUnsubscribe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMqttClientInterface_Connect_Statics
	{
		struct MqttClientInterface_eventConnect_Parms
		{
			FMqttConnectionData connectionData;
			FScriptDelegate onConnectCallback;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_connectionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onConnectCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onConnectCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::NewProp_connectionData = { "connectionData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientInterface_eventConnect_Parms, connectionData), Z_Construct_UScriptStruct_FMqttConnectionData, METADATA_PARAMS(0, nullptr) }; // 1353518006
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::NewProp_onConnectCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::NewProp_onConnectCallback = { "onConnectCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientInterface_eventConnect_Parms, onConnectCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::NewProp_onConnectCallback_MetaData), Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::NewProp_onConnectCallback_MetaData) }; // 2812591909
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::NewProp_connectionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::NewProp_onConnectCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Connect to MQTT broker\n\x09 * @param connectionData - structure with data required to connect to MQTT broker (host url, port, client id etc.)\n\x09 * @param onConnectCallback - callback function handler triigered after client successfully established connection with MQTT broker \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Connect to MQTT broker\n@param connectionData - structure with data required to connect to MQTT broker (host url, port, client id etc.)\n@param onConnectCallback - callback function handler triigered after client successfully established connection with MQTT broker" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "Connect", nullptr, nullptr, Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::MqttClientInterface_eventConnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::MqttClientInterface_eventConnect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMqttClientInterface_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics
	{
		struct MqttClientInterface_eventDisconnect_Parms
		{
			FScriptDelegate onDisconnectCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onDisconnectCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onDisconnectCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::NewProp_onDisconnectCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::NewProp_onDisconnectCallback = { "onDisconnectCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientInterface_eventDisconnect_Parms, onDisconnectCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::NewProp_onDisconnectCallback_MetaData), Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::NewProp_onDisconnectCallback_MetaData) }; // 1533299583
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::NewProp_onDisconnectCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Disconnect from MQTT broker\n\x09 * @param onDisconnectCallback - callback function handler triigered after client was disconnected from MQTT broker\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disconnect from MQTT broker\n@param onDisconnectCallback - callback function handler triigered after client was disconnected from MQTT broker" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "Disconnect", nullptr, nullptr, Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::MqttClientInterface_eventDisconnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::MqttClientInterface_eventDisconnect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMqttClientInterface_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientInterface_Publish_Statics
	{
		struct MqttClientInterface_eventPublish_Parms
		{
			FMqttMessage message;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientInterface_eventPublish_Parms, message), Z_Construct_UScriptStruct_FMqttMessage, METADATA_PARAMS(0, nullptr) }; // 2365351904
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Publish message\n\x09 * @param message - structure with message data (topic, QoS, payload etc.)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Publish message\n@param message - structure with message data (topic, QoS, payload etc.)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "Publish", nullptr, nullptr, Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::MqttClientInterface_eventPublish_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::MqttClientInterface_eventPublish_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMqttClientInterface_Publish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics
	{
		struct MqttClientInterface_eventSetOnErrorHandler_Parms
		{
			FScriptDelegate onErrorCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onErrorCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onErrorCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::NewProp_onErrorCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::NewProp_onErrorCallback = { "onErrorCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientInterface_eventSetOnErrorHandler_Parms, onErrorCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::NewProp_onErrorCallback_MetaData), Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::NewProp_onErrorCallback_MetaData) }; // 2937113785
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::NewProp_onErrorCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set handler for error event\n\x09 * @param onErrorCallback - callback function handler triigered after any MQTT-related error occured\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set handler for error event\n@param onErrorCallback - callback function handler triigered after any MQTT-related error occured" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "SetOnErrorHandler", nullptr, nullptr, Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::MqttClientInterface_eventSetOnErrorHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::MqttClientInterface_eventSetOnErrorHandler_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics
	{
		struct MqttClientInterface_eventSetOnMessageHandler_Parms
		{
			FScriptDelegate onMessageCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onMessageCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onMessageCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::NewProp_onMessageCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::NewProp_onMessageCallback = { "onMessageCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientInterface_eventSetOnMessageHandler_Parms, onMessageCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::NewProp_onMessageCallback_MetaData), Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::NewProp_onMessageCallback_MetaData) }; // 177401251
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::NewProp_onMessageCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set handler for message receiving event\n\x09 * @param onMessageCallback - callback function handler triigered after client received message from MQTT broker\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set handler for message receiving event\n@param onMessageCallback - callback function handler triigered after client received message from MQTT broker" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "SetOnMessageHandler", nullptr, nullptr, Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::MqttClientInterface_eventSetOnMessageHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::MqttClientInterface_eventSetOnMessageHandler_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics
	{
		struct MqttClientInterface_eventSetOnPublishHandler_Parms
		{
			FScriptDelegate onPublishCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onPublishCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onPublishCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::NewProp_onPublishCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::NewProp_onPublishCallback = { "onPublishCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientInterface_eventSetOnPublishHandler_Parms, onPublishCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::NewProp_onPublishCallback_MetaData), Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::NewProp_onPublishCallback_MetaData) }; // 466482726
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::NewProp_onPublishCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set handler for message publishing event\n\x09 * @param onPublishCallback - callback function handler triigered after client message was published to MQTT broker\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set handler for message publishing event\n@param onPublishCallback - callback function handler triigered after client message was published to MQTT broker" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "SetOnPublishHandler", nullptr, nullptr, Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::MqttClientInterface_eventSetOnPublishHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::MqttClientInterface_eventSetOnPublishHandler_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics
	{
		struct MqttClientInterface_eventSetOnSubscribeHandler_Parms
		{
			FScriptDelegate onSubscribeCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onSubscribeCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onSubscribeCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::NewProp_onSubscribeCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::NewProp_onSubscribeCallback = { "onSubscribeCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientInterface_eventSetOnSubscribeHandler_Parms, onSubscribeCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::NewProp_onSubscribeCallback_MetaData), Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::NewProp_onSubscribeCallback_MetaData) }; // 1223992560
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::NewProp_onSubscribeCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set handler for subscription event\n\x09 * @param onSubscribeCallback - callback function handler triigered after client subscribed to topic exposed by MQTT broker\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set handler for subscription event\n@param onSubscribeCallback - callback function handler triigered after client subscribed to topic exposed by MQTT broker" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "SetOnSubscribeHandler", nullptr, nullptr, Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::MqttClientInterface_eventSetOnSubscribeHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::MqttClientInterface_eventSetOnSubscribeHandler_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics
	{
		struct MqttClientInterface_eventSetOnUnsubscribeHandler_Parms
		{
			FScriptDelegate onUnsubscribeCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onUnsubscribeCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onUnsubscribeCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::NewProp_onUnsubscribeCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::NewProp_onUnsubscribeCallback = { "onUnsubscribeCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientInterface_eventSetOnUnsubscribeHandler_Parms, onUnsubscribeCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::NewProp_onUnsubscribeCallback_MetaData), Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::NewProp_onUnsubscribeCallback_MetaData) }; // 191212297
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::NewProp_onUnsubscribeCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set handler for unsubscription event\n\x09 * @param onUnsubscribeCallback - callback function handler triigered after client unsubscribed from topic exposed by MQTT broker\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set handler for unsubscription event\n@param onUnsubscribeCallback - callback function handler triigered after client unsubscribed from topic exposed by MQTT broker" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "SetOnUnsubscribeHandler", nullptr, nullptr, Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::MqttClientInterface_eventSetOnUnsubscribeHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::MqttClientInterface_eventSetOnUnsubscribeHandler_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics
	{
		struct MqttClientInterface_eventSubscribe_Parms
		{
			FString topic;
			int32 qos;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_topic;
		static const UECodeGen_Private::FIntPropertyParams NewProp_qos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::NewProp_topic = { "topic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientInterface_eventSubscribe_Parms, topic), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::NewProp_qos = { "qos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientInterface_eventSubscribe_Parms, qos), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::NewProp_topic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::NewProp_qos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Subscribe to topic\n\x09 * @param topic - name of the topic\n\x09 * @param qos - level of quality of service\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subscribe to topic\n@param topic - name of the topic\n@param qos - level of quality of service" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "Subscribe", nullptr, nullptr, Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::MqttClientInterface_eventSubscribe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::MqttClientInterface_eventSubscribe_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMqttClientInterface_Subscribe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics
	{
		struct MqttClientInterface_eventUnsubscribe_Parms
		{
			FString topic;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_topic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::NewProp_topic = { "topic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientInterface_eventUnsubscribe_Parms, topic), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::NewProp_topic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Unsubscribe from topic\n\x09 * @param topic - name of the topic\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unsubscribe from topic\n@param topic - name of the topic" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "Unsubscribe", nullptr, nullptr, Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::MqttClientInterface_eventUnsubscribe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::MqttClientInterface_eventUnsubscribe_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMqttClientInterface_Unsubscribe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMqttClientInterface);
	UClass* Z_Construct_UClass_UMqttClientInterface_NoRegister()
	{
		return UMqttClientInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMqttClientInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMqttClientInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MqttUtilities,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMqttClientInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMqttClientInterface_Connect, "Connect" }, // 2564640501
		{ &Z_Construct_UFunction_UMqttClientInterface_Disconnect, "Disconnect" }, // 3009861797
		{ &Z_Construct_UFunction_UMqttClientInterface_Publish, "Publish" }, // 3786532649
		{ &Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler, "SetOnErrorHandler" }, // 2561544217
		{ &Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler, "SetOnMessageHandler" }, // 1935014645
		{ &Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler, "SetOnPublishHandler" }, // 2267120722
		{ &Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler, "SetOnSubscribeHandler" }, // 2374175679
		{ &Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler, "SetOnUnsubscribeHandler" }, // 3852859437
		{ &Z_Construct_UFunction_UMqttClientInterface_Subscribe, "Subscribe" }, // 4242336674
		{ &Z_Construct_UFunction_UMqttClientInterface_Unsubscribe, "Unsubscribe" }, // 563470787
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttClientInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMqttClientInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMqttClientInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMqttClientInterface_Statics::ClassParams = {
		&UMqttClientInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMqttClientInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMqttClientInterface()
	{
		if (!Z_Registration_Info_UClass_UMqttClientInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMqttClientInterface.OuterSingleton, Z_Construct_UClass_UMqttClientInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMqttClientInterface.OuterSingleton;
	}
	template<> MQTTUTILITIES_API UClass* StaticClass<UMqttClientInterface>()
	{
		return UMqttClientInterface::StaticClass();
	}
	UMqttClientInterface::UMqttClientInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMqttClientInterface);
	UMqttClientInterface::~UMqttClientInterface() {}
	struct Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMqttClientInterface, UMqttClientInterface::StaticClass, TEXT("UMqttClientInterface"), &Z_Registration_Info_UClass_UMqttClientInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMqttClientInterface), 2791598724U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_1566023172(TEXT("/Script/MqttUtilities"),
		Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
