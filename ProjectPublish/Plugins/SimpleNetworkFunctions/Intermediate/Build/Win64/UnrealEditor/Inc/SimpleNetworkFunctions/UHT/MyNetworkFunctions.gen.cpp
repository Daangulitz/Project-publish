// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyNetworkFunctions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMyNetworkFunctions() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SIMPLENETWORKFUNCTIONS_API UClass* Z_Construct_UClass_UMyNetworkFunctions();
SIMPLENETWORKFUNCTIONS_API UClass* Z_Construct_UClass_UMyNetworkFunctions_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleNetworkFunctions();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMyNetworkFunctions Function GetLocalIPAddress ***************************
struct Z_Construct_UFunction_UMyNetworkFunctions_GetLocalIPAddress_Statics
{
	struct MyNetworkFunctions_eventGetLocalIPAddress_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Function that returns LAN IP addres\n\x09*/" },
#endif
		{ "Description", "Function that returns LAN IP addres" },
		{ "DisplayName", "Get LAN IP address" },
		{ "ModuleRelativePath", "Public/MyNetworkFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function that returns LAN IP addres" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetLocalIPAddress constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLocalIPAddress constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLocalIPAddress Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyNetworkFunctions_GetLocalIPAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyNetworkFunctions_eventGetLocalIPAddress_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyNetworkFunctions_GetLocalIPAddress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyNetworkFunctions_GetLocalIPAddress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyNetworkFunctions_GetLocalIPAddress_Statics::PropPointers) < 2048);
// ********** End Function GetLocalIPAddress Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyNetworkFunctions_GetLocalIPAddress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyNetworkFunctions, nullptr, "GetLocalIPAddress", 	Z_Construct_UFunction_UMyNetworkFunctions_GetLocalIPAddress_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMyNetworkFunctions_GetLocalIPAddress_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMyNetworkFunctions_GetLocalIPAddress_Statics::MyNetworkFunctions_eventGetLocalIPAddress_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyNetworkFunctions_GetLocalIPAddress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyNetworkFunctions_GetLocalIPAddress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyNetworkFunctions_GetLocalIPAddress_Statics::MyNetworkFunctions_eventGetLocalIPAddress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyNetworkFunctions_GetLocalIPAddress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyNetworkFunctions_GetLocalIPAddress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyNetworkFunctions::execGetLocalIPAddress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UMyNetworkFunctions::GetLocalIPAddress();
	P_NATIVE_END;
}
// ********** End Class UMyNetworkFunctions Function GetLocalIPAddress *****************************

// ********** Begin Class UMyNetworkFunctions Function IsLanConnected ******************************
struct Z_Construct_UFunction_UMyNetworkFunctions_IsLanConnected_Statics
{
	struct MyNetworkFunctions_eventIsLanConnected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* A function that returns a bool whether the system is connected to LAN.\n\x09*/" },
#endif
		{ "Description", "A function that returns a bool whether the system is connected to LAN." },
		{ "DisplayName", "Is connected to LAN?" },
		{ "ModuleRelativePath", "Public/MyNetworkFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A function that returns a bool whether the system is connected to LAN." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsLanConnected constinit property declarations ************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsLanConnected constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsLanConnected Property Definitions ***********************************
void Z_Construct_UFunction_UMyNetworkFunctions_IsLanConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MyNetworkFunctions_eventIsLanConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyNetworkFunctions_IsLanConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyNetworkFunctions_eventIsLanConnected_Parms), &Z_Construct_UFunction_UMyNetworkFunctions_IsLanConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyNetworkFunctions_IsLanConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyNetworkFunctions_IsLanConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyNetworkFunctions_IsLanConnected_Statics::PropPointers) < 2048);
// ********** End Function IsLanConnected Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyNetworkFunctions_IsLanConnected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyNetworkFunctions, nullptr, "IsLanConnected", 	Z_Construct_UFunction_UMyNetworkFunctions_IsLanConnected_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMyNetworkFunctions_IsLanConnected_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMyNetworkFunctions_IsLanConnected_Statics::MyNetworkFunctions_eventIsLanConnected_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyNetworkFunctions_IsLanConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyNetworkFunctions_IsLanConnected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyNetworkFunctions_IsLanConnected_Statics::MyNetworkFunctions_eventIsLanConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyNetworkFunctions_IsLanConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyNetworkFunctions_IsLanConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyNetworkFunctions::execIsLanConnected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMyNetworkFunctions::IsLanConnected();
	P_NATIVE_END;
}
// ********** End Class UMyNetworkFunctions Function IsLanConnected ********************************

// ********** Begin Class UMyNetworkFunctions ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMyNetworkFunctions;
UClass* UMyNetworkFunctions::GetPrivateStaticClass()
{
	using TClass = UMyNetworkFunctions;
	if (!Z_Registration_Info_UClass_UMyNetworkFunctions.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MyNetworkFunctions"),
			Z_Registration_Info_UClass_UMyNetworkFunctions.InnerSingleton,
			StaticRegisterNativesUMyNetworkFunctions,
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
	return Z_Registration_Info_UClass_UMyNetworkFunctions.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyNetworkFunctions_NoRegister()
{
	return UMyNetworkFunctions::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyNetworkFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyNetworkFunctions.h" },
		{ "ModuleRelativePath", "Public/MyNetworkFunctions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMyNetworkFunctions constinit property declarations **********************
// ********** End Class UMyNetworkFunctions constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetLocalIPAddress"), .Pointer = &UMyNetworkFunctions::execGetLocalIPAddress },
		{ .NameUTF8 = UTF8TEXT("IsLanConnected"), .Pointer = &UMyNetworkFunctions::execIsLanConnected },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyNetworkFunctions_GetLocalIPAddress, "GetLocalIPAddress" }, // 3155611673
		{ &Z_Construct_UFunction_UMyNetworkFunctions_IsLanConnected, "IsLanConnected" }, // 4072269917
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyNetworkFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMyNetworkFunctions_Statics
UObject* (*const Z_Construct_UClass_UMyNetworkFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleNetworkFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyNetworkFunctions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyNetworkFunctions_Statics::ClassParams = {
	&UMyNetworkFunctions::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyNetworkFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyNetworkFunctions_Statics::Class_MetaDataParams)
};
void UMyNetworkFunctions::StaticRegisterNativesUMyNetworkFunctions()
{
	UClass* Class = UMyNetworkFunctions::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UMyNetworkFunctions_Statics::Funcs));
}
UClass* Z_Construct_UClass_UMyNetworkFunctions()
{
	if (!Z_Registration_Info_UClass_UMyNetworkFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyNetworkFunctions.OuterSingleton, Z_Construct_UClass_UMyNetworkFunctions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyNetworkFunctions.OuterSingleton;
}
UMyNetworkFunctions::UMyNetworkFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMyNetworkFunctions);
UMyNetworkFunctions::~UMyNetworkFunctions() {}
// ********** End Class UMyNetworkFunctions ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_caspe_Documents_GitHub_Project_publish_ProjectPublish_Plugins_SimpleNetworkFunctions_Source_SimpleNetworkFunctions_Public_MyNetworkFunctions_h__Script_SimpleNetworkFunctions_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyNetworkFunctions, UMyNetworkFunctions::StaticClass, TEXT("UMyNetworkFunctions"), &Z_Registration_Info_UClass_UMyNetworkFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyNetworkFunctions), 1236022268U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_caspe_Documents_GitHub_Project_publish_ProjectPublish_Plugins_SimpleNetworkFunctions_Source_SimpleNetworkFunctions_Public_MyNetworkFunctions_h__Script_SimpleNetworkFunctions_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_caspe_Documents_GitHub_Project_publish_ProjectPublish_Plugins_SimpleNetworkFunctions_Source_SimpleNetworkFunctions_Public_MyNetworkFunctions_h__Script_SimpleNetworkFunctions_3122781181{
	TEXT("/Script/SimpleNetworkFunctions"),
	Z_CompiledInDeferFile_FID_Users_caspe_Documents_GitHub_Project_publish_ProjectPublish_Plugins_SimpleNetworkFunctions_Source_SimpleNetworkFunctions_Public_MyNetworkFunctions_h__Script_SimpleNetworkFunctions_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_caspe_Documents_GitHub_Project_publish_ProjectPublish_Plugins_SimpleNetworkFunctions_Source_SimpleNetworkFunctions_Public_MyNetworkFunctions_h__Script_SimpleNetworkFunctions_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
