// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "ResetLauncherCommand.h"
//Called when joyResetLauncher is pushed. Command runs until completion of task.
//Used to reset the launcher in it's down position after a play object has been launched.
ResetLauncherCommand::ResetLauncherCommand() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::launcher);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	SetTimeout( 2);
}
// Called just before this Command runs the first time
void ResetLauncherCommand::Initialize() {
	Robot::launcher->speedController->Set(-0.5,0);
}
// Called repeatedly when this Command is scheduled to run
void ResetLauncherCommand::Execute() {
	
}
// Make this return true when this Command no longer needs to run execute()
bool ResetLauncherCommand::IsFinished() {
	//Ends command when the launcher's bottom limit switch is triggered. 
	//At this point, the launcher should be in its fully downward position.
	return (!Robot::launcher->limitLauncherDown->Get()) || IsTimedOut( );
}
// Called once after isFinished returns true
void ResetLauncherCommand::End() {
	Robot::launcher->speedController->Set(0,0);
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ResetLauncherCommand::Interrupted() {
	Robot::launcher->speedController->Set(0,0);
}
