// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Multip2 : ModuleRules
{
	public Multip2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
