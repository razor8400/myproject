// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STRATEGY_StrategyPlayerController_generated_h
#error "StrategyPlayerController.generated.h already included, missing '#pragma once' in StrategyPlayerController.h"
#endif
#define STRATEGY_StrategyPlayerController_generated_h

#define Strategy_Source_Strategy_Game_StrategyPlayerController_h_33_RPC_WRAPPERS
#define Strategy_Source_Strategy_Game_StrategyPlayerController_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define Strategy_Source_Strategy_Game_StrategyPlayerController_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStrategyPlayerController(); \
	friend STRATEGY_API class UClass* Z_Construct_UClass_AStrategyPlayerController(); \
public: \
	DECLARE_CLASS(AStrategyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Strategy"), NO_API) \
	DECLARE_SERIALIZER(AStrategyPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Strategy_Source_Strategy_Game_StrategyPlayerController_h_33_INCLASS \
private: \
	static void StaticRegisterNativesAStrategyPlayerController(); \
	friend STRATEGY_API class UClass* Z_Construct_UClass_AStrategyPlayerController(); \
public: \
	DECLARE_CLASS(AStrategyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Strategy"), NO_API) \
	DECLARE_SERIALIZER(AStrategyPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Strategy_Source_Strategy_Game_StrategyPlayerController_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStrategyPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStrategyPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStrategyPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStrategyPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStrategyPlayerController(AStrategyPlayerController&&); \
	NO_API AStrategyPlayerController(const AStrategyPlayerController&); \
public:


#define Strategy_Source_Strategy_Game_StrategyPlayerController_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStrategyPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStrategyPlayerController(AStrategyPlayerController&&); \
	NO_API AStrategyPlayerController(const AStrategyPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStrategyPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStrategyPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStrategyPlayerController)


#define Strategy_Source_Strategy_Game_StrategyPlayerController_h_33_PRIVATE_PROPERTY_OFFSET
#define Strategy_Source_Strategy_Game_StrategyPlayerController_h_30_PROLOG
#define Strategy_Source_Strategy_Game_StrategyPlayerController_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Strategy_Source_Strategy_Game_StrategyPlayerController_h_33_PRIVATE_PROPERTY_OFFSET \
	Strategy_Source_Strategy_Game_StrategyPlayerController_h_33_RPC_WRAPPERS \
	Strategy_Source_Strategy_Game_StrategyPlayerController_h_33_INCLASS \
	Strategy_Source_Strategy_Game_StrategyPlayerController_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Strategy_Source_Strategy_Game_StrategyPlayerController_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Strategy_Source_Strategy_Game_StrategyPlayerController_h_33_PRIVATE_PROPERTY_OFFSET \
	Strategy_Source_Strategy_Game_StrategyPlayerController_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Strategy_Source_Strategy_Game_StrategyPlayerController_h_33_INCLASS_NO_PURE_DECLS \
	Strategy_Source_Strategy_Game_StrategyPlayerController_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Strategy_Source_Strategy_Game_StrategyPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
