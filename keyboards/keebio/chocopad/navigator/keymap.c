#include QMK_KEYBOARD_H

#define TRIDACTYL 0
#define XMONAD 1
#define TMUX 2


enum custom_keycodes {
        TMUX_N = SAFE_RANGE,
        TMUX_P,
        TMUX_J,
        TMUX_K,
        TMUX_H,
        TMUX_L,
        TMUX_0,
        TMUX_1,
        TMUX_2
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
        switch(keycode) {
        case TMUX_N:
                if (record->event.pressed) {
                        SEND_STRING(SS_LCTRL("b") "n");
                }
                break;
        case TMUX_P:
                if (record->event.pressed) {
                        SEND_STRING(SS_LCTRL("b") "p");
                }
                break;
        case TMUX_J:
                if (record->event.pressed) {
                        SEND_STRING(SS_LCTRL("b") "j");
                }
                break;
        case TMUX_K:
                if (record->event.pressed) {
                        SEND_STRING(SS_LCTRL("b") "k");
                }
                break;
        case TMUX_H:
                if (record->event.pressed) {
                        SEND_STRING(SS_LCTRL("b") "h");
                }
                break;
        case TMUX_L:
                if (record->event.pressed) {
                        SEND_STRING(SS_LCTRL("b") "l");
                }
                break;
        case TMUX_0:
                if (record->event.pressed) {
                        SEND_STRING(SS_LCTRL("b") "0");
                }
                break;
        case TMUX_1:
                if (record->event.pressed) {
                        SEND_STRING(SS_LCTRL("b") "1");
                }
                break;
        case TMUX_2:
                if (record->event.pressed) {
                        SEND_STRING(SS_LCTRL("b") "2");
                }
                break;
	}
	return true;
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [TRIDACTYL] = LAYOUT_ortho_4x4(
                TO(TMUX),           KC_NO,      TO(TMUX),   TO(TMUX),
                LSFT(KC_J),         KC_NO,      LSFT(KC_K), LSFT(KC_G),
                LSFT(KC_H),         KC_J,       KC_K,       LSFT(KC_L),
                TO(XMONAD),         LCTL(KC_D), LCTL(KC_U), TO(TRIDACTYL)),
        [XMONAD] = LAYOUT_ortho_4x4(
                LALT(KC_1),         KC_NO,            LALT(KC_2),       LALT(KC_3),
                LALT(KC_W),         KC_NO,            LALT(KC_E),       LALT(KC_SPACE),
                LALT(KC_H),         LALT(KC_J),       LALT(KC_K),       LALT(KC_L),
                TO(XMONAD),         LALT(LSFT(KC_J)), LALT(LSFT(KC_K)), TO(TRIDACTYL)),
        [TMUX] = LAYOUT_ortho_4x4(
                TMUX_0,             KC_NO,            TMUX_1,     TMUX_2, 
                TMUX_P,             KC_NO,            TMUX_N,     KC_NO,
                TMUX_H,             TMUX_J,           TMUX_K,     TMUX_L,
                TO(XMONAD),         KC_NO,            KC_NO,      TO(TRIDACTYL))
};
