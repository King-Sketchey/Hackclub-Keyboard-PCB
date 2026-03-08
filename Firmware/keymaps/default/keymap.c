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
     */
    [0] = LAYOUT(
        KC_1,    KC_Q, KC_W, KC_E, KC_3,
        KC_2,    KC_A, KC_S, KC_D, KC_4,
        KC_LCTL, KC_Z, KC_X, KC_C, KC_LSFT
    )
};

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
    rgb_matrix_mode(RGB_MATRIX_SOLID_REACTIVE_SIMPLE);
    rgb_matrix_sethsv(236, 83, 93); // base blue colour
}
