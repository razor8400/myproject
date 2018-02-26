// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STRATEGY_MainHud_generated_h
#error "MainHud.generated.h already included, missing '#pragma once' in MainHud.h"
#endif
#define STRATEGY_MainHud_generated_h

#define Strategy_Source_Strategy_HUD_MainHud_h_20_RPC_WRAPPERS
#define Strategy_Source_Strategy_HUD_MainHud_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Strategy_Source_Strategy_HUD_MainHud_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainHud(); \
	friend STRATEGY_API class UClass* Z_Construct_UClass_AMainHud(); \
public: \
	DECLARE_CLASS(AMainHud, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/Strategy"), NO_API) \
	DECLARE_SERIALIZER(AMainHud) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Strategy_Source_Strategy_HUD_MainHud_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAMainHud(); \
	friend STRATEGY_API class UClass* Z_Construct_UClass_AMainHud(); \
public: \
	DECLARE_CLASS(AMainHud, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/Strategy"), NO_API) \
	DECLARE_SERIALIZER(AMainHud) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Strategy_Source_Strategy_HUD_MainHud_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainHud(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainHud) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainHud); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainHud); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainHud(AMainHud&&); \
	NO_API AMainHud(const AMainHud&); \
public:


#define Strategy_Source_Strategy_HUD_MainHud_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainHud(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainHud(AMainHud&&); \
	NO_API AMainHud(const AMainHud&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainHud); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainHud); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainHud)


#define Strategy_Source_Strategy_HUD_MainHud_h_20_PRIVATE_PROPERTY_OFFSET
#define Strategy_Source_Strategy_HUD_MainHud_h_17_PROLOG
#define Strategy_Source_Strategy_HUD_MainHud_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Strategy_Source_Strategy_HUD_MainHud_h_20_PRIVATE_PROPERTY_OFFSET \
	Strategy_Source_Strategy_HUD_MainHud_h_20_RPC_WRAPPERS \
	Strategy_Source_Strategy_HUD_MainHud_h_20_INCLASS \
	Strategy_Source_Strategy_HUD_MainHud_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Strategy_Source_Strategy_HUD_MainHud_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Strategy_Source_Strategy_HUD_MainHud_h_20_PRIVATE_PROPERTY_OFFSET \
	Strategy_Source_Strategy_HUD_MainHud_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Strategy_Source_Strategy_HUD_MainHud_h_20_INCLASS_NO_PURE_DECLS \
	Strategy_Source_Strategy_HUD_MainHud_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Strategy_Source_Strategy_HUD_MainHud_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
