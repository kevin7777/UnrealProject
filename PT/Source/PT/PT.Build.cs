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

            //����Ƽ���带 off��Ŵ.
            //����Ƽ���带 on��Ű��, cpp���� include�ž� �� header�� ��� ������ �Ǵ� ��찡 �߻��Ѵ�. �̰� ���� ����
            //bFasterWithoutUnity = true;
        }

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
