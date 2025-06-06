// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_ESCAPE,   KC_Q,   KC_W,   KC_E, KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BACKSPACE,
        KC_CAPS,   KC_A,   KC_S,   KC_D, KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_ENTER,
        KC_LEFT_SHIFT,    KC_TAB, KC_Z,  KC_X,   KC_C, KC_V,   KC_B,   KC_N,   KC_M,   MO(3),   KC_RIGHT_SHIFT,
        KC_LEFT_CTRL,    KC_LEFT_GUI,  KC_LEFT_ALT, MO(1),   KC_SPACE,   KC_RIGHT_ALT,   KC_RIGHT_GUI,    KC_RIGHT_CTRL
    ),
    [1] = LAYOUT(
        KC_GRAVE,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_LEFT_BRACKET,   KC_RIGHT_BRACKET, KC_BACKSLASH, KC_DELETE,
        KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_SEMICOLON,   KC_QUOTE,
        KC_TRNS,    KC_NO,   KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_COMMA,   KC_DOT,   KC_SLSH,   KC_TRNS,
        KC_NO,    KC_NO,   KC_NO, KC_TRNS,   KC_NO,   KC_NO,      KC_NO,     KC_NO
    ),
    [3] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4, KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,
        KC_1,   KC_2,   KC_3,   KC_4, KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_NO,
        KC_MINUS,    KC_EQUAL, KC_NO,  KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS,   KC_NO,
        KC_NO,    KC_NO,  KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO
    ),
};
