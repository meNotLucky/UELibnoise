// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UELibnoiseModule.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveFloat;
class UTexture2D;
class UUELibnoiseModule;
#ifdef UELIBNOISE_UELibnoiseModule_generated_h
#error "UELibnoiseModule.generated.h already included, missing '#pragma once' in UELibnoiseModule.h"
#endif
#define UELIBNOISE_UELibnoiseModule_generated_h

#define FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseModule_h_28_SPARSE_DATA
#define FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseModule_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseModule_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseModule_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTurbulenceOperator); \
	DECLARE_FUNCTION(execGetTranslateOperator); \
	DECLARE_FUNCTION(execGetTerraceOperator); \
	DECLARE_FUNCTION(execGetSelectOperator); \
	DECLARE_FUNCTION(execGetScaleBiasOperator); \
	DECLARE_FUNCTION(execGetScalePointOperator); \
	DECLARE_FUNCTION(execGetRotatePointOperator); \
	DECLARE_FUNCTION(execGetPowerOperator); \
	DECLARE_FUNCTION(execGetMultiplyOperator); \
	DECLARE_FUNCTION(execGetMinOperator); \
	DECLARE_FUNCTION(execGetMaxOperator); \
	DECLARE_FUNCTION(execGetInvertOperator); \
	DECLARE_FUNCTION(execGetExponentOperator); \
	DECLARE_FUNCTION(execGetDisplaceOperator); \
	DECLARE_FUNCTION(execGetCurveOperator); \
	DECLARE_FUNCTION(execGetClampOperator); \
	DECLARE_FUNCTION(execGetCacheOperator); \
	DECLARE_FUNCTION(execGetBlendOperator); \
	DECLARE_FUNCTION(execGetAddOperator); \
	DECLARE_FUNCTION(execGetAbsOperator); \
	DECLARE_FUNCTION(execGetVoronoiGenerator); \
	DECLARE_FUNCTION(execGetSpheresGenerator); \
	DECLARE_FUNCTION(execGetRidgedMultifractalGenerator); \
	DECLARE_FUNCTION(execGetPerlinGenerator); \
	DECLARE_FUNCTION(execGetCylindersGenerator); \
	DECLARE_FUNCTION(execGetConstGenerator); \
	DECLARE_FUNCTION(execGetCheckerGenerator); \
	DECLARE_FUNCTION(execGetBillowGenerator); \
	DECLARE_FUNCTION(execRenderToTexture);


#define FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseModule_h_28_ACCESSORS
#define FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseModule_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUELibnoiseModule(); \
	friend struct Z_Construct_UClass_UUELibnoiseModule_Statics; \
public: \
	DECLARE_CLASS(UUELibnoiseModule, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UELibnoise"), NO_API) \
	DECLARE_SERIALIZER(UUELibnoiseModule)


#define FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseModule_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUELibnoiseModule(UUELibnoiseModule&&); \
	NO_API UUELibnoiseModule(const UUELibnoiseModule&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUELibnoiseModule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUELibnoiseModule); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUELibnoiseModule)


#define FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseModule_h_25_PROLOG
#define FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseModule_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseModule_h_28_SPARSE_DATA \
	FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseModule_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseModule_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseModule_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseModule_h_28_ACCESSORS \
	FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseModule_h_28_INCLASS_NO_PURE_DECLS \
	FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseModule_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UELIBNOISE_API UClass* StaticClass<class UUELibnoiseModule>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseModule_h


#define FOREACH_ENUM_EUELGENERATORQUALITY(op) \
	op(LOW) \
	op(MEDIUM) \
	op(HIGH) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
