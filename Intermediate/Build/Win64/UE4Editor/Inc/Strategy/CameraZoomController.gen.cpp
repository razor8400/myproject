// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Controller/CameraZoomController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraZoomController() {}
// Cross Module References
	STRATEGY_API UClass* Z_Construct_UClass_UCameraZoomController_NoRegister();
	STRATEGY_API UClass* Z_Construct_UClass_UCameraZoomController();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Strategy();
// End Cross Module References
	void UCameraZoomController::StaticRegisterNativesUCameraZoomController()
	{
	}
	UClass* Z_Construct_UClass_UCameraZoomController_NoRegister()
	{
		return UCameraZoomController::StaticClass();
	}
	UClass* Z_Construct_UClass_UCameraZoomController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Strategy,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "Controller/CameraZoomController.h" },
				{ "ModuleRelativePath", "Controller/CameraZoomController.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCameraDistance_MetaData[] = {
				{ "Category", "CameraZoomController" },
				{ "ModuleRelativePath", "Controller/CameraZoomController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCameraDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MaxCameraDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCameraZoomController, MaxCameraDistance), METADATA_PARAMS(NewProp_MaxCameraDistance_MetaData, ARRAY_COUNT(NewProp_MaxCameraDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCameraDistance_MetaData[] = {
				{ "Category", "CameraZoomController" },
				{ "ModuleRelativePath", "Controller/CameraZoomController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinCameraDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MinCameraDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCameraZoomController, MinCameraDistance), METADATA_PARAMS(NewProp_MinCameraDistance_MetaData, ARRAY_COUNT(NewProp_MinCameraDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCameraFow_MetaData[] = {
				{ "Category", "CameraZoomController" },
				{ "ModuleRelativePath", "Controller/CameraZoomController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCameraFow = { UE4CodeGen_Private::EPropertyClass::Float, "MaxCameraFow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCameraZoomController, MaxCameraFow), METADATA_PARAMS(NewProp_MaxCameraFow_MetaData, ARRAY_COUNT(NewProp_MaxCameraFow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCameraFow_MetaData[] = {
				{ "Category", "CameraZoomController" },
				{ "ModuleRelativePath", "Controller/CameraZoomController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinCameraFow = { UE4CodeGen_Private::EPropertyClass::Float, "MinCameraFow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCameraZoomController, MinCameraFow), METADATA_PARAMS(NewProp_MinCameraFow_MetaData, ARRAY_COUNT(NewProp_MinCameraFow_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxCameraDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinCameraDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxCameraFow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinCameraFow,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCameraZoomController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCameraZoomController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UCameraZoomController, 686235123);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraZoomController(Z_Construct_UClass_UCameraZoomController, &UCameraZoomController::StaticClass, TEXT("/Script/Strategy"), TEXT("UCameraZoomController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraZoomController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
