#include QMK_KEYBOARD_H
#include "split_util.h"
#include "oled_renders.h"

#define BASE 0
#define SYMBOLS 1
#define FUNCTIONS 2
#define QMK 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
//,-----------------------------------------------------.                    ,-----------------------------------------------------.
     KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC,
//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC,
//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                        KC_LGUI,   MO(1),  KC_SPC,     KC_ENT,   TO(1), KC_RALT
                                    //+--------------------------|  |--------------------------+
  ),
    [1] = LAYOUT_split_3x6_3(
//,-----------------------------------------------------.                    ,-----------------------------------------------------.
     KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_LSFT,  KC_GRV, KC_BSLS, KC_MINS,  KC_EQL, KC_LBRC,                      KC_RBRC, KC_HOME,   KC_UP,  KC_END, KC_PGUP,  KC_DEL,
//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_LCTL,   KC_F5,  KC_F10,  KC_F11,  KC_F12, KC_LALT,                      KC_PSCR, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,  KC_ESC,
//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                        KC_LGUI,   TO(0),  KC_SPC,     KC_ENT,   TO(2), KC_RALT
                                    //+--------------------------|  |--------------------------+
  ),
    [2] = LAYOUT_split_3x6_3(
//,-----------------------------------------------------.                    ,-----------------------------------------------------.
     KC_TAB,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, KC_BSPC,
//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_LSFT,  KC_F11,  KC_F12,   KC_NO,   KC_NO,   KC_NO,                      KC_MNXT, KC_MPLY, KC_VOLU,   KC_NO, KC_BRIU,  KC_DEL,
//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_LCTL, KC_CAPS, KC_CALC,   KC_NO,   KC_NO,   KC_NO,                      KC_MPRV, KC_MSTP, KC_VOLD, KC_MUTE, KC_BRID,  KC_ESC,
//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                        KC_LGUI,   TO(1),  KC_SPC,     KC_ENT,   MO(3), KC_RALT
                                    //+--------------------------|  |--------------------------+
  ),
    [3] = LAYOUT_split_3x6_3(
//,-----------------------------------------------------.                    ,-----------------------------------------------------.
    RGB_TOG, VK_TOGG,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI,   KC_NO,                        BL_UP,   BL_ON,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
   RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD,   KC_NO,                      BL_DOWN,  BL_OFF,   KC_NO,   KC_NO,   KC_NO, QK_BOOT,
//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_NO,   TO(2),   KC_NO,      KC_NO,   TO(2),   KC_NO
                                    //+--------------------------|  |--------------------------+
  )
};

// #pragma region OLED
#ifdef OLED_ENABLE
    oled_rotation_t oled_init_user(oled_rotation_t rotation) {
        if (is_keyboard_master()) {
            return OLED_ROTATION_270;
        }
        
        return OLED_ROTATION_180;
    }

    bool oled_task_user(void) {
        setPetStates();

        if (is_keyboard_master()) {
            print_left_screen();
        } else {
            print_right_screen();
            oled_scroll_left();  // Turns on scrolling
        }
        return false;
    }
#endif
// #pragma endregion

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_LCTL:
            isSneaking = record->event.pressed;
            break;
        case KC_SPC:
            isJumping = record->event.pressed;
            if (isJumping) {
                showedJump = false;
            }
            break;
        case KC_CAPS:
            isBarking = record->event.pressed;
            break;
    }

    return true; // Let QMK send the key press/release events
}
