// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamProj/Public/VRAttachHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRAttachHelper() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TEAMPROJ_API UClass* Z_Construct_UClass_AVRAttachHelper();
	TEAMPROJ_API UClass* Z_Construct_UClass_AVRAttachHelper_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TeamProj();
// End Cross Module References
	DEFINE_FUNCTION(AVRAttachHelper::execDetachVRPawn)
	{
		P_GET_OBJECT(AActor,Z_Param_VRPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DetachVRPawn(Z_Param_VRPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRAttachHelper::execAttachVRPawnToNearestBoat)
	{
		P_GET_OBJECT(AActor,Z_Param_VRPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachVRPawnToNearestBoat(Z_Param_VRPawn);
		P_NATIVE_END;
	}
	void AVRAttachHelper::StaticRegisterNativesAVRAttachHelper()
	{
		UClass* Class = AVRAttachHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachVRPawnToNearestBoat", &AVRAttachHelper::execAttachVRPawnToNearestBoat },
			{ "DetachVRPawn", &AVRAttachHelper::execDetachVRPawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVRAttachHelper_AttachVRPawnToNearestBoat_Statics
	{
		struct VRAttachHelper_eventAttachVRPawnToNearestBoat_Parms
		{
			AActor* VRPawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VRPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRAttachHelper_AttachVRPawnToNearestBoat_Statics::NewProp_VRPawn = { "VRPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRAttachHelper_eventAttachVRPawnToNearestBoat_Parms, VRPawn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRAttachHelper_AttachVRPawnToNearestBoat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRAttachHelper_AttachVRPawnToNearestBoat_Statics::NewProp_VRPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRAttachHelper_AttachVRPawnToNearestBoat_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ? \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xbe\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VRAttachHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "? \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xbe\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRAttachHelper_AttachVRPawnToNearestBoat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRAttachHelper, nullptr, "AttachVRPawnToNearestBoat", nullptr, nullptr, Z_Construct_UFunction_AVRAttachHelper_AttachVRPawnToNearestBoat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRAttachHelper_AttachVRPawnToNearestBoat_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRAttachHelper_AttachVRPawnToNearestBoat_Statics::VRAttachHelper_eventAttachVRPawnToNearestBoat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRAttachHelper_AttachVRPawnToNearestBoat_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRAttachHelper_AttachVRPawnToNearestBoat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRAttachHelper_AttachVRPawnToNearestBoat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVRAttachHelper_AttachVRPawnToNearestBoat_Statics::VRAttachHelper_eventAttachVRPawnToNearestBoat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVRAttachHelper_AttachVRPawnToNearestBoat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRAttachHelper_AttachVRPawnToNearestBoat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRAttachHelper_DetachVRPawn_Statics
	{
		struct VRAttachHelper_eventDetachVRPawn_Parms
		{
			AActor* VRPawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VRPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRAttachHelper_DetachVRPawn_Statics::NewProp_VRPawn = { "VRPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRAttachHelper_eventDetachVRPawn_Parms, VRPawn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRAttachHelper_DetachVRPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRAttachHelper_DetachVRPawn_Statics::NewProp_VRPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRAttachHelper_DetachVRPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRAttachHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRAttachHelper_DetachVRPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRAttachHelper, nullptr, "DetachVRPawn", nullptr, nullptr, Z_Construct_UFunction_AVRAttachHelper_DetachVRPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRAttachHelper_DetachVRPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRAttachHelper_DetachVRPawn_Statics::VRAttachHelper_eventDetachVRPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRAttachHelper_DetachVRPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRAttachHelper_DetachVRPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRAttachHelper_DetachVRPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVRAttachHelper_DetachVRPawn_Statics::VRAttachHelper_eventDetachVRPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVRAttachHelper_DetachVRPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRAttachHelper_DetachVRPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRAttachHelper);
	UClass* Z_Construct_UClass_AVRAttachHelper_NoRegister()
	{
		return AVRAttachHelper::StaticClass();
	}
	struct Z_Construct_UClass_AVRAttachHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRAttachHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TeamProj,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRAttachHelper_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AVRAttachHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVRAttachHelper_AttachVRPawnToNearestBoat, "AttachVRPawnToNearestBoat" }, // 1257209229
		{ &Z_Construct_UFunction_AVRAttachHelper_DetachVRPawn, "DetachVRPawn" }, // 3046252397
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRAttachHelper_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRAttachHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VRAttachHelper.h" },
		{ "ModuleRelativePath", "Public/VRAttachHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRAttachHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRAttachHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRAttachHelper_Statics::ClassParams = {
		&AVRAttachHelper::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRAttachHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_AVRAttachHelper_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AVRAttachHelper()
	{
		if (!Z_Registration_Info_UClass_AVRAttachHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRAttachHelper.OuterSingleton, Z_Construct_UClass_AVRAttachHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVRAttachHelper.OuterSingleton;
	}
	template<> TEAMPROJ_API UClass* StaticClass<AVRAttachHelper>()
	{
		return AVRAttachHelper::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRAttachHelper);
	AVRAttachHelper::~AVRAttachHelper() {}
	struct Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_VRSimul_TeamProj_Source_TeamProj_Public_VRAttachHelper_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_VRSimul_TeamProj_Source_TeamProj_Public_VRAttachHelper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVRAttachHelper, AVRAttachHelper::StaticClass, TEXT("AVRAttachHelper"), &Z_Registration_Info_UClass_AVRAttachHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRAttachHelper), 3546045449U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_VRSimul_TeamProj_Source_TeamProj_Public_VRAttachHelper_h_3117605783(TEXT("/Script/TeamProj"),
		Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_VRSimul_TeamProj_Source_TeamProj_Public_VRAttachHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_VRSimul_TeamProj_Source_TeamProj_Public_VRAttachHelper_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
