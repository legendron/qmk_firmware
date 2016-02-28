// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// this is the style you want to emulate.

#include "das4.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
// #define _BW 0
// #define _BM 1
// #define _FL 2
#define _BM 0
#define _FL 1
#define _MV 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//   /* Keymap _BW: (Base Windows) Windows Default Layer
//    */
// [_BW] = KEYMAP( \
// 	KC_ESC,         KC_F1,    KC_F2,    KC_F3,    KC_F4,           KC_F5,    KC_F6,    KC_F7,    KC_F8,          KC_F9,    KC_F10,    KC_F11,    KC_F12,   \
// 	KC_GRV,  KC_1,   KC_2,     KC_3,     KC_4,     KC_5,        KC_6,     KC_7,     KC_8,     KC_9,        KC_0,     KC_MINS,   KC_EQL,          KC_BSPC,  \
// 	KC_TAB,    KC_Q,   KC_W,     KC_E,     KC_R,     KC_T,        KC_Y,     KC_U,     KC_I,     KC_O,        KC_P,     KC_LBRC,   KC_RBRC,       KC_BSLS,  \
// 	KC_CAPS,     KC_A,   KC_S,     KC_D,     KC_F,     KC_G,        KC_H,     KC_J,     KC_K,     KC_L,        KC_SCLN,  KC_QUOT,                KC_ENT,   \
// 	KC_LSFT,       KC_Z,   KC_X,     KC_C,     KC_V,     KC_B,        KC_N,     KC_M,     KC_COMM,  KC_DOT,      KC_SLSH,                        KC_RSFT,  \
// 	KC_LCTL,  KC_LGUI,  KC_LALT,                         KC_SPC,                            KC_RALT,             KC_RGUI,         KC_APP,        KC_RCTL,  \
// 	KC_PSCR, KC_SLCK, KC_PAUS, \
// 	KC_INS,  KC_HOME, KC_PGUP, \
// 	KC_DEL,  KC_END,  KC_PGDN, \
// 	         KC_UP,            \
// 	KC_LEFT, KC_DOWN, KC_RGHT, \
// 	KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, \
// 	KC_P7,   KC_P8,   KC_P9,   KC_PPLS, \
// 	KC_P4,   KC_P5,   KC_P6,            \
// 	KC_P1,   KC_P2,   KC_P3,   KC_PENT, \
// 	KC_P0,            KC_PDOT           \
  ),
  /* Keymap _BM: (Base Mac) Mac Default Layer
   */
 [_BM] = KEYMAP( \
 	KC_ESC,         KC_F1,    KC_F2,    KC_F3,    KC_F4,           KC_F5,    KC_F6,    KC_F7,    KC_F8,          KC_F9,    KC_F10,    KC_F11,    KC_F12,   \
 	KC_GRV,   KC_1,   KC_2,     KC_3,     KC_4,     KC_5,        KC_6,     KC_7,     KC_8,     KC_9,        KC_0,     KC_MINS,   KC_EQL,         KC_BSPC,  \
 	KC_TAB,    KC_Q,   KC_W,     KC_E,     KC_R,     KC_T,        KC_Y,     KC_U,     KC_I,     KC_O,        KC_P,     KC_LBRC,   KC_RBRC,       KC_BSLS,  \
 	F(1),       KC_A,   KC_S,     KC_D,     KC_F,     KC_G,        KC_H,     KC_J,     KC_K,     KC_L,        KC_SCLN,  KC_QUOT,                 KC_ENT,   \
 	KC_LSFT,       KC_Z,   KC_X,     KC_C,     KC_V,     KC_B,        KC_N,     KC_M,     KC_COMM,  KC_DOT,      KC_SLSH,                        KC_RSFT,  \
 	KC_LCTL,  KC_LALT,  KC_LGUI,                         KC_SPC,                            KC_RGUI,             KC_RALT,         KC_RCTL,       F(2),     \
 	KC_PSCR, KC_SLCK, KC_PAUS, \
 	KC_INS,  KC_HOME, KC_PGUP, \
 	KC_DEL,  KC_END,  KC_PGDN, \
 	         KC_UP,            \
 	KC_LEFT, KC_DOWN, KC_RGHT, \
 	KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, \
 	KC_P7,   KC_P8,   KC_P9,   KC_PPLS, \
 	KC_P4,   KC_P5,   KC_P6,            \
 	KC_P1,   KC_P2,   KC_P3,   KC_PENT, \
 	KC_P0,            KC_PDOT           \
   ),
  /* Keymap _FL: Function Layer
   */
[_FL] = KEYMAP( \
 	KC_TRNS,        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,         KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,  KC_TRNS,   KC_TRNS,    KC_TRNS,   \
 	KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_TRNS,  KC_TRNS,   KC_TRNS,         KC_TRNS,  \
 	KC_CAPS,   KC_TRNS, KC_UP,    KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_TRNS,  KC_PGUP,  KC_TRNS,  KC_TRNS,     KC_TRNS,  KC_TRNS,   KC_TRNS,       KC_TRNS,  \
 	KC_TRNS,     KC_LEFT, KC_DOWN,  KC_RGHT,  KC_TRNS,  KC_HOME,     KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,     KC_END,   KC_TRNS,                KC_TRNS,   \
 	KC_TRNS,       KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_TRNS,  KC_PGDN,  KC_TRNS,  KC_TRNS,     KC_TRNS,                        KC_TRNS,  \
 	KC_TRNS,  KC_TRNS,  KC_TRNS,                         KC_TRNS,                            KC_TRNS,             KC_TRNS,         KC_TRNS,       KC_TRNS,  \
 	KC_TRNS, KC_TRNS, KC_TRNS, \
 	KC_TRNS, KC_TRNS, KC_TRNS, \
 	KC_TRNS, KC_TRNS, KC_TRNS, \
 	         KC_TRNS,          \
 	KC_TRNS, KC_TRNS, KC_TRNS, \
 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
 	KC_TRNS, KC_TRNS, KC_TRNS,          \
 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
 	KC_TRNS,          KC_TRNS           \
   )
};


enum function_id {
    RGBLED_TOGGLE,
};

const uint16_t PROGMEM fn_actions[] = {
  [0]  = ACTION_NO,
  [1]  = ACTION_LAYER_TAP_KEY(_FL, KC_ESC),
  [2]  = ACTION_LAYER_ON(_MV, ON_PRESS),
  [3]  = ACTION_LAYER_OFF(_MV, ON_PRESS),
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  switch (id) {
    case RGBLED_TOGGLE:
      //led operations
      if (record->event.pressed) {
        // rgblight_toggle();
      }

      break;
  }
}

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          return (record->event.pressed ? MACRO( D(LSFT) ,T(H) , U(LSFT), T(E), T(L), T(L), T(O), END ) :MACRO( END ));
          break;
        case 1:
          return (record->event.pressed ? MACRO(D(LSFT),T(A),T(S),T(D),U(LSFT),T(F),T(G),T(H), END ) :MACRO( END ));
          break;
      }
    return MACRO_NONE;
};
