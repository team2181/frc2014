// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "TriggerLauncherCommand.h"
//Called when joyTriggerLauncher is pushed. Command runs until completion of task.
//Used to launch a play object after the launcher has been reset and a ball has been loaded.
TriggerLauncherCommand::TriggerLauncherCommand() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::launcher);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
// Called just before this Command runs the first time
void TriggerLauncherCommand::Initialize() {
}
// Called repeatedly when this Command is scheduled to run
void TriggerLauncherCommand::Execute() {
	Robot::launcher->Launch();
}
// Make this return true when this Command no longer needs to run execute()
bool TriggerLauncherCommand::IsFinished() {
	//Ends command when the launcher's top limit switch is triggered. 
	//At this point, the launcher should be in its fully upward position.
	return Robot::launcher->limitLauncherUp;
}
// Called once after isFinished returns true
void TriggerLauncherCommand::End() {
	Robot::launcher->Stop();
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TriggerLauncherCommand::Interrupted() {
	Robot::launcher->Stop();
}
