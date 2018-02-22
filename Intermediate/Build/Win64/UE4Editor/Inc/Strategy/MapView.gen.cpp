// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "View/MapView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapView() {}
// Cross Module References
	STRATEGY_API UClass* Z_Construct_UClass_AMapView_NoRegister();
	STRATEGY_API UClass* Z_Construct_UClass_AMapView();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Strategy();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void AMapView::StaticRegisterNativesAMapView()
	{
	}
	UClass* Z_Construct_UClass_AMapView_NoRegister()
	{
		return AMapView::StaticClass();
	}
	UClass* Z_Construct_UClass_AMapView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Strategy,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "View/MapView.h" },
				{ "ModuleRelativePath", "View/MapView.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollSpeed_MetaData[] = {
				{ "Category", "MapView" },
				{ "ModuleRelativePath", "View/MapView.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScrollSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "ScrollSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMapView, ScrollSpeed), METADATA_PARAMS(NewProp_ScrollSpeed_MetaData, ARRAY_COUNT(NewProp_ScrollSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapSize_MetaData[] = {
				{ "Category", "MapView" },
				{ "ModuleRelativePath", "View/MapView.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapSize = { UE4CodeGen_Private::EPropertyClass::Struct, "MapSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMapView, MapSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_MapSize_MetaData, ARRAY_COUNT(NewProp_MapSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[] = {
				{ "Category", "MapView" },
				{ "ModuleRelativePath", "View/MapView.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TileSize = { UE4CodeGen_Private::EPropertyClass::Struct, "TileSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMapView, TileSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_TileSize_MetaData, ARRAY_COUNT(NewProp_TileSize_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScrollSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MapSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TileSize,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMapView>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMapView::StaticClass,
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
	IMPLEMENT_CLASS(AMapView, 3858096677);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMapView(Z_Construct_UClass_AMapView, &AMapView::StaticClass, TEXT("/Script/Strategy"), TEXT("AMapView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMapView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
