// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "HUD/MainHud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainHud() {}
// Cross Module References
	STRATEGY_API UClass* Z_Construct_UClass_AMainHud_NoRegister();
	STRATEGY_API UClass* Z_Construct_UClass_AMainHud();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Strategy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STRATEGY_API UClass* Z_Construct_UClass_UShop_NoRegister();
// End Cross Module References
	void AMainHud::StaticRegisterNativesAMainHud()
	{
	}
	UClass* Z_Construct_UClass_AMainHud_NoRegister()
	{
		return AMainHud::StaticClass();
	}
	UClass* Z_Construct_UClass_AMainHud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_Strategy,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "HUD/MainHud.h" },
				{ "ModuleRelativePath", "HUD/MainHud.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShopClass_MetaData[] = {
				{ "Category", "MainHud" },
				{ "ModuleRelativePath", "HUD/MainHud.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ShopClass = { UE4CodeGen_Private::EPropertyClass::Class, "ShopClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AMainHud, ShopClass), Z_Construct_UClass_UShop_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ShopClass_MetaData, ARRAY_COUNT(NewProp_ShopClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShopClass,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMainHud>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMainHud::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0090028Cu,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainHud, 380399296);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainHud(Z_Construct_UClass_AMainHud, &AMainHud::StaticClass, TEXT("/Script/Strategy"), TEXT("AMainHud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainHud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
