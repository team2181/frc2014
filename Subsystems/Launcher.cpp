// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Launcher.h"
#include "../Robotmap.h"
#include "../Commands/LauncherIdleCommand.h"
#define THRESHVOLTS 2
Launcher::Launcher() : Subsystem("Launcher") {
	//Declarations for the speed controller and limit switches for the launcher.
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	limitSwitchUp = RobotMap::launcherLimitSwitchUp;
	speedController = RobotMap::launcherSpeedController;
	limitSwitchDown = RobotMap::launcherLimitSwitchDown;
	distanceSensor = RobotMap::launcherDistanceSensor;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void Launcher::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new LauncherIdleCommand());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
void Launcher::setLauncherSpeed(float s) {
	speedController->Set(s,0);
	Wait(0.005);
}
double Launcher::getUltrasonicVolts() {
	return (double)(distanceSensor->GetVoltage());
}
bool Launcher::isInDistance() {
	SmartDashboard::PutBoolean( "Below Voltage: ", getUltrasonicVolts() <= SmartDashboard::GetNumber( "Volts Threshold"));
	return getUltrasonicVolts() <= SmartDashboard::GetNumber( "Volts Threshold");
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
