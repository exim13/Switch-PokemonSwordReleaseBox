#ifndef _INSTRUCTIONS_H_
#define _INSTRUCTIONS_H_

#include "Joystick.h"

#if !defined(ARRAY_SIZE)
    #define ARRAY_SIZE(x) (sizeof((x)) / sizeof((x)[0]))
#endif

typedef enum {
    circle_around,
    get_on_bike,
    get_off_bike,
    turn_left,
    turn_right,
    move_forward,
    move_backward,
    move_right,
    move_left,
    open_menu,
    close_menu,
    press_a,
    press_b,
    press_x,
    press_y,
    reset_view_angle,
    press_plus,
    press_home,
    hang
} action_t;

typedef struct {
    action_t action;
    uint16_t duration;
} command_t;


static const command_t release_poke[] = {
	{ move_forward, 5 },
    { hang, 20 },
	{ move_backward, 5 },
    { hang, 20 },
	{ press_a, 10 },
    { hang, 30 },
    { move_forward, 5 },
    { hang, 20 },
    { move_forward, 5 },
    { hang, 20 },
    { press_a, 10 },
	{ hang, 70 },
	{ move_forward, 5 },
    { hang, 20 },
    { press_a, 10 },
	{ hang, 70 },
	{ press_a, 10 },
	{ hang, 30 },
};

static const command_t move_to_next_poke[] = {
    { move_right, 5 },
    { hang, 20 },
};

static const command_t move_to_next_row[] = {
    { move_right, 5 },
	{ hang, 20 },
	{ move_right, 5 },
	{ hang, 20 },
	{ move_backward, 5 }, 
    { hang, 20 },
};

static const uint16_t breeding_duration = 3000;

#endif
