// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamProj/Public/Boat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoat() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	TEAMPROJ_API UClass* Z_Construct_UClass_ABoat();
	TEAMPROJ_API UClass* Z_Construct_UClass_ABoat_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TeamProj();
// End Cross Module References
	void ABoat::StaticRegisterNativesABoat()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoat);
	UClass* Z_Construct_UClass_ABoat_NoRegister()
	{
		return ABoat::StaticClass();
	}
	struct Z_Construct_UClass_ABoat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerAttachPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerAttachPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TeamProj,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoat_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoat_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Boat.h" },
		{ "ModuleRelativePath", "Public/Boat.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoat_Statics::NewProp_PlayerAttachPoint_MetaData[] = {
		{ "Category", "Boat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Boat.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoat_Statics::NewProp_PlayerAttachPoint = { "PlayerAttachPoint", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoat, PlayerAttachPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoat_Statics::NewProp_PlayerAttachPoint_MetaData), Z_Construct_UClass_ABoat_Statics::NewProp_PlayerAttachPoint_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoat_Statics::NewProp_PlayerAttachPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoat>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoat_Statics::ClassParams = {
		&ABoat::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABoat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoat_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoat_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoat_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoat_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABoat()
	{
		if (!Z_Registration_Info_UClass_ABoat.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoat.OuterSingleton, Z_Construct_UClass_ABoat_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABoat.OuterSingleton;
	}
	template<> TEAMPROJ_API UClass* StaticClass<ABoat>()
	{
		return ABoat::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoat);
	ABoat::~ABoat() {}
	struct Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_VRSimul_TeamProj_Source_TeamProj_Public_Boat_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_VRSimul_TeamProj_Source_TeamProj_Public_Boat_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABoat, ABoat::StaticClass, TEXT("ABoat"), &Z_Registration_Info_UClass_ABoat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoat), 2104830856U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_VRSimul_TeamProj_Source_TeamProj_Public_Boat_h_1312091650(TEXT("/Script/TeamProj"),
		Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_VRSimul_TeamProj_Source_TeamProj_Public_Boat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_VRSimul_TeamProj_Source_TeamProj_Public_Boat_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
