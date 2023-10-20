//	MIT License
// 
// Copyright (C) 2023, Lukas Clausson
// lukas.clausson@hotmail.com
// https://www.lukasclausson.com/

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FUELibnoiseModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};