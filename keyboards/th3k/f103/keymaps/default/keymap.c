// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	/*___________
	*| T | H | 3|
	*^^^^^^^^^^^^
	*/
    [0] = LAYOUT(
        KC_T,   KC_H,   KC_P3
    ),

    [1] = LAYOUT(
        KC_T,   KC_H,   KC_P3
    ),

    [2] = LAYOUT(
        KC_T,   KC_H,   KC_P3
    ),

    [3] = LAYOUT(
        KC_T,   KC_H,   KC_P3
    )
};
