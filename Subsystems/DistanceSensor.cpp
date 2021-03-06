// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "DistanceSensor.h"
#include "../Robotmap.h"
#include "../Commands/DistanceSensorCommand.h"
#define THRESHOLD 3.0
DistanceSensor::DistanceSensor() : Subsystem("DistanceSensor") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	ultrasonicSensor = RobotMap::distanceSensorUltrasonicSensor;
	inRangeLight = RobotMap::distanceSensorInRangeLight;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void DistanceSensor::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new DistanceSensorCommand());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
void DistanceSensor::outputSensorToSD() {
	SmartDashboard::PutNumber("DistVolt", ultrasonicSensor->GetVoltage());
}
void DistanceSensor::setLight() {
	if ((ultrasonicSensor->GetVoltage() >= 2.2) && (ultrasonicSensor->GetVoltage() <= 2.6)){
		inRangeLight->Set(Relay::kOn);
	}
	else {
		inRangeLight->Set(Relay::kOff);
	}
}
