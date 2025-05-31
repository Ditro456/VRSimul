// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamProj/Public/Paddle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaddle() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	TEAMPROJ_API UClass* Z_Construct_UClass_ABoat_NoRegister();
	TEAMPROJ_API UClass* Z_Construct_UClass_APaddle();
	TEAMPROJ_API UClass* Z_Construct_UClass_APaddle_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TeamProj();
// End Cross Module References
	DEFINE_FUNCTION(APaddle::execReleaseObject)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseObject(Z_Param_Controller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APaddle::execGrabObject)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrabObject(Z_Param_Controller);
		P_NATIVE_END;
	}
	void APaddle::StaticRegisterNativesAPaddle()
	{
		UClass* Class = APaddle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GrabObject", &APaddle::execGrabObject },
			{ "ReleaseObject", &APaddle::execReleaseObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APaddle_GrabObject_Statics
	{
		struct Paddle_eventGrabObject_Parms
		{
			USceneComponent* Controller;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APaddle_GrabObject_Statics::NewProp_Controller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APaddle_GrabObject_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Paddle_eventGrabObject_Parms, Controller), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APaddle_GrabObject_Statics::NewProp_Controller_MetaData), Z_Construct_UFunction_APaddle_GrabObject_Statics::NewProp_Controller_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APaddle_GrabObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APaddle_GrabObject_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APaddle_GrabObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VR Grab" },
		{ "ModuleRelativePath", "Public/Paddle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APaddle_GrabObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APaddle, nullptr, "GrabObject", nullptr, nullptr, Z_Construct_UFunction_APaddle_GrabObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APaddle_GrabObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_APaddle_GrabObject_Statics::Paddle_eventGrabObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APaddle_GrabObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_APaddle_GrabObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APaddle_GrabObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APaddle_GrabObject_Statics::Paddle_eventGrabObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APaddle_GrabObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APaddle_GrabObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APaddle_ReleaseObject_Statics
	{
		struct Paddle_eventReleaseObject_Parms
		{
			USceneComponent* Controller;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APaddle_ReleaseObject_Statics::NewProp_Controller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APaddle_ReleaseObject_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Paddle_eventReleaseObject_Parms, Controller), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APaddle_ReleaseObject_Statics::NewProp_Controller_MetaData), Z_Construct_UFunction_APaddle_ReleaseObject_Statics::NewProp_Controller_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APaddle_ReleaseObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APaddle_ReleaseObject_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APaddle_ReleaseObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VR Grab" },
		{ "ModuleRelativePath", "Public/Paddle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APaddle_ReleaseObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APaddle, nullptr, "ReleaseObject", nullptr, nullptr, Z_Construct_UFunction_APaddle_ReleaseObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APaddle_ReleaseObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_APaddle_ReleaseObject_Statics::Paddle_eventReleaseObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APaddle_ReleaseObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_APaddle_ReleaseObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APaddle_ReleaseObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APaddle_ReleaseObject_Statics::Paddle_eventReleaseObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APaddle_ReleaseObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APaddle_ReleaseObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APaddle);
	UClass* Z_Construct_UClass_APaddle_NoRegister()
	{
		return APaddle::StaticClass();
	}
	struct Z_Construct_UClass_APaddle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabPointPrimary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabPointPrimary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabPointSecondary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabPointSecondary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryHand_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryHand_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBoat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentBoat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaddle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TeamProj,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APaddle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APaddle_GrabObject, "GrabObject" }, // 16727111
		{ &Z_Construct_UFunction_APaddle_ReleaseObject, "ReleaseObject" }, // 3503228461
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Paddle.h" },
		{ "ModuleRelativePath", "Public/Paddle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddle_Statics::NewProp_GrabPointPrimary_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Paddle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaddle_Statics::NewProp_GrabPointPrimary = { "GrabPointPrimary", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaddle, GrabPointPrimary), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::NewProp_GrabPointPrimary_MetaData), Z_Construct_UClass_APaddle_Statics::NewProp_GrabPointPrimary_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddle_Statics::NewProp_GrabPointSecondary_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Paddle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaddle_Statics::NewProp_GrabPointSecondary = { "GrabPointSecondary", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaddle, GrabPointSecondary), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::NewProp_GrabPointSecondary_MetaData), Z_Construct_UClass_APaddle_Statics::NewProp_GrabPointSecondary_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddle_Statics::NewProp_PrimaryHand_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Paddle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaddle_Statics::NewProp_PrimaryHand = { "PrimaryHand", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaddle, PrimaryHand), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::NewProp_PrimaryHand_MetaData), Z_Construct_UClass_APaddle_Statics::NewProp_PrimaryHand_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddle_Statics::NewProp_SecondaryHand_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Paddle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaddle_Statics::NewProp_SecondaryHand = { "SecondaryHand", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaddle, SecondaryHand), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::NewProp_SecondaryHand_MetaData), Z_Construct_UClass_APaddle_Statics::NewProp_SecondaryHand_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddle_Statics::NewProp_CurrentBoat_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paddle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaddle_Statics::NewProp_CurrentBoat = { "CurrentBoat", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaddle, CurrentBoat), Z_Construct_UClass_ABoat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::NewProp_CurrentBoat_MetaData), Z_Construct_UClass_APaddle_Statics::NewProp_CurrentBoat_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaddle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddle_Statics::NewProp_GrabPointPrimary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddle_Statics::NewProp_GrabPointSecondary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddle_Statics::NewProp_PrimaryHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddle_Statics::NewProp_SecondaryHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddle_Statics::NewProp_CurrentBoat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaddle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaddle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APaddle_Statics::ClassParams = {
		&APaddle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APaddle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::Class_MetaDataParams), Z_Construct_UClass_APaddle_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APaddle()
	{
		if (!Z_Registration_Info_UClass_APaddle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APaddle.OuterSingleton, Z_Construct_UClass_APaddle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APaddle.OuterSingleton;
	}
	template<> TEAMPROJ_API UClass* StaticClass<APaddle>()
	{
		return APaddle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaddle);
	APaddle::~APaddle() {}
	struct Z_CompiledInDeferFile_FID_TeamProj_Source_TeamProj_Public_Paddle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProj_Source_TeamProj_Public_Paddle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APaddle, APaddle::StaticClass, TEXT("APaddle"), &Z_Registration_Info_UClass_APaddle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APaddle), 4237619931U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProj_Source_TeamProj_Public_Paddle_h_3369563803(TEXT("/Script/TeamProj"),
		Z_CompiledInDeferFile_FID_TeamProj_Source_TeamProj_Public_Paddle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamProj_Source_TeamProj_Public_Paddle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
