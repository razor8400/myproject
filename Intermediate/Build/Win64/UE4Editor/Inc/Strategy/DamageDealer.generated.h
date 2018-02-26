// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STRATEGY_DamageDealer_generated_h
#error "DamageDealer.generated.h already included, missing '#pragma once' in DamageDealer.h"
#endif
#define STRATEGY_DamageDealer_generated_h

#define Strategy_Source_Strategy_Components_DamageDealer_h_12_RPC_WRAPPERS
#define Strategy_Source_Strategy_Components_DamageDealer_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Strategy_Source_Strategy_Components_DamageDealer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDamageDealer(); \
	friend STRATEGY_API class UClass* Z_Construct_UClass_UDamageDealer(); \
public: \
	DECLARE_CLASS(UDamageDealer, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Strategy"), NO_API) \
	DECLARE_SERIALIZER(UDamageDealer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Strategy_Source_Strategy_Components_DamageDealer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUDamageDealer(); \
	friend STRATEGY_API class UClass* Z_Construct_UClass_UDamageDealer(); \
public: \
	DECLARE_CLASS(UDamageDealer, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Strategy"), NO_API) \
	DECLARE_SERIALIZER(UDamageDealer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Strategy_Source_Strategy_Components_DamageDealer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDamageDealer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageDealer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDamageDealer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageDealer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDamageDealer(UDamageDealer&&); \
	NO_API UDamageDealer(const UDamageDealer&); \
public:


#define Strategy_Source_Strategy_Components_DamageDealer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDamageDealer(UDamageDealer&&); \
	NO_API UDamageDealer(const UDamageDealer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDamageDealer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageDealer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDamageDealer)


#define Strategy_Source_Strategy_Components_DamageDealer_h_12_PRIVATE_PROPERTY_OFFSET
#define Strategy_Source_Strategy_Components_DamageDealer_h_9_PROLOG
#define Strategy_Source_Strategy_Components_DamageDealer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Strategy_Source_Strategy_Components_DamageDealer_h_12_PRIVATE_PROPERTY_OFFSET \
	Strategy_Source_Strategy_Components_DamageDealer_h_12_RPC_WRAPPERS \
	Strategy_Source_Strategy_Components_DamageDealer_h_12_INCLASS \
	Strategy_Source_Strategy_Components_DamageDealer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Strategy_Source_Strategy_Components_DamageDealer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Strategy_Source_Strategy_Components_DamageDealer_h_12_PRIVATE_PROPERTY_OFFSET \
	Strategy_Source_Strategy_Components_DamageDealer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Strategy_Source_Strategy_Components_DamageDealer_h_12_INCLASS_NO_PURE_DECLS \
	Strategy_Source_Strategy_Components_DamageDealer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Strategy_Source_Strategy_Components_DamageDealer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
