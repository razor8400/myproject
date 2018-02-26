// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Components/Attackable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackable() {}
// Cross Module References
	STRATEGY_API UClass* Z_Construct_UClass_UAttackable_NoRegister();
	STRATEGY_API UClass* Z_Construct_UClass_UAttackable();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Strategy();
// End Cross Module References
	void UAttackable::StaticRegisterNativesUAttackable()
	{
	}
	UClass* Z_Construct_UClass_UAttackable_NoRegister()
	{
		return UAttackable::StaticClass();
	}
	UClass* Z_Construct_UClass_UAttackable()
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
				{ "IncludePath", "Components/Attackable.h" },
				{ "ModuleRelativePath", "Components/Attackable.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalHintPoints_MetaData[] = {
				{ "Category", "Attackable" },
				{ "ModuleRelativePath", "Components/Attackable.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TotalHintPoints = { UE4CodeGen_Private::EPropertyClass::Int, "TotalHintPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackable, TotalHintPoints), METADATA_PARAMS(NewProp_TotalHintPoints_MetaData, ARRAY_COUNT(NewProp_TotalHintPoints_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitPoints_MetaData[] = {
				{ "Category", "Attackable" },
				{ "ModuleRelativePath", "Components/Attackable.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_HitPoints = { UE4CodeGen_Private::EPropertyClass::Int, "HitPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackable, HitPoints), METADATA_PARAMS(NewProp_HitPoints_MetaData, ARRAY_COUNT(NewProp_HitPoints_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TotalHintPoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitPoints,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAttackable>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAttackable::StaticClass,
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
	IMPLEMENT_CLASS(UAttackable, 764327791);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAttackable(Z_Construct_UClass_UAttackable, &UAttackable::StaticClass, TEXT("/Script/Strategy"), TEXT("UAttackable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
