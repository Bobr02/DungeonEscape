// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoverComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoverComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DUNGEONESCAPE_API UClass* Z_Construct_UClass_UMoverComponent();
DUNGEONESCAPE_API UClass* Z_Construct_UClass_UMoverComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DungeonEscape();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMoverComponent **********************************************************
void UMoverComponent::StaticRegisterNativesUMoverComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoverComponent;
UClass* UMoverComponent::GetPrivateStaticClass()
{
	using TClass = UMoverComponent;
	if (!Z_Registration_Info_UClass_UMoverComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoverComponent"),
			Z_Registration_Info_UClass_UMoverComponent.InnerSingleton,
			StaticRegisterNativesUMoverComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UMoverComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoverComponent_NoRegister()
{
	return UMoverComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoverComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MoverComponent.h" },
		{ "ModuleRelativePath", "MoverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveOffset_MetaData[] = {
		{ "Category", "MoverComponent" },
		{ "ModuleRelativePath", "MoverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementTime_MetaData[] = {
		{ "Category", "MoverComponent" },
		{ "ModuleRelativePath", "MoverComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoverComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_MoveOffset = { "MoveOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, MoveOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveOffset_MetaData), NewProp_MoveOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_MovementTime = { "MovementTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, MovementTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementTime_MetaData), NewProp_MovementTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoverComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_MoveOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_MovementTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoverComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonEscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoverComponent_Statics::ClassParams = {
	&UMoverComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMoverComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoverComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoverComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoverComponent()
{
	if (!Z_Registration_Info_UClass_UMoverComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoverComponent.OuterSingleton, Z_Construct_UClass_UMoverComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoverComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoverComponent);
UMoverComponent::~UMoverComponent() {}
// ********** End Class UMoverComponent ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projekty_Unreal_DungeonEscape_DungeonEscape_DungeonEscape_Source_DungeonEscape_MoverComponent_h__Script_DungeonEscape_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoverComponent, UMoverComponent::StaticClass, TEXT("UMoverComponent"), &Z_Registration_Info_UClass_UMoverComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoverComponent), 646742961U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_Unreal_DungeonEscape_DungeonEscape_DungeonEscape_Source_DungeonEscape_MoverComponent_h__Script_DungeonEscape_2235430254(TEXT("/Script/DungeonEscape"),
	Z_CompiledInDeferFile_FID_Projekty_Unreal_DungeonEscape_DungeonEscape_DungeonEscape_Source_DungeonEscape_MoverComponent_h__Script_DungeonEscape_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projekty_Unreal_DungeonEscape_DungeonEscape_DungeonEscape_Source_DungeonEscape_MoverComponent_h__Script_DungeonEscape_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
