#include QMK_KEYBOARD_H

#define TRIDACTYL 0
#define XMONAD_WINDOWS 1


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[TRIDACTYL] = LAYOUT_ortho_4x4(
			LALT(KC_1),         KC_NO,      LALT(KC_2), LALT(KC_3),
		        LSFT(KC_J),         KC_NO,      LSFT(KC_K), LSFT(KC_G),
		        LSFT(KC_H),         KC_J,       KC_K,       LSFT(KC_L),
		        TO(XMONAD_WINDOWS), LCTL(KC_D), LCTL(KC_U), TO(TRIDACTYL)),
	[XMONAD_WINDOWS] = LAYOUT_ortho_4x4(
			LALT(KC_1),         KC_NO,            LALT(KC_2),       LALT(KC_3),
		        LALT(KC_W),         KC_NO,            LALT(KC_E),       LALT(KC_SPACE),
		        LALT(KC_H),         LALT(KC_J),       LALT(KC_K),       LALT(KC_L),
		        TO(XMONAD_WINDOWS), LALT(LSFT(KC_J)), LALT(LSFT(KC_K)), TO(TRIDACTYL))
};
