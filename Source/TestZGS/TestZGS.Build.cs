// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TestZGS : ModuleRules
{
	public TestZGS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "PhysXVehicles", "HeadMountedDisplay", "UMG" });

		PublicDefinitions.Add("HMD_MODULE_INCLUDED=1");
	}
}
