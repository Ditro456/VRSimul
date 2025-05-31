// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Paddle.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef TEAMPROJ_Paddle_generated_h
#error "Paddle.generated.h already included, missing '#pragma once' in Paddle.h"
#endif
#define TEAMPROJ_Paddle_generated_h

#define FID_TeamProj_Source_TeamProj_Public_Paddle_h_13_SPARSE_DATA
#define FID_TeamProj_Source_TeamProj_Public_Paddle_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_TeamProj_Source_TeamProj_Public_Paddle_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_TeamProj_Source_TeamProj_Public_Paddle_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReleaseObject); \
	DECLARE_FUNCTION(execGrabObject);


#define FID_TeamProj_Source_TeamProj_Public_Paddle_h_13_ACCESSORS
#define FID_TeamProj_Source_TeamProj_Public_Paddle_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaddle(); \
	friend struct Z_Construct_UClass_APaddle_Statics; \
public: \
	DECLARE_CLASS(APaddle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TeamProj"), NO_API) \
	DECLARE_SERIALIZER(APaddle)


#define FID_TeamProj_Source_TeamProj_Public_Paddle_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddle(APaddle&&); \
	NO_API APaddle(const APaddle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APaddle) \
	NO_API virtual ~APaddle();


#define FID_TeamProj_Source_TeamProj_Public_Paddle_h_10_PROLOG
#define FID_TeamProj_Source_TeamProj_Public_Paddle_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TeamProj_Source_TeamProj_Public_Paddle_h_13_SPARSE_DATA \
	FID_TeamProj_Source_TeamProj_Public_Paddle_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_TeamProj_Source_TeamProj_Public_Paddle_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_TeamProj_Source_TeamProj_Public_Paddle_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TeamProj_Source_TeamProj_Public_Paddle_h_13_ACCESSORS \
	FID_TeamProj_Source_TeamProj_Public_Paddle_h_13_INCLASS_NO_PURE_DECLS \
	FID_TeamProj_Source_TeamProj_Public_Paddle_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAMPROJ_API UClass* StaticClass<class APaddle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TeamProj_Source_TeamProj_Public_Paddle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
