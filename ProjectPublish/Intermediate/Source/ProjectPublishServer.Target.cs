using UnrealBuildTool;

public class ProjectPublishServerTarget : TargetRules
{
	public ProjectPublishServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("ProjectPublish");
	}
}
