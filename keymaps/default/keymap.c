// digger8/keymaps/default/keymap.c
//
#include QMK_KEYBOARD_H

// Layer 0: base; Layer 1: (optional) Fn placeholder
enum { _BASE, _FN };

#define SPCL KC_SPC   // left space
#define SPCR KC_SPC   // right space

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* ┌───────────────────── Left ────────────────────────┐   ┌──────────────────────────────────────────── Right ─────────────────────────────────────────────┐ */
[_BASE] = LAYOUT(
/*R0*/  KC_ESC, KC_F1,  KC_F2,  KC_F3,  KC_F4,                 KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,                 KC_INS,
/*R1*/  KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,          KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSPC,               KC_DEL,
/*R2*/  KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,          KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_ENT,                KC_HOME,
/*R3*/  KC_CAPS,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,          KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_NONUS_HASH,                 KC_END,
/*R4*/  KC_LSFT,KC_NUBS,KC_Z,   KC_X,   KC_C,   KC_V,                 KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,          KC_RSFT, KC_UP,
/*R5*/  KC_LCTL,KC_LGUI,KC_LALT,       SPCL,   KC_B,           SPCR,                          KC_RALT, MO(_FN),KC_RCTL, KC_LEFT,KC_DOWN,KC_RGHT
),

[_FN] = LAYOUT(
/*R0*/  _______,_______,_______,_______,_______,              _______,_______,_______,_______,_______,_______,_______,_______,              _______,
/*R1*/  _______,_______,_______,_______,_______,_______,      _______,_______,_______,_______,_______,_______,_______,_______,              _______,
/*R2*/  _______,_______,_______,_______,_______,_______,      _______,_______,_______,_______,_______,_______,_______,_______,              _______,
/*R3*/  _______,_______,_______,_______,_______,_______,      _______,_______,_______,_______,_______,_______,_______,                     _______,
/*R4*/  _______,_______,_______,_______,_______,_______,              _______,_______,_______,_______,_______,          _______, _______,
/*R5*/  _______,_______,_______,       _______,_______,      _______,                        _______,_______,_______, _______,_______,_______
)
};

