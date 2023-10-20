// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UELibnoise/Public/UELibnoiseHelpers.h"
#include "ProceduralMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUELibnoiseHelpers() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	PROCEDURALMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FProcMeshTangent();
	UELIBNOISE_API UClass* Z_Construct_UClass_UUELibnoiseHelpers();
	UELIBNOISE_API UClass* Z_Construct_UClass_UUELibnoiseHelpers_NoRegister();
	UELIBNOISE_API UClass* Z_Construct_UClass_UUELibnoiseModule_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UELibnoise();
// End Cross Module References
	DEFINE_FUNCTION(UUELibnoiseHelpers::execGenerateMeshTerrainFromModule)
	{
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_Module);
		P_GET_STRUCT(FVector2D,Z_Param_Position);
		P_GET_STRUCT(FVector2D,Z_Param_Bounds);
		P_GET_STRUCT(FVector2D,Z_Param_Resolution);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_UBOOL(Z_Param_OffsetVerteciesToPosition);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0);
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUELibnoiseHelpers::GenerateMeshTerrainFromModule(Z_Param_Module,Z_Param_Position,Z_Param_Bounds,Z_Param_Resolution,Z_Param_Scale,Z_Param_OffsetVerteciesToPosition,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UV0,Z_Param_Out_Tangents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUELibnoiseHelpers::execRenderTextureFromModule)
	{
		P_GET_OBJECT(UUELibnoiseModule,Z_Param_InGenerator);
		P_GET_PROPERTY(FIntProperty,Z_Param_InWidth);
		P_GET_PROPERTY(FIntProperty,Z_Param_InHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UUELibnoiseHelpers::RenderTextureFromModule(Z_Param_InGenerator,Z_Param_InWidth,Z_Param_InHeight);
		P_NATIVE_END;
	}
	void UUELibnoiseHelpers::StaticRegisterNativesUUELibnoiseHelpers()
	{
		UClass* Class = UUELibnoiseHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateMeshTerrainFromModule", &UUELibnoiseHelpers::execGenerateMeshTerrainFromModule },
			{ "RenderTextureFromModule", &UUELibnoiseHelpers::execRenderTextureFromModule },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics
	{
		struct UELibnoiseHelpers_eventGenerateMeshTerrainFromModule_Parms
		{
			UUELibnoiseModule* Module;
			FVector2D Position;
			FVector2D Bounds;
			FVector2D Resolution;
			float Scale;
			bool OffsetVerteciesToPosition;
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector> Normals;
			TArray<FVector2D> UV0;
			TArray<FProcMeshTangent> Tangents;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Module;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static void NewProp_OffsetVerteciesToPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OffsetVerteciesToPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV0;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Module = { "Module", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseHelpers_eventGenerateMeshTerrainFromModule_Parms, Module), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseHelpers_eventGenerateMeshTerrainFromModule_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseHelpers_eventGenerateMeshTerrainFromModule_Parms, Bounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseHelpers_eventGenerateMeshTerrainFromModule_Parms, Resolution), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseHelpers_eventGenerateMeshTerrainFromModule_Parms, Scale), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_OffsetVerteciesToPosition_SetBit(void* Obj)
	{
		((UELibnoiseHelpers_eventGenerateMeshTerrainFromModule_Parms*)Obj)->OffsetVerteciesToPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_OffsetVerteciesToPosition = { "OffsetVerteciesToPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UELibnoiseHelpers_eventGenerateMeshTerrainFromModule_Parms), &Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_OffsetVerteciesToPosition_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseHelpers_eventGenerateMeshTerrainFromModule_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseHelpers_eventGenerateMeshTerrainFromModule_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseHelpers_eventGenerateMeshTerrainFromModule_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseHelpers_eventGenerateMeshTerrainFromModule_Parms, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(0, nullptr) }; // 2099358922
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseHelpers_eventGenerateMeshTerrainFromModule_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2099358922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Module,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_OffsetVerteciesToPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_UV0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_UV0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Tangents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::NewProp_Tangents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* = false*/" },
#endif
		{ "ModuleRelativePath", "Public/UELibnoiseHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "= false" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseHelpers, nullptr, "GenerateMeshTerrainFromModule", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::UELibnoiseHelpers_eventGenerateMeshTerrainFromModule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::UELibnoiseHelpers_eventGenerateMeshTerrainFromModule_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics
	{
		struct UELibnoiseHelpers_eventRenderTextureFromModule_Parms
		{
			UUELibnoiseModule* InGenerator;
			int32 InWidth;
			int32 InHeight;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGenerator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGenerator;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::NewProp_InGenerator_MetaData[] = {
		{ "DisplayName", "Generator" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::NewProp_InGenerator = { "InGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseHelpers_eventRenderTextureFromModule_Parms, InGenerator), Z_Construct_UClass_UUELibnoiseModule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::NewProp_InGenerator_MetaData), Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::NewProp_InGenerator_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::NewProp_InWidth_MetaData[] = {
		{ "DisplayName", "Texture Width" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::NewProp_InWidth = { "InWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseHelpers_eventRenderTextureFromModule_Parms, InWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::NewProp_InWidth_MetaData), Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::NewProp_InWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::NewProp_InHeight_MetaData[] = {
		{ "DisplayName", "Texture Height" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::NewProp_InHeight = { "InHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseHelpers_eventRenderTextureFromModule_Parms, InHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::NewProp_InHeight_MetaData), Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::NewProp_InHeight_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UELibnoiseHelpers_eventRenderTextureFromModule_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::NewProp_InGenerator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::NewProp_InWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::NewProp_InHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "UELibnoise|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Generates and returns a UTexture2D from the given generator module */" },
#endif
		{ "ModuleRelativePath", "Public/UELibnoiseHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generates and returns a UTexture2D from the given generator module" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUELibnoiseHelpers, nullptr, "RenderTextureFromModule", nullptr, nullptr, Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::UELibnoiseHelpers_eventRenderTextureFromModule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::UELibnoiseHelpers_eventRenderTextureFromModule_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUELibnoiseHelpers);
	UClass* Z_Construct_UClass_UUELibnoiseHelpers_NoRegister()
	{
		return UUELibnoiseHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UUELibnoiseHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUELibnoiseHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UELibnoise,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUELibnoiseHelpers_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUELibnoiseHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUELibnoiseHelpers_GenerateMeshTerrainFromModule, "GenerateMeshTerrainFromModule" }, // 3588476208
		{ &Z_Construct_UFunction_UUELibnoiseHelpers_RenderTextureFromModule, "RenderTextureFromModule" }, // 1834363060
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUELibnoiseHelpers_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUELibnoiseHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UELibnoiseHelpers.h" },
		{ "ModuleRelativePath", "Public/UELibnoiseHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUELibnoiseHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUELibnoiseHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUELibnoiseHelpers_Statics::ClassParams = {
		&UUELibnoiseHelpers::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUELibnoiseHelpers_Statics::Class_MetaDataParams), Z_Construct_UClass_UUELibnoiseHelpers_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UUELibnoiseHelpers()
	{
		if (!Z_Registration_Info_UClass_UUELibnoiseHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUELibnoiseHelpers.OuterSingleton, Z_Construct_UClass_UUELibnoiseHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUELibnoiseHelpers.OuterSingleton;
	}
	template<> UELIBNOISE_API UClass* StaticClass<UUELibnoiseHelpers>()
	{
		return UUELibnoiseHelpers::StaticClass();
	}
	UUELibnoiseHelpers::UUELibnoiseHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUELibnoiseHelpers);
	UUELibnoiseHelpers::~UUELibnoiseHelpers() {}
	struct Z_CompiledInDeferFile_FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseHelpers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUELibnoiseHelpers, UUELibnoiseHelpers::StaticClass, TEXT("UUELibnoiseHelpers"), &Z_Registration_Info_UClass_UUELibnoiseHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUELibnoiseHelpers), 867513332U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseHelpers_h_2158363317(TEXT("/Script/UELibnoise"),
		Z_CompiledInDeferFile_FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EmeraldSands_Plugins_UELibnoise_Source_UELibnoise_Public_UELibnoiseHelpers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
