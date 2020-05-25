/* Copyright 2020 Drew Smathers
 * (keymap based closely on Preonic Layout by Jack Humbert)
 *
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

enum idobo_layers {
  _QWERTY,
  _LOWER,
  _RAISE,
};

enum idobo_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,--------------------------------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |      |      |      |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |      |      |      |   Y  |   U  |   I  |   O  |   P  | RAlt |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |      |      |      |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |      |      |      |   N  |   M  |   ,  |   .  |   /  |RShift|
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | Bksp | Ctrl | Alt  | GUI  |Lower | Bksp | Del  |      |Space |Space |Raise | Left | Down |  Up  |Enter |
 * `--------------------------------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_ortho_5x15( \
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   XXXXXXX, XXXXXXX, XXXXXXX, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, \
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   XXXXXXX, XXXXXXX, XXXXXXX, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_RALT,  \
  KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   XXXXXXX, XXXXXXX, XXXXXXX, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   XXXXXXX, XXXXXXX, XXXXXXX, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,  \
  KC_BSPC, XXXXXXX, KC_LALT, KC_LCTL, LOWER,   KC_BSPC,KC_DEL,  XXXXXXX, KC_SPC,  KC_SPC,  RAISE,   KC_RCTL, KC_RALT, XXXXXXX, KC_ENT  \
),


/* Lower
 * ,--------------------------------------------------------------------------------------------------------.
 * |   ~  |   !  |   @  |   #  |   $  |   %  |  F1  |  F2  |  F3  |   ^  |   &  |   *  |   (  |   )  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |   ~  |   !  |   @  |   #  |   $  |   %  |  F4  |  F5  |  F6  |   ^  |   &  |   *  |   (  |   )  | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | Del  |      |      |      |      |      |  F7  |  F8  |  F9  | Left | Down |  Up  |Right |xxxxx |  |   |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      | F10  | F11  |  F12 |      |ISO ~ |ISO   | Home |  End |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |Reset |      |      |      | Next | Vol- | Vol+ | Play |
 * `--------------------------------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_ortho_5x15( \
  KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_F1,  KC_F2,  KC_F3,  KC_CIRC, KC_AMPR,   KC_ASTR,   KC_LPRN, KC_RPRN, KC_BSPC, \
  KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_F4,  KC_F5,  KC_F6,  KC_CIRC, KC_AMPR,   KC_ASTR,   KC_LPRN, KC_RPRN, KC_DEL,  \
  KC_DEL,  _______, _______, _______, _______, _______, KC_F7,  KC_F8,  KC_F9,  KC_LEFT, KC_DOWN,   KC_UP,     KC_RIGHT,XXXXXXX, KC_PIPE, \
  _______, _______, _______, _______, _______, _______, KC_F10, KC_F11, KC_F12, _______, S(KC_NUHS),S(KC_NUBS),KC_HOME, KC_END,  _______, \
  _______, _______, _______, _______, _______, _______, _______,RESET,  _______,_______, _______,   KC_MNXT,   KC_VOLD, KC_VOLU, KC_MPLY \
),

/* Raise
 * ,--------------------------------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |      |      |      |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |   `  |   1  |   2  |   3  |   4  |   5  |      |      |      |   6  |   7  |   8  |   9  |   0  | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |      |      |      |  F6  |   -  |   =  |   [  |   ]  |  \   |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |      |      |      |  F12 |ISO # |ISO / |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |Reset |      |      |      | Next | Vol- | Vol+ | Play |
 * `--------------------------------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_ortho_5x15( \
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    XXXXXXX, XXXXXXX, XXXXXXX, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_BSPC, \
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    XXXXXXX, XXXXXXX, XXXXXXX, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_DEL,  \
  KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   XXXXXXX, XXXXXXX, XXXXXXX, KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC,  KC_BSLS, \
  _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  XXXXXXX, XXXXXXX, XXXXXXX, KC_F12,  KC_NUHS, KC_NUBS, KC_PGUP, KC_PGDN,  _______, \
  _______, _______, _______, _______, _______, _______, XXXXXXX, RESET,   XXXXXXX, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU,  KC_MPLY  \
)


};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case QWERTY:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_QWERTY);
          }
          return false;
          break;
        case LOWER:
          if (record->event.pressed) {
            layer_on(_LOWER);
          } else {
            layer_off(_LOWER);
          }
          return false;
          break;
        case RAISE:
          if (record->event.pressed) {
            layer_on(_RAISE);
          } else {
            layer_off(_RAISE);
          }
          return false;
          break;
      }
    return true;
};
