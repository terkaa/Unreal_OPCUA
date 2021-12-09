// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "OpcUaClientBPLibrary.generated.h"

/*
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class UOpcUaClientBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

		/**
		* Connect to OPC UA Server.
		* @param	endpointUrl
		* @return	true if the connect success.
		*/
		UFUNCTION(BlueprintCallable, meta = (DisplayName = "UA Client Connect", Keywords = "Connect to OPC UA Server"), Category = "OPC UA Client")
		static bool UA_Client_connect_open62541(FString endpointUrl);

	/**
	* Read the value attribute of the node.
	* @param	nodeId
	* @return	value attribute of the node
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "UA Client ReadValueAttribute", Keywords = "Read the value attribute of the node"), Category = "OPC UA Client")
		static float UA_Client_readValueAttribute_open62541(FString nodeId);

	/**
	* Write the value attribute of the node.
	* @param	nodeId
	* @param	newValue
	* @return	true if the value attribute writes success.
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "UA Client WriteValueAttribute", Keywords = "Write the value attribute of the node"), Category = "OPC UA Client")
		static bool UA_Client_writeValueAttribute_open62541(FString nodeId, float newValue);

	/**
	* Disconnects the client.
	* @return	true if dissconnected.
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "UA Client Disconnect", Keywords = "Disconnects the client."), Category = "OPC UA Client")
		static bool UA_Client_disconnect_open62541();
};
