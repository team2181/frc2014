// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Pneumatic.h"
#include "../Robotmap.h"
#include "../Commands/RegulateCompressorCommand.h"
Pneumatic::Pneumatic() : Subsystem("Pneumatic") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	mainCompressor = RobotMap::pneumaticMainCompressor;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void Pneumatic::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new RegulateCompressorCommand());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
void Pneumatic::Stop() {
	mainCompressor->Stop();
}
void Pneumatic::Regulate() {
	if (mainCompressor->GetPressureSwitchValue()) {
		mainCompressor->Stop();
	}
	else {
		mainCompressor->Start();
	}
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
