// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STRATEGY_MapView_generated_h
#error "MapView.generated.h already included, missing '#pragma once' in MapView.h"
#endif
#define STRATEGY_MapView_generated_h

#define Strategy_Source_Strategy_View_MapView_h_14_RPC_WRAPPERS
#define Strategy_Source_Strategy_View_MapView_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Strategy_Source_Strategy_View_MapView_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapView(); \
	friend STRATEGY_API class UClass* Z_Construct_UClass_AMapView(); \
public: \
	DECLARE_CLASS(AMapView, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Strategy"), NO_API) \
	DECLARE_SERIALIZER(AMapView) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Strategy_Source_Strategy_View_MapView_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMapView(); \
	friend STRATEGY_API class UClass* Z_Construct_UClass_AMapView(); \
public: \
	DECLARE_CLASS(AMapView, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Strategy"), NO_API) \
	DECLARE_SERIALIZER(AMapView) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Strategy_Source_Strategy_View_MapView_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMapView(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMapView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapView(AMapView&&); \
	NO_API AMapView(const AMapView&); \
public:


#define Strategy_Source_Strategy_View_MapView_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapView(AMapView&&); \
	NO_API AMapView(const AMapView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapView); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapView)


#define Strategy_Source_Strategy_View_MapView_h_14_PRIVATE_PROPERTY_OFFSET
#define Strategy_Source_Strategy_View_MapView_h_11_PROLOG
#define Strategy_Source_Strategy_View_MapView_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Strategy_Source_Strategy_View_MapView_h_14_PRIVATE_PROPERTY_OFFSET \
	Strategy_Source_Strategy_View_MapView_h_14_RPC_WRAPPERS \
	Strategy_Source_Strategy_View_MapView_h_14_INCLASS \
	Strategy_Source_Strategy_View_MapView_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Strategy_Source_Strategy_View_MapView_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Strategy_Source_Strategy_View_MapView_h_14_PRIVATE_PROPERTY_OFFSET \
	Strategy_Source_Strategy_View_MapView_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Strategy_Source_Strategy_View_MapView_h_14_INCLASS_NO_PURE_DECLS \
	Strategy_Source_Strategy_View_MapView_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Strategy_Source_Strategy_View_MapView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
