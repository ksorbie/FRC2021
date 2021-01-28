// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>

 class CLimb : public frc2::SubsystemBase {
 public:
  Climb ();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

  // ClimbUp 
  //Moves Climb up 
  void ClimbUp ();

  // ClimbDown
  //Moves Climb down  
    void ClimbDown ();

  //ResetEncoder
  //resets encoder to zero 
 void ResetEncoder ();

 //GetEncoderValue
 //Returns current encoder value 
 void GetEncoderValue ();
 
  /**
   * Will be called periodically whenever the CommandScheduler runs during
   * simulation.
   */
  void SimulationPeriodic() override;

 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.

 //Declares climb motor
  frc::PWMTalonFX climbMotor;

};
