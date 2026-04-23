using UnrealBuildTool;

public class ProjectPublishClientTarget : TargetRules
{
	public ProjectPublishClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("ProjectPublish");
	}
}
