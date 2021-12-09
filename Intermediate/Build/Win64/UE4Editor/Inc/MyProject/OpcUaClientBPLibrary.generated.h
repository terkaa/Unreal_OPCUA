// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_OpcUaClientBPLibrary_generated_h
#error "OpcUaClientBPLibrary.generated.h already included, missing '#pragma once' in OpcUaClientBPLibrary.h"
#endif
#define MYPROJECT_OpcUaClientBPLibrary_generated_h

#define MyProject_Source_MyProject_OpcUaClientBPLibrary_h_28_SPARSE_DATA
#define MyProject_Source_MyProject_OpcUaClientBPLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUA_Client_disconnect_open62541); \
	DECLARE_FUNCTION(execUA_Client_writeValueAttribute_open62541); \
	DECLARE_FUNCTION(execUA_Client_readValueAttribute_open62541); \
	DECLARE_FUNCTION(execUA_Client_connect_open62541);


#define MyProject_Source_MyProject_OpcUaClientBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUA_Client_disconnect_open62541); \
	DECLARE_FUNCTION(execUA_Client_writeValueAttribute_open62541); \
	DECLARE_FUNCTION(execUA_Client_readValueAttribute_open62541); \
	DECLARE_FUNCTION(execUA_Client_connect_open62541);


#define MyProject_Source_MyProject_OpcUaClientBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpcUaClientBPLibrary(); \
	friend struct Z_Construct_UClass_UOpcUaClientBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UOpcUaClientBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UOpcUaClientBPLibrary)


#define MyProject_Source_MyProject_OpcUaClientBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUOpcUaClientBPLibrary(); \
	friend struct Z_Construct_UClass_UOpcUaClientBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UOpcUaClientBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UOpcUaClientBPLibrary)


#define MyProject_Source_MyProject_OpcUaClientBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpcUaClientBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpcUaClientBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpcUaClientBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpcUaClientBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpcUaClientBPLibrary(UOpcUaClientBPLibrary&&); \
	NO_API UOpcUaClientBPLibrary(const UOpcUaClientBPLibrary&); \
public:


#define MyProject_Source_MyProject_OpcUaClientBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpcUaClientBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpcUaClientBPLibrary(UOpcUaClientBPLibrary&&); \
	NO_API UOpcUaClientBPLibrary(const UOpcUaClientBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpcUaClientBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpcUaClientBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpcUaClientBPLibrary)


#define MyProject_Source_MyProject_OpcUaClientBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_OpcUaClientBPLibrary_h_25_PROLOG
#define MyProject_Source_MyProject_OpcUaClientBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_OpcUaClientBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_OpcUaClientBPLibrary_h_28_SPARSE_DATA \
	MyProject_Source_MyProject_OpcUaClientBPLibrary_h_28_RPC_WRAPPERS \
	MyProject_Source_MyProject_OpcUaClientBPLibrary_h_28_INCLASS \
	MyProject_Source_MyProject_OpcUaClientBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_OpcUaClientBPLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_OpcUaClientBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_OpcUaClientBPLibrary_h_28_SPARSE_DATA \
	MyProject_Source_MyProject_OpcUaClientBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_OpcUaClientBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_OpcUaClientBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OpcUaClientBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class UOpcUaClientBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_OpcUaClientBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
