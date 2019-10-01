/* A standard layout for the Dactyl Manuform 5x6 Keyboard */

#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

#define SPACE_SHIFT LSFT_T(KC_SPC)
#define ENTER_LOWER LT(_LOWER, KC_ENT)

#define SPACE_LOWER LT(_LOWER, KC_SPC)
#define ENTER_SHIFT LSFT_T(KC_ENT)

#define BACK_CTRL LCTL_T(KC_BSPC)
#define DEL_RAISE LT(_RAISE, KC_DEL)

#define DEL_CTRL  LCTL_T(KC_DEL)

#define SPACE_RAISE LT(_RAISE, KC_SPC)
#define BACK_LOWER LT(_LOWER, KC_BSPC)

#define BACK_SHIFT LSFT_T(KC_BSPC)
#define SPACE_CTRL LCTL_T(KC_SPC)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_5x6(
     KC_GRAVE , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_HOME,
     KC_TAB   , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_BSLASH,
     KC_ESC   , KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
     KC_LSHIFT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_END,
                          KC_LBRC, KC_RBRC,                                              KC_MINS, KC_EQL,

                              KC_LCTRL    , KC_SPACE,                           KC_LSHIFT, KC_BSPC,
                              KC_LALT     , KC_ENT  ,                           LOWER   , KC_LALT,
                              KC_LGUI     , KC_DEL  ,                           KC_INS  , KC_LGUI
  ),


  [_LOWER] = LAYOUT_5x6(
     _______,_______ ,_______     ,_______  , _______      ,_______,                         _______,_______,_______ ,_______,_______ ,_______,
     _______,KC_PGUP ,KC_MS_BTN2 ,KC_MS_UP  ,KC_MS_BTN1   ,KC_MS_WH_UP ,                     KC_PGUP,_______,_______ ,_______,_______ ,_______,
     _______,KC_PGDN ,KC_MS_LEFT  ,KC_MS_DOWN,KC_MS_RIGHT  ,KC_MS_WH_DOWN,                   KC_LEFT,KC_DOWN,KC_UP   ,KC_RGHT,_______ ,_______,
     _______,KC_LSFT ,KC_LCTRL    ,KC_LGUI   ,KC_LALT      ,_______,                         KC_PGDN,KC_LALT,KC_LGUI,KC_LCTRL,KC_LSFT,_______,
                                     _______ ,_______,                                                          _______, _______,
                                             _______,_______,                                         _______,_______,
                                             _______,_______,                                         _______,_______,
                                             _______,_______,                                         _______,_______

  ),

  [_RAISE] = LAYOUT_5x6(
       KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
       _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
       _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
       _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______
  ),
};
