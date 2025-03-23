// Copyright 2023 Yoshimasa Niwa
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_A,     KC_B,
        KC_1,     KC_2,
        KC_SPACE
    )
};
