// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Camera.h"
#include "../Robotmap.h"
#include "../Commands/CameraIdleCommand.h"
#include "NetworkTables/NetworkTable.h"
Camera::Camera() : Subsystem("Camera") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	moveLeft = RobotMap::cameraMoveLeft;
	moveRight = RobotMap::cameraMoveRight;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void Camera::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
bool Camera::getTable() {
	/*SmartDashboard::PutBoolean("Left Switch", moveLeft->Get());
	SmartDashboard::PutBoolean("Right Switch", moveRight->Get());*/
	//SmartDashboard::PutBoolean("Within Area", isHot(areaArray, apRatioArray));
	return false;
}
bool Camera::isHot(NumberArray area, NumberArray ratio) {
	/*bool inArea = false;
	bool inAspect = false;*/
	
	/*for(unsigned i=0; i < area.size(); i++){
		if((area.get(i) < 3500) && (area.get(i) > 1500)) {
			inArea = true;
			break;
		}
	}
	
	for(unsigned i=0; i < ratio.size(); i++){
		if((ratio.get(i) < 10.5) && (ratio.get(i) > 9.5)) {
			inAspect = true;
			break;
		}
	}*/
	
	return false; //inArea && inAspect;
}
int Camera::switchPosition() {
	if (!moveLeft->Get()){
		return 1;
	}
	else {
		if (!moveRight->Get()){
			return 2;
		}
		else {
			return 0;
		}
	}
}
void Camera::setTargetState(bool b){
	//targetState = b;
}
bool Camera::getTargetState(){
	return targetState;
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
