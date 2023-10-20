//	MIT License
// 
// Copyright (C) 2023, Lukas Clausson
// lukas.clausson@hotmail.com
// https://www.lukasclausson.com/

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UELibnoiseModule.h"
#include "ProceduralMeshComponent.h"

#include "UELibnoiseHelpers.generated.h"

UCLASS()
class UUELibnoiseHelpers : public UBlueprintFunctionLibrary
{

	GENERATED_BODY()

public:

	/* Generates and returns a UTexture2D from the given generator module */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Helpers") static UTexture2D* RenderTextureFromModule(
		UPARAM(DisplayName = "Generator") UUELibnoiseModule* InGenerator,
		UPARAM(DisplayName = "Texture Width") int32 InWidth,
		UPARAM(DisplayName = "Texture Height") int32 InHeight);


	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UELibnoise|Helpers") static void GenerateMeshTerrainFromModule(
		UUELibnoiseModule* Module,
		FVector2D Position,
		FVector2D Bounds,
		FVector2D Resolution,
		float Scale,
		bool OffsetVerteciesToPosition/* = false*/,
		TArray<FVector>& Vertices,
		TArray<int32>& Triangles,
		TArray<FVector>& Normals,
		TArray<FVector2D>& UV0,
		TArray<FProcMeshTangent>& Tangents);
};

