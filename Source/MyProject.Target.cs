// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class MyProjectTarget : TargetRules
{
	public MyProjectTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;



		//PublicAdditionalLibraries.Add(RealSenseDirectory + "lib\\" + Platform + "\\libpxc.lib");
		
		//PublicAdditionalLibraries.Add("open62541.lib");
	}
}
