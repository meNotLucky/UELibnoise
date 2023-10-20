//	MIT License
// 
// Copyright (C) 2023, Lukas Clausson
// lukas.clausson@hotmail.com
// https://www.lukasclausson.com/

#include "UELibnoiseModule.h"
#include "UELibnoiseHelpers.h"


UTexture2D* UUELibnoiseModule::RenderToTexture(int32 InWidth, int32 InHeight)
{
	return UUELibnoiseHelpers::RenderTextureFromModule(this, InWidth, InHeight);
}

// GENERATOR HELPERS

UUELibnoiseModule* UUELibnoiseModule::GetBillowGenerator(
	int32 InSeed/* = 1*/,
	float InFrequency/* = 1.0f*/,
	float InLacunarity/* = 1.0f*/,
	int32 InOctaveCount/* = 6*/,
	float InPersistance/* = 0.5f*/,
	EUELGeneratorQuality InQuality/* = EUELGeneratorQuality::MEDIUM*/)
{
	UUELibnoiseModule* generator = NewObject<UUELibnoiseModule>();
	generator->SetModule<noise::module::Billow>();
	auto mod = generator->GetModule<noise::module::Billow>();

	mod->SetSeed(InSeed);
	mod->SetFrequency(InFrequency);
	mod->SetLacunarity(InLacunarity);
	mod->SetOctaveCount(InOctaveCount);
	mod->SetPersistence(InPersistance);
	mod->SetNoiseQuality((noise::NoiseQuality(InQuality)));

	return generator;
}

UUELibnoiseModule* UUELibnoiseModule::GetCheckerGenerator()
{
	UUELibnoiseModule* generator = NewObject<UUELibnoiseModule>();
	generator->SetModule<noise::module::Checkerboard>();
	auto mod = generator->GetModule<noise::module::Checkerboard>();

	return generator;
}

UUELibnoiseModule* UUELibnoiseModule::GetConstGenerator(
	int32 InValue/* = 1*/)
{
	UUELibnoiseModule* generator = NewObject<UUELibnoiseModule>();
	generator->SetModule<noise::module::Const>();
	auto mod = generator->GetModule<noise::module::Const>();

	mod->SetConstValue(InValue);

	return generator;
}

UUELibnoiseModule* UUELibnoiseModule::GetCylindersGenerator(
	float InFrequency/* = 1.0f*/)
{
	UUELibnoiseModule* generator = NewObject<UUELibnoiseModule>();
	generator->SetModule<noise::module::Cylinders>();
	auto mod = generator->GetModule<noise::module::Cylinders>();

	mod->SetFrequency(InFrequency);

	return generator;
}

UUELibnoiseModule* UUELibnoiseModule::GetPerlinGenerator(
	int32 InSeed/* = 1*/,
	float InFrequency/* = 1.0f*/,
	float InLacunarity/* = 1.0f*/,
	int32 InOctaveCount/* = 6*/,
	float InPersistance/* = 0.5f*/,
	EUELGeneratorQuality InQuality/* = EUELGeneratorQuality::MEDIUM*/)
{
	UUELibnoiseModule* generator = NewObject<UUELibnoiseModule>();
	generator->SetModule<noise::module::Perlin>();
	auto mod = generator->GetModule<noise::module::Perlin>();

	mod->SetSeed(InSeed);
	mod->SetFrequency(InFrequency);
	mod->SetLacunarity(InLacunarity);
	mod->SetOctaveCount(InOctaveCount);
	mod->SetPersistence(InPersistance);
	mod->SetNoiseQuality((noise::NoiseQuality(InQuality)));

	return generator;
}

UUELibnoiseModule* UUELibnoiseModule::GetRidgedMultifractalGenerator(
	int32 InSeed/* = 1*/,
	float InFrequency/* = 1.0f*/,
	float InLacunarity/* = 1.0f*/,
	int32 InOctaveCount/* = 6*/,
	EUELGeneratorQuality InQuality/* = EUELGeneratorQuality::MEDIUM*/)
{
	UUELibnoiseModule* generator = NewObject<UUELibnoiseModule>();
	generator->SetModule<noise::module::RidgedMulti>();
	auto mod = generator->GetModule<noise::module::RidgedMulti>();

	mod->SetSeed(InSeed);
	mod->SetFrequency(InFrequency);
	mod->SetLacunarity(InLacunarity);
	mod->SetOctaveCount(InOctaveCount);
	mod->SetNoiseQuality((noise::NoiseQuality(InQuality)));

	return generator;
}

UUELibnoiseModule* UUELibnoiseModule::GetSpheresGenerator(
	float InFrequency/* = 1.0f*/)
{
	UUELibnoiseModule* generator = NewObject<UUELibnoiseModule>();
	generator->SetModule<noise::module::Spheres>();
	auto mod = generator->GetModule<noise::module::Spheres>();

	mod->SetFrequency(InFrequency);

	return generator;
}

UUELibnoiseModule* UUELibnoiseModule::GetVoronoiGenerator(
	int32 InSeed/* = 1*/,
	float InFrequency/* = 1.0f*/,
	int32 InDisplacement/* = 1*/,
	bool InEnableDistance/* = true*/)
{
	UUELibnoiseModule* generator = NewObject<UUELibnoiseModule>();
	generator->SetModule<noise::module::Voronoi>();
	auto mod = generator->GetModule<noise::module::Voronoi>();

	mod->SetSeed(InSeed);
	mod->SetFrequency(InFrequency);
	mod->SetDisplacement(InDisplacement);
	mod->EnableDistance(InEnableDistance);

	return generator;
}

// OPERATOR HELPERS

UUELibnoiseModule* UUELibnoiseModule::GetAbsOperator(
	UUELibnoiseModule* InInput)
{
	UUELibnoiseModule* op = NewObject<UUELibnoiseModule>();
	op->SetModule<noise::module::Abs>();
	auto mod = op->GetModule<noise::module::Abs>();

	mod->SetSourceModule(0, InInput->GetModule());

	return op;
}

UUELibnoiseModule* UUELibnoiseModule::GetAddOperator(
	UUELibnoiseModule* InLeft,
	UUELibnoiseModule* InRight)
{
	UUELibnoiseModule* op = NewObject<UUELibnoiseModule>();
	op->SetModule<noise::module::Add>();
	auto mod = op->GetModule<noise::module::Add>();

	mod->SetSourceModule(0, InLeft->GetModule());
	mod->SetSourceModule(1, InRight->GetModule());

	return op;
}

UUELibnoiseModule* UUELibnoiseModule::GetBlendOperator(
	UUELibnoiseModule* InLeft,
	UUELibnoiseModule* InRight,
	UUELibnoiseModule* InController)
{
	UUELibnoiseModule* op = NewObject<UUELibnoiseModule>();
	op->SetModule<noise::module::Blend>();
	auto mod = op->GetModule<noise::module::Blend>();

	mod->SetSourceModule(0, InLeft->GetModule());
	mod->SetSourceModule(1, InRight->GetModule());
	mod->SetControlModule(InController->GetModule());

	return op;
}

UUELibnoiseModule* UUELibnoiseModule::GetCacheOperator(
	UUELibnoiseModule* InInput)
{
	UUELibnoiseModule* op = NewObject<UUELibnoiseModule>();
	op->SetModule<noise::module::Cache>();
	auto mod = op->GetModule<noise::module::Cache>();

	mod->SetSourceModule(0, InInput->GetModule());

	return op;
}

UUELibnoiseModule* UUELibnoiseModule::GetClampOperator(
	UUELibnoiseModule* InInput,
	FVector2D InBounds)
{
	UUELibnoiseModule* op = NewObject<UUELibnoiseModule>();
	op->SetModule<noise::module::Clamp>();
	auto mod = op->GetModule<noise::module::Clamp>();

	mod->SetSourceModule(0, InInput->GetModule());
	mod->SetBounds(InBounds.X, InBounds.Y);

	return op;
}

UUELibnoiseModule* UUELibnoiseModule::GetCurveOperator(
	UUELibnoiseModule* InInput,
	UCurveFloat* InCurve,
	float InCurvePrecision/* = 10.0f*/)
{
	UUELibnoiseModule* op = NewObject<UUELibnoiseModule>();
	op->SetModule<noise::module::Curve>();
	auto mod = op->GetModule<noise::module::Curve>();

	mod->SetSourceModule(0, InInput->GetModule());
	mod->ClearAllControlPoints();

	float start; float end;
	InCurve->GetTimeRange(start, end);
	for (float t = start; t < end; t += (1.0f / InCurvePrecision))
	{
		mod->AddControlPoint(t, InCurve->GetFloatValue(t));
	}

	return op;
}

UUELibnoiseModule* UUELibnoiseModule::GetDisplaceOperator(
	UUELibnoiseModule* InInput,
	UUELibnoiseModule* InDisplaceX,
	UUELibnoiseModule* InDisplaceY,
	UUELibnoiseModule* InDisplaceZ)
{
	UUELibnoiseModule* op = NewObject<UUELibnoiseModule>();
	op->SetModule<noise::module::Displace>();
	auto mod = op->GetModule<noise::module::Displace>();

	mod->SetSourceModule(0, InInput->GetModule());
	mod->SetXDisplaceModule(InDisplaceX->GetModule());
	mod->SetYDisplaceModule(InDisplaceY->GetModule());
	mod->SetZDisplaceModule(InDisplaceZ->GetModule());

	return op;
}

UUELibnoiseModule* UUELibnoiseModule::GetExponentOperator(
	UUELibnoiseModule* InInput,
	float InExponent)
{
	UUELibnoiseModule* op = NewObject<UUELibnoiseModule>();
	op->SetModule<noise::module::Exponent>();
	auto mod = op->GetModule<noise::module::Exponent>();

	mod->SetSourceModule(0, InInput->GetModule());
	mod->SetExponent(InExponent);

	return op;
}

UUELibnoiseModule* UUELibnoiseModule::GetInvertOperator(
	UUELibnoiseModule* InInput)
{
	UUELibnoiseModule* op = NewObject<UUELibnoiseModule>();
	op->SetModule<noise::module::Invert>();
	auto mod = op->GetModule<noise::module::Invert>();

	mod->SetSourceModule(0, InInput->GetModule());

	return op;
}

UUELibnoiseModule* UUELibnoiseModule::GetMaxOperator(
	UUELibnoiseModule* InLeft,
	UUELibnoiseModule* InRight)
{
	UUELibnoiseModule* op = NewObject<UUELibnoiseModule>();
	op->SetModule<noise::module::Max>();
	auto mod = op->GetModule<noise::module::Max>();

	mod->SetSourceModule(0, InLeft->GetModule());
	mod->SetSourceModule(1, InRight->GetModule());

	return op;
}

UUELibnoiseModule* UUELibnoiseModule::GetMinOperator(
	UUELibnoiseModule* InLeft,
	UUELibnoiseModule* InRight)
{
	UUELibnoiseModule* op = NewObject<UUELibnoiseModule>();
	op->SetModule<noise::module::Min>();
	auto mod = op->GetModule<noise::module::Min>();

	mod->SetSourceModule(0, InLeft->GetModule());
	mod->SetSourceModule(1, InRight->GetModule());

	return op;
}

UUELibnoiseModule* UUELibnoiseModule::GetMultiplyOperator(
	UUELibnoiseModule* InLeft,
	UUELibnoiseModule* InRight)
{
	UUELibnoiseModule* op = NewObject<UUELibnoiseModule>();
	op->SetModule<noise::module::Multiply>();
	auto mod = op->GetModule<noise::module::Multiply>();

	mod->SetSourceModule(0, InLeft->GetModule());
	mod->SetSourceModule(1, InRight->GetModule());

	return op;
}

UUELibnoiseModule* UUELibnoiseModule::GetPowerOperator(
	UUELibnoiseModule* InLeft,
	UUELibnoiseModule* InRight)
{
	UUELibnoiseModule* op = NewObject<UUELibnoiseModule>();
	op->SetModule<noise::module::Power>();
	auto mod = op->GetModule<noise::module::Power>();

	mod->SetSourceModule(0, InLeft->GetModule());
	mod->SetSourceModule(1, InRight->GetModule());

	return op;
}

UUELibnoiseModule* UUELibnoiseModule::GetRotatePointOperator(
	UUELibnoiseModule* InInput,
	FVector InRotation) // Add alternative for FRotator?
{
	UUELibnoiseModule* op = NewObject<UUELibnoiseModule>();
	op->SetModule<noise::module::RotatePoint>();
	auto mod = op->GetModule<noise::module::RotatePoint>();

	mod->SetSourceModule(0, InInput->GetModule());
	mod->SetAngles(InRotation.X, InRotation.Y, InRotation.Z);

	return op;
}

UUELibnoiseModule* UUELibnoiseModule::GetScalePointOperator(
	UUELibnoiseModule* InInput,
	FVector InScale)
{
	UUELibnoiseModule* op = NewObject<UUELibnoiseModule>();
	op->SetModule<noise::module::ScalePoint>();
	auto mod = op->GetModule<noise::module::ScalePoint>();

	mod->SetSourceModule(0, InInput->GetModule());
	mod->SetScale(InScale.X, InScale.Y, InScale.Z);

	return op;
}

UUELibnoiseModule* UUELibnoiseModule::GetScaleBiasOperator(
	UUELibnoiseModule* InInput,
	float InBias/* = 0.0f*/,
	float InScale/* = 1.0f*/)
{
	UUELibnoiseModule* op = NewObject<UUELibnoiseModule>();
	op->SetModule<noise::module::ScaleBias>();
	auto mod = op->GetModule<noise::module::ScaleBias>();

	mod->SetSourceModule(0, InInput->GetModule());
	mod->SetBias(InBias);
	mod->SetScale(InScale);

	return op;
}

UUELibnoiseModule* UUELibnoiseModule::GetSelectOperator(
	UUELibnoiseModule* InLeft,
	UUELibnoiseModule* InRight,
	UUELibnoiseModule* InController,
	float InEdgeFalloff/* = 1.0f*/,
	FVector2D InBounds/* = FVector2D(0.0f, 1.0f)*/)
{
	UUELibnoiseModule* op = NewObject<UUELibnoiseModule>();
	op->SetModule<noise::module::Select>();
	auto mod = op->GetModule<noise::module::Select>();

	mod->SetSourceModule(0, InLeft->GetModule());
	mod->SetSourceModule(1, InRight->GetModule());
	mod->SetControlModule(InController->GetModule());
	mod->SetEdgeFalloff(InEdgeFalloff);
	mod->SetBounds(InBounds.X, InBounds.Y);

	return op;
}

UUELibnoiseModule* UUELibnoiseModule::GetTerraceOperator(
	UUELibnoiseModule* InInput,
	UCurveFloat* InCurve,
	float InCurvePrecision/* = 10.0f*/,
	bool InInverted/* = false*/)
{
	UUELibnoiseModule* op = NewObject<UUELibnoiseModule>();
	op->SetModule<noise::module::Terrace>();
	auto mod = op->GetModule<noise::module::Terrace>();

	mod->SetSourceModule(0, InInput->GetModule());
	mod->InvertTerraces(InInverted);
	mod->ClearAllControlPoints();

	float start; float end;
	InCurve->GetTimeRange(start, end);
	for (float t = start; t < end; t += (1.0f / InCurvePrecision))
	{
		mod->AddControlPoint(InCurve->GetFloatValue(t));
	}

	return op;
}

UUELibnoiseModule* UUELibnoiseModule::GetTranslateOperator(
	UUELibnoiseModule* InInput,
	FVector InTranslation)
{
	UUELibnoiseModule* op = NewObject<UUELibnoiseModule>();
	op->SetModule<noise::module::TranslatePoint>();
	auto mod = op->GetModule<noise::module::TranslatePoint>();

	mod->SetSourceModule(0, InInput->GetModule());
	mod->SetTranslation(InTranslation.X, InTranslation.Y, InTranslation.Z);

	return op;
}

UUELibnoiseModule* UUELibnoiseModule::GetTurbulenceOperator(
	UUELibnoiseModule* InInput,
	int32 InSeed,
	float InFrequency,
	float InPower,
	float InRoughness)
{
	UUELibnoiseModule* op = NewObject<UUELibnoiseModule>();
	op->SetModule<noise::module::Turbulence>();
	auto mod = op->GetModule<noise::module::Turbulence>();

	mod->SetSourceModule(0, InInput->GetModule());
	mod->SetSeed(InSeed);
	mod->SetFrequency(InFrequency);
	mod->SetPower(InPower);
	mod->SetRoughness(InRoughness);

	return op;
}
