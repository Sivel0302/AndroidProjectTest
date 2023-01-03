// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidProjectTest/AndroidProjectTestGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidProjectTestGameMode() {}
// Cross Module References
	ANDROIDPROJECTTEST_API UClass* Z_Construct_UClass_AAndroidProjectTestGameMode_NoRegister();
	ANDROIDPROJECTTEST_API UClass* Z_Construct_UClass_AAndroidProjectTestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AndroidProjectTest();
// End Cross Module References
	void AAndroidProjectTestGameMode::StaticRegisterNativesAAndroidProjectTestGameMode()
	{
	}
	UClass* Z_Construct_UClass_AAndroidProjectTestGameMode_NoRegister()
	{
		return AAndroidProjectTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAndroidProjectTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAndroidProjectTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidProjectTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndroidProjectTestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AndroidProjectTestGameMode.h" },
		{ "ModuleRelativePath", "AndroidProjectTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAndroidProjectTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAndroidProjectTestGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAndroidProjectTestGameMode_Statics::ClassParams = {
		&AAndroidProjectTestGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAndroidProjectTestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAndroidProjectTestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAndroidProjectTestGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAndroidProjectTestGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAndroidProjectTestGameMode, 3640572233);
	template<> ANDROIDPROJECTTEST_API UClass* StaticClass<AAndroidProjectTestGameMode>()
	{
		return AAndroidProjectTestGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAndroidProjectTestGameMode(Z_Construct_UClass_AAndroidProjectTestGameMode, &AAndroidProjectTestGameMode::StaticClass, TEXT("/Script/AndroidProjectTest"), TEXT("AAndroidProjectTestGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAndroidProjectTestGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
