#pragma once

#include "../globals.hpp"

namespace auton {
    inline void stop() {
        flmotor.move_velocity(0);
        frmotor.move_velocity(0);
        rlmotor.move_velocity(0);
        rrmotor.move_velocity(0);
    }
}