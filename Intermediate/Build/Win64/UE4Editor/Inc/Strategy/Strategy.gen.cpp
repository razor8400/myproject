// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Strategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategy() {}
// Cross Module References
	STRATEGY_API UEnum* Z_Construct_UEnum_Strategy_BuildingType();
	UPackage* Z_Construct_UPackage__Script_Strategy();
// End Cross Module References
	static UEnum* BuildingType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Strategy_BuildingType, Z_Construct_UPackage__Script_Strategy(), TEXT("BuildingType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_BuildingType(BuildingType_StaticEnum, TEXT("/Script/Strategy"), TEXT("BuildingType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Strategy_BuildingType_CRC() { return 849049788U; }
	UEnum* Z_Construct_UEnum_Strategy_BuildingType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Strategy();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("BuildingType"), 0, Get_Z_Construct_UEnum_Strategy_BuildingType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BuildingType::Unknown", (int64)BuildingType::Unknown },
				{ "BuildingType::TownHall", (int64)BuildingType::TownHall },
				{ "BuildingType::Tower", (int64)BuildingType::Tower },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Strategy.h" },
				{ "Tower.DisplayName", "Tower" },
				{ "TownHall.DisplayName", "TownHall" },
				{ "Unknown.DisplayName", "Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Strategy,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"BuildingType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"BuildingType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
