// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Components/DamageDealer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageDealer() {}
// Cross Module References
	STRATEGY_API UClass* Z_Construct_UClass_UDamageDealer_NoRegister();
	STRATEGY_API UClass* Z_Construct_UClass_UDamageDealer();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Strategy();
// End Cross Module References
	void UDamageDealer::StaticRegisterNativesUDamageDealer()
	{
	}
	UClass* Z_Construct_UClass_UDamageDealer_NoRegister()
	{
		return UDamageDealer::StaticClass();
	}
	UClass* Z_Construct_UClass_UDamageDealer()
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
				{ "IncludePath", "Components/DamageDealer.h" },
				{ "ModuleRelativePath", "Components/DamageDealer.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyDamageDelay_MetaData[] = {
				{ "Category", "DamageDealer" },
				{ "ModuleRelativePath", "Components/DamageDealer.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ApplyDamageDelay = { UE4CodeGen_Private::EPropertyClass::Int, "ApplyDamageDelay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UDamageDealer, ApplyDamageDelay), METADATA_PARAMS(NewProp_ApplyDamageDelay_MetaData, ARRAY_COUNT(NewProp_ApplyDamageDelay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[] = {
				{ "Category", "DamageDealer" },
				{ "ModuleRelativePath", "Components/DamageDealer.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AttackSpeed = { UE4CodeGen_Private::EPropertyClass::Int, "AttackSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UDamageDealer, AttackSpeed), METADATA_PARAMS(NewProp_AttackSpeed_MetaData, ARRAY_COUNT(NewProp_AttackSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
				{ "Category", "DamageDealer" },
				{ "ModuleRelativePath", "Components/DamageDealer.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Damage = { UE4CodeGen_Private::EPropertyClass::Int, "Damage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UDamageDealer, Damage), METADATA_PARAMS(NewProp_Damage_MetaData, ARRAY_COUNT(NewProp_Damage_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApplyDamageDelay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttackSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Damage,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDamageDealer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDamageDealer::StaticClass,
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
	IMPLEMENT_CLASS(UDamageDealer, 712536221);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDamageDealer(Z_Construct_UClass_UDamageDealer, &UDamageDealer::StaticClass, TEXT("/Script/Strategy"), TEXT("UDamageDealer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageDealer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
