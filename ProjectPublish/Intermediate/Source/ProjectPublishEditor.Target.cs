using UnrealBuildTool;

public class ProjectPublishEditorTarget : TargetRules
{
	public ProjectPublishEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("ProjectPublish");
	}
}
