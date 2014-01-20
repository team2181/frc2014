// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "DriveTrain.h"
#include "../Robotmap.h"
#include "../Commands/DriveTrainCommand.h"
#include "math.h"
#include "SmartDashboard/SmartDashboard.h"
DriveTrain::DriveTrain() : Subsystem("DriveTrain") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	speedControllerRR = RobotMap::driveTrainSpeedControllerRR;
	speedControllerRL = RobotMap::driveTrainSpeedControllerRL;
	speedControllerFR = RobotMap::driveTrainSpeedControllerFR;
	speedControllerFL = RobotMap::driveTrainSpeedControllerFL;
	omniDrive = RobotMap::driveTrainomniDrive;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new DriveTrainCommand());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
void DriveTrain::drive (Joystick *joystick){
	float calcX, calcY, calcZ;
	calcX=pow(joystick->GetX(),3);
	calcY=pow(joystick->GetY(),3);
	calcZ=pow(joystick->GetZ(),3);
	SmartDashboard::PutNumber("Calculated X", (double)(calcX));
	SmartDashboard::PutNumber("Calculated Y", (double)(calcY));
	SmartDashboard::PutNumber("Calculated Z", (double)(calcZ));
	omniDrive->MecanumDrive_Cartesian(calcX, calcY, calcZ);
	Wait(0.005);
}
