/* Copyright 2020 Drew Smathers
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Keyboard Layers
#define _QW 0
#define _FN 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_QW] = LAYOUT_ortho_5x15( /* QWERTY */
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______, _______, _______, KC_6,   KC_7,     KC_8,     KC_9,    KC_0,    KC_BSLS, \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    _______, _______, _______, KC_Y,   KC_U,     KC_I,     KC_O,    KC_P,    KC_QUOT, \
    KC_LALT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    _______, _______, _______, KC_H,   KC_J,     KC_K,     KC_L,    KC_SCLN, KC_RALT,  \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LCTL, _______, KC_RCTL, KC_N,   KC_M,     KC_COMM,  KC_DOT,  KC_SLSH, KC_RSFT, \
    MO(_FN), KC_EQL,  _______,  _______, _______, KC_BSPC, KC_DEL, KC_CAPS, KC_ENT,  KC_SPC, KC_MINUS, KC_GRAVE, KC_LBRC, KC_RBRC, KC_RCTL  \
 ),

 
 [_FN] = LAYOUT_ortho_5x15( /* FUNCTION */
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   _______, _______, _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGDN, KC_PGUP, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_END,  _______, _______, _______, \
    MO(_FN), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______  \
 ),
};
