// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "AutonomousCommand.h"
#include "../Commands/DriveForwardCommand.h"
#include "../Commands/DriveLeftToTargetCommand.h"
#include "../Commands/DriveRightToTargetCommand.h"
#include "../Commands/AutonomousLaunchCommand.h"
#include "../Commands/FeederSolenoidDownCommand.h"
#include "../Commands/DetectTargetCommand.h"
#include "../Commands/CameraAimUpCommand.h"
#include "../Commands/CameraAimDownCommand.h"
#include "WPILib/commands/WaitCommand.h"
//Autonomous program. Called by competition officers.
AutonomousCommand::AutonomousCommand() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	AddSequential(new FeederSolenoidDownCommand());
	AddSequential(new WaitCommand(2.2));
	AddSequential(new DriveForwardCommand());
	AddSequential(new CameraAimUpCommand());
	AddSequential(new DetectTargetCommand());
	AddSequential(new WaitCommand(0.1));
	AddSequential(new AutonomousLaunchCommand());
	AddSequential(new CameraAimDownCommand());
	/*	NetworkTable *table = NetworkTable::GetTable("datatable");
	NumberArray apRatioArray;
	NumberArray areaArray;
	
	table->RetrieveValue("AP_RATIO", apRatioArray);
	table->RetrieveValue("AREA", areaArray);
	Robot::camera->isHot(areaArray, apRatioArray);
	if (Robot::camera->getTargetState()) {
	switch (Robot::camera->switchPosition()) {
		case 0:
			printf("Switch Determined");
			AddSequential(new LauncherCycleCommand());
			break;
		case 1:
			AddSequential(new DriveLeftToTargetCommand());
			AddSequential(new LauncherCycleCommand());
			break;
		case 2:
			AddSequential(new DriveRightToTargetCommand());
			AddSequential(new LauncherCycleCommand());
		default:
			break;
	}
	}
	else {
		//AddSequential(new WaitCommand(4.6));
		AddSequential(new LauncherCycleCommand());
	}
	}*/
	}
