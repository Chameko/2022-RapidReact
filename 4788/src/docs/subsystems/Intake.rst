======
Intake
======

.. note::
    This isn't designed to be a template, just to show off what **doxygen** can do and how it **sphinx** renders you various comment-documented pieces of code

Description
===========

The intake is used to intake balls into the robot.

Implementation
==============

The intake's components are defined in Robotmap.h in this struct

.. doxygenstruct:: RobotMap
    :members: IntakeSystem
    :no-link:

An intake class is then defined to house the IntakeSystem and the intake's functionality

.. doxygenclass:: Intake
    :private-members:
    :members:
    :no-link:

We also decided to implement a state machine and hence created an enum to represent the intakes state

.. doxygenenum:: IntakeStates
    :outline:
    :no-link:

Intake.cpp as definded by doxygen documentation:

.. doxygenfile:: Intake.cpp
    :sections: define briefdescription detaileddescription
