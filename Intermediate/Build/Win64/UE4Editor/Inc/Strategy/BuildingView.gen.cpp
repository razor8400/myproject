// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "View/BuildingView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingView() {}
// Cross Module References
	STRATEGY_API UClass* Z_Construct_UClass_ABuildingView_NoRegister();
	STRATEGY_API UClass* Z_Construct_UClass_ABuildingView();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Strategy();
	STRATEGY_API UEnum* Z_Construct_UEnum_Strategy_BuildingType();
	STRATEGY_API UClass* Z_Construct_UClass_AMapView_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void ABuildingView::StaticRegisterNativesABuildingView()
	{
	}
	UClass* Z_Construct_UClass_ABuildingView_NoRegister()
	{
		return ABuildingView::StaticClass();
	}
	UClass* Z_Construct_UClass_ABuildingView()
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
				{ "IncludePath", "View/BuildingView.h" },
				{ "ModuleRelativePath", "View/BuildingView.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingType_MetaData[] = {
				{ "Category", "BuildingView" },
				{ "ModuleRelativePath", "View/BuildingView.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BuildingType = { UE4CodeGen_Private::EPropertyClass::Enum, "BuildingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABuildingView, BuildingType), Z_Construct_UEnum_Strategy_BuildingType, METADATA_PARAMS(NewProp_BuildingType_MetaData, ARRAY_COUNT(NewProp_BuildingType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BuildingType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[] = {
				{ "Category", "BuildingView" },
				{ "ModuleRelativePath", "View/BuildingView.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Map = { UE4CodeGen_Private::EPropertyClass::Object, "Map", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABuildingView, Map), Z_Construct_UClass_AMapView_NoRegister, METADATA_PARAMS(NewProp_Map_MetaData, ARRAY_COUNT(NewProp_Map_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
				{ "Category", "BuildingView" },
				{ "ModuleRelativePath", "View/BuildingView.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size = { UE4CodeGen_Private::EPropertyClass::Struct, "Size", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABuildingView, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_Size_MetaData, ARRAY_COUNT(NewProp_Size_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
				{ "Category", "BuildingView" },
				{ "ModuleRelativePath", "View/BuildingView.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Y = { UE4CodeGen_Private::EPropertyClass::Int, "Y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABuildingView, Y), METADATA_PARAMS(NewProp_Y_MetaData, ARRAY_COUNT(NewProp_Y_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
				{ "Category", "BuildingView" },
				{ "ModuleRelativePath", "View/BuildingView.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Int, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABuildingView, X), METADATA_PARAMS(NewProp_X_MetaData, ARRAY_COUNT(NewProp_X_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BuildingType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BuildingType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Map,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Size,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABuildingView>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABuildingView::StaticClass,
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
	IMPLEMENT_CLASS(ABuildingView, 2832621785);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuildingView(Z_Construct_UClass_ABuildingView, &ABuildingView::StaticClass, TEXT("/Script/Strategy"), TEXT("ABuildingView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
