//	MIT License
// 
// Copyright (C) 2023, Lukas Clausson
// lukas.clausson@hotmail.com
// https://www.lukasclausson.com/


#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "libnoise/noise.h"

#include "UELibnoiseModule.generated.h"

UENUM()
enum EUELGeneratorQuality
{
	LOW = 0,
	MEDIUM = 1,
	HIGH = 2
};


UCLASS(BlueprintType)
class UELIBNOISE_API UUELibnoiseModule : public UObject
{
	GENERATED_BODY()

public:

	UUELibnoiseModule() {}
	~UUELibnoiseModule() { delete m_Module; m_Module = nullptr; }

	/* Set the type of module this is */
	template <typename T>
	inline void SetModule() { m_Module = new T; }

	/* Get the module casted to a specific type */
	template <typename T>
	inline T* GetModule() { return (T*)m_Module; };

	/* Get a temporary reference to the base module */
	inline const noise::module::Module& GetModule() { return *m_Module; };

	/* Generates and returns a UTexture2D from this module */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Helpers") UTexture2D* RenderToTexture(
		UPARAM(DisplayName = "Texture Width") int32 InWidth,
		UPARAM(DisplayName = "Texture Height") int32 InHeight);

private:

	noise::module::Module* m_Module = nullptr;

public:

	// GENERATOR HELPERS

/* Creates and returns a Billow noise */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Generators") static UUELibnoiseModule* GetBillowGenerator(
		UPARAM(DisplayName = "Seed") int32 InSeed = 1,
		UPARAM(DisplayName = "Frequency") float InFrequency = 1.0f,
		UPARAM(DisplayName = "Lacunarity") float InLacunarity = 1.0f,
		UPARAM(DisplayName = "Octave Count") int32 InOctaveCount = 6,
		UPARAM(DisplayName = "Persistance") float InPersistance = 0.5f,
		UPARAM(DisplayName = "Quality") EUELGeneratorQuality InQuality = EUELGeneratorQuality::MEDIUM);

	/* Creates and returns a Checkerboard noise */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Generators") static UUELibnoiseModule* GetCheckerGenerator();

	/* Creates and returns a Constant noise */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Generators") static UUELibnoiseModule* GetConstGenerator(
		UPARAM(DisplayName = "Value") int32 InValue = 1);

	/* Creates and returns a Cylindrical noise */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Generators") static UUELibnoiseModule* GetCylindersGenerator(
		UPARAM(DisplayName = "Frequency") float InFrequency = 1.0f);

	/* Creates and returns a Perlin noise */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Generators") static UUELibnoiseModule* GetPerlinGenerator(
		UPARAM(DisplayName = "Seed") int32 InSeed = 1,
		UPARAM(DisplayName = "Frequency") float InFrequency = 1.0f,
		UPARAM(DisplayName = "Lacunarity") float InLacunarity = 1.0f,
		UPARAM(DisplayName = "Octave Count") int32 InOctaveCount = 6,
		UPARAM(DisplayName = "Persistance") float InPersistance = 0.5f,
		UPARAM(DisplayName = "Quality") EUELGeneratorQuality InQuality = EUELGeneratorQuality::MEDIUM);

	/* Creates and returns a Ridged Multifractal noise */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Generators") static UUELibnoiseModule* GetRidgedMultifractalGenerator(
		UPARAM(DisplayName = "Seed") int32 InSeed = 1,
		UPARAM(DisplayName = "Frequency") float InFrequency = 1.0f,
		UPARAM(DisplayName = "Lacunarity") float InLacunarity = 1.0f,
		UPARAM(DisplayName = "Octave Count") int32 InOctaveCount = 6,
		UPARAM(DisplayName = "Quality") EUELGeneratorQuality InQuality = EUELGeneratorQuality::MEDIUM);

	/* Creates and returns a Spherical noise */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Generators") static UUELibnoiseModule* GetSpheresGenerator(
		UPARAM(DisplayName = "Frequency") float InFrequency = 1.0f);

	/* Creates and returns a Voronoi noise */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Generators") static UUELibnoiseModule* GetVoronoiGenerator(
		UPARAM(DisplayName = "Seed") int32 InSeed = 1,
		UPARAM(DisplayName = "Frequency") float InFrequency = 1.0f,
		UPARAM(DisplayName = "Displacement") int32 InDisplacement = 1,
		UPARAM(DisplayName = "Enable Distance") bool InEnableDistance = true);


	// OPERATOR HELPERS

	/* Generates the absolute value of the module (*= -1 on negative values) */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Operators") static UUELibnoiseModule* GetAbsOperator(
		UPARAM(DisplayName = "Input") UUELibnoiseModule* InInput);

	/* Adds a module on top of another */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Operators") static UUELibnoiseModule* GetAddOperator(
		UPARAM(DisplayName = "Left") UUELibnoiseModule* InLeft,
		UPARAM(DisplayName = "Right") UUELibnoiseModule* InRight);

	/* Blends two modules together using a controller module */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Operators") static UUELibnoiseModule* GetBlendOperator(
		UPARAM(DisplayName = "Left") UUELibnoiseModule* InLeft,
		UPARAM(DisplayName = "Right") UUELibnoiseModule* InRight,
		UPARAM(DisplayName = "Controller") UUELibnoiseModule* InController);


	/* Caches the last output value generated by a source module */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Operators") static UUELibnoiseModule* GetCacheOperator(
		UPARAM(DisplayName = "Input") UUELibnoiseModule* InInput);

	/* Clamps the source module to a range */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Operators") static UUELibnoiseModule* GetClampOperator(
		UPARAM(DisplayName = "Input") UUELibnoiseModule* InInput,
		UPARAM(DisplayName = "Bounds") FVector2D InBounds);

	/* Uses a curve asset to map values of the source module arbitrarily */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Operators") static UUELibnoiseModule* GetCurveOperator(
		UPARAM(DisplayName = "Input") UUELibnoiseModule* InInput,
		UPARAM(DisplayName = "Curve") UCurveFloat* InCurve,
		UPARAM(DisplayName = "Precision") float InCurvePrecision = 10.0f);

	/* Displaces the source module in each axis using other modules */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Operators") static UUELibnoiseModule* GetDisplaceOperator(
		UPARAM(DisplayName = "Input") UUELibnoiseModule* InInput,
		UPARAM(DisplayName = "Displace X") UUELibnoiseModule* InDisplaceX,
		UPARAM(DisplayName = "Displace Y") UUELibnoiseModule* InDisplaceY,
		UPARAM(DisplayName = "Displace Z") UUELibnoiseModule* InDisplaceZ);

	/* Maps the source module to an exponent curve */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Operators") static UUELibnoiseModule* GetExponentOperator(
		UPARAM(DisplayName = "Input") UUELibnoiseModule* InInput,
		UPARAM(DisplayName = "Exponent") float InExponent);

	/* Inverts the source module */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Operators") static UUELibnoiseModule* GetInvertOperator(
		UPARAM(DisplayName = "Input") UUELibnoiseModule* InInput);

	/* Gets the maximum value of each supplied module */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Operators") static UUELibnoiseModule* GetMaxOperator(
		UPARAM(DisplayName = "Left") UUELibnoiseModule* InLeft,
		UPARAM(DisplayName = "Right") UUELibnoiseModule* InRight);

	/* Gets the minimum value of each supplied module */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Operators") static UUELibnoiseModule* GetMinOperator(
		UPARAM(DisplayName = "Left") UUELibnoiseModule* InLeft,
		UPARAM(DisplayName = "Right") UUELibnoiseModule* InRight);

	/* Multiplies two modules */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Operators") static UUELibnoiseModule* GetMultiplyOperator(
		UPARAM(DisplayName = "Left") UUELibnoiseModule* InLeft,
		UPARAM(DisplayName = "Right") UUELibnoiseModule* InRight);

	/* Raises the output value from the first module to the power of the second module */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Operators") static UUELibnoiseModule* GetPowerOperator(
		UPARAM(DisplayName = "Left") UUELibnoiseModule* InLeft,
		UPARAM(DisplayName = "Right") UUELibnoiseModule* InRight);

	/* Rotates the module around the origin */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Operators") static UUELibnoiseModule* GetRotatePointOperator(
		UPARAM(DisplayName = "Input") UUELibnoiseModule* InInput,
		UPARAM(DisplayName = "Rotation") FVector InRotation); // Add alternative for FRotator?

	/* Scales the source module from the origin */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Operators") static UUELibnoiseModule* GetScalePointOperator(
		UPARAM(DisplayName = "Input") UUELibnoiseModule* InInput,
		UPARAM(DisplayName = "Scale") FVector InScale);

	/* Applies a scaling factor with a bias to the source module */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Operators") static UUELibnoiseModule* GetScaleBiasOperator(
		UPARAM(DisplayName = "Input") UUELibnoiseModule* InInput,
		UPARAM(DisplayName = "Bias") float InBias = 0.0f,
		UPARAM(DisplayName = "Scale") float InScale = 1.0f);

	/* Blends two modules together by masking using a controller module */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Operators") static UUELibnoiseModule* GetSelectOperator(
		UPARAM(DisplayName = "Left") UUELibnoiseModule* InLeft,
		UPARAM(DisplayName = "Right") UUELibnoiseModule* InRight,
		UPARAM(DisplayName = "Controller") UUELibnoiseModule* InController,
		UPARAM(DisplayName = "Edge Falloff") float InEdgeFalloff = 1.0f,
		UPARAM(DisplayName = "Bounds") FVector2D InBounds = FVector2D(0.0f, 1.0f));

	/* Forms terraces along the source module using a curve */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Operators") static UUELibnoiseModule* GetTerraceOperator(
		UPARAM(DisplayName = "Input") UUELibnoiseModule* InInput,
		UPARAM(DisplayName = "Curve") UCurveFloat* InCurve,
		UPARAM(DisplayName = "Precision") float InCurvePrecision = 10.0f,
		UPARAM(DisplayName = "Inverted") bool InInverted = false);

	/* Translates the source module along the given vector */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Operators") static UUELibnoiseModule* GetTranslateOperator(
		UPARAM(DisplayName = "Input") UUELibnoiseModule* InInput,
		UPARAM(DisplayName = "Translation") FVector InTranslation);

	/* Adds turbulence noise to the source module */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Operators") static UUELibnoiseModule* GetTurbulenceOperator(
		UPARAM(DisplayName = "Input") UUELibnoiseModule* InInput,
		UPARAM(DisplayName = "Seed") int32 InSeed,
		UPARAM(DisplayName = "Frequency") float InFrequency,
		UPARAM(DisplayName = "Power") float InPower,
		UPARAM(DisplayName = "Roughness") float InRoughness);

};
