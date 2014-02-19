
#include "FindArmPotOrigin.h"
#include "../Subsystems/ArmPIDSubsystem.h"

// this command is used to find a top position, using the potentiomiter, of the arm and saves that value to be used
//in calculations to find the shooting angle.


FindArmPotOrigin::FindArmPotOrigin() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::armPIDSubsystem);
}

// Called just before this Command runs the first time
void FindArmPotOrigin::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void FindArmPotOrigin::Execute() {
	
	Robot::armPIDSubsystem->FindOriginPosition(true);
}

// Make this return true when this Command no longer needs to run execute()
bool FindArmPotOrigin::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void FindArmPotOrigin::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void FindArmPotOrigin::Interrupted() {

}