// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyNetworkFunctions.h"

#ifdef SIMPLENETWORKFUNCTIONS_MyNetworkFunctions_generated_h
#error "MyNetworkFunctions.generated.h already included, missing '#pragma once' in MyNetworkFunctions.h"
#endif
#define SIMPLENETWORKFUNCTIONS_MyNetworkFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMyNetworkFunctions ******************************************************
#define FID_Users_caspe_Documents_GitHub_Project_publish_ProjectPublish_Plugins_SimpleNetworkFunctions_Source_SimpleNetworkFunctions_Public_MyNetworkFunctions_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsLanConnected); \
	DECLARE_FUNCTION(execGetLocalIPAddress);


struct Z_Construct_UClass_UMyNetworkFunctions_Statics;
SIMPLENETWORKFUNCTIONS_API UClass* Z_Construct_UClass_UMyNetworkFunctions_NoRegister();

#define FID_Users_caspe_Documents_GitHub_Project_publish_ProjectPublish_Plugins_SimpleNetworkFunctions_Source_SimpleNetworkFunctions_Public_MyNetworkFunctions_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyNetworkFunctions(); \
	friend struct ::Z_Construct_UClass_UMyNetworkFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMPLENETWORKFUNCTIONS_API UClass* ::Z_Construct_UClass_UMyNetworkFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UMyNetworkFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleNetworkFunctions"), Z_Construct_UClass_UMyNetworkFunctions_NoRegister) \
	DECLARE_SERIALIZER(UMyNetworkFunctions)


#define FID_Users_caspe_Documents_GitHub_Project_publish_ProjectPublish_Plugins_SimpleNetworkFunctions_Source_SimpleNetworkFunctions_Public_MyNetworkFunctions_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyNetworkFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMyNetworkFunctions(UMyNetworkFunctions&&) = delete; \
	UMyNetworkFunctions(const UMyNetworkFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyNetworkFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyNetworkFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyNetworkFunctions) \
	NO_API virtual ~UMyNetworkFunctions();


#define FID_Users_caspe_Documents_GitHub_Project_publish_ProjectPublish_Plugins_SimpleNetworkFunctions_Source_SimpleNetworkFunctions_Public_MyNetworkFunctions_h_8_PROLOG
#define FID_Users_caspe_Documents_GitHub_Project_publish_ProjectPublish_Plugins_SimpleNetworkFunctions_Source_SimpleNetworkFunctions_Public_MyNetworkFunctions_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_caspe_Documents_GitHub_Project_publish_ProjectPublish_Plugins_SimpleNetworkFunctions_Source_SimpleNetworkFunctions_Public_MyNetworkFunctions_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_caspe_Documents_GitHub_Project_publish_ProjectPublish_Plugins_SimpleNetworkFunctions_Source_SimpleNetworkFunctions_Public_MyNetworkFunctions_h_11_INCLASS_NO_PURE_DECLS \
	FID_Users_caspe_Documents_GitHub_Project_publish_ProjectPublish_Plugins_SimpleNetworkFunctions_Source_SimpleNetworkFunctions_Public_MyNetworkFunctions_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMyNetworkFunctions;

// ********** End Class UMyNetworkFunctions ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_caspe_Documents_GitHub_Project_publish_ProjectPublish_Plugins_SimpleNetworkFunctions_Source_SimpleNetworkFunctions_Public_MyNetworkFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
