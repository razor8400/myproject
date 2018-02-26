// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STRATEGY_BuildingView_generated_h
#error "BuildingView.generated.h already included, missing '#pragma once' in BuildingView.h"
#endif
#define STRATEGY_BuildingView_generated_h

#define Strategy_Source_Strategy_View_BuildingView_h_15_RPC_WRAPPERS
#define Strategy_Source_Strategy_View_BuildingView_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Strategy_Source_Strategy_View_BuildingView_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABuildingView(); \
	friend STRATEGY_API class UClass* Z_Construct_UClass_ABuildingView(); \
public: \
	DECLARE_CLASS(ABuildingView, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Strategy"), NO_API) \
	DECLARE_SERIALIZER(ABuildingView) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Strategy_Source_Strategy_View_BuildingView_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABuildingView(); \
	friend STRATEGY_API class UClass* Z_Construct_UClass_ABuildingView(); \
public: \
	DECLARE_CLASS(ABuildingView, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Strategy"), NO_API) \
	DECLARE_SERIALIZER(ABuildingView) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Strategy_Source_Strategy_View_BuildingView_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuildingView(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuildingView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuildingView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuildingView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuildingView(ABuildingView&&); \
	NO_API ABuildingView(const ABuildingView&); \
public:


#define Strategy_Source_Strategy_View_BuildingView_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuildingView(ABuildingView&&); \
	NO_API ABuildingView(const ABuildingView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuildingView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuildingView); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABuildingView)


#define Strategy_Source_Strategy_View_BuildingView_h_15_PRIVATE_PROPERTY_OFFSET
#define Strategy_Source_Strategy_View_BuildingView_h_12_PROLOG
#define Strategy_Source_Strategy_View_BuildingView_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Strategy_Source_Strategy_View_BuildingView_h_15_PRIVATE_PROPERTY_OFFSET \
	Strategy_Source_Strategy_View_BuildingView_h_15_RPC_WRAPPERS \
	Strategy_Source_Strategy_View_BuildingView_h_15_INCLASS \
	Strategy_Source_Strategy_View_BuildingView_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Strategy_Source_Strategy_View_BuildingView_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Strategy_Source_Strategy_View_BuildingView_h_15_PRIVATE_PROPERTY_OFFSET \
	Strategy_Source_Strategy_View_BuildingView_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Strategy_Source_Strategy_View_BuildingView_h_15_INCLASS_NO_PURE_DECLS \
	Strategy_Source_Strategy_View_BuildingView_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Strategy_Source_Strategy_View_BuildingView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
