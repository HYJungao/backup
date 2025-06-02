// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyBaseObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORY_MyBaseObject_generated_h
#error "MyBaseObject.generated.h already included, missing '#pragma once' in MyBaseObject.h"
#endif
#define INVENTORY_MyBaseObject_generated_h

#define FID_11_Plugins_Inventory_Source_Inventory_Public_MyBaseObject_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyBaseObject(); \
	friend struct Z_Construct_UClass_UMyBaseObject_Statics; \
public: \
	DECLARE_CLASS(UMyBaseObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inventory"), NO_API) \
	DECLARE_SERIALIZER(UMyBaseObject)


#define FID_11_Plugins_Inventory_Source_Inventory_Public_MyBaseObject_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyBaseObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyBaseObject(UMyBaseObject&&); \
	UMyBaseObject(const UMyBaseObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyBaseObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyBaseObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyBaseObject) \
	NO_API virtual ~UMyBaseObject();


#define FID_11_Plugins_Inventory_Source_Inventory_Public_MyBaseObject_h_12_PROLOG
#define FID_11_Plugins_Inventory_Source_Inventory_Public_MyBaseObject_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_11_Plugins_Inventory_Source_Inventory_Public_MyBaseObject_h_15_INCLASS_NO_PURE_DECLS \
	FID_11_Plugins_Inventory_Source_Inventory_Public_MyBaseObject_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORY_API UClass* StaticClass<class UMyBaseObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_11_Plugins_Inventory_Source_Inventory_Public_MyBaseObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
