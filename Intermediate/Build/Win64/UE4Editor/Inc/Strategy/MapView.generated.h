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

#define myproject_Source_Strategy_View_MapView_h_12_RPC_WRAPPERS
#define myproject_Source_Strategy_View_MapView_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define myproject_Source_Strategy_View_MapView_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapView(); \
	friend STRATEGY_API class UClass* Z_Construct_UClass_AMapView(); \
public: \
	DECLARE_CLASS(AMapView, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Strategy"), NO_API) \
	DECLARE_SERIALIZER(AMapView) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define myproject_Source_Strategy_View_MapView_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMapView(); \
	friend STRATEGY_API class UClass* Z_Construct_UClass_AMapView(); \
public: \
	DECLARE_CLASS(AMapView, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Strategy"), NO_API) \
	DECLARE_SERIALIZER(AMapView) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define myproject_Source_Strategy_View_MapView_h_12_STANDARD_CONSTRUCTORS \
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


#define myproject_Source_Strategy_View_MapView_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapView(AMapView&&); \
	NO_API AMapView(const AMapView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapView); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapView)


#define myproject_Source_Strategy_View_MapView_h_12_PRIVATE_PROPERTY_OFFSET
#define myproject_Source_Strategy_View_MapView_h_9_PROLOG
#define myproject_Source_Strategy_View_MapView_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	myproject_Source_Strategy_View_MapView_h_12_PRIVATE_PROPERTY_OFFSET \
	myproject_Source_Strategy_View_MapView_h_12_RPC_WRAPPERS \
	myproject_Source_Strategy_View_MapView_h_12_INCLASS \
	myproject_Source_Strategy_View_MapView_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define myproject_Source_Strategy_View_MapView_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	myproject_Source_Strategy_View_MapView_h_12_PRIVATE_PROPERTY_OFFSET \
	myproject_Source_Strategy_View_MapView_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	myproject_Source_Strategy_View_MapView_h_12_INCLASS_NO_PURE_DECLS \
	myproject_Source_Strategy_View_MapView_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID myproject_Source_Strategy_View_MapView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
