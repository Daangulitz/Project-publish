using UnrealBuildTool;

public class ProjectPublishTarget : TargetRules
{
	public ProjectPublishTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("ProjectPublish");
	}
}
