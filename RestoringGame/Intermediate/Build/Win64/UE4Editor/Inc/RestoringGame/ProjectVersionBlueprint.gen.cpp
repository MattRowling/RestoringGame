// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RestoringGame/ProjectVersionBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectVersionBlueprint() {}
// Cross Module References
	RESTORINGGAME_API UClass* Z_Construct_UClass_UProjectVersionBlueprint_NoRegister();
	RESTORINGGAME_API UClass* Z_Construct_UClass_UProjectVersionBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_RestoringGame();
// End Cross Module References
	DEFINE_FUNCTION(UProjectVersionBlueprint::execGetProjectVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UProjectVersionBlueprint::GetProjectVersion();
		P_NATIVE_END;
	}
	void UProjectVersionBlueprint::StaticRegisterNativesUProjectVersionBlueprint()
	{
		UClass* Class = UProjectVersionBlueprint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetProjectVersion", &UProjectVersionBlueprint::execGetProjectVersion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProjectVersionBlueprint_GetProjectVersion_Statics
	{
		struct ProjectVersionBlueprint_eventGetProjectVersion_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectVersionBlueprint_GetProjectVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectVersionBlueprint_eventGetProjectVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectVersionBlueprint_GetProjectVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectVersionBlueprint_GetProjectVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectVersionBlueprint_GetProjectVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "System Information" },
		{ "CompactNodeTitle", "ProjectVersion" },
		{ "DisplayName", "Project Version" },
		{ "ModuleRelativePath", "ProjectVersionBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectVersionBlueprint_GetProjectVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectVersionBlueprint, nullptr, "GetProjectVersion", nullptr, nullptr, sizeof(ProjectVersionBlueprint_eventGetProjectVersion_Parms), Z_Construct_UFunction_UProjectVersionBlueprint_GetProjectVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectVersionBlueprint_GetProjectVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectVersionBlueprint_GetProjectVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectVersionBlueprint_GetProjectVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectVersionBlueprint_GetProjectVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProjectVersionBlueprint_GetProjectVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProjectVersionBlueprint_NoRegister()
	{
		return UProjectVersionBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UProjectVersionBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectVersionBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RestoringGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProjectVersionBlueprint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProjectVersionBlueprint_GetProjectVersion, "GetProjectVersion" }, // 1621365873
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectVersionBlueprint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ProjectVersionBlueprint.h" },
		{ "ModuleRelativePath", "ProjectVersionBlueprint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectVersionBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectVersionBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProjectVersionBlueprint_Statics::ClassParams = {
		&UProjectVersionBlueprint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProjectVersionBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectVersionBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProjectVersionBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProjectVersionBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProjectVersionBlueprint, 928834756);
	template<> RESTORINGGAME_API UClass* StaticClass<UProjectVersionBlueprint>()
	{
		return UProjectVersionBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProjectVersionBlueprint(Z_Construct_UClass_UProjectVersionBlueprint, &UProjectVersionBlueprint::StaticClass, TEXT("/Script/RestoringGame"), TEXT("UProjectVersionBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectVersionBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
