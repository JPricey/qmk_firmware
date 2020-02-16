#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _MAIN 0
#define _FN   1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_MAIN] = {
    {KC_GRAVE,KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINUS,KC_EQUAL,KC_BSPACE,KC_DEL   },
    {KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,  KC_PGUP  },
    {KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOTE,_______, KC_ENTER, KC_PGDOWN},
    {KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,    _______  },
    {KC_LCTRL,KC_LALT, KC_LGUI, KC_SPACE,_______, KC_BSPC, _______, KC_SPACE,_______, KC_RALT, _______, MO(_FN), KC_LEFT, KC_DOWN,  KC_RIGHT }
  },

  [_FN] = {
    {_______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , _______, KC_INSERT },
    {_______, _______, KC_BTN2, KC_MS_U, KC_BTN1, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME   },
    {_______, KC_PSCR, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, KC_WH_U, KC_WH_D, _______, _______, _______, _______, _______, KC_END    },
    {_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______   },
    {_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______   }
  }
};
