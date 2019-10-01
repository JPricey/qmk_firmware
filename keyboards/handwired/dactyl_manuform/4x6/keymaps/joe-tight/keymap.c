#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _BASE 0
#define _RAISE 1
#define _LOWER 2

// Fillers to make layering more clear

#define ____ KC_TRNS

#define SFT_ESC  SFT_T(KC_ESC)
#define CTL_BSPC CTL_T(KC_BSPC)
#define ALT_SPC  ALT_T(KC_SPC)
#define SFT_ENT  SFT_T(KC_ENT)

#define LCURL LSFT(KC_LBRC)
#define RCURL LSFT(KC_RBRC)
#define KC_TILD LSFT(KC_GRV)

#define KC_UND LSFT(KC_MINS)
#define KC_PLUS LSFT(KC_EQL)


#define KC_S1  LSFT(KC_1)
#define KC_S2  LSFT(KC_2)
#define KC_S3  LSFT(KC_3)
#define KC_S4  LSFT(KC_4)
#define KC_S5  LSFT(KC_5)
#define KC_S6  LSFT(KC_6)
#define KC_S7  LSFT(KC_7)
#define KC_S8  LSFT(KC_8)
#define KC_S9  LSFT(KC_9)
#define KC_S0  LSFT(KC_0)

#define KC_C1  LCTL(KC_1)
#define KC_C2  LCTL(KC_2)
#define KC_C3  LCTL(KC_3)
#define KC_C4  LCTL(KC_4)
#define KC_C5  LCTL(KC_5)
#define KC_C6  LCTL(KC_6)
#define KC_C7  LCTL(KC_7)
#define KC_C8  LCTL(KC_8)
#define KC_C9  LCTL(KC_9)
#define KC_C0  LCTL(KC_0)


#define KC_ML KC_MS_LEFT
#define KC_MR KC_MS_RIGHT
#define KC_MU KC_MS_UP
#define KC_MD KC_MS_DOWN
#define KC_MB1 KC_MS_BTN1
#define KC_MB2 KC_MS_BTN1

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

#define JLAYOUT(\
    L00, L01, L02, L03, L04, L05,                    R00, R01, R02, R03, R04, R05, \
    L10, L11, L12, L13, L14, L15,                    R10, R11, R12, R13, R14, R15, \
    L20, L21, L22, L23, L24, L25,                    R20, R21, R22, R23, R24, R25, \
              L32, L33,                                        R32, R33,           \
                   L43, L44, L45,                    R40, R41, R42,                \
                      L41, L42,                         R43, R44                    \
    ) \
    { \
        { L00,   L01,   L02, L03, L04, L05 }, \
        { L10,   L11,   L12, L13, L14, L15 }, \
        { L20,   L21,   L22, L23, L24, L25 }, \
        { KC_NO, KC_NO, L32, L33, KC_NO, KC_NO }, \
        { KC_NO, L41, L42, L43, L44, L45 }, \
\
        { R00, R01, R02, R03, R04,   R05   }, \
        { R10, R11, R12, R13, R14,   R15   }, \
        { R20, R21, R22, R23, R24,   R25   }, \
        { KC_NO, KC_NO, R32, R33, KC_NO, KC_NO }, \
        { R40, R41, R42, R43, R44, KC_NO } \
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = JLAYOUT(
    KC_TAB,  KC_Q,  KC_W,   KC_E,   KC_R,   KC_T,               KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BSLASH,
    KC_ESC,  KC_A,  KC_S,   KC_D,   KC_F,   KC_G,               KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,
    KC_LSFT, KC_Z,  KC_X,   KC_C,   KC_V,   KC_B,               KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_LCTRL,
                    KC_HOME,KC_END,                                            KC_PGUP,KC_PGDN,
                        KC_LCTRL, KC_SPACE, KC_ENT,            RAISE, KC_LSHIFT, KC_BSPC,
                            KC_LALT,  LOWER,                        KC_LGUI, KC_LALT
),

 [_RAISE] = JLAYOUT(
     KC_TILD,KC_S1  ,KC_S2  ,KC_S3  ,KC_S4  ,KC_S5  ,       KC_S6  ,KC_S7  ,KC_S8  ,KC_S9  ,KC_S0  ,_______,
     _______,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,       KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_GRV ,
     _______,_______,KC_LBRC,KC_RBRC,KC_EQL ,KC_PLUS,       KC_MINS,KC_UND ,LCURL  ,RCURL,_______,_______,
                     _______,_______,                                          _______, _______,
                          _______, _______,_______,                        _______,_______,_______,
                                _______,_______,                               _______,_______
 ),
    
 [_LOWER] = JLAYOUT(
     _______,_______,KC_MS_BTN2,KC_MS_UP  ,KC_MS_BTN1 ,KC_MS_WH_UP  ,     KC_F11 ,KC_F12 ,_______, _______,_______,KC_INS,
     _______,_______,KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,KC_MS_WH_DOWN,     KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT ,_______,KC_DEL,
     _______,KC_F1  ,KC_F2     ,KC_F3     ,KC_F4      ,KC_F5        ,     KC_F6  ,KC_F7  ,KC_F8  ,KC_F9   ,KC_F10 ,_______,
                    _______,_______,                                              _______, _______,
                         _______, _______,_______,                  _______,_______,_______,
                               _______,_______,                         _______,_______
 )

};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}
