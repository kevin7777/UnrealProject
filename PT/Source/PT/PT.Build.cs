// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PT : ModuleRules
{
	public PT(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        if (Target.Type == TargetType.Editor)
        {
            OptimizeCode = CodeOptimization.Never;

            //유니티빌드를 off시킴.
            //유니티빌드를 on시키면, cpp에서 include돼야 할 header가 없어도 컴파일 되는 경우가 발생한다. 이걸 막기 위함
            //bFasterWithoutUnity = true;
        }

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
