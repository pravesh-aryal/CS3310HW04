// This is the controller for the elevator.
// It is implemented strictly in the C programming language,
// but is callable by a C++ program, like for example an FLTK
// window, or a unit test framework
//
/////////////////////////////////////////////////////////////
#pragma once

#include <stdbool.h>

#include "events.h"

#ifdef __cplusplus
extern "C"
{
#endif

    // States of the elevator system

    // typedef enum
    // {
    //     OFF,
    //     INIT,
    //     FLOOR2,
    //     FLOOR3,
    //     FLOOR4,
    //     GOINGUPTO3,
    //     GOINGDNTO3,
    //     GOINGUPTO4,
    //     GOINGDNTO2
    // } elevatorStateEnum;

    //modified enum by me
    typedef enum{
        OFF,
        INIT,
        FLOOR2,
        FLOOR3, 
        FLOOR4, 
        //
        DOOR_IS_OPEN,
        DOOR_IS_CLOSING,
        DOOR_IS_OBSTRUCTED,
        DOOR_IS_CLOSED,
        INBETWEEN2AND3_UP,
        INBETWEEN2AND3_DOWN,
        INBETWEEN3AND4_UP,
        INBETWEEN3AND4_DOWN
        //
    }

    void controller_tick();
    void controller_init();

    const char *elevatorStateEnumNames(elevatorStateEnum e);

    // visibility to support testing
    elevatorStateEnum transition(elevatorStateEnum state, eventEnum event);
#ifdef __cplusplus
}
#endif
