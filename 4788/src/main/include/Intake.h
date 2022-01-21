#pragma once

#include "RobotMap.h";
#include "controllers/Controllers.h";

using Controllers = wml::controllers::SmartControllerGroup;

/**
 * @file Intake.h
 * @brief Contains the declaration of intake state enum and class
*/

/** Enum for storing if the intake is deployed or not. */
enum class IntakeStates{
  STOWED = 0, /*!< Stowed state. */
  DEPLOYED /*!< Deployed state. */
};

/** Class representing the intake. */
class Intake {
 public:
 /**
  * A constructor.
  * @param intakeSystem A reference to the struct containing the intake components
  * @param contGroup A reference to the two controllers
 */
  Intake(RobotMap::IntakeSystem &intakeSystem, Controllers &contGroup);

  /** @brief Teleop function */
  void teleopOnUpdate (double dt);
  /** @brief Auto function */
  void autoOnUpdate (double dt);
  /** @brief Test function */
  void testOnUpdate (double dt);
 private:
  RobotMap::IntakeSystem &_intakeSystem; /**< Reference to a IntakeSystem which contains the various intake components*/
  Controllers &_contGroup; /**< Reference to a controller group */

  double power; /**< Dead variable */
  IntakeStates _intakeState{IntakeStates::STOWED}; /**< The state of the intake */
};