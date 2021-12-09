// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/OpcUaClientBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpcUaClientBPLibrary() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UOpcUaClientBPLibrary_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UOpcUaClientBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	DEFINE_FUNCTION(UOpcUaClientBPLibrary::execUA_Client_disconnect_open62541)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOpcUaClientBPLibrary::UA_Client_disconnect_open62541();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpcUaClientBPLibrary::execUA_Client_writeValueAttribute_open62541)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_nodeId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_newValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOpcUaClientBPLibrary::UA_Client_writeValueAttribute_open62541(Z_Param_nodeId,Z_Param_newValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpcUaClientBPLibrary::execUA_Client_readValueAttribute_open62541)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_nodeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UOpcUaClientBPLibrary::UA_Client_readValueAttribute_open62541(Z_Param_nodeId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpcUaClientBPLibrary::execUA_Client_connect_open62541)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_endpointUrl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOpcUaClientBPLibrary::UA_Client_connect_open62541(Z_Param_endpointUrl);
		P_NATIVE_END;
	}
	void UOpcUaClientBPLibrary::StaticRegisterNativesUOpcUaClientBPLibrary()
	{
		UClass* Class = UOpcUaClientBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UA_Client_connect_open62541", &UOpcUaClientBPLibrary::execUA_Client_connect_open62541 },
			{ "UA_Client_disconnect_open62541", &UOpcUaClientBPLibrary::execUA_Client_disconnect_open62541 },
			{ "UA_Client_readValueAttribute_open62541", &UOpcUaClientBPLibrary::execUA_Client_readValueAttribute_open62541 },
			{ "UA_Client_writeValueAttribute_open62541", &UOpcUaClientBPLibrary::execUA_Client_writeValueAttribute_open62541 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_connect_open62541_Statics
	{
		struct OpcUaClientBPLibrary_eventUA_Client_connect_open62541_Parms
		{
			FString endpointUrl;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_endpointUrl;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_connect_open62541_Statics::NewProp_endpointUrl = { "endpointUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpcUaClientBPLibrary_eventUA_Client_connect_open62541_Parms, endpointUrl), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_connect_open62541_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpcUaClientBPLibrary_eventUA_Client_connect_open62541_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_connect_open62541_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpcUaClientBPLibrary_eventUA_Client_connect_open62541_Parms), &Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_connect_open62541_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_connect_open62541_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_connect_open62541_Statics::NewProp_endpointUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_connect_open62541_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_connect_open62541_Statics::Function_MetaDataParams[] = {
		{ "Category", "OPC UA Client" },
		{ "Comment", "/**\n\x09\x09* Connect to OPC UA Server.\n\x09\x09* @param\x09""endpointUrl\n\x09\x09* @return\x09true if the connect success.\n\x09\x09*/" },
		{ "DisplayName", "UA Client Connect" },
		{ "Keywords", "Connect to OPC UA Server" },
		{ "ModuleRelativePath", "OpcUaClientBPLibrary.h" },
		{ "ToolTip", "Connect to OPC UA Server.\n@param        endpointUrl\n@return       true if the connect success." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_connect_open62541_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpcUaClientBPLibrary, nullptr, "UA_Client_connect_open62541", nullptr, nullptr, sizeof(OpcUaClientBPLibrary_eventUA_Client_connect_open62541_Parms), Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_connect_open62541_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_connect_open62541_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_connect_open62541_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_connect_open62541_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_connect_open62541()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_connect_open62541_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_disconnect_open62541_Statics
	{
		struct OpcUaClientBPLibrary_eventUA_Client_disconnect_open62541_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_disconnect_open62541_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpcUaClientBPLibrary_eventUA_Client_disconnect_open62541_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_disconnect_open62541_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpcUaClientBPLibrary_eventUA_Client_disconnect_open62541_Parms), &Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_disconnect_open62541_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_disconnect_open62541_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_disconnect_open62541_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_disconnect_open62541_Statics::Function_MetaDataParams[] = {
		{ "Category", "OPC UA Client" },
		{ "Comment", "/**\n\x09* Disconnects the client.\n\x09* @return\x09true if dissconnected.\n\x09*/" },
		{ "DisplayName", "UA Client Disconnect" },
		{ "Keywords", "Disconnects the client." },
		{ "ModuleRelativePath", "OpcUaClientBPLibrary.h" },
		{ "ToolTip", "Disconnects the client.\n@return       true if dissconnected." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_disconnect_open62541_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpcUaClientBPLibrary, nullptr, "UA_Client_disconnect_open62541", nullptr, nullptr, sizeof(OpcUaClientBPLibrary_eventUA_Client_disconnect_open62541_Parms), Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_disconnect_open62541_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_disconnect_open62541_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_disconnect_open62541_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_disconnect_open62541_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_disconnect_open62541()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_disconnect_open62541_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_readValueAttribute_open62541_Statics
	{
		struct OpcUaClientBPLibrary_eventUA_Client_readValueAttribute_open62541_Parms
		{
			FString nodeId;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_nodeId;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_readValueAttribute_open62541_Statics::NewProp_nodeId = { "nodeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpcUaClientBPLibrary_eventUA_Client_readValueAttribute_open62541_Parms, nodeId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_readValueAttribute_open62541_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpcUaClientBPLibrary_eventUA_Client_readValueAttribute_open62541_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_readValueAttribute_open62541_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_readValueAttribute_open62541_Statics::NewProp_nodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_readValueAttribute_open62541_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_readValueAttribute_open62541_Statics::Function_MetaDataParams[] = {
		{ "Category", "OPC UA Client" },
		{ "Comment", "/**\n\x09* Read the value attribute of the node.\n\x09* @param\x09nodeId\n\x09* @return\x09value attribute of the node\n\x09*/" },
		{ "DisplayName", "UA Client ReadValueAttribute" },
		{ "Keywords", "Read the value attribute of the node" },
		{ "ModuleRelativePath", "OpcUaClientBPLibrary.h" },
		{ "ToolTip", "Read the value attribute of the node.\n@param        nodeId\n@return       value attribute of the node" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_readValueAttribute_open62541_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpcUaClientBPLibrary, nullptr, "UA_Client_readValueAttribute_open62541", nullptr, nullptr, sizeof(OpcUaClientBPLibrary_eventUA_Client_readValueAttribute_open62541_Parms), Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_readValueAttribute_open62541_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_readValueAttribute_open62541_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_readValueAttribute_open62541_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_readValueAttribute_open62541_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_readValueAttribute_open62541()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_readValueAttribute_open62541_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_writeValueAttribute_open62541_Statics
	{
		struct OpcUaClientBPLibrary_eventUA_Client_writeValueAttribute_open62541_Parms
		{
			FString nodeId;
			float newValue;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_nodeId;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_writeValueAttribute_open62541_Statics::NewProp_nodeId = { "nodeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpcUaClientBPLibrary_eventUA_Client_writeValueAttribute_open62541_Parms, nodeId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_writeValueAttribute_open62541_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpcUaClientBPLibrary_eventUA_Client_writeValueAttribute_open62541_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_writeValueAttribute_open62541_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpcUaClientBPLibrary_eventUA_Client_writeValueAttribute_open62541_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_writeValueAttribute_open62541_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpcUaClientBPLibrary_eventUA_Client_writeValueAttribute_open62541_Parms), &Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_writeValueAttribute_open62541_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_writeValueAttribute_open62541_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_writeValueAttribute_open62541_Statics::NewProp_nodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_writeValueAttribute_open62541_Statics::NewProp_newValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_writeValueAttribute_open62541_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_writeValueAttribute_open62541_Statics::Function_MetaDataParams[] = {
		{ "Category", "OPC UA Client" },
		{ "Comment", "/**\n\x09* Write the value attribute of the node.\n\x09* @param\x09nodeId\n\x09* @param\x09newValue\n\x09* @return\x09true if the value attribute writes success.\n\x09*/" },
		{ "DisplayName", "UA Client WriteValueAttribute" },
		{ "Keywords", "Write the value attribute of the node" },
		{ "ModuleRelativePath", "OpcUaClientBPLibrary.h" },
		{ "ToolTip", "Write the value attribute of the node.\n@param        nodeId\n@param        newValue\n@return       true if the value attribute writes success." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_writeValueAttribute_open62541_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpcUaClientBPLibrary, nullptr, "UA_Client_writeValueAttribute_open62541", nullptr, nullptr, sizeof(OpcUaClientBPLibrary_eventUA_Client_writeValueAttribute_open62541_Parms), Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_writeValueAttribute_open62541_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_writeValueAttribute_open62541_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_writeValueAttribute_open62541_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_writeValueAttribute_open62541_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_writeValueAttribute_open62541()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_writeValueAttribute_open62541_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOpcUaClientBPLibrary_NoRegister()
	{
		return UOpcUaClientBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOpcUaClientBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpcUaClientBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpcUaClientBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_connect_open62541, "UA_Client_connect_open62541" }, // 3874657180
		{ &Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_disconnect_open62541, "UA_Client_disconnect_open62541" }, // 4131636424
		{ &Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_readValueAttribute_open62541, "UA_Client_readValueAttribute_open62541" }, // 3530649036
		{ &Z_Construct_UFunction_UOpcUaClientBPLibrary_UA_Client_writeValueAttribute_open62541, "UA_Client_writeValueAttribute_open62541" }, // 547142321
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpcUaClientBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "OpcUaClientBPLibrary.h" },
		{ "ModuleRelativePath", "OpcUaClientBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpcUaClientBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpcUaClientBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpcUaClientBPLibrary_Statics::ClassParams = {
		&UOpcUaClientBPLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOpcUaClientBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpcUaClientBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpcUaClientBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpcUaClientBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpcUaClientBPLibrary, 2210050881);
	template<> MYPROJECT_API UClass* StaticClass<UOpcUaClientBPLibrary>()
	{
		return UOpcUaClientBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpcUaClientBPLibrary(Z_Construct_UClass_UOpcUaClientBPLibrary, &UOpcUaClientBPLibrary::StaticClass, TEXT("/Script/MyProject"), TEXT("UOpcUaClientBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpcUaClientBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
