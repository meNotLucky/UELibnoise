//	MIT License
// 
// Copyright (C) 2023, Lukas Clausson
// lukas.clausson@hotmail.com
// https://www.lukasclausson.com/

#include "UELibnoiseHelpers.h"

#include "UELibnoise.h"
#include "libnoise/noise.h"
#include "libnoise/noiseutils.h"

#include "KismetProceduralMeshLibrary.h"


UTexture2D* UUELibnoiseHelpers::RenderTextureFromModule(UUELibnoiseModule* InGenerator, int32 InWidth, int32 InHeight)
{
	if (!InGenerator)
		return nullptr;

	utils::NoiseMap heightMap;
	utils::NoiseMapBuilderPlane heightMapBuilder;
	heightMapBuilder.SetBounds(-1.0f, 1.0f, -1.0f, 1.0f);
	heightMapBuilder.SetDestSize(InWidth, InHeight);
	heightMapBuilder.EnableSeamless(false);
	heightMapBuilder.SetSourceModule(InGenerator->GetModule());
	heightMapBuilder.SetDestNoiseMap(heightMap);
	heightMapBuilder.Build();

	utils::RendererImage textureRenderer;
	utils::Image image;
	textureRenderer.SetSourceNoiseMap(heightMap);
	textureRenderer.SetDestImage(image);
	textureRenderer.ClearGradient();
	textureRenderer.AddGradientPoint(-1.00, utils::Color(0, 0, 0, 255));
	textureRenderer.AddGradientPoint(1.00, utils::Color(255, 255, 255, 255));

	textureRenderer.Render();

	int width = image.GetWidth();
	int height = image.GetHeight();

	UTexture2D* CustomTexture = UTexture2D::CreateTransient(width, height);
	uint8* RawImageData = static_cast<uint8*>(CustomTexture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE));

	int i = 0;
	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{
			utils::Color* slab = image.GetSlabPtr(x, y);
			RawImageData[i] = slab->blue;
			RawImageData[i + 1] = slab->green;
			RawImageData[i + 2] = slab->red;
			RawImageData[i + 3] = slab->alpha;

			i += 4;
		}
	}

	CustomTexture->GetPlatformData()->Mips[0].BulkData.Unlock();
	CustomTexture->UpdateResource();

	return CustomTexture;
}

void UUELibnoiseHelpers::GenerateMeshTerrainFromModule(
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
	TArray<FProcMeshTangent>& Tangents)
{
	int32 w = Resolution.X;
	int32 h = Resolution.Y;

	utils::NoiseMap heightMap;
	utils::NoiseMapBuilderPlane heightMapBuilder;
	heightMapBuilder.SetSourceModule(Module->GetModule());
	heightMapBuilder.SetDestNoiseMap(heightMap);
	heightMapBuilder.SetDestSize(w, h);
	heightMapBuilder.SetBounds(Position.Y, Position.Y + Bounds.Y, Position.X, Position.X + Bounds.X);
	heightMapBuilder.Build();

	TArray<FVector> verts;
	TArray<int32> tris;
	TArray<FVector> norms;
	TArray<FVector2D> UVs;
	TArray<FProcMeshTangent> tans;

	// Create vertices and UVs

	float offsetX = OffsetVerteciesToPosition ? (Position.X / Bounds.X) * (w - 1 / w) * Scale : 0.0f;
	float offsetY = OffsetVerteciesToPosition ? (Position.Y / Bounds.Y) * (h - 1 / h) * Scale : 0.0f;
	
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < h; j++)
		{
			verts.Add(FVector(
				(float)j * Scale + offsetX,
				(float)i * Scale + offsetY,
				heightMap.GetValue(i, j) * Scale
			));

			UVs.Add(FVector2D((float)j / ((float)w - 1), (float)i / ((float)h - 1)));
		}
	}

	// Create triangles

	for (int i = 0; i < h - 1; i++)
	{
		for (int j = 0; j < w - 1; j++)
		{
			int idx = j + (i * w);
			tris.Add(idx);
			tris.Add(idx + w);
			tris.Add(idx + 1);

			tris.Add(idx + 1);
			tris.Add(idx + w);
			tris.Add(idx + w + 1);
		}
	}

	// Create normals and tangents

	// Really heavy function this... Might look to replace later but math is complicated.
	UKismetProceduralMeshLibrary::CalculateTangentsForMesh(verts, tris, UVs, norms, tans);

	Vertices = verts;
	Triangles = tris;
	UV0 = UVs;
	Normals = norms;
	Tangents = tans;

	return;
}
