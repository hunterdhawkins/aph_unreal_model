// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SIOJsonObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USIOJsonObject;
class USIOJsonValue;
#ifdef SIOJSON_SIOJsonObject_generated_h
#error "SIOJsonObject.generated.h already included, missing '#pragma once' in SIOJsonObject.h"
#endif
#define SIOJSON_SIOJsonObject_generated_h

#define FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h_20_SPARSE_DATA
#define FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetObjectArrayField); \
	DECLARE_FUNCTION(execGetObjectArrayField); \
	DECLARE_FUNCTION(execSetBoolArrayField); \
	DECLARE_FUNCTION(execGetBoolArrayField); \
	DECLARE_FUNCTION(execSetStringArrayField); \
	DECLARE_FUNCTION(execGetStringArrayField); \
	DECLARE_FUNCTION(execSetNumberArrayField); \
	DECLARE_FUNCTION(execGetNumberArrayField); \
	DECLARE_FUNCTION(execSetBinaryField); \
	DECLARE_FUNCTION(execGetBinaryField); \
	DECLARE_FUNCTION(execSetObjectField); \
	DECLARE_FUNCTION(execGetObjectField); \
	DECLARE_FUNCTION(execSetBoolField); \
	DECLARE_FUNCTION(execGetBoolField); \
	DECLARE_FUNCTION(execSetStringField); \
	DECLARE_FUNCTION(execGetStringField); \
	DECLARE_FUNCTION(execSetNumberField); \
	DECLARE_FUNCTION(execGetNumberField); \
	DECLARE_FUNCTION(execMergeJsonObject); \
	DECLARE_FUNCTION(execSetArrayField); \
	DECLARE_FUNCTION(execGetArrayField); \
	DECLARE_FUNCTION(execSetField); \
	DECLARE_FUNCTION(execGetField); \
	DECLARE_FUNCTION(execRemoveField); \
	DECLARE_FUNCTION(execHasField); \
	DECLARE_FUNCTION(execGetFieldNames); \
	DECLARE_FUNCTION(execDecodeJson); \
	DECLARE_FUNCTION(execEncodeJsonToSingleString); \
	DECLARE_FUNCTION(execEncodeJson); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execConstructJsonObject);


#define FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h_20_ACCESSORS
#define FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSIOJsonObject(); \
	friend struct Z_Construct_UClass_USIOJsonObject_Statics; \
public: \
	DECLARE_CLASS(USIOJsonObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SIOJson"), NO_API) \
	DECLARE_SERIALIZER(USIOJsonObject)


#define FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIOJsonObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIOJsonObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIOJsonObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIOJsonObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USIOJsonObject(USIOJsonObject&&); \
	NO_API USIOJsonObject(const USIOJsonObject&); \
public: \
	NO_API virtual ~USIOJsonObject();


#define FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h_17_PROLOG
#define FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h_20_SPARSE_DATA \
	FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h_20_RPC_WRAPPERS \
	FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h_20_ACCESSORS \
	FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h_20_INCLASS \
	FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIOJSON_API UClass* StaticClass<class USIOJsonObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_hawk5052_Documents_Unreal_Projects_aph_unreal_model_TestProject01_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
