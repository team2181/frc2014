// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
SpeedController* RobotMap::driveTrainSpeedControllerRR = NULL;
SpeedController* RobotMap::driveTrainSpeedControllerRL = NULL;
SpeedController* RobotMap::driveTrainSpeedControllerFR = NULL;
SpeedController* RobotMap::driveTrainSpeedControllerFL = NULL;
RobotDrive* RobotMap::driveTrainOmniDrive = NULL;
SpeedController* RobotMap::feederSpeedController = NULL;
SpeedController* RobotMap::launcherSpeedController = NULL;
DigitalInput* RobotMap::launcherlimitLauncherDown = NULL;
DigitalInput* RobotMap::launcherlimitLauncherUp = NULL;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();
	driveTrainSpeedControllerRR = new Talon(1, 4);
	lw->AddActuator("DriveTrain", "SpeedControllerRR", (Talon*) driveTrainSpeedControllerRR);
	
	driveTrainSpeedControllerRL = new Talon(1, 2);
	lw->AddActuator("DriveTrain", "SpeedControllerRL", (Talon*) driveTrainSpeedControllerRL);
	
	driveTrainSpeedControllerFR = new Talon(1, 3);
	lw->AddActuator("DriveTrain", "SpeedControllerFR", (Talon*) driveTrainSpeedControllerFR);
	
	driveTrainSpeedControllerFL = new Talon(1, 1);
	lw->AddActuator("DriveTrain", "SpeedControllerFL", (Talon*) driveTrainSpeedControllerFL);
	
	driveTrainOmniDrive = new RobotDrive(driveTrainSpeedControllerFL, driveTrainSpeedControllerRL,
              driveTrainSpeedControllerFR, driveTrainSpeedControllerRR);
	
	driveTrainOmniDrive->SetSafetyEnabled(false);
        driveTrainOmniDrive->SetExpiration(0.1);
        driveTrainOmniDrive->SetSensitivity(0.5);
        driveTrainOmniDrive->SetMaxOutput(1.0);
	feederSpeedController = new Talon(1, 5);
	lw->AddActuator("Feeder", "SpeedController", (Talon*) feederSpeedController);
	
	launcherSpeedController = new Talon(1, 9);
	lw->AddActuator("Launcher", "SpeedController", (Talon*) launcherSpeedController);
	
	launcherlimitLauncherDown = new DigitalInput(1, 1);
	lw->AddSensor("Launcher", "limitLauncherDown", launcherlimitLauncherDown);
	
	launcherlimitLauncherUp = new DigitalInput(1, 2);
	lw->AddSensor("Launcher", "limitLauncherUp", launcherlimitLauncherUp);
	
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
