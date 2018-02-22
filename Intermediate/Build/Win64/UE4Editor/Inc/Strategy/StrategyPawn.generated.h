// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STRATEGY_StrategyPawn_generated_h
#error "StrategyPawn.generated.h already included, missing '#pragma once' in StrategyPawn.h"
#endif
#define STRATEGY_StrategyPawn_generated_h

#define myproject_Source_Strategy_Game_StrategyPawn_h_16_RPC_WRAPPERS
#define myproject_Source_Strategy_Game_StrategyPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define myproject_Source_Strategy_Game_StrategyPawn_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStrategyPawn(); \
	friend STRATEGY_API class UClass* Z_Construct_UClass_AStrategyPawn(); \
public: \
	DECLARE_CLASS(AStrategyPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Strategy"), NO_API) \
	DECLARE_SERIALIZER(AStrategyPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define myproject_Source_Strategy_Game_StrategyPawn_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAStrategyPawn(); \
	friend STRATEGY_API class UClass* Z_Construct_UClass_AStrategyPawn(); \
public: \
	DECLARE_CLASS(AStrategyPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Strategy"), NO_API) \
	DECLARE_SERIALIZER(AStrategyPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define myproject_Source_Strategy_Game_StrategyPawn_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStrategyPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStrategyPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStrategyPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStrategyPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStrategyPawn(AStrategyPawn&&); \
	NO_API AStrategyPawn(const AStrategyPawn&); \
public:


#define myproject_Source_Strategy_Game_StrategyPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStrategyPawn(AStrategyPawn&&); \
	NO_API AStrategyPawn(const AStrategyPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStrategyPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStrategyPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStrategyPawn)


#define myproject_Source_Strategy_Game_StrategyPawn_h_16_PRIVATE_PROPERTY_OFFSET
#define myproject_Source_Strategy_Game_StrategyPawn_h_13_PROLOG
#define myproject_Source_Strategy_Game_StrategyPawn_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	myproject_Source_Strategy_Game_StrategyPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	myproject_Source_Strategy_Game_StrategyPawn_h_16_RPC_WRAPPERS \
	myproject_Source_Strategy_Game_StrategyPawn_h_16_INCLASS \
	myproject_Source_Strategy_Game_StrategyPawn_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define myproject_Source_Strategy_Game_StrategyPawn_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	myproject_Source_Strategy_Game_StrategyPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	myproject_Source_Strategy_Game_StrategyPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	myproject_Source_Strategy_Game_StrategyPawn_h_16_INCLASS_NO_PURE_DECLS \
	myproject_Source_Strategy_Game_StrategyPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID myproject_Source_Strategy_Game_StrategyPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
