// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STRATEGY_Shop_generated_h
#error "Shop.generated.h already included, missing '#pragma once' in Shop.h"
#endif
#define STRATEGY_Shop_generated_h

#define Strategy_Source_Strategy_HUD_Shop_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSelectShopItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnSelectShopItem(); \
		P_NATIVE_END; \
	}


#define Strategy_Source_Strategy_HUD_Shop_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSelectShopItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnSelectShopItem(); \
		P_NATIVE_END; \
	}


#define Strategy_Source_Strategy_HUD_Shop_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShop(); \
	friend STRATEGY_API class UClass* Z_Construct_UClass_UShop(); \
public: \
	DECLARE_CLASS(UShop, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Strategy"), NO_API) \
	DECLARE_SERIALIZER(UShop) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Strategy_Source_Strategy_HUD_Shop_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUShop(); \
	friend STRATEGY_API class UClass* Z_Construct_UClass_UShop(); \
public: \
	DECLARE_CLASS(UShop, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Strategy"), NO_API) \
	DECLARE_SERIALIZER(UShop) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Strategy_Source_Strategy_HUD_Shop_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShop(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShop) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShop); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShop); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShop(UShop&&); \
	NO_API UShop(const UShop&); \
public:


#define Strategy_Source_Strategy_HUD_Shop_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShop(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShop(UShop&&); \
	NO_API UShop(const UShop&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShop); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShop); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShop)


#define Strategy_Source_Strategy_HUD_Shop_h_10_PRIVATE_PROPERTY_OFFSET
#define Strategy_Source_Strategy_HUD_Shop_h_7_PROLOG
#define Strategy_Source_Strategy_HUD_Shop_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Strategy_Source_Strategy_HUD_Shop_h_10_PRIVATE_PROPERTY_OFFSET \
	Strategy_Source_Strategy_HUD_Shop_h_10_RPC_WRAPPERS \
	Strategy_Source_Strategy_HUD_Shop_h_10_INCLASS \
	Strategy_Source_Strategy_HUD_Shop_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Strategy_Source_Strategy_HUD_Shop_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Strategy_Source_Strategy_HUD_Shop_h_10_PRIVATE_PROPERTY_OFFSET \
	Strategy_Source_Strategy_HUD_Shop_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Strategy_Source_Strategy_HUD_Shop_h_10_INCLASS_NO_PURE_DECLS \
	Strategy_Source_Strategy_HUD_Shop_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Strategy_Source_Strategy_HUD_Shop_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
