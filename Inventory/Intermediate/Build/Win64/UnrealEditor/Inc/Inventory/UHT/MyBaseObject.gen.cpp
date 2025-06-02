// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/Public/MyBaseObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBaseObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INVENTORY_API UClass* Z_Construct_UClass_UMyBaseObject();
INVENTORY_API UClass* Z_Construct_UClass_UMyBaseObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// End Cross Module References

// Begin Class UMyBaseObject
void UMyBaseObject::StaticRegisterNativesUMyBaseObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBaseObject);
UClass* Z_Construct_UClass_UMyBaseObject_NoRegister()
{
	return UMyBaseObject::StaticClass();
}
struct Z_Construct_UClass_UMyBaseObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyBaseObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MyBaseObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBaseObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyBaseObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBaseObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBaseObject_Statics::ClassParams = {
	&UMyBaseObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBaseObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBaseObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyBaseObject()
{
	if (!Z_Registration_Info_UClass_UMyBaseObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBaseObject.OuterSingleton, Z_Construct_UClass_UMyBaseObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyBaseObject.OuterSingleton;
}
template<> INVENTORY_API UClass* StaticClass<UMyBaseObject>()
{
	return UMyBaseObject::StaticClass();
}
UMyBaseObject::UMyBaseObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBaseObject);
UMyBaseObject::~UMyBaseObject() {}
// End Class UMyBaseObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_11_Plugins_Inventory_Source_Inventory_Public_MyBaseObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyBaseObject, UMyBaseObject::StaticClass, TEXT("UMyBaseObject"), &Z_Registration_Info_UClass_UMyBaseObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBaseObject), 2667865926U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_11_Plugins_Inventory_Source_Inventory_Public_MyBaseObject_h_1261357574(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_11_Plugins_Inventory_Source_Inventory_Public_MyBaseObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_11_Plugins_Inventory_Source_Inventory_Public_MyBaseObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
