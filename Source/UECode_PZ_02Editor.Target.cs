// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class UECode_PZ_02EditorTarget : TargetRules
{
	public UECode_PZ_02EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "UECode_PZ_02" } );
	}
}
