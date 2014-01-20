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
RobotDrive* RobotMap::driveTrainomniDrive = NULL;
SpeedController* RobotMap::feederSpeedControllerFeeder = NULL;
SpeedController* RobotMap::launcherSpeedControllerLauncher = NULL;
DigitalInput* RobotMap::launcherLauncherDown = NULL;
DigitalInput* RobotMap::launcherLauncherUp = NULL;
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
	
	driveTrainomniDrive = new RobotDrive(driveTrainSpeedControllerFL, driveTrainSpeedControllerRL,
              driveTrainSpeedControllerFR, driveTrainSpeedControllerRR);
	
	driveTrainomniDrive->SetSafetyEnabled(false);
        driveTrainomniDrive->SetExpiration(0.1);
        driveTrainomniDrive->SetSensitivity(0.5);
        driveTrainomniDrive->SetMaxOutput(1.0);
	feederSpeedControllerFeeder = new Talon(1, 5);
	lw->AddActuator("Feeder", "SpeedControllerFeeder", (Talon*) feederSpeedControllerFeeder);
	
	launcherSpeedControllerLauncher = new Talon(1, 8);
	lw->AddActuator("Launcher", "SpeedControllerLauncher", (Talon*) launcherSpeedControllerLauncher);
	
	launcherLauncherDown = new DigitalInput(1, 1);
	lw->AddSensor("Launcher", "LauncherDown", launcherLauncherDown);
	
	launcherLauncherUp = new DigitalInput(1, 2);
	lw->AddSensor("Launcher", "LauncherUp", launcherLauncherUp);
	
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
