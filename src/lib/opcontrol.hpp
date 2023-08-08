#pragma once

#include "../globals.hpp"

inline bool is_opcontrol = false;
inline void opcontrol_start() {
    is_opcontrol = true;

    while (is_opcontrol) {
        double x = master.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_X)/127.0;
        double y = master.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y)/127.0;
        double rot = master.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_X)/127.0;
        flmotor.move_velocity((y+rot)*GRN_RPM);
        frmotor.move_velocity((y-rot)*GRN_RPM);
        rlmotor.move_velocity((y+rot)*GRN_RPM);
        rrmotor.move_velocity((y-rot)*GRN_RPM);
    }
}
