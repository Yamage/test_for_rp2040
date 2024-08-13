// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// KeyCodes: https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_Q,    KC_W,    KC_E,              KC_R,    KC_T,       _______,       _______,    _______,    /**/           _______,    _______,       _______,       KC_Y,       KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,              KC_F,    KC_G,       _______,       _______,    _______,    /**/           _______,    _______,       _______,       KC_H,       KC_J,    KC_K,    KC_L,    KC_SCLN,
        KC_Z,    KC_X,    KC_C,              KC_V,    KC_B,       _______,       _______,    _______,    /**/           _______,    _______,       _______,       KC_N,       KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
        KC_LSFT, KC_LCTL, LALT_T(KC_ESC), _______, _______, LT(1,KC_LBRC),        KC_SPC,    _______,    /**/    LCTL_T(KC_DEL),     KC_ENT, LT(2,KC_RBRC),    _______,    _______,    KC_LALT, KC_LCTL, KC_RSFT
    ),
    [1] = LAYOUT(
        KC_EXLM, KC_7,    KC_8,              KC_9,    KC_TILD,    _______,       _______,    _______,    /**/           _______,    _______,       _______,       KC_Y,       KC_U,    KC_I,    KC_O,    KC_P,
        KC_AT,   KC_4,    KC_5,              KC_6,     KC_DLR,    _______,       _______,    _______,    /**/           _______,    _______,       _______,       KC_H,       KC_J,    KC_K,    KC_L,    KC_SCLN,
        KC_HASH, KC_1,    KC_2,              KC_3,       KC_0,    _______,       _______,    _______,    /**/           _______,    _______,       _______,       KC_N,       KC_M,    KC_LPRN, KC_RPRN, KC_SLSH,
        KC_LSFT, KC_LCTL, LALT_T(KC_ESC), _______,    _______,    _______,        KC_SPC,    _______,    /**/    LCTL_T(KC_DEL),     KC_ENT, LT(3,KC_RBRC),    _______,    _______,    KC_LALT, KC_LCTL, KC_RSFT
    ),
    [2] = LAYOUT(
        KC_Q,    KC_W,    KC_E,              KC_R,    KC_T,       _______,       _______,    _______,    /**/           _______,    _______,       _______,       KC_Y,       KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,              KC_F,    KC_G,       _______,       _______,    _______,    /**/           _______,    _______,       _______,       KC_H,       KC_J,    KC_K,    KC_L,    KC_SCLN,
        KC_Z,    KC_X,    KC_C,              KC_V,    KC_B,       _______,       _______,    _______,    /**/           _______,    _______,       _______,       KC_N,       KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
        KC_LSFT, KC_LCTL, LALT_T(KC_ESC), _______, _______, LT(3,KC_LBRC),        KC_SPC,    _______,    /**/    LCTL_T(KC_DEL),     KC_ENT,       _______,    _______,    _______,    KC_LALT, KC_LCTL, KC_RSFT
    ),
    [3] = LAYOUT(
        KC_Q,    KC_P7,   KC_P8,             KC_P9,    KC_T,       _______,       _______,    _______,    /**/           _______,    _______,       _______,       KC_Y,       KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_P4,   KC_P5,             KC_P6,   KC_P7,      _______,       _______,    _______,    /**/           _______,    _______,       _______,       KC_H,       KC_J,    KC_K,    KC_L,    KC_SCLN,
        KC_Z,    KC_P1,   KC_P2,             KC_P3,   KC_P0,       _______,       _______,    _______,    /**/           _______,    _______,       _______,       KC_N,       KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
        KC_LSFT, KC_LCTL, LALT_T(KC_ESC), _______, _______,       _______,        KC_SPC,    _______,    /**/    LCTL_T(KC_DEL),     KC_ENT,       _______,    _______,    _______,    KC_LALT, KC_LCTL, KC_RSFT
    ),
};
