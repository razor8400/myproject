// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Game/StrategyPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategyPawn() {}
// Cross Module References
	STRATEGY_API UClass* Z_Construct_UClass_AStrategyPawn_NoRegister();
	STRATEGY_API UClass* Z_Construct_UClass_AStrategyPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Strategy();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STRATEGY_API UClass* Z_Construct_UClass_AMapView_NoRegister();
// End Cross Module References
	void AStrategyPawn::StaticRegisterNativesAStrategyPawn()
	{
	}
	UClass* Z_Construct_UClass_AStrategyPawn_NoRegister()
	{
		return AStrategyPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AStrategyPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_Strategy,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Game/StrategyPawn.h" },
				{ "ModuleRelativePath", "Game/StrategyPawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCameraFow_MetaData[] = {
				{ "Category", "StrategyPawn" },
				{ "ModuleRelativePath", "Game/StrategyPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCameraFow = { UE4CodeGen_Private::EPropertyClass::Float, "MaxCameraFow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStrategyPawn, MaxCameraFow), METADATA_PARAMS(NewProp_MaxCameraFow_MetaData, ARRAY_COUNT(NewProp_MaxCameraFow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCameraFow_MetaData[] = {
				{ "Category", "StrategyPawn" },
				{ "ModuleRelativePath", "Game/StrategyPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinCameraFow = { UE4CodeGen_Private::EPropertyClass::Float, "MinCameraFow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStrategyPawn, MinCameraFow), METADATA_PARAMS(NewProp_MinCameraFow_MetaData, ARRAY_COUNT(NewProp_MinCameraFow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
				{ "Category", "StrategyPawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Game/StrategyPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AStrategyPawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_CameraComponent_MetaData, ARRAY_COUNT(NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapClass_MetaData[] = {
				{ "Category", "StrategyPawn" },
				{ "ModuleRelativePath", "Game/StrategyPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_MapClass = { UE4CodeGen_Private::EPropertyClass::Class, "MapClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AStrategyPawn, MapClass), Z_Construct_UClass_AMapView_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_MapClass_MetaData, ARRAY_COUNT(NewProp_MapClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxCameraFow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinCameraFow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MapClass,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AStrategyPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AStrategyPawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStrategyPawn, 4150135308);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStrategyPawn(Z_Construct_UClass_AStrategyPawn, &AStrategyPawn::StaticClass, TEXT("/Script/Strategy"), TEXT("AStrategyPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStrategyPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
