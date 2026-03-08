// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┐
     * │ 1 │ Q │ W │ E │ 3 │
     * ├───┼───┼───┼───┼───┤
     * │ 2 │ A │ S │ D │ 4 │
     * ├───┼───┼───┼───┼───┤
     * │Ctl│ Z │ X │ C │Sft│
     * └───┴───┴───┴───┴───┘
     * 
     * 
     */
    [0] = LAYOUT(
        KC_P1,   KC_PQ,   KC_PW,   KC_PE,   KC_P3,
        KC_P4,   KC_PA,   KC_PS,   KC_PD,   KC_P4,
        KC_PLCTR,   KC_PZ,   KC_PX,   KC_PC,   KC_PLSFT
    )
    
};

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
    rgb_matrix_mode(RGB_MATRIX_SOLID_REACTIVE_SIMPLE);
    rgb_matrix_sethsv(236, 83, 93);//base blue colour
};