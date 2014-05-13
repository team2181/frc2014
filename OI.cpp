// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "OI.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/AutonomousLaunchCommand.h"
#include "Commands/CameraAimDownCommand.h"
#include "Commands/CameraAimUpCommand.h"
#include "Commands/CameraIdleCommand.h"
#include "Commands/DetectTargetCommand.h"
#include "Commands/DistanceSensorCommand.h"
#include "Commands/DriveForwardCommand.h"
#include "Commands/DriveLeftToTargetCommand.h"
#include "Commands/DriveRightToTargetCommand.h"
#include "Commands/DriveTrainCommand.h"
#include "Commands/FeederIdleCommand.h"
#include "Commands/FeederPassingCommand.h"
#include "Commands/FeederPullCommand.h"
#include "Commands/FeederPushCommand.h"
#include "Commands/FeederSolenoidDownCommand.h"
#include "Commands/FeederSolenoidIdleCommand.h"
#include "Commands/LauncherCycleCommand.h"
#include "Commands/LauncherIdleCommand.h"
#include "Commands/LauncherResetCommand.h"
#include "Commands/LauncherTriggerCommand.h"
#include "Commands/RegulateCompressorCommand.h"
#include "Commands/RestoreExposureCommand.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	joystickAlt = new Joystick(2);
	
	joyTriggerLauncher = new JoystickButton(joystickAlt, 2);
	joyTriggerLauncher->WhenPressed(new LauncherCycleCommand());
	joyFeederPush = new JoystickButton(joystickAlt, 8);
	joyFeederPush->WhileHeld(new FeederPushCommand());
	joyFeederPull = new JoystickButton(joystickAlt, 6);
	joyFeederPull->WhileHeld(new FeederPullCommand());
	joyFeederDown = new JoystickButton(joystickAlt, 1);
	joyFeederDown->WhenPressed(new FeederSolenoidDownCommand());
	joyFeederPassing = new JoystickButton(joystickAlt, 4);
	joyFeederPassing->WhenPressed(new FeederPassingCommand());
	joystickMain = new Joystick(1);
	
	joyRestoreExposure = new JoystickButton(joystickMain, 2);
	joyRestoreExposure->WhenPressed(new RestoreExposureCommand());
     
        // SmartDashboard Buttons
	SmartDashboard::PutData("AutonomousCommand", new AutonomousCommand());
	SmartDashboard::PutData("DriveTrainCommand", new DriveTrainCommand());
	SmartDashboard::PutData("FeederIdleCommand", new FeederIdleCommand());
	SmartDashboard::PutData("FeederPullCommand", new FeederPullCommand());
	SmartDashboard::PutData("FeederPushCommand", new FeederPushCommand());
	SmartDashboard::PutData("FeederPassingCommand", new FeederPassingCommand());
	SmartDashboard::PutData("LauncherIdleCommand", new LauncherIdleCommand());
	SmartDashboard::PutData("LauncherTriggerCommand", new LauncherTriggerCommand());
	SmartDashboard::PutData("LauncherResetCommand", new LauncherResetCommand());
	SmartDashboard::PutData("FeederSolenoidIdleCommand", new FeederSolenoidIdleCommand());
	SmartDashboard::PutData("FeederSolenoidDownCommand", new FeederSolenoidDownCommand());
	SmartDashboard::PutData("DriveForwardCommand", new DriveForwardCommand());
	SmartDashboard::PutData("RegulateCompressorCommand", new RegulateCompressorCommand());
	SmartDashboard::PutData("LauncherCycleCommand", new LauncherCycleCommand());
	SmartDashboard::PutData("CameraIdleCommand", new CameraIdleCommand());
	SmartDashboard::PutData("DriveLeftToTargetCommand", new DriveLeftToTargetCommand());
	SmartDashboard::PutData("DriveRightToTargetCommand", new DriveRightToTargetCommand());
	SmartDashboard::PutData("DetectTargetCommand", new DetectTargetCommand());
	SmartDashboard::PutData("AutonomousLaunchCommand", new AutonomousLaunchCommand());
	SmartDashboard::PutData("CameraAimUpCommand", new CameraAimUpCommand());
	SmartDashboard::PutData("CameraAimDownCommand", new CameraAimDownCommand());
	SmartDashboard::PutData("RestoreExposureCommand", new RestoreExposureCommand());
	SmartDashboard::PutData("DistanceSensorCommand", new DistanceSensorCommand());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	SmartDashboard::PutNumber( "Volts Threshold", 2);
	SmartDashboard::PutNumber( "Timeout Auto", 1.1);
	SmartDashboard::PutBoolean( "Below Voltage: ", false);
	SmartDashboard::PutNumber("Time left/right", 1.5);
}
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
Joystick* OI::getjoystickAlt() {
	return joystickAlt;
}
Joystick* OI::getjoystickMain() {
	return joystickMain;
}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
