// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMeFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeFunctionLibrary() {}
// Cross Module References
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_NoRegister();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFRuntimeAsset_NoRegister();
	READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_AvatarBodyType();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeConfig();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeMaterialsConfig();
	READYPLAYERME_API UScriptStruct* Z_Construct_UScriptStruct_FAvatarMetadata();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeSkeletonConfig();
	READYPLAYERME_API UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarMetadataHttpResponse__DelegateSignature();
	READYPLAYERME_API UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadFailed__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execSetMorphTarget)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skeletalMeshComponent);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UReadyPlayerMeFunctionLibrary::SetMorphTarget(Z_Param_skeletalMeshComponent,Z_Param_name,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execSetMorphTargets)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skeletalMeshComponent);
		P_GET_TMAP_REF(FString,float,Z_Param_Out_morphTargetMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		UReadyPlayerMeFunctionLibrary::SetMorphTargets(Z_Param_skeletalMeshComponent,Z_Param_Out_morphTargetMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execLoadAvatarMetadata)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_url);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_completed);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onLoadFailed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UReadyPlayerMeFunctionLibrary::LoadAvatarMetadata(Z_Param_url,FAvatarMetadataHttpResponse(Z_Param_Out_completed),FAvatarLoadFailed(Z_Param_Out_onLoadFailed));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execGetBodyTypeFromAsset)
	{
		P_GET_OBJECT(UglTFRuntimeAsset,Z_Param_gltfRuntimeAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<AvatarBodyType>*)Z_Param__Result=UReadyPlayerMeFunctionLibrary::GetBodyTypeFromAsset(Z_Param_gltfRuntimeAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execGetRootBoneName)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_avatarBodyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UReadyPlayerMeFunctionLibrary::GetRootBoneName((TEnumAsByte<AvatarBodyType>&)(Z_Param_Out_avatarBodyType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execGetglTFRuntimeConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FglTFRuntimeConfig*)Z_Param__Result=UReadyPlayerMeFunctionLibrary::GetglTFRuntimeConfig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execGetglTFRuntimeSkeletalMeshConfig)
	{
		P_GET_STRUCT_REF(FAvatarMetadata,Z_Param_Out_avatarMetaData);
		P_GET_OBJECT(USkeleton,Z_Param_skeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FglTFRuntimeSkeletalMeshConfig*)Z_Param__Result=UReadyPlayerMeFunctionLibrary::GetglTFRuntimeSkeletalMeshConfig(Z_Param_Out_avatarMetaData,Z_Param_skeleton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execGetglTFRuntimeMaterialsConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FglTFRuntimeMaterialsConfig*)Z_Param__Result=UReadyPlayerMeFunctionLibrary::GetglTFRuntimeMaterialsConfig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execGetglTFRuntimeSkeletonConfig)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_rootBoneName);
		P_GET_OBJECT(USkeleton,Z_Param_skeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FglTFRuntimeSkeletonConfig*)Z_Param__Result=UReadyPlayerMeFunctionLibrary::GetglTFRuntimeSkeletonConfig(Z_Param_rootBoneName,Z_Param_skeleton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execIsUrl)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_url);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UReadyPlayerMeFunctionLibrary::IsUrl(Z_Param_url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execGetUrlFromShortcode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_shortcode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UReadyPlayerMeFunctionLibrary::GetUrlFromShortcode(Z_Param_shortcode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execGetValidatedUrlShortCode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_urlShortCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UReadyPlayerMeFunctionLibrary::GetValidatedUrlShortCode(Z_Param_urlShortCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execSetupSkeletalMeshComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_targetActor);
		P_GET_OBJECT(USkeletalMesh,Z_Param_skeletalMesh);
		P_GET_STRUCT_REF(FAvatarMetadata,Z_Param_Out_avatarMetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=UReadyPlayerMeFunctionLibrary::SetupSkeletalMeshComponent(Z_Param_targetActor,Z_Param_skeletalMesh,Z_Param_Out_avatarMetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execAddSkeletalMeshComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=UReadyPlayerMeFunctionLibrary::AddSkeletalMeshComponent(Z_Param_target);
		P_NATIVE_END;
	}
	void UReadyPlayerMeFunctionLibrary::StaticRegisterNativesUReadyPlayerMeFunctionLibrary()
	{
		UClass* Class = UReadyPlayerMeFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSkeletalMeshComponent", &UReadyPlayerMeFunctionLibrary::execAddSkeletalMeshComponent },
			{ "GetBodyTypeFromAsset", &UReadyPlayerMeFunctionLibrary::execGetBodyTypeFromAsset },
			{ "GetglTFRuntimeConfig", &UReadyPlayerMeFunctionLibrary::execGetglTFRuntimeConfig },
			{ "GetglTFRuntimeMaterialsConfig", &UReadyPlayerMeFunctionLibrary::execGetglTFRuntimeMaterialsConfig },
			{ "GetglTFRuntimeSkeletalMeshConfig", &UReadyPlayerMeFunctionLibrary::execGetglTFRuntimeSkeletalMeshConfig },
			{ "GetglTFRuntimeSkeletonConfig", &UReadyPlayerMeFunctionLibrary::execGetglTFRuntimeSkeletonConfig },
			{ "GetRootBoneName", &UReadyPlayerMeFunctionLibrary::execGetRootBoneName },
			{ "GetUrlFromShortcode", &UReadyPlayerMeFunctionLibrary::execGetUrlFromShortcode },
			{ "GetValidatedUrlShortCode", &UReadyPlayerMeFunctionLibrary::execGetValidatedUrlShortCode },
			{ "IsUrl", &UReadyPlayerMeFunctionLibrary::execIsUrl },
			{ "LoadAvatarMetadata", &UReadyPlayerMeFunctionLibrary::execLoadAvatarMetadata },
			{ "SetMorphTarget", &UReadyPlayerMeFunctionLibrary::execSetMorphTarget },
			{ "SetMorphTargets", &UReadyPlayerMeFunctionLibrary::execSetMorphTargets },
			{ "SetupSkeletalMeshComponent", &UReadyPlayerMeFunctionLibrary::execSetupSkeletalMeshComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_AddSkeletalMeshComponent_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventAddSkeletalMeshComponent_Parms
		{
			AActor* target;
			USkeletalMeshComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_AddSkeletalMeshComponent_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventAddSkeletalMeshComponent_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_AddSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_AddSkeletalMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventAddSkeletalMeshComponent_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_AddSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_AddSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_AddSkeletalMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_AddSkeletalMeshComponent_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_AddSkeletalMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_AddSkeletalMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DefaultToSelf", "target" },
		{ "DisplayName", "RPM Add Skeletal Mesh Component" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_AddSkeletalMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "AddSkeletalMeshComponent", nullptr, nullptr, sizeof(ReadyPlayerMeFunctionLibrary_eventAddSkeletalMeshComponent_Parms), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_AddSkeletalMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_AddSkeletalMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_AddSkeletalMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_AddSkeletalMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_AddSkeletalMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_AddSkeletalMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetBodyTypeFromAsset_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventGetBodyTypeFromAsset_Parms
		{
			UglTFRuntimeAsset* gltfRuntimeAsset;
			TEnumAsByte<AvatarBodyType> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gltfRuntimeAsset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetBodyTypeFromAsset_Statics::NewProp_gltfRuntimeAsset = { "gltfRuntimeAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventGetBodyTypeFromAsset_Parms, gltfRuntimeAsset), Z_Construct_UClass_UglTFRuntimeAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetBodyTypeFromAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventGetBodyTypeFromAsset_Parms, ReturnValue), Z_Construct_UEnum_ReadyPlayerMe_AvatarBodyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetBodyTypeFromAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetBodyTypeFromAsset_Statics::NewProp_gltfRuntimeAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetBodyTypeFromAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetBodyTypeFromAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Get Body Type From Asset" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetBodyTypeFromAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "GetBodyTypeFromAsset", nullptr, nullptr, sizeof(ReadyPlayerMeFunctionLibrary_eventGetBodyTypeFromAsset_Parms), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetBodyTypeFromAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetBodyTypeFromAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetBodyTypeFromAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetBodyTypeFromAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetBodyTypeFromAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetBodyTypeFromAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeConfig_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventGetglTFRuntimeConfig_Parms
		{
			FglTFRuntimeConfig ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventGetglTFRuntimeConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FglTFRuntimeConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Get glTFRuntime Runtime Config" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "GetglTFRuntimeConfig", nullptr, nullptr, sizeof(ReadyPlayerMeFunctionLibrary_eventGetglTFRuntimeConfig_Parms), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeMaterialsConfig_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventGetglTFRuntimeMaterialsConfig_Parms
		{
			FglTFRuntimeMaterialsConfig ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeMaterialsConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventGetglTFRuntimeMaterialsConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FglTFRuntimeMaterialsConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeMaterialsConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeMaterialsConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeMaterialsConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Get glTFRuntime Materials Config" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeMaterialsConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "GetglTFRuntimeMaterialsConfig", nullptr, nullptr, sizeof(ReadyPlayerMeFunctionLibrary_eventGetglTFRuntimeMaterialsConfig_Parms), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeMaterialsConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeMaterialsConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeMaterialsConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeMaterialsConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeMaterialsConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeMaterialsConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletalMeshConfig_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventGetglTFRuntimeSkeletalMeshConfig_Parms
		{
			FAvatarMetadata avatarMetaData;
			USkeleton* skeleton;
			FglTFRuntimeSkeletalMeshConfig ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_avatarMetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_avatarMetaData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skeleton;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletalMeshConfig_Statics::NewProp_avatarMetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletalMeshConfig_Statics::NewProp_avatarMetaData = { "avatarMetaData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventGetglTFRuntimeSkeletalMeshConfig_Parms, avatarMetaData), Z_Construct_UScriptStruct_FAvatarMetadata, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletalMeshConfig_Statics::NewProp_avatarMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletalMeshConfig_Statics::NewProp_avatarMetaData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletalMeshConfig_Statics::NewProp_skeleton = { "skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventGetglTFRuntimeSkeletalMeshConfig_Parms, skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletalMeshConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventGetglTFRuntimeSkeletalMeshConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletalMeshConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletalMeshConfig_Statics::NewProp_avatarMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletalMeshConfig_Statics::NewProp_skeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletalMeshConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletalMeshConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "CPP_Default_skeleton", "None" },
		{ "DisplayName", "Get glTFRuntime Skeletal Mesh Config" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletalMeshConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "GetglTFRuntimeSkeletalMeshConfig", nullptr, nullptr, sizeof(ReadyPlayerMeFunctionLibrary_eventGetglTFRuntimeSkeletalMeshConfig_Parms), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletalMeshConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletalMeshConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletalMeshConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletalMeshConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletalMeshConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletalMeshConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletonConfig_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventGetglTFRuntimeSkeletonConfig_Parms
		{
			FString rootBoneName;
			USkeleton* skeleton;
			FglTFRuntimeSkeletonConfig ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rootBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_rootBoneName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skeleton;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletonConfig_Statics::NewProp_rootBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletonConfig_Statics::NewProp_rootBoneName = { "rootBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventGetglTFRuntimeSkeletonConfig_Parms, rootBoneName), METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletonConfig_Statics::NewProp_rootBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletonConfig_Statics::NewProp_rootBoneName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletonConfig_Statics::NewProp_skeleton = { "skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventGetglTFRuntimeSkeletonConfig_Parms, skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletonConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventGetglTFRuntimeSkeletonConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FglTFRuntimeSkeletonConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletonConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletonConfig_Statics::NewProp_rootBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletonConfig_Statics::NewProp_skeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletonConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletonConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Get glTFRuntime Skeleton Config" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletonConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "GetglTFRuntimeSkeletonConfig", nullptr, nullptr, sizeof(ReadyPlayerMeFunctionLibrary_eventGetglTFRuntimeSkeletonConfig_Parms), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletonConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletonConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletonConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletonConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletonConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletonConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetRootBoneName_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventGetRootBoneName_Parms
		{
			TEnumAsByte<AvatarBodyType> avatarBodyType;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_avatarBodyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_avatarBodyType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetRootBoneName_Statics::NewProp_avatarBodyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetRootBoneName_Statics::NewProp_avatarBodyType = { "avatarBodyType", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventGetRootBoneName_Parms, avatarBodyType), Z_Construct_UEnum_ReadyPlayerMe_AvatarBodyType, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetRootBoneName_Statics::NewProp_avatarBodyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetRootBoneName_Statics::NewProp_avatarBodyType_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetRootBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventGetRootBoneName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetRootBoneName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetRootBoneName_Statics::NewProp_avatarBodyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetRootBoneName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetRootBoneName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Get Root Bone Name" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetRootBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "GetRootBoneName", nullptr, nullptr, sizeof(ReadyPlayerMeFunctionLibrary_eventGetRootBoneName_Parms), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetRootBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetRootBoneName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetRootBoneName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetRootBoneName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetRootBoneName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetRootBoneName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetUrlFromShortcode_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventGetUrlFromShortcode_Parms
		{
			FString shortcode;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shortcode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_shortcode;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetUrlFromShortcode_Statics::NewProp_shortcode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetUrlFromShortcode_Statics::NewProp_shortcode = { "shortcode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventGetUrlFromShortcode_Parms, shortcode), METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetUrlFromShortcode_Statics::NewProp_shortcode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetUrlFromShortcode_Statics::NewProp_shortcode_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetUrlFromShortcode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventGetUrlFromShortcode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetUrlFromShortcode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetUrlFromShortcode_Statics::NewProp_shortcode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetUrlFromShortcode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetUrlFromShortcode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Get Url From Shortcode" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetUrlFromShortcode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "GetUrlFromShortcode", nullptr, nullptr, sizeof(ReadyPlayerMeFunctionLibrary_eventGetUrlFromShortcode_Parms), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetUrlFromShortcode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetUrlFromShortcode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetUrlFromShortcode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetUrlFromShortcode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetUrlFromShortcode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetUrlFromShortcode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetValidatedUrlShortCode_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventGetValidatedUrlShortCode_Parms
		{
			FString urlShortCode;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_urlShortCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_urlShortCode;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetValidatedUrlShortCode_Statics::NewProp_urlShortCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetValidatedUrlShortCode_Statics::NewProp_urlShortCode = { "urlShortCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventGetValidatedUrlShortCode_Parms, urlShortCode), METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetValidatedUrlShortCode_Statics::NewProp_urlShortCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetValidatedUrlShortCode_Statics::NewProp_urlShortCode_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetValidatedUrlShortCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventGetValidatedUrlShortCode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetValidatedUrlShortCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetValidatedUrlShortCode_Statics::NewProp_urlShortCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetValidatedUrlShortCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetValidatedUrlShortCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Validate Url ShortCode" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetValidatedUrlShortCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "GetValidatedUrlShortCode", nullptr, nullptr, sizeof(ReadyPlayerMeFunctionLibrary_eventGetValidatedUrlShortCode_Parms), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetValidatedUrlShortCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetValidatedUrlShortCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetValidatedUrlShortCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetValidatedUrlShortCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetValidatedUrlShortCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetValidatedUrlShortCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsUrl_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventIsUrl_Parms
		{
			FString url;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_url;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsUrl_Statics::NewProp_url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsUrl_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventIsUrl_Parms, url), METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsUrl_Statics::NewProp_url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsUrl_Statics::NewProp_url_MetaData)) };
	void Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsUrl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReadyPlayerMeFunctionLibrary_eventIsUrl_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReadyPlayerMeFunctionLibrary_eventIsUrl_Parms), &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsUrl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsUrl_Statics::NewProp_url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Check Is Url" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "IsUrl", nullptr, nullptr, sizeof(ReadyPlayerMeFunctionLibrary_eventIsUrl_Parms), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventLoadAvatarMetadata_Parms
		{
			FString url;
			FScriptDelegate completed;
			FScriptDelegate onLoadFailed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_url;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_completed_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_completed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onLoadFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onLoadFailed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata_Statics::NewProp_url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventLoadAvatarMetadata_Parms, url), METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata_Statics::NewProp_url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata_Statics::NewProp_url_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata_Statics::NewProp_completed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata_Statics::NewProp_completed = { "completed", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventLoadAvatarMetadata_Parms, completed), Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarMetadataHttpResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata_Statics::NewProp_completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata_Statics::NewProp_completed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata_Statics::NewProp_onLoadFailed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata_Statics::NewProp_onLoadFailed = { "onLoadFailed", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventLoadAvatarMetadata_Parms, onLoadFailed), Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata_Statics::NewProp_onLoadFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata_Statics::NewProp_onLoadFailed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata_Statics::NewProp_url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata_Statics::NewProp_completed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata_Statics::NewProp_onLoadFailed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "onLoadFailed" },
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Load Avatar Metadata" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "LoadAvatarMetadata", nullptr, nullptr, sizeof(ReadyPlayerMeFunctionLibrary_eventLoadAvatarMetadata_Parms), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTarget_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventSetMorphTarget_Parms
		{
			USkeletalMeshComponent* skeletalMeshComponent;
			FString name;
			float value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skeletalMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTarget_Statics::NewProp_skeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTarget_Statics::NewProp_skeletalMeshComponent = { "skeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventSetMorphTarget_Parms, skeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTarget_Statics::NewProp_skeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTarget_Statics::NewProp_skeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTarget_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTarget_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventSetMorphTarget_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTarget_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTarget_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTarget_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventSetMorphTarget_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTarget_Statics::NewProp_skeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTarget_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTarget_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Set Avatar Morph target" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "SetMorphTarget", nullptr, nullptr, sizeof(ReadyPlayerMeFunctionLibrary_eventSetMorphTarget_Parms), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTargets_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventSetMorphTargets_Parms
		{
			USkeletalMeshComponent* skeletalMeshComponent;
			TMap<FString,float> morphTargetMap;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skeletalMeshComponent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_morphTargetMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_morphTargetMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_morphTargetMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_morphTargetMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTargets_Statics::NewProp_skeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTargets_Statics::NewProp_skeletalMeshComponent = { "skeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventSetMorphTargets_Parms, skeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTargets_Statics::NewProp_skeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTargets_Statics::NewProp_skeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTargets_Statics::NewProp_morphTargetMap_ValueProp = { "morphTargetMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTargets_Statics::NewProp_morphTargetMap_Key_KeyProp = { "morphTargetMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTargets_Statics::NewProp_morphTargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTargets_Statics::NewProp_morphTargetMap = { "morphTargetMap", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventSetMorphTargets_Parms, morphTargetMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTargets_Statics::NewProp_morphTargetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTargets_Statics::NewProp_morphTargetMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTargets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTargets_Statics::NewProp_skeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTargets_Statics::NewProp_morphTargetMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTargets_Statics::NewProp_morphTargetMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTargets_Statics::NewProp_morphTargetMap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTargets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Set Avatar Morph targets" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "SetMorphTargets", nullptr, nullptr, sizeof(ReadyPlayerMeFunctionLibrary_eventSetMorphTargets_Parms), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetupSkeletalMeshComponent_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventSetupSkeletalMeshComponent_Parms
		{
			AActor* targetActor;
			USkeletalMesh* skeletalMesh;
			FAvatarMetadata avatarMetaData;
			USkeletalMeshComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_avatarMetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_avatarMetaData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetupSkeletalMeshComponent_Statics::NewProp_targetActor = { "targetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventSetupSkeletalMeshComponent_Parms, targetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetupSkeletalMeshComponent_Statics::NewProp_skeletalMesh = { "skeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventSetupSkeletalMeshComponent_Parms, skeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetupSkeletalMeshComponent_Statics::NewProp_avatarMetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetupSkeletalMeshComponent_Statics::NewProp_avatarMetaData = { "avatarMetaData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventSetupSkeletalMeshComponent_Parms, avatarMetaData), Z_Construct_UScriptStruct_FAvatarMetadata, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetupSkeletalMeshComponent_Statics::NewProp_avatarMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetupSkeletalMeshComponent_Statics::NewProp_avatarMetaData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetupSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetupSkeletalMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventSetupSkeletalMeshComponent_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetupSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetupSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetupSkeletalMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetupSkeletalMeshComponent_Statics::NewProp_targetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetupSkeletalMeshComponent_Statics::NewProp_skeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetupSkeletalMeshComponent_Statics::NewProp_avatarMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetupSkeletalMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetupSkeletalMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DefaultToSelf", "targetActor" },
		{ "DisplayName", "RPM Setup Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetupSkeletalMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "SetupSkeletalMeshComponent", nullptr, nullptr, sizeof(ReadyPlayerMeFunctionLibrary_eventSetupSkeletalMeshComponent_Parms), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetupSkeletalMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetupSkeletalMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetupSkeletalMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetupSkeletalMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetupSkeletalMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetupSkeletalMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_NoRegister()
	{
		return UReadyPlayerMeFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_AddSkeletalMeshComponent, "AddSkeletalMeshComponent" }, // 3018151268
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetBodyTypeFromAsset, "GetBodyTypeFromAsset" }, // 1595682615
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeConfig, "GetglTFRuntimeConfig" }, // 4167891462
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeMaterialsConfig, "GetglTFRuntimeMaterialsConfig" }, // 4198175191
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletalMeshConfig, "GetglTFRuntimeSkeletalMeshConfig" }, // 37811094
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetglTFRuntimeSkeletonConfig, "GetglTFRuntimeSkeletonConfig" }, // 1773454016
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetRootBoneName, "GetRootBoneName" }, // 549617789
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetUrlFromShortcode, "GetUrlFromShortcode" }, // 2707931790
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetValidatedUrlShortCode, "GetValidatedUrlShortCode" }, // 2732196503
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsUrl, "IsUrl" }, // 1687701726
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_LoadAvatarMetadata, "LoadAvatarMetadata" }, // 2219908961
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTarget, "SetMorphTarget" }, // 3357176136
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetMorphTargets, "SetMorphTargets" }, // 550566116
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_SetupSkeletalMeshComponent, "SetupSkeletalMeshComponent" }, // 2820638393
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ReadyPlayerMeFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::ClassParams = {
		&UReadyPlayerMeFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReadyPlayerMeFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReadyPlayerMeFunctionLibrary, 2436086533);
	template<> READYPLAYERME_API UClass* StaticClass<UReadyPlayerMeFunctionLibrary>()
	{
		return UReadyPlayerMeFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReadyPlayerMeFunctionLibrary(Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, &UReadyPlayerMeFunctionLibrary::StaticClass, TEXT("/Script/ReadyPlayerMe"), TEXT("UReadyPlayerMeFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
