// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.



#include "LauncherDefault.h"
#include "../Commands/DriveForwardCommand.h"
#include "../Commands/TriggerLauncherCommand.h"
#include "../Commands/ResetLauncherCommand.h"
#include "../Commands/FeederSolenoidDownCommand.h"
#include "WPILib/commands/WaitCommand.h"

LauncherDefault::LauncherDefault() {
	AddSequential(new TriggerLauncherCommand());
	AddSequential(new WaitCommand(.2));
	AddSequential(new ResetLauncherCommand());
}
