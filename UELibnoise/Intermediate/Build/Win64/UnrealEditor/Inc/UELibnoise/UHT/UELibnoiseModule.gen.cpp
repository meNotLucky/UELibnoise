// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UELibnoise/Public/UELibnoiseModule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUELibnoiseModule() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UELIBNOISE_API UClass* Z_Construct_UClass_UUELibnoiseModule();
	UELIBNOISE_API UClass* Z_Construct_UClass_UUELibnoiseModule_NoRegister();
	UELIBNOISE_API UEnum* Z_Construct_UEnum_UELibnoise_EUELGeneratorQuality();
	UPackage* Z_Construct_UPackage__Script_UELibnoise();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUELGeneratorQuality;
	static UEnum* EUELGeneratorQuality_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUELGeneratorQuality.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUELGeneratorQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UELibnoise_EUELGeneratorQuality, (UObject*)Z_Construct_UPackage__Script_UELibnoise(), TEXT("EUELGeneratorQuality"));
		}
		return Z_Registration_Info_UEnum_EUELGeneratorQuality.OuterSingleton;
	}
	template<> UELIBNOISE_API UEnum* StaticEnum<EUELGeneratorQuality>()
	{
		return EUELGeneratorQuality_StaticEnum();
	}
	struct Z_Construct_UEnum_UELibnoise_EUELGeneratorQuality_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UELibnoise_EUELGeneratorQuality_Statics::Enumerators[] = {
		{ "LOW", (int64)LOW },
		{ "MEDIUM", (int64)MEDIUM },
		{ "HIGH", (int64)HIGH },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UELibnoise_EUELGeneratorQuality_Statics::Enum_MetaDataParams[] = {
		{ "HIGH.Name", "HIGH" },
		{ "LOW.Name", "LOW" },
		{ "MEDIUM.Name", "MEDIUM" },
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UELibnoise_EUELGeneratorQuality_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UELibnoise,
		nullptr,
		"EUELGeneratorQuality",
		"EUELGeneratorQuality",
		Z_Construct_UEnum_UELibnoise_EUELGeneratorQuality_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UELibnoise_EUELGeneratorQuality_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UELibnoise_EUELGeneratorQuality_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UELibnoise_EUELGeneratorQuality_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UELibnoise_EUELGeneratorQuality()
	{
		if (!Z_Registration_Info_UEnum_EUELGeneratorQuality.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUELGeneratorQuality.InnerSingleton, Z_Construct_UEnum_UELibnoise_EUELGeneratorQuality_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUELGeneratorQuality.InnerSingleton;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetTurbulenceOperator)
	{
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InInput);
		P_GET_PROPERTY(FIntProperty,Z_Param_InSeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFrequency);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPower);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRoughness);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetTurbulenceOperator(Z_Param_InInput,Z_Param_InSeed,Z_Param_InFrequency,Z_Param_InPower,Z_Param_InRoughness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetTranslateOperator)
	{
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InInput);
		P_GET_STRUCT(FVector,Z_Param_InTranslation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetTranslateOperator(Z_Param_InInput,Z_Param_InTranslation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetTerraceOperator)
	{
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InInput);
		P_GET_OBJECT(UCurveFloat,Z_Param_InCurve);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InCurvePrecision);
		P_GET_UBOOL(Z_Param_InInverted);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetTerraceOperator(Z_Param_InInput,Z_Param_InCurve,Z_Param_InCurvePrecision,Z_Param_InInverted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetSelectOperator)
	{
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InLeft);
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InRight);
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InController);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InEdgeFalloff);
		P_GET_STRUCT(FVector2D,Z_Param_InBounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetSelectOperator(Z_Param_InLeft,Z_Param_InRight,Z_Param_InController,Z_Param_InEdgeFalloff,Z_Param_InBounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetScaleBiasOperator)
	{
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InInput);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InBias);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetScaleBiasOperator(Z_Param_InInput,Z_Param_InBias,Z_Param_InScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetScalePointOperator)
	{
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InInput);
		P_GET_STRUCT(FVector,Z_Param_InScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetScalePointOperator(Z_Param_InInput,Z_Param_InScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetRotatePointOperator)
	{
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InInput);
		P_GET_STRUCT(FVector,Z_Param_InRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetRotatePointOperator(Z_Param_InInput,Z_Param_InRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetPowerOperator)
	{
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InLeft);
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InRight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetPowerOperator(Z_Param_InLeft,Z_Param_InRight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetMultiplyOperator)
	{
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InLeft);
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InRight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetMultiplyOperator(Z_Param_InLeft,Z_Param_InRight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetMinOperator)
	{
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InLeft);
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InRight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetMinOperator(Z_Param_InLeft,Z_Param_InRight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetMaxOperator)
	{
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InLeft);
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InRight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetMaxOperator(Z_Param_InLeft,Z_Param_InRight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetInvertOperator)
	{
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetInvertOperator(Z_Param_InInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetExponentOperator)
	{
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InInput);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InExponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetExponentOperator(Z_Param_InInput,Z_Param_InExponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetDisplaceOperator)
	{
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InInput);
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InDisplaceX);
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InDisplaceY);
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InDisplaceZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetDisplaceOperator(Z_Param_InInput,Z_Param_InDisplaceX,Z_Param_InDisplaceY,Z_Param_InDisplaceZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetCurveOperator)
	{
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InInput);
		P_GET_OBJECT(UCurveFloat,Z_Param_InCurve);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InCurvePrecision);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetCurveOperator(Z_Param_InInput,Z_Param_InCurve,Z_Param_InCurvePrecision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetClampOperator)
	{
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InInput);
		P_GET_STRUCT(FVector2D,Z_Param_InBounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetClampOperator(Z_Param_InInput,Z_Param_InBounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetCacheOperator)
	{
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetCacheOperator(Z_Param_InInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetBlendOperator)
	{
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InLeft);
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InRight);
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetBlendOperator(Z_Param_InLeft,Z_Param_InRight,Z_Param_InController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetAddOperator)
	{
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InLeft);
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InRight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetAddOperator(Z_Param_InLeft,Z_Param_InRight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetAbsOperator)
	{
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetAbsOperator(Z_Param_InInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetVoronoiGenerator)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InSeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFrequency);
		P_GET_PROPERTY(FIntProperty,Z_Param_InDisplacement);
		P_GET_UBOOL(Z_Param_InEnableDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetVoronoiGenerator(Z_Param_InSeed,Z_Param_InFrequency,Z_Param_InDisplacement,Z_Param_InEnableDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetSpheresGenerator)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFrequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetSpheresGenerator(Z_Param_InFrequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetRidgedMultifractalGenerator)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InSeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFrequency);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLacunarity);
		P_GET_PROPERTY(FIntProperty,Z_Param_InOctaveCount);
		P_GET_PROPERTY(FByteProperty,Z_Param_InQuality);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetRidgedMultifractalGenerator(Z_Param_InSeed,Z_Param_InFrequency,Z_Param_InLacunarity,Z_Param_InOctaveCount,EUELGeneratorQuality(Z_Param_InQuality));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetPerlinGenerator)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InSeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFrequency);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLacunarity);
		P_GET_PROPERTY(FIntProperty,Z_Param_InOctaveCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPersistance);
		P_GET_PROPERTY(FByteProperty,Z_Param_InQuality);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetPerlinGenerator(Z_Param_InSeed,Z_Param_InFrequency,Z_Param_InLacunarity,Z_Param_InOctaveCount,Z_Param_InPersistance,EUELGeneratorQuality(Z_Param_InQuality));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetCylindersGenerator)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFrequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetCylindersGenerator(Z_Param_InFrequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetConstGenerator)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetConstGenerator(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetCheckerGenerator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetCheckerGenerator();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execGetBillowGenerator)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InSeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFrequency);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLacunarity);
		P_GET_PROPERTY(FIntProperty,Z_Param_InOctaveCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPersistance);
		P_GET_PROPERTY(FByteProperty,Z_Param_InQuality);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUELibnoiseModule**)Z_Param__Result=UUELibnoiseModule::GetBillowGenerator(Z_Param_InSeed,Z_Param_InFrequency,Z_Param_InLacunarity,Z_Param_InOctaveCount,Z_Param_InPersistance,EUELGeneratorQuality(Z_Param_InQuality));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseModule::execRenderToTexture)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InWidth);
		P_GET_PROPERTY(FIntProperty,Z_Param_InHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->RenderToTexture(Z_Param_InWidth,Z_Param_InHeight);
		P_NATIVE_END;
	}
	void UUELibnoiseModule::StaticRegisterNativesUUELibnoiseModule()
	{
		UClass* Class = UUELibnoiseModule::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAbsOperator", &UUELibnoiseModule::execGetAbsOperator },
			{ "GetAddOperator", &UUELibnoiseModule::execGetAddOperator },
			{ "GetBillowGenerator", &UUELibnoiseModule::execGetBillowGenerator },
			{ "GetBlendOperator", &UUELibnoiseModule::execGetBlendOperator },
			{ "GetCacheOperator", &UUELibnoiseModule::execGetCacheOperator },
			{ "GetCheckerGenerator", &UUELibnoiseModule::execGetCheckerGenerator },
			{ "GetClampOperator", &UUELibnoiseModule::execGetClampOperator },
			{ "GetConstGenerator", &UUELibnoiseModule::execGetConstGenerator },
			{ "GetCurveOperator", &UUELibnoiseModule::execGetCurveOperator },
			{ "GetCylindersGenerator", &UUELibnoiseModule::execGetCylindersGenerator },
			{ "GetDisplaceOperator", &UUELibnoiseModule::execGetDisplaceOperator },
			{ "GetExponentOperator", &UUELibnoiseModule::execGetExponentOperator },
			{ "GetInvertOperator", &UUELibnoiseModule::execGetInvertOperator },
			{ "GetMaxOperator", &UUELibnoiseModule::execGetMaxOperator },
			{ "GetMinOperator", &UUELibnoiseModule::execGetMinOperator },
			{ "GetMultiplyOperator", &UUELibnoiseModule::execGetMultiplyOperator },
			{ "GetPerlinGenerator", &UUELibnoiseModule::execGetPerlinGenerator },
			{ "GetPowerOperator", &UUELibnoiseModule::execGetPowerOperator },
			{ "GetRidgedMultifractalGenerator", &UUELibnoiseModule::execGetRidgedMultifractalGenerator },
			{ "GetRotatePointOperator", &UUELibnoiseModule::execGetRotatePointOperator },
			{ "GetScaleBiasOperator", &UUELibnoiseModule::execGetScaleBiasOperator },
			{ "GetScalePointOperator", &UUELibnoiseModule::execGetScalePointOperator },
			{ "GetSelectOperator", &UUELibnoiseModule::execGetSelectOperator },
			{ "GetSpheresGenerator", &UUELibnoiseModule::execGetSpheresGenerator },
			{ "GetTerraceOperator", &UUELibnoiseModule::execGetTerraceOperator },
			{ "GetTranslateOperator", &UUELibnoiseModule::execGetTranslateOperator },
			{ "GetTurbulenceOperator", &UUELibnoiseModule::execGetTurbulenceOperator },
			{ "GetVoronoiGenerator", &UUELibnoiseModule::execGetVoronoiGenerator },
			{ "RenderToTexture", &UUELibnoiseModule::execRenderToTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetAbsOperator_Statics
	{
		struct UELibnoiseModule_eventGetAbsOperator_Parms
		{
			UUELibnoiseModule* InInput;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInput;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetAbsOperator_Statics::NewProp_InInput_MetaData[] = {
		{ "DisplayName", "Input" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetAbsOperator_Statics::NewProp_InInput = { "InInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetAbsOperator_Parms, InInput), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetAbsOperator_Statics::NewProp_InInput_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetAbsOperator_Statics::NewProp_InInput_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetAbsOperator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetAbsOperator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetAbsOperator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetAbsOperator_Statics::NewProp_InInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetAbsOperator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetAbsOperator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Operators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Generates the absolute value of the module (*= -1 on negative values) */" },
#endif
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generates the absolute value of the module (*= -1 on negative values)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetAbsOperator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetAbsOperator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetAbsOperator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetAbsOperator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetAbsOperator_Statics::UELibnoiseModule_eventGetAbsOperator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetAbsOperator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetAbsOperator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetAbsOperator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetAbsOperator_Statics::UELibnoiseModule_eventGetAbsOperator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetAbsOperator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetAbsOperator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator_Statics
	{
		struct UELibnoiseModule_eventGetAddOperator_Parms
		{
			UUELibnoiseModule* InLeft;
			UUELibnoiseModule* InRight;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRight;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator_Statics::NewProp_InLeft_MetaData[] = {
		{ "DisplayName", "Left" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator_Statics::NewProp_InLeft = { "InLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetAddOperator_Parms, InLeft), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator_Statics::NewProp_InLeft_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator_Statics::NewProp_InLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator_Statics::NewProp_InRight_MetaData[] = {
		{ "DisplayName", "Right" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator_Statics::NewProp_InRight = { "InRight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetAddOperator_Parms, InRight), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator_Statics::NewProp_InRight_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator_Statics::NewProp_InRight_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetAddOperator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator_Statics::NewProp_InLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator_Statics::NewProp_InRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Operators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Adds a module on top of another */" },
#endif
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a module on top of another" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetAddOperator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator_Statics::UELibnoiseModule_eventGetAddOperator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator_Statics::UELibnoiseModule_eventGetAddOperator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics
	{
		struct UELibnoiseModule_eventGetBillowGenerator_Parms
		{
			int32 InSeed;
			float InFrequency;
			float InLacunarity;
			int32 InOctaveCount;
			float InPersistance;
			TEnumAsByte<EUELGeneratorQuality> InQuality;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InLacunarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOctaveCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InOctaveCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPersistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPersistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InQuality_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InQuality;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InSeed_MetaData[] = {
		{ "DisplayName", "Seed" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InSeed = { "InSeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetBillowGenerator_Parms, InSeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InSeed_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InSeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InFrequency_MetaData[] = {
		{ "DisplayName", "Frequency" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InFrequency = { "InFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetBillowGenerator_Parms, InFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InFrequency_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InFrequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InLacunarity_MetaData[] = {
		{ "DisplayName", "Lacunarity" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InLacunarity = { "InLacunarity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetBillowGenerator_Parms, InLacunarity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InLacunarity_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InLacunarity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InOctaveCount_MetaData[] = {
		{ "DisplayName", "Octave Count" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InOctaveCount = { "InOctaveCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetBillowGenerator_Parms, InOctaveCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InOctaveCount_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InOctaveCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InPersistance_MetaData[] = {
		{ "DisplayName", "Persistance" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InPersistance = { "InPersistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetBillowGenerator_Parms, InPersistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InPersistance_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InPersistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InQuality_MetaData[] = {
		{ "DisplayName", "Quality" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InQuality = { "InQuality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetBillowGenerator_Parms, InQuality), Z_Construct_UEnum_UELibnoise_EUELGeneratorQuality, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InQuality_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InQuality_MetaData) }; // 3285413426
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetBillowGenerator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InLacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InOctaveCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InPersistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_InQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Generators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Creates and returns a Billow noise */" },
#endif
		{ "CPP_Default_InFrequency", "1.000000" },
		{ "CPP_Default_InLacunarity", "1.000000" },
		{ "CPP_Default_InOctaveCount", "6" },
		{ "CPP_Default_InPersistance", "0.500000" },
		{ "CPP_Default_InQuality", "MEDIUM" },
		{ "CPP_Default_InSeed", "1" },
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates and returns a Billow noise" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetBillowGenerator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::UELibnoiseModule_eventGetBillowGenerator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::UELibnoiseModule_eventGetBillowGenerator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics
	{
		struct UELibnoiseModule_eventGetBlendOperator_Parms
		{
			UUELibnoiseModule* InLeft;
			UUELibnoiseModule* InRight;
			UUELibnoiseModule* InController;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::NewProp_InLeft_MetaData[] = {
		{ "DisplayName", "Left" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::NewProp_InLeft = { "InLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetBlendOperator_Parms, InLeft), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::NewProp_InLeft_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::NewProp_InLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::NewProp_InRight_MetaData[] = {
		{ "DisplayName", "Right" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::NewProp_InRight = { "InRight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetBlendOperator_Parms, InRight), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::NewProp_InRight_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::NewProp_InRight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::NewProp_InController_MetaData[] = {
		{ "DisplayName", "Controller" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::NewProp_InController = { "InController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetBlendOperator_Parms, InController), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::NewProp_InController_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::NewProp_InController_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetBlendOperator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::NewProp_InLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::NewProp_InRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::NewProp_InController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Operators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Blends two modules together using a controller module */" },
#endif
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blends two modules together using a controller module" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetBlendOperator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::UELibnoiseModule_eventGetBlendOperator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::UELibnoiseModule_eventGetBlendOperator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetCacheOperator_Statics
	{
		struct UELibnoiseModule_eventGetCacheOperator_Parms
		{
			UUELibnoiseModule* InInput;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInput;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetCacheOperator_Statics::NewProp_InInput_MetaData[] = {
		{ "DisplayName", "Input" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetCacheOperator_Statics::NewProp_InInput = { "InInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetCacheOperator_Parms, InInput), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetCacheOperator_Statics::NewProp_InInput_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetCacheOperator_Statics::NewProp_InInput_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetCacheOperator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetCacheOperator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetCacheOperator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetCacheOperator_Statics::NewProp_InInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetCacheOperator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetCacheOperator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Operators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Caches the last output value generated by a source module */" },
#endif
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Caches the last output value generated by a source module" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetCacheOperator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetCacheOperator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetCacheOperator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetCacheOperator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetCacheOperator_Statics::UELibnoiseModule_eventGetCacheOperator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetCacheOperator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetCacheOperator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetCacheOperator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetCacheOperator_Statics::UELibnoiseModule_eventGetCacheOperator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetCacheOperator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetCacheOperator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetCheckerGenerator_Statics
	{
		struct UELibnoiseModule_eventGetCheckerGenerator_Parms
		{
			UUELibnoiseModule* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetCheckerGenerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetCheckerGenerator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetCheckerGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetCheckerGenerator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetCheckerGenerator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Generators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Creates and returns a Checkerboard noise */" },
#endif
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates and returns a Checkerboard noise" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetCheckerGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetCheckerGenerator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetCheckerGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetCheckerGenerator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetCheckerGenerator_Statics::UELibnoiseModule_eventGetCheckerGenerator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetCheckerGenerator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetCheckerGenerator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetCheckerGenerator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetCheckerGenerator_Statics::UELibnoiseModule_eventGetCheckerGenerator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetCheckerGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetCheckerGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator_Statics
	{
		struct UELibnoiseModule_eventGetClampOperator_Parms
		{
			UUELibnoiseModule* InInput;
			FVector2D InBounds;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBounds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator_Statics::NewProp_InInput_MetaData[] = {
		{ "DisplayName", "Input" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator_Statics::NewProp_InInput = { "InInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetClampOperator_Parms, InInput), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator_Statics::NewProp_InInput_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator_Statics::NewProp_InInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator_Statics::NewProp_InBounds_MetaData[] = {
		{ "DisplayName", "Bounds" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator_Statics::NewProp_InBounds = { "InBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetClampOperator_Parms, InBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator_Statics::NewProp_InBounds_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator_Statics::NewProp_InBounds_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetClampOperator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator_Statics::NewProp_InInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator_Statics::NewProp_InBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Operators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Clamps the source module to a range */" },
#endif
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clamps the source module to a range" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetClampOperator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator_Statics::UELibnoiseModule_eventGetClampOperator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator_Statics::UELibnoiseModule_eventGetClampOperator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetConstGenerator_Statics
	{
		struct UELibnoiseModule_eventGetConstGenerator_Parms
		{
			int32 InValue;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetConstGenerator_Statics::NewProp_InValue_MetaData[] = {
		{ "DisplayName", "Value" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetConstGenerator_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetConstGenerator_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetConstGenerator_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetConstGenerator_Statics::NewProp_InValue_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetConstGenerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetConstGenerator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetConstGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetConstGenerator_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetConstGenerator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetConstGenerator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Generators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Creates and returns a Constant noise */" },
#endif
		{ "CPP_Default_InValue", "1" },
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates and returns a Constant noise" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetConstGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetConstGenerator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetConstGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetConstGenerator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetConstGenerator_Statics::UELibnoiseModule_eventGetConstGenerator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetConstGenerator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetConstGenerator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetConstGenerator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetConstGenerator_Statics::UELibnoiseModule_eventGetConstGenerator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetConstGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetConstGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics
	{
		struct UELibnoiseModule_eventGetCurveOperator_Parms
		{
			UUELibnoiseModule* InInput;
			UCurveFloat* InCurve;
			float InCurvePrecision;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCurvePrecision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InCurvePrecision;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::NewProp_InInput_MetaData[] = {
		{ "DisplayName", "Input" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::NewProp_InInput = { "InInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetCurveOperator_Parms, InInput), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::NewProp_InInput_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::NewProp_InInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::NewProp_InCurve_MetaData[] = {
		{ "DisplayName", "Curve" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::NewProp_InCurve = { "InCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetCurveOperator_Parms, InCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::NewProp_InCurve_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::NewProp_InCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::NewProp_InCurvePrecision_MetaData[] = {
		{ "DisplayName", "Precision" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::NewProp_InCurvePrecision = { "InCurvePrecision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetCurveOperator_Parms, InCurvePrecision), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::NewProp_InCurvePrecision_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::NewProp_InCurvePrecision_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetCurveOperator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::NewProp_InInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::NewProp_InCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::NewProp_InCurvePrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Operators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Uses a curve asset to map values of the source module arbitrarily */" },
#endif
		{ "CPP_Default_InCurvePrecision", "10.000000" },
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uses a curve asset to map values of the source module arbitrarily" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetCurveOperator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::UELibnoiseModule_eventGetCurveOperator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::UELibnoiseModule_eventGetCurveOperator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetCylindersGenerator_Statics
	{
		struct UELibnoiseModule_eventGetCylindersGenerator_Parms
		{
			float InFrequency;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFrequency;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetCylindersGenerator_Statics::NewProp_InFrequency_MetaData[] = {
		{ "DisplayName", "Frequency" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetCylindersGenerator_Statics::NewProp_InFrequency = { "InFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetCylindersGenerator_Parms, InFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetCylindersGenerator_Statics::NewProp_InFrequency_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetCylindersGenerator_Statics::NewProp_InFrequency_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetCylindersGenerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetCylindersGenerator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetCylindersGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetCylindersGenerator_Statics::NewProp_InFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetCylindersGenerator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetCylindersGenerator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Generators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Creates and returns a Cylindrical noise */" },
#endif
		{ "CPP_Default_InFrequency", "1.000000" },
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates and returns a Cylindrical noise" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetCylindersGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetCylindersGenerator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetCylindersGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetCylindersGenerator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetCylindersGenerator_Statics::UELibnoiseModule_eventGetCylindersGenerator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetCylindersGenerator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetCylindersGenerator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetCylindersGenerator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetCylindersGenerator_Statics::UELibnoiseModule_eventGetCylindersGenerator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetCylindersGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetCylindersGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics
	{
		struct UELibnoiseModule_eventGetDisplaceOperator_Parms
		{
			UUELibnoiseModule* InInput;
			UUELibnoiseModule* InDisplaceX;
			UUELibnoiseModule* InDisplaceY;
			UUELibnoiseModule* InDisplaceZ;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDisplaceX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDisplaceX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDisplaceY_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDisplaceY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDisplaceZ_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDisplaceZ;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::NewProp_InInput_MetaData[] = {
		{ "DisplayName", "Input" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::NewProp_InInput = { "InInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetDisplaceOperator_Parms, InInput), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::NewProp_InInput_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::NewProp_InInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::NewProp_InDisplaceX_MetaData[] = {
		{ "DisplayName", "Displace X" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::NewProp_InDisplaceX = { "InDisplaceX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetDisplaceOperator_Parms, InDisplaceX), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::NewProp_InDisplaceX_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::NewProp_InDisplaceX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::NewProp_InDisplaceY_MetaData[] = {
		{ "DisplayName", "Displace Y" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::NewProp_InDisplaceY = { "InDisplaceY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetDisplaceOperator_Parms, InDisplaceY), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::NewProp_InDisplaceY_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::NewProp_InDisplaceY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::NewProp_InDisplaceZ_MetaData[] = {
		{ "DisplayName", "Displace Z" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::NewProp_InDisplaceZ = { "InDisplaceZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetDisplaceOperator_Parms, InDisplaceZ), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::NewProp_InDisplaceZ_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::NewProp_InDisplaceZ_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetDisplaceOperator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::NewProp_InInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::NewProp_InDisplaceX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::NewProp_InDisplaceY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::NewProp_InDisplaceZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Operators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Displaces the source module in each axis using other modules */" },
#endif
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Displaces the source module in each axis using other modules" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetDisplaceOperator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::UELibnoiseModule_eventGetDisplaceOperator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::UELibnoiseModule_eventGetDisplaceOperator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator_Statics
	{
		struct UELibnoiseModule_eventGetExponentOperator_Parms
		{
			UUELibnoiseModule* InInput;
			float InExponent;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InExponent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InExponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator_Statics::NewProp_InInput_MetaData[] = {
		{ "DisplayName", "Input" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator_Statics::NewProp_InInput = { "InInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetExponentOperator_Parms, InInput), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator_Statics::NewProp_InInput_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator_Statics::NewProp_InInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator_Statics::NewProp_InExponent_MetaData[] = {
		{ "DisplayName", "Exponent" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator_Statics::NewProp_InExponent = { "InExponent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetExponentOperator_Parms, InExponent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator_Statics::NewProp_InExponent_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator_Statics::NewProp_InExponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetExponentOperator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator_Statics::NewProp_InInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator_Statics::NewProp_InExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Operators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Maps the source module to an exponent curve */" },
#endif
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maps the source module to an exponent curve" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetExponentOperator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator_Statics::UELibnoiseModule_eventGetExponentOperator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator_Statics::UELibnoiseModule_eventGetExponentOperator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetInvertOperator_Statics
	{
		struct UELibnoiseModule_eventGetInvertOperator_Parms
		{
			UUELibnoiseModule* InInput;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInput;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetInvertOperator_Statics::NewProp_InInput_MetaData[] = {
		{ "DisplayName", "Input" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetInvertOperator_Statics::NewProp_InInput = { "InInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetInvertOperator_Parms, InInput), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetInvertOperator_Statics::NewProp_InInput_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetInvertOperator_Statics::NewProp_InInput_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetInvertOperator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetInvertOperator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetInvertOperator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetInvertOperator_Statics::NewProp_InInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetInvertOperator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetInvertOperator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Operators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Inverts the source module */" },
#endif
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inverts the source module" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetInvertOperator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetInvertOperator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetInvertOperator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetInvertOperator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetInvertOperator_Statics::UELibnoiseModule_eventGetInvertOperator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetInvertOperator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetInvertOperator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetInvertOperator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetInvertOperator_Statics::UELibnoiseModule_eventGetInvertOperator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetInvertOperator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetInvertOperator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator_Statics
	{
		struct UELibnoiseModule_eventGetMaxOperator_Parms
		{
			UUELibnoiseModule* InLeft;
			UUELibnoiseModule* InRight;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRight;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator_Statics::NewProp_InLeft_MetaData[] = {
		{ "DisplayName", "Left" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator_Statics::NewProp_InLeft = { "InLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetMaxOperator_Parms, InLeft), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator_Statics::NewProp_InLeft_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator_Statics::NewProp_InLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator_Statics::NewProp_InRight_MetaData[] = {
		{ "DisplayName", "Right" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator_Statics::NewProp_InRight = { "InRight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetMaxOperator_Parms, InRight), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator_Statics::NewProp_InRight_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator_Statics::NewProp_InRight_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetMaxOperator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator_Statics::NewProp_InLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator_Statics::NewProp_InRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Operators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Gets the maximum value of each supplied module */" },
#endif
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the maximum value of each supplied module" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetMaxOperator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator_Statics::UELibnoiseModule_eventGetMaxOperator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator_Statics::UELibnoiseModule_eventGetMaxOperator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator_Statics
	{
		struct UELibnoiseModule_eventGetMinOperator_Parms
		{
			UUELibnoiseModule* InLeft;
			UUELibnoiseModule* InRight;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRight;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator_Statics::NewProp_InLeft_MetaData[] = {
		{ "DisplayName", "Left" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator_Statics::NewProp_InLeft = { "InLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetMinOperator_Parms, InLeft), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator_Statics::NewProp_InLeft_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator_Statics::NewProp_InLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator_Statics::NewProp_InRight_MetaData[] = {
		{ "DisplayName", "Right" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator_Statics::NewProp_InRight = { "InRight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetMinOperator_Parms, InRight), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator_Statics::NewProp_InRight_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator_Statics::NewProp_InRight_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetMinOperator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator_Statics::NewProp_InLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator_Statics::NewProp_InRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Operators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Gets the minimum value of each supplied module */" },
#endif
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the minimum value of each supplied module" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetMinOperator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator_Statics::UELibnoiseModule_eventGetMinOperator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator_Statics::UELibnoiseModule_eventGetMinOperator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator_Statics
	{
		struct UELibnoiseModule_eventGetMultiplyOperator_Parms
		{
			UUELibnoiseModule* InLeft;
			UUELibnoiseModule* InRight;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRight;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator_Statics::NewProp_InLeft_MetaData[] = {
		{ "DisplayName", "Left" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator_Statics::NewProp_InLeft = { "InLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetMultiplyOperator_Parms, InLeft), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator_Statics::NewProp_InLeft_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator_Statics::NewProp_InLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator_Statics::NewProp_InRight_MetaData[] = {
		{ "DisplayName", "Right" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator_Statics::NewProp_InRight = { "InRight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetMultiplyOperator_Parms, InRight), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator_Statics::NewProp_InRight_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator_Statics::NewProp_InRight_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetMultiplyOperator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator_Statics::NewProp_InLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator_Statics::NewProp_InRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Operators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Multiplies two modules */" },
#endif
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplies two modules" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetMultiplyOperator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator_Statics::UELibnoiseModule_eventGetMultiplyOperator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator_Statics::UELibnoiseModule_eventGetMultiplyOperator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics
	{
		struct UELibnoiseModule_eventGetPerlinGenerator_Parms
		{
			int32 InSeed;
			float InFrequency;
			float InLacunarity;
			int32 InOctaveCount;
			float InPersistance;
			TEnumAsByte<EUELGeneratorQuality> InQuality;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InLacunarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOctaveCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InOctaveCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPersistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPersistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InQuality_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InQuality;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InSeed_MetaData[] = {
		{ "DisplayName", "Seed" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InSeed = { "InSeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetPerlinGenerator_Parms, InSeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InSeed_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InSeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InFrequency_MetaData[] = {
		{ "DisplayName", "Frequency" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InFrequency = { "InFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetPerlinGenerator_Parms, InFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InFrequency_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InFrequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InLacunarity_MetaData[] = {
		{ "DisplayName", "Lacunarity" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InLacunarity = { "InLacunarity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetPerlinGenerator_Parms, InLacunarity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InLacunarity_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InLacunarity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InOctaveCount_MetaData[] = {
		{ "DisplayName", "Octave Count" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InOctaveCount = { "InOctaveCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetPerlinGenerator_Parms, InOctaveCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InOctaveCount_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InOctaveCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InPersistance_MetaData[] = {
		{ "DisplayName", "Persistance" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InPersistance = { "InPersistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetPerlinGenerator_Parms, InPersistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InPersistance_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InPersistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InQuality_MetaData[] = {
		{ "DisplayName", "Quality" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InQuality = { "InQuality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetPerlinGenerator_Parms, InQuality), Z_Construct_UEnum_UELibnoise_EUELGeneratorQuality, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InQuality_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InQuality_MetaData) }; // 3285413426
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetPerlinGenerator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InLacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InOctaveCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InPersistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_InQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Generators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Creates and returns a Perlin noise */" },
#endif
		{ "CPP_Default_InFrequency", "1.000000" },
		{ "CPP_Default_InLacunarity", "1.000000" },
		{ "CPP_Default_InOctaveCount", "6" },
		{ "CPP_Default_InPersistance", "0.500000" },
		{ "CPP_Default_InQuality", "MEDIUM" },
		{ "CPP_Default_InSeed", "1" },
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates and returns a Perlin noise" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetPerlinGenerator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::UELibnoiseModule_eventGetPerlinGenerator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::UELibnoiseModule_eventGetPerlinGenerator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator_Statics
	{
		struct UELibnoiseModule_eventGetPowerOperator_Parms
		{
			UUELibnoiseModule* InLeft;
			UUELibnoiseModule* InRight;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRight;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator_Statics::NewProp_InLeft_MetaData[] = {
		{ "DisplayName", "Left" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator_Statics::NewProp_InLeft = { "InLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetPowerOperator_Parms, InLeft), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator_Statics::NewProp_InLeft_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator_Statics::NewProp_InLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator_Statics::NewProp_InRight_MetaData[] = {
		{ "DisplayName", "Right" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator_Statics::NewProp_InRight = { "InRight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetPowerOperator_Parms, InRight), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator_Statics::NewProp_InRight_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator_Statics::NewProp_InRight_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetPowerOperator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator_Statics::NewProp_InLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator_Statics::NewProp_InRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Operators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Raises the output value from the first module to the power of the second module */" },
#endif
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Raises the output value from the first module to the power of the second module" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetPowerOperator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator_Statics::UELibnoiseModule_eventGetPowerOperator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator_Statics::UELibnoiseModule_eventGetPowerOperator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics
	{
		struct UELibnoiseModule_eventGetRidgedMultifractalGenerator_Parms
		{
			int32 InSeed;
			float InFrequency;
			float InLacunarity;
			int32 InOctaveCount;
			TEnumAsByte<EUELGeneratorQuality> InQuality;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InLacunarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOctaveCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InOctaveCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InQuality_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InQuality;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_InSeed_MetaData[] = {
		{ "DisplayName", "Seed" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_InSeed = { "InSeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetRidgedMultifractalGenerator_Parms, InSeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_InSeed_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_InSeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_InFrequency_MetaData[] = {
		{ "DisplayName", "Frequency" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_InFrequency = { "InFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetRidgedMultifractalGenerator_Parms, InFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_InFrequency_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_InFrequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_InLacunarity_MetaData[] = {
		{ "DisplayName", "Lacunarity" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_InLacunarity = { "InLacunarity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetRidgedMultifractalGenerator_Parms, InLacunarity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_InLacunarity_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_InLacunarity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_InOctaveCount_MetaData[] = {
		{ "DisplayName", "Octave Count" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_InOctaveCount = { "InOctaveCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetRidgedMultifractalGenerator_Parms, InOctaveCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_InOctaveCount_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_InOctaveCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_InQuality_MetaData[] = {
		{ "DisplayName", "Quality" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_InQuality = { "InQuality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetRidgedMultifractalGenerator_Parms, InQuality), Z_Construct_UEnum_UELibnoise_EUELGeneratorQuality, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_InQuality_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_InQuality_MetaData) }; // 3285413426
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetRidgedMultifractalGenerator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_InSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_InFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_InLacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_InOctaveCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_InQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Generators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Creates and returns a Ridged Multifractal noise */" },
#endif
		{ "CPP_Default_InFrequency", "1.000000" },
		{ "CPP_Default_InLacunarity", "1.000000" },
		{ "CPP_Default_InOctaveCount", "6" },
		{ "CPP_Default_InQuality", "MEDIUM" },
		{ "CPP_Default_InSeed", "1" },
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates and returns a Ridged Multifractal noise" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetRidgedMultifractalGenerator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::UELibnoiseModule_eventGetRidgedMultifractalGenerator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::UELibnoiseModule_eventGetRidgedMultifractalGenerator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator_Statics
	{
		struct UELibnoiseModule_eventGetRotatePointOperator_Parms
		{
			UUELibnoiseModule* InInput;
			FVector InRotation;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRotation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator_Statics::NewProp_InInput_MetaData[] = {
		{ "DisplayName", "Input" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator_Statics::NewProp_InInput = { "InInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetRotatePointOperator_Parms, InInput), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator_Statics::NewProp_InInput_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator_Statics::NewProp_InInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator_Statics::NewProp_InRotation_MetaData[] = {
		{ "DisplayName", "Rotation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetRotatePointOperator_Parms, InRotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator_Statics::NewProp_InRotation_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator_Statics::NewProp_InRotation_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetRotatePointOperator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator_Statics::NewProp_InInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator_Statics::NewProp_InRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Operators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Rotates the module around the origin */" },
#endif
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotates the module around the origin" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetRotatePointOperator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator_Statics::UELibnoiseModule_eventGetRotatePointOperator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator_Statics::UELibnoiseModule_eventGetRotatePointOperator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics
	{
		struct UELibnoiseModule_eventGetScaleBiasOperator_Parms
		{
			UUELibnoiseModule* InInput;
			float InBias;
			float InScale;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InScale;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::NewProp_InInput_MetaData[] = {
		{ "DisplayName", "Input" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::NewProp_InInput = { "InInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetScaleBiasOperator_Parms, InInput), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::NewProp_InInput_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::NewProp_InInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::NewProp_InBias_MetaData[] = {
		{ "DisplayName", "Bias" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::NewProp_InBias = { "InBias", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetScaleBiasOperator_Parms, InBias), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::NewProp_InBias_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::NewProp_InBias_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::NewProp_InScale_MetaData[] = {
		{ "DisplayName", "Scale" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::NewProp_InScale = { "InScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetScaleBiasOperator_Parms, InScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::NewProp_InScale_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::NewProp_InScale_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetScaleBiasOperator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::NewProp_InInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::NewProp_InBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::NewProp_InScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Operators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Applies a scaling factor with a bias to the source module */" },
#endif
		{ "CPP_Default_InBias", "0.000000" },
		{ "CPP_Default_InScale", "1.000000" },
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies a scaling factor with a bias to the source module" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetScaleBiasOperator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::UELibnoiseModule_eventGetScaleBiasOperator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::UELibnoiseModule_eventGetScaleBiasOperator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator_Statics
	{
		struct UELibnoiseModule_eventGetScalePointOperator_Parms
		{
			UUELibnoiseModule* InInput;
			FVector InScale;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InScale;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator_Statics::NewProp_InInput_MetaData[] = {
		{ "DisplayName", "Input" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator_Statics::NewProp_InInput = { "InInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetScalePointOperator_Parms, InInput), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator_Statics::NewProp_InInput_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator_Statics::NewProp_InInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator_Statics::NewProp_InScale_MetaData[] = {
		{ "DisplayName", "Scale" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator_Statics::NewProp_InScale = { "InScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetScalePointOperator_Parms, InScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator_Statics::NewProp_InScale_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator_Statics::NewProp_InScale_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetScalePointOperator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator_Statics::NewProp_InInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator_Statics::NewProp_InScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Operators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Scales the source module from the origin */" },
#endif
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scales the source module from the origin" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetScalePointOperator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator_Statics::UELibnoiseModule_eventGetScalePointOperator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator_Statics::UELibnoiseModule_eventGetScalePointOperator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics
	{
		struct UELibnoiseModule_eventGetSelectOperator_Parms
		{
			UUELibnoiseModule* InLeft;
			UUELibnoiseModule* InRight;
			UUELibnoiseModule* InController;
			float InEdgeFalloff;
			FVector2D InBounds;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEdgeFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InEdgeFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBounds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_InLeft_MetaData[] = {
		{ "DisplayName", "Left" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_InLeft = { "InLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetSelectOperator_Parms, InLeft), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_InLeft_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_InLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_InRight_MetaData[] = {
		{ "DisplayName", "Right" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_InRight = { "InRight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetSelectOperator_Parms, InRight), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_InRight_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_InRight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_InController_MetaData[] = {
		{ "DisplayName", "Controller" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_InController = { "InController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetSelectOperator_Parms, InController), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_InController_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_InController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_InEdgeFalloff_MetaData[] = {
		{ "DisplayName", "Edge Falloff" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_InEdgeFalloff = { "InEdgeFalloff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetSelectOperator_Parms, InEdgeFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_InEdgeFalloff_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_InEdgeFalloff_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_InBounds_MetaData[] = {
		{ "DisplayName", "Bounds" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_InBounds = { "InBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetSelectOperator_Parms, InBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_InBounds_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_InBounds_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetSelectOperator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_InLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_InRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_InController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_InEdgeFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_InBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Operators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Blends two modules together by masking using a controller module */" },
#endif
		{ "CPP_Default_InBounds", "(X=0.000,Y=1.000)" },
		{ "CPP_Default_InEdgeFalloff", "1.000000" },
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blends two modules together by masking using a controller module" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetSelectOperator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::UELibnoiseModule_eventGetSelectOperator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::UELibnoiseModule_eventGetSelectOperator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetSpheresGenerator_Statics
	{
		struct UELibnoiseModule_eventGetSpheresGenerator_Parms
		{
			float InFrequency;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFrequency;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetSpheresGenerator_Statics::NewProp_InFrequency_MetaData[] = {
		{ "DisplayName", "Frequency" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetSpheresGenerator_Statics::NewProp_InFrequency = { "InFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetSpheresGenerator_Parms, InFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetSpheresGenerator_Statics::NewProp_InFrequency_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetSpheresGenerator_Statics::NewProp_InFrequency_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetSpheresGenerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetSpheresGenerator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetSpheresGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetSpheresGenerator_Statics::NewProp_InFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetSpheresGenerator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetSpheresGenerator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Generators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Creates and returns a Spherical noise */" },
#endif
		{ "CPP_Default_InFrequency", "1.000000" },
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates and returns a Spherical noise" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetSpheresGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetSpheresGenerator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetSpheresGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetSpheresGenerator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetSpheresGenerator_Statics::UELibnoiseModule_eventGetSpheresGenerator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetSpheresGenerator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetSpheresGenerator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetSpheresGenerator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetSpheresGenerator_Statics::UELibnoiseModule_eventGetSpheresGenerator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetSpheresGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetSpheresGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics
	{
		struct UELibnoiseModule_eventGetTerraceOperator_Parms
		{
			UUELibnoiseModule* InInput;
			UCurveFloat* InCurve;
			float InCurvePrecision;
			bool InInverted;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCurvePrecision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InCurvePrecision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInverted_MetaData[];
#endif
		static void NewProp_InInverted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InInverted;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::NewProp_InInput_MetaData[] = {
		{ "DisplayName", "Input" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::NewProp_InInput = { "InInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetTerraceOperator_Parms, InInput), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::NewProp_InInput_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::NewProp_InInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::NewProp_InCurve_MetaData[] = {
		{ "DisplayName", "Curve" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::NewProp_InCurve = { "InCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetTerraceOperator_Parms, InCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::NewProp_InCurve_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::NewProp_InCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::NewProp_InCurvePrecision_MetaData[] = {
		{ "DisplayName", "Precision" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::NewProp_InCurvePrecision = { "InCurvePrecision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetTerraceOperator_Parms, InCurvePrecision), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::NewProp_InCurvePrecision_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::NewProp_InCurvePrecision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::NewProp_InInverted_MetaData[] = {
		{ "DisplayName", "Inverted" },
	};
#endif
	void Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::NewProp_InInverted_SetBit(void* Obj)
	{
		((UELibnoiseModule_eventGetTerraceOperator_Parms*)Obj)->InInverted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::NewProp_InInverted = { "InInverted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UELibnoiseModule_eventGetTerraceOperator_Parms), &Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::NewProp_InInverted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::NewProp_InInverted_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::NewProp_InInverted_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetTerraceOperator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::NewProp_InInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::NewProp_InCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::NewProp_InCurvePrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::NewProp_InInverted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Operators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Forms terraces along the source module using a curve */" },
#endif
		{ "CPP_Default_InCurvePrecision", "10.000000" },
		{ "CPP_Default_InInverted", "false" },
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forms terraces along the source module using a curve" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetTerraceOperator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::UELibnoiseModule_eventGetTerraceOperator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::UELibnoiseModule_eventGetTerraceOperator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator_Statics
	{
		struct UELibnoiseModule_eventGetTranslateOperator_Parms
		{
			UUELibnoiseModule* InInput;
			FVector InTranslation;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTranslation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTranslation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator_Statics::NewProp_InInput_MetaData[] = {
		{ "DisplayName", "Input" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator_Statics::NewProp_InInput = { "InInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetTranslateOperator_Parms, InInput), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator_Statics::NewProp_InInput_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator_Statics::NewProp_InInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator_Statics::NewProp_InTranslation_MetaData[] = {
		{ "DisplayName", "Translation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator_Statics::NewProp_InTranslation = { "InTranslation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetTranslateOperator_Parms, InTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator_Statics::NewProp_InTranslation_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator_Statics::NewProp_InTranslation_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetTranslateOperator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator_Statics::NewProp_InInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator_Statics::NewProp_InTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Operators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Translates the source module along the given vector */" },
#endif
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Translates the source module along the given vector" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetTranslateOperator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator_Statics::UELibnoiseModule_eventGetTranslateOperator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator_Statics::UELibnoiseModule_eventGetTranslateOperator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics
	{
		struct UELibnoiseModule_eventGetTurbulenceOperator_Parms
		{
			UUELibnoiseModule* InInput;
			int32 InSeed;
			float InFrequency;
			float InPower;
			float InRoughness;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRoughness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRoughness;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_InInput_MetaData[] = {
		{ "DisplayName", "Input" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_InInput = { "InInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetTurbulenceOperator_Parms, InInput), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_InInput_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_InInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_InSeed_MetaData[] = {
		{ "DisplayName", "Seed" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_InSeed = { "InSeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetTurbulenceOperator_Parms, InSeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_InSeed_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_InSeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_InFrequency_MetaData[] = {
		{ "DisplayName", "Frequency" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_InFrequency = { "InFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetTurbulenceOperator_Parms, InFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_InFrequency_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_InFrequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_InPower_MetaData[] = {
		{ "DisplayName", "Power" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_InPower = { "InPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetTurbulenceOperator_Parms, InPower), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_InPower_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_InPower_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_InRoughness_MetaData[] = {
		{ "DisplayName", "Roughness" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_InRoughness = { "InRoughness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetTurbulenceOperator_Parms, InRoughness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_InRoughness_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_InRoughness_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetTurbulenceOperator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_InInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_InSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_InFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_InPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_InRoughness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Operators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Adds turbulence noise to the source module */" },
#endif
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds turbulence noise to the source module" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetTurbulenceOperator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::UELibnoiseModule_eventGetTurbulenceOperator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::UELibnoiseModule_eventGetTurbulenceOperator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics
	{
		struct UELibnoiseModule_eventGetVoronoiGenerator_Parms
		{
			int32 InSeed;
			float InFrequency;
			int32 InDisplacement;
			bool InEnableDistance;
			UUELibnoiseModule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDisplacement_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InDisplacement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEnableDistance_MetaData[];
#endif
		static void NewProp_InEnableDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InEnableDistance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::NewProp_InSeed_MetaData[] = {
		{ "DisplayName", "Seed" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::NewProp_InSeed = { "InSeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetVoronoiGenerator_Parms, InSeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::NewProp_InSeed_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::NewProp_InSeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::NewProp_InFrequency_MetaData[] = {
		{ "DisplayName", "Frequency" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::NewProp_InFrequency = { "InFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetVoronoiGenerator_Parms, InFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::NewProp_InFrequency_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::NewProp_InFrequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::NewProp_InDisplacement_MetaData[] = {
		{ "DisplayName", "Displacement" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::NewProp_InDisplacement = { "InDisplacement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetVoronoiGenerator_Parms, InDisplacement), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::NewProp_InDisplacement_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::NewProp_InDisplacement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::NewProp_InEnableDistance_MetaData[] = {
		{ "DisplayName", "Enable Distance" },
	};
#endif
	void Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::NewProp_InEnableDistance_SetBit(void* Obj)
	{
		((UELibnoiseModule_eventGetVoronoiGenerator_Parms*)Obj)->InEnableDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::NewProp_InEnableDistance = { "InEnableDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UELibnoiseModule_eventGetVoronoiGenerator_Parms), &Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::NewProp_InEnableDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::NewProp_InEnableDistance_MetaData), Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::NewProp_InEnableDistance_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventGetVoronoiGenerator_Parms, ReturnValue), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::NewProp_InSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::NewProp_InFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::NewProp_InDisplacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::NewProp_InEnableDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Generators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Creates and returns a Voronoi noise */" },
#endif
		{ "CPP_Default_InDisplacement", "1" },
		{ "CPP_Default_InEnableDistance", "true" },
		{ "CPP_Default_InFrequency", "1.000000" },
		{ "CPP_Default_InSeed", "1" },
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates and returns a Voronoi noise" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "GetVoronoiGenerator", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::UELibnoiseModule_eventGetVoronoiGenerator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::UELibnoiseModule_eventGetVoronoiGenerator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture_Statics
	{
		struct UELibnoiseModule_eventRenderToTexture_Parms
		{
			int32 InWidth;
			int32 InHeight;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InHeight;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture_Statics::NewProp_InWidth_MetaData[] = {
		{ "DisplayName", "Texture Width" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture_Statics::NewProp_InWidth = { "InWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventRenderToTexture_Parms, InWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture_Statics::NewProp_InWidth_MetaData), Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture_Statics::NewProp_InWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture_Statics::NewProp_InHeight_MetaData[] = {
		{ "DisplayName", "Texture Height" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture_Statics::NewProp_InHeight = { "InHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventRenderToTexture_Parms, InHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture_Statics::NewProp_InHeight_MetaData), Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture_Statics::NewProp_InHeight_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseModule_eventRenderToTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture_Statics::NewProp_InWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture_Statics::NewProp_InHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Generates and returns a UTexture2D from this module */" },
#endif
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generates and returns a UTexture2D from this module" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseModule, nullptr, "RenderToTexture", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture_Statics::UELibnoiseModule_eventRenderToTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture_Statics::UELibnoiseModule_eventRenderToTexture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUELibnoiseModule);
	UClass* Z_Construct_UClass_UUELibnoiseModule_NoRegister()
	{
		return UUELibnoiseModule::StaticClass();
	}
	struct Z_Construct_UClass_UUELibnoiseModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUELibnoiseModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UELibnoise,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUELibnoiseModule_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUELibnoiseModule_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetAbsOperator, "GetAbsOperator" }, // 3423331974
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetAddOperator, "GetAddOperator" }, // 2303473937
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetBillowGenerator, "GetBillowGenerator" }, // 1832917791
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetBlendOperator, "GetBlendOperator" }, // 1973035885
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetCacheOperator, "GetCacheOperator" }, // 1520828269
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetCheckerGenerator, "GetCheckerGenerator" }, // 3802642100
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetClampOperator, "GetClampOperator" }, // 1974026581
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetConstGenerator, "GetConstGenerator" }, // 2479533975
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetCurveOperator, "GetCurveOperator" }, // 1132456867
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetCylindersGenerator, "GetCylindersGenerator" }, // 3725664561
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetDisplaceOperator, "GetDisplaceOperator" }, // 1741064309
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetExponentOperator, "GetExponentOperator" }, // 1722237787
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetInvertOperator, "GetInvertOperator" }, // 434047231
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetMaxOperator, "GetMaxOperator" }, // 2149608553
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetMinOperator, "GetMinOperator" }, // 2137985313
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetMultiplyOperator, "GetMultiplyOperator" }, // 279808909
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetPerlinGenerator, "GetPerlinGenerator" }, // 60482298
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetPowerOperator, "GetPowerOperator" }, // 1312992421
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetRidgedMultifractalGenerator, "GetRidgedMultifractalGenerator" }, // 348545614
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetRotatePointOperator, "GetRotatePointOperator" }, // 2933671153
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetScaleBiasOperator, "GetScaleBiasOperator" }, // 670204964
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetScalePointOperator, "GetScalePointOperator" }, // 2226811545
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetSelectOperator, "GetSelectOperator" }, // 4081676029
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetSpheresGenerator, "GetSpheresGenerator" }, // 3419255994
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetTerraceOperator, "GetTerraceOperator" }, // 1120986645
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetTranslateOperator, "GetTranslateOperator" }, // 2613780553
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetTurbulenceOperator, "GetTurbulenceOperator" }, // 1679196347
		{ &Z_Construct_UFunction_UUELibnoiseModule_GetVoronoiGenerator, "GetVoronoiGenerator" }, // 3006153242
		{ &Z_Construct_UFunction_UUELibnoiseModule_RenderToTexture, "RenderToTexture" }, // 4071257767
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUELibnoiseModule_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUELibnoiseModule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UELibnoiseModule.h" },
		{ "ModuleRelativePath", "Public/UELibnoiseModule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUELibnoiseModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUELibnoiseModule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUELibnoiseModule_Statics::ClassParams = {
		&UUELibnoiseModule::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUELibnoiseModule_Statics::Class_MetaDataParams), Z_Construct_UClass_UUELibnoiseModule_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UUELibnoiseModule()
	{
		if (!Z_Registration_Info_UClass_UUELibnoiseModule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUELibnoiseModule.OuterSingleton, Z_Construct_UClass_UUELibnoiseModule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUELibnoiseModule.OuterSingleton;
	}
	template<> UELIBNOISE_API UClass* StaticClass<UUELibnoiseModule>()
	{
		return UUELibnoiseModule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUELibnoiseModule);
	struct Z_CompiledInDeferFile_FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseModule_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseModule_h_Statics::EnumInfo[] = {
		{ EUELGeneratorQuality_StaticEnum, TEXT("EUELGeneratorQuality"), &Z_Registration_Info_UEnum_EUELGeneratorQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3285413426U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseModule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUELibnoiseModule, UUELibnoiseModule::StaticClass, TEXT("UUELibnoiseModule"), &Z_Registration_Info_UClass_UUELibnoiseModule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUELibnoiseModule), 4215214211U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseModule_h_1899270789(TEXT("/Script/UELibnoise"),
		Z_CompiledInDeferFile_FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseModule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseModule_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseModule_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseModule_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
