// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "OpcUaClientBPLibrary.h"
//#include "OpcUaClient.h"
#include "open62541.h"

static UA_Client* client;

UOpcUaClientBPLibrary::UOpcUaClientBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

bool UOpcUaClientBPLibrary::UA_Client_connect_open62541(FString endpointUrl)
{
	// Create a client and connect
	client = UA_Client_new();
	UA_ClientConfig_setDefault(UA_Client_getConfig(client));
	UA_StatusCode status = UA_Client_connect(client, TCHAR_TO_UTF8(*endpointUrl));

	if (status != UA_STATUSCODE_GOOD) {
		UA_Client_delete(client);
		return false;
	}

	return true;
}

float UOpcUaClientBPLibrary::UA_Client_readValueAttribute_open62541(FString nodeId)
{
	if (!client) return -2;

	UA_Variant value; /* Variants can hold scalar values and arrays of any type */
	UA_Variant_init(&value);
	UA_StatusCode status = UA_Client_readValueAttribute(client, UA_NODEID_NUMERIC(2, FCString::Atoi(*nodeId)), &value);

	if (status == UA_STATUSCODE_GOOD &&
		UA_Variant_hasScalarType(&value, &UA_TYPES[UA_TYPES_FLOAT])) {
		return *(UA_Float*)value.data;
	}

	return -1;
}

bool UOpcUaClientBPLibrary::UA_Client_writeValueAttribute_open62541(FString nodeId, float newValue)
{
	if (!client) return false;

	UA_Variant value;
	UA_Variant_setScalar(&value, &newValue, &UA_TYPES[UA_TYPES_FLOAT]);
	UA_StatusCode status = UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, TCHAR_TO_UTF8(*nodeId)), &value);

	if (status == UA_STATUSCODE_GOOD &&
		UA_Variant_hasScalarType(&value, &UA_TYPES[UA_TYPES_FLOAT])) {
		return true;
	}

	return false;
}

bool UOpcUaClientBPLibrary::UA_Client_disconnect_open62541()
{
	UA_Client_delete(client);
	return true;
}
