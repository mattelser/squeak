#include "quantum.h"

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { // encoder 0
        if (clockwise) {
            tap_code(KC_MS_UP);
        } else {
            tap_code(KC_MS_DOWN);
        }
    } else { // encoder 1
        if (clockwise) {
            tap_code(KC_MS_LEFT);
        } else {
            tap_code(KC_MS_RIGHT);
        }
    }
    return false;
}

