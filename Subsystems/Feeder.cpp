// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Feeder.h"
#include "../Robotmap.h"
#include "../Commands/FeederIdleCommand.h"
#define DISTANCE 300
Feeder::Feeder() : Subsystem("Feeder") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	speedController = RobotMap::feederSpeedController;
	ultrasonic = RobotMap::feederUltrasonic;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void Feeder::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new FeederIdleCommand());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
void Feeder::Forward() {
	speedController->Set(1,0);
	Wait(0.005);
}
void Feeder::Stop() {
	speedController->Set(0,0);
	Wait(0.005);
}
void Feeder::Reverse() {
	speedController->Set(-1,0);
	Wait(0.005);
}
void Feeder::Passing() {
	if (ultrasonic->GetRangeMM() > DISTANCE) {
		speedController->Set(1,0);
	}
	else {
		speedController->Set(0,0);
	}
}
double Feeder::GetDistanceConst() {
	return DISTANCE;
}
