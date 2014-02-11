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
#include "Commands/DriveTrainCommand.h"
#include "Commands/FeederIdleCommand.h"
#include "Commands/FeederPassingCommand.h"
#include "Commands/FeederPullCommand.h"
#include "Commands/FeederPushCommand.h"
#include "Commands/FeederSolenoidDownCommand.h"
#include "Commands/FeederSolenoidIdleCommand.h"
#include "Commands/LauncherIdleCommand.h"
#include "Commands/RegulateCompressorCommand.h"
#include "Commands/ResetEncoder.h"
#include "Commands/ResetLauncherCommand.h"
#include "Commands/SetPID.h"
#include "Commands/TriggerLauncherCommand.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	joystickMain = new Joystick(1);
	
	joyFeederPassing = new JoystickButton(joystickMain, 4);
	joyFeederPassing->WhenPressed(new FeederPassingCommand());
	joyFeederDown = new JoystickButton(joystickMain, 1);
	joyFeederDown->WhenPressed(new FeederSolenoidDownCommand());
	joyFeederPull = new JoystickButton(joystickMain, 6);
	joyFeederPull->WhileHeld(new FeederPullCommand());
	joyFeederPush = new JoystickButton(joystickMain, 8);
	joyFeederPush->WhileHeld(new FeederPushCommand());
	joyResetLauncher = new JoystickButton(joystickMain, 7);
	joyResetLauncher->WhenPressed(new ResetLauncherCommand());
	joyTriggerLauncher = new JoystickButton(joystickMain, 5);
	joyTriggerLauncher->WhenPressed(new TriggerLauncherCommand());
     
        // SmartDashboard Buttons
	SmartDashboard::PutData("AutonomousCommand", new AutonomousCommand());
	SmartDashboard::PutData("DriveTrainCommand", new DriveTrainCommand());
	SmartDashboard::PutData("FeederPullCommand", new FeederPullCommand());
	SmartDashboard::PutData("FeederIdleCommand", new FeederIdleCommand());
	SmartDashboard::PutData("LauncherIdleCommand", new LauncherIdleCommand());
	SmartDashboard::PutData("TriggerLauncherCommand", new TriggerLauncherCommand());
	SmartDashboard::PutData("ResetLauncherCommand", new ResetLauncherCommand());
	SmartDashboard::PutData("FeederPushCommand", new FeederPushCommand());
	SmartDashboard::PutData("RegulateCompressorCommand", new RegulateCompressorCommand());
	SmartDashboard::PutData("FeederSolenoidIdleCommand", new FeederSolenoidIdleCommand());
	SmartDashboard::PutData("FeederSolenoidDownCommand", new FeederSolenoidDownCommand());
	SmartDashboard::PutData("FeederPassingCommand", new FeederPassingCommand());
	SmartDashboard::PutData("ResetEncoder", new ResetEncoder());
	SmartDashboard::PutData("SetPID", new SetPID());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	SmartDashboard::PutNumber("P", Robot::launcher->launcherPID->GetP());
	SmartDashboard::PutNumber("I", Robot::launcher->launcherPID->GetI());
	SmartDashboard::PutNumber("D", Robot::launcher->launcherPID->GetD());
}
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
Joystick* OI::getjoystickMain() {
	return joystickMain;
}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
