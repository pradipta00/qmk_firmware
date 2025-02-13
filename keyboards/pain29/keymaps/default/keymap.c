#include QMK_KEYBOARD_H

#define _DV 0
#define _UT 1
#define _NM 2
#define _MS 3
#define _FN 4

#define KX_LCTL OSM(MOD_LCTL)
#define KX_LSFT OSM(MOD_LSFT)
#define KX_LALT OSM(MOD_LALT)
#define KX_LGUI OSM(MOD_LGUI)

// 1: Utilities => arrow, basic symbol && next layer hotkeys
// 2: Numbers
// 3: Mouse Buttons
// 4: Functions => Command && Macros


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DV] = LAYOUT(
    //                           ,--------------------------------------------------------------.
                                    KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
         KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
                  KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,
    //         |--------+--------+--------+--------+--------+--------+--------+--------+--------|
                         KC_BSPC,          KC_SPC,           MO(_UT)
    //                  ,--------------------------------------------.
  ),

  [_UT] = LAYOUT(
    //                           ,--------------------------------------------------------------.
                                  KC_ESC,  MO(_NM), KC_MINS, KC_LPRN, KC_RPRN,  KC_GRV, KC_TAB,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
       KC_QUOT, KC_COMM,  KC_DOT, KC_SLSH, KC_BSLS, KC_ENT,  KC_LEFT, KC_DOWN,  KC_UP,  KC_RIGHT,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|-
                KX_LGUI, KX_LALT, KX_LCTL, KX_LSFT, KC_SCLN, KC_EQL,  KC_EXLM, KC_LBRC, KC_RBRC,
    //         |--------+--------+--------+--------+--------+--------+--------+--------+--------|
                         KC_BSPC,          KC_SPC,           KC_TRNS
    //                  ,--------------------------------------------.
  ),

  [_NM] = LAYOUT(
    //                           ,--------------------------------------------------------------.
                                  MO(_MS), XXXXXXX, KC_BRIU,   KC_1,    KC_2,    KC_3,  XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
       KC_MPRV, KC_MNXT, KC_MPLY, KC_BRID, KC_VOLD, KC_VOLU,   KC_4,    KC_5,    KC_6,   KC_0,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
                KC_HOME, KC_END,  KC_PGDN, KC_PGUP, KC_EXLM,   KC_7,    KC_8,    KC_9,  XXXXXXX,
    //         |--------+--------+--------+--------+--------+--------+--------+--------+--------|
                          KC_BSPC,           KC_SPC,           KC_ENT
    //                  ,--------------------------------------------.
  ),

  [_MS] = LAYOUT(
    //                           ,--------------------------------------------------------------.
                                  XXXXXXX, XXXXXXX, TG(_FN), KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
       KC_ACL0, KC_ACL1, KC_ACL2, XXXXXXX, XXXXXXX, XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
                DM_REC1, DM_REC2, DM_RSTP, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, DM_PLY1, DM_PLY2,
    //         |--------+--------+--------+--------+--------+--------+--------+--------+--------|
                          KC_BSPC,           KC_SPC,           KC_ENT
    //                  ,--------------------------------------------.
  ),
  [_FN] = LAYOUT(
    //                           ,--------------------------------------------------------------.
                                  TG(_DV), TG(_DV), TG(_DV), TG(_DV), TG(_DV),  KC_F11,  KC_F12,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
                RESET,   RESET,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RESET,   RESET,
    //         |--------+--------+--------+--------+--------+--------+--------+--------+--------|
                          KC_BSPC,           KC_SPC,           KC_ENT
    //                  ,--------------------------------------------.
  ),
};
