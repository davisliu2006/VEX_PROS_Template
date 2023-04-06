#pragma once

#include "../include/main.h"

#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

// DEFINITIONS

// controller
inline pros::Controller master(pros::E_CONTROLLER_MASTER);

// motor and adi constants
const int MTR_MAX = 127;
const int MTR_MAXmV = 12000;
const double GRN_RPM = 200;
const double BLU_RPM = 600;
const double RED_RPM = 100;
const int ADI_MAX = 4095;

// drivetrain
inline pros::Motor flmotor(2, true);
inline pros::Motor frmotor(3);
inline pros::Motor rlmotor(1, true);
inline pros::Motor rrmotor(4);

// FUNCTIONS

inline double time() {
    return pros::micros()*0.000001;
}

// TEMPLATE

enum AutonEnum {
    BLUE_1 = -1, BLUE_2 = -2, BLUE_3 = -3, BLUE_4 = -4, BLUE_5 = -5,
    RED_1 = 1, RED_2 = 2, RED_3 = 3, RED_4 = 4, RED_5 = 5,
    NOTHING = 10, SKILLS = 0
};
inline int autonSelection = SKILLS; // specifies the default auton selected
