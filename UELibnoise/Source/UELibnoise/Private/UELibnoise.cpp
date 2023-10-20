//	MIT License
// 
// Copyright (C) 2023, Lukas Clausson
// lukas.clausson@hotmail.com
// https://www.lukasclausson.com/

#include "UELibnoise.h"
#include "libnoise/noise.h"
#include "libnoise/noiseutils.h"

#include "Engine/Texture.h"

#define LOCTEXT_NAMESPACE "FUELibnoiseModule"

using namespace noise;

void FUELibnoiseModule::StartupModule()
{

}

void FUELibnoiseModule::ShutdownModule()
{

}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FUELibnoiseModule, UELibnoise)