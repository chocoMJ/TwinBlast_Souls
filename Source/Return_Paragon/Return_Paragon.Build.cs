// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Return_Paragon : ModuleRules
{
	public Return_Paragon(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "GameplayTags" });
	}
}
