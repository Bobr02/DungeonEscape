// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LockActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLockActor() {}

// ********** Begin Cross Module References ********************************************************
DUNGEONESCAPE_API UClass* Z_Construct_UClass_ALockActor();
DUNGEONESCAPE_API UClass* Z_Construct_UClass_ALockActor_NoRegister();
DUNGEONESCAPE_API UClass* Z_Construct_UClass_UTriggerComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonEscape();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALockActor ***************************************************************
void ALockActor::StaticRegisterNativesALockActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ALockActor;
UClass* ALockActor::GetPrivateStaticClass()
{
	using TClass = ALockActor;
	if (!Z_Registration_Info_UClass_ALockActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LockActor"),
			Z_Registration_Info_UClass_ALockActor.InnerSingleton,
			StaticRegisterNativesALockActor,
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
	return Z_Registration_Info_UClass_ALockActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ALockActor_NoRegister()
{
	return ALockActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALockActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LockActor.h" },
		{ "ModuleRelativePath", "LockActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[] = {
		{ "Category", "LockActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LockActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerComp_MetaData[] = {
		{ "Category", "LockActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LockActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyItemMesh_MetaData[] = {
		{ "Category", "LockActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LockActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyItemName_MetaData[] = {
		{ "Category", "LockActor" },
		{ "ModuleRelativePath", "LockActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsKeyPlaced_MetaData[] = {
		{ "Category", "LockActor" },
		{ "ModuleRelativePath", "LockActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyItemMesh;
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyItemName;
	static void NewProp_IsKeyPlaced_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsKeyPlaced;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALockActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALockActor_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALockActor, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootComp_MetaData), NewProp_RootComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALockActor_Statics::NewProp_TriggerComp = { "TriggerComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALockActor, TriggerComp), Z_Construct_UClass_UTriggerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerComp_MetaData), NewProp_TriggerComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALockActor_Statics::NewProp_KeyItemMesh = { "KeyItemMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALockActor, KeyItemMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyItemMesh_MetaData), NewProp_KeyItemMesh_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALockActor_Statics::NewProp_KeyItemName = { "KeyItemName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALockActor, KeyItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyItemName_MetaData), NewProp_KeyItemName_MetaData) };
void Z_Construct_UClass_ALockActor_Statics::NewProp_IsKeyPlaced_SetBit(void* Obj)
{
	((ALockActor*)Obj)->IsKeyPlaced = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALockActor_Statics::NewProp_IsKeyPlaced = { "IsKeyPlaced", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALockActor), &Z_Construct_UClass_ALockActor_Statics::NewProp_IsKeyPlaced_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsKeyPlaced_MetaData), NewProp_IsKeyPlaced_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALockActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALockActor_Statics::NewProp_RootComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALockActor_Statics::NewProp_TriggerComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALockActor_Statics::NewProp_KeyItemMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALockActor_Statics::NewProp_KeyItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALockActor_Statics::NewProp_IsKeyPlaced,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALockActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALockActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonEscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALockActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALockActor_Statics::ClassParams = {
	&ALockActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALockActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALockActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALockActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALockActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALockActor()
{
	if (!Z_Registration_Info_UClass_ALockActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALockActor.OuterSingleton, Z_Construct_UClass_ALockActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALockActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALockActor);
ALockActor::~ALockActor() {}
// ********** End Class ALockActor *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projekty_Unreal_DungeonEscape_DungeonEscape_DungeonEscape_Source_DungeonEscape_LockActor_h__Script_DungeonEscape_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALockActor, ALockActor::StaticClass, TEXT("ALockActor"), &Z_Registration_Info_UClass_ALockActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALockActor), 706908710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_Unreal_DungeonEscape_DungeonEscape_DungeonEscape_Source_DungeonEscape_LockActor_h__Script_DungeonEscape_1668965283(TEXT("/Script/DungeonEscape"),
	Z_CompiledInDeferFile_FID_Projekty_Unreal_DungeonEscape_DungeonEscape_DungeonEscape_Source_DungeonEscape_LockActor_h__Script_DungeonEscape_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projekty_Unreal_DungeonEscape_DungeonEscape_DungeonEscape_Source_DungeonEscape_LockActor_h__Script_DungeonEscape_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
