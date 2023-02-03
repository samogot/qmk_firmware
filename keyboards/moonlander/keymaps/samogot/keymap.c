#include QMK_KEYBOARD_H
#include "keymap_nordic.h"
#include "unicodemap_keymap_russian.h"
#include "unicodemap_keymap_ukrainian.h"

enum custom_keycodes {
    RGB_SLD = ML_SAFE_RANGE,
    CMD_OR_CTRL,
    CTRL_OR_WIN,
};

enum tap_dance_codes {
    DANCE_0,
    DANCE_1,
    DANCE_2,
    DANCE_3,
    DANCE_4,
    DANCE_5,
    DANCE_6,
    DANCE_7,
    DANCE_8,
    DANCE_9,
    DANCE_10,
    DANCE_11,
    DANCE_12,
    DANCE_13,
    DANCE_14,
};

/* clang-format off */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_MINUS,                                       KC_EQUAL,       KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPACE,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    TG(1),          KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_DELETE,                                      KC_BSPACE,      KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,
    KC_LCTRL,       KC_LALT,        KC_LGUI,        KC_LALT,        CMD_OR_CTRL,                    KC_ESCAPE,                                      KC_ENTER,                       TD(DANCE_1),    CTRL_OR_WIN,    KC_RGUI,        KC_RALT,        KC_RCTRL,
                                                                    ALL_T(KC_SPACE),SH_OS,          UC_MOD,                                         KC_APPLICATION, CAPS_WORD,      OSM(MOD_RSFT)
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, UA_44,          UA_43,          UA_42,          UA_41,          TD(DANCE_2),    KC_TRANSPARENT,                                 KC_TRANSPARENT, UA_39,          TD(DANCE_4),    UA_36,          UA_35,          UA_34,          UA_33,
    KC_TRANSPARENT, UA_31,          TD(DANCE_3),    UA_29,          UA_28,          UA_27,          KC_TRANSPARENT,                                 KC_TRANSPARENT, UA_26,          UA_25,          UA_24,          UA_23,          UA_22,          TD(DANCE_5),
    KC_TRANSPARENT, UA_20,          UA_19,          UA_18,          UA_17,          UA_16,                                                                          UA_15,          TD(DANCE_6),    TD(DANCE_7),    TD(DANCE_8),    TD(DANCE_9),    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT,                                 KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F11,                                         KC_F12,         KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_NO,
    KC_NO,          KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_NO,                                          KC_NO,          KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_TILD,        KC_BSPACE,      KC_NO,
    KC_TRANSPARENT, KC_TAB,         KC_QUOTE,       KC_DQUO,        KC_UNDS,        KC_MINUS,       KC_NO,                                          KC_NO,          KC_LCBR,        KC_LPRN,        KC_RPRN,        KC_RCBR,        KC_ENTER,       KC_NO,
    KC_NO,          KC_GRAVE,       KC_EQUAL,       KC_PLUS,        KC_LABK,        KC_RABK,                                                                        KC_PIPE,        KC_LBRACKET,    KC_RBRACKET,    KC_BSLASH,      KC_DELETE,      KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, TD(DANCE_0),                    KC_NO,                                          KC_NO,                          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_NO,          RGB_HUD,        RGB_HUD,        RGB_MOD,        RGB_TOG,        TOGGLE_LAYER_COLOR,KC_NO,                                       KC_NO,          KC_NO,          TD(DANCE_10),   KC_NO,          KC_NO,          KC_NO,          RESET,
    KC_NO,          KC_ESCAPE,      KC_MEDIA_PLAY_PAUSE,KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_KP_ASTERISK,KC_NO,                               KC_NO,          KC_KP_MINUS,    KC_7,           KC_8,           KC_9,           KC_BSPACE,      KC_NO,
    KC_TRANSPARENT, KC_TAB,         KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_KP_PLUS,   KC_NO,                                          KC_NO,          KC_EQUAL,       KC_4,           KC_5,           KC_6,           KC_ENTER,       KC_NO,
    KC_NO,          RGB_VAD,        RGB_VAI,        KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_KP_DOT,                                                                  KC_0,           KC_1,           KC_2,           KC_3,           KC_KP_SLASH,    KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, TD(DANCE_0),                    KC_NO,                                          KC_NO,                          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F11,                                         KC_F12,         KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_NO,
    KC_NO,          KC_ESCAPE,      KC_MS_WH_LEFT,  KC_MS_UP,       KC_MS_WH_RIGHT, KC_MS_BTN3,     KC_NO,                                          KC_NO,          TD(DANCE_11),   TD(DANCE_12),   TD(DANCE_13),   TD(DANCE_14),   KC_BSPACE,      KC_NO,
    KC_TRANSPARENT, KC_TAB,         KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_BTN1,     KC_NO,                                          KC_NO,          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_ENTER,       KC_NO,
    KC_NO,          KC_NO,          KC_MS_BTN2,     KC_MS_WH_UP,    KC_MS_WH_DOWN,  KC_NO,                                                                          KC_NO,          KC_MS_BTN1,     KC_MS_ACCEL0,   KC_MS_ACCEL2,   KC_DELETE,      KC_NO,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_0),                    KC_NO,                                          KC_NO,                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};
/* clang-format on */

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
    //    debug_enable   = true;
    //    debug_matrix   = true;
    //    debug_keyboard = true;
    //    debug_mouse    = true;
}

/* clang-format off */
const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,218,113}, {188,255,255}, {139,218,113}, {0,0,0}, {0,0,0}, {139,218,113}, {188,255,255}, {139,218,113}, {0,0,0}, {0,0,0}, {139,218,113}, {188,255,255}, {139,218,113}, {0,0,0}, {0,0,0}, {139,218,113}, {188,255,255}, {139,218,113}, {0,0,0}, {0,0,0}, {139,218,113}, {139,218,113}, {139,218,113}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,218,113}, {188,255,255}, {139,218,113}, {0,0,0}, {0,0,0}, {139,218,113}, {188,255,255}, {139,218,113}, {0,0,0}, {0,0,0}, {139,218,113}, {188,255,255}, {139,218,113}, {0,0,0}, {0,0,0}, {139,218,113}, {188,255,255}, {139,218,113}, {0,245,245}, {0,0,0}, {139,218,113}, {139,218,113}, {139,218,113}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {49,255,154}, {49,255,255}, {49,255,154}, {0,0,0}, {0,0,0}, {49,255,154}, {49,255,255}, {49,255,154}, {0,0,0}, {0,0,0}, {49,255,154}, {49,255,255}, {49,255,154}, {0,0,0}, {0,0,0}, {49,255,154}, {49,255,255}, {49,255,154}, {0,0,0}, {0,0,0}, {49,255,154}, {49,255,154}, {49,255,154}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {49,255,154}, {49,255,154}, {0,0,0}, {0,0,0}, {0,0,0}, {49,255,154}, {49,255,255}, {49,255,154}, {0,0,0}, {0,0,0}, {49,255,154}, {49,255,255}, {49,255,154}, {0,0,0}, {0,0,0}, {49,255,154}, {49,255,255}, {49,255,154}, {0,0,0}, {0,0,0}, {49,255,154}, {49,255,255}, {49,255,154}, {0,245,245}, {0,0,0}, {49,255,154}, {49,255,154}, {49,255,154}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {108,255,125}, {0,245,245}, {108,255,125}, {0,0,0}, {0,0,0}, {108,255,125}, {108,255,255}, {108,255,125}, {0,0,0}, {0,0,0}, {108,255,125}, {108,255,255}, {108,255,125}, {0,0,0}, {0,0,0}, {108,255,125}, {108,255,255}, {108,255,125}, {0,245,245}, {0,0,0}, {108,255,125}, {108,255,125}, {108,255,125}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {108,255,125}, {108,254,255}, {108,255,125}, {0,0,0}, {0,0,0}, {108,255,125}, {108,255,255}, {108,255,125}, {0,0,0}, {0,0,0}, {108,255,125}, {108,255,255}, {108,255,125}, {0,245,245}, {0,0,0}, {108,255,125}, {108,255,125}, {108,255,125}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {77,252,119}, {0,245,245}, {0,245,245}, {77,252,119}, {0,0,0}, {77,252,119}, {77,252,119}, {77,255,255}, {77,252,119}, {0,0,0}, {77,252,119}, {77,252,119}, {77,255,255}, {77,252,119}, {0,0,0}, {77,252,119}, {77,252,119}, {77,255,255}, {77,252,119}, {0,245,245}, {77,252,119}, {77,252,119}, {77,252,119}, {77,252,119}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {101,255,136}, {0,0,0}, {0,0,0}, {101,255,136}, {101,255,255}, {101,255,136}, {0,0,0}, {0,0,0}, {101,255,136}, {101,255,255}, {101,255,136}, {0,0,0}, {0,0,0}, {101,255,136}, {101,255,255}, {101,255,136}, {0,245,245}, {0,0,0}, {101,255,136}, {101,255,136}, {101,255,136}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {219,255,130}, {219,255,255}, {174,244,245}, {0,0,0}, {0,0,0}, {219,255,255}, {219,255,255}, {219,255,130}, {0,0,0}, {0,0,0}, {219,255,130}, {219,255,255}, {219,255,130}, {0,245,245}, {0,0,0}, {174,244,245}, {174,244,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {219,255,130}, {0,0,0}, {0,0,0}, {219,255,130}, {219,255,255}, {219,255,130}, {0,0,0}, {0,0,0}, {219,255,130}, {219,255,255}, {219,255,130}, {0,0,0}, {0,0,0}, {219,255,130}, {0,0,255}, {174,244,245}, {0,0,0}, {0,0,0}, {219,255,130}, {219,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};
/* clang-format on */

void set_layer_color(int layer) {
    for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (!hsv.h && !hsv.s && !hsv.v) {
            rgb_matrix_set_color(i, 0, 0, 0);
        } else {
            RGB   rgb = hsv_to_rgb(hsv);
            float f   = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
            rgb_matrix_set_color(i, f * rgb.r, f * rgb.g, f * rgb.b);
        }
    }
}

void rgb_matrix_indicators_user(void) {
    if (keyboard_config.disable_layer_led) {
        return;
    }
    switch (biton32(layer_state)) {
        case 0:
            set_layer_color(0);
            break;
        case 1:
            set_layer_color(1);
            break;
        case 2:
            set_layer_color(2);
            break;
        case 3:
            set_layer_color(3);
            break;
        case 4:
            set_layer_color(4);
            break;
        default:
            if (rgb_matrix_get_flags() == LED_FLAG_NONE) rgb_matrix_set_color_all(0, 0, 0);
            break;
    }
}

layer_state_t layer_state_set_user(layer_state_t state) {
    if (!keyboard_config.led_level) return state;
    bool LED_1 = false;
    bool LED_2 = false;
    bool LED_3 = false;
    bool LED_4 = false;

    uint8_t layer = get_highest_layer(state);
    switch (layer) {
        case 2:
            LED_1 = true;
            break;
        case 3:
            LED_2 = true;
            break;
        case 4:
            LED_3 = true;
            break;
        default:
            break;
    }

    if (IS_LAYER_ON_STATE(state, 1)) {
        LED_4 = true;
    }

    ML_LED_1(LED_1);
    ML_LED_2(LED_2);
    ML_LED_3(LED_3);
    ML_LED_4(LED_4);
    return state;
}

void caps_word_set_user(bool active) {
    ML_LED_6(active);
}

void tap_unicodemap_code_or_layout_change(uint16_t keycode, uint8_t other_layout_code) {
    if (get_unicode_input_mode() != UC_MAC) {
        tap_unicodemap_code(keycode);
    } else {
        tap_code16(HYPR(KC_1));
        wait_ms(40);
        if (is_caps_word_on()) {
            tap_code16(LSFT(other_layout_code));
        } else {
            tap_code(other_layout_code);
        }
        wait_ms(10);
        tap_code16(HYPR(KC_0));
        wait_ms(10);
    }
}

uint8_t cmd_or_ctrl(void) {
    if (get_unicode_input_mode() == UC_MAC) {
        return KC_LCMD;
    } else {
        return KC_LCTRL;
    }
}

uint8_t ctrl_or_win(void) {
    if (get_unicode_input_mode() == UC_MAC) {
        return KC_LCTRL;
    } else {
        return KC_LWIN;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RGB_SLD:
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
        case UA_28:
            if (record->event.pressed) {
                tap_unicodemap_code_or_layout_change(UA_28, KC_F);
            }
            return false;
        case UA_26:
            if (record->event.pressed) {
                tap_unicodemap_code_or_layout_change(UA_26, KC_H);
            }
            return false;
        case UC_MOD:
            ML_LED_5((get_unicode_input_mode() == UC_WINC));
            return true;
        case CMD_OR_CTRL:
            if (record->event.pressed) {
                register_code(cmd_or_ctrl());
            } else {
                unregister_code(cmd_or_ctrl());
            }
            return false;
        case CTRL_OR_WIN:
            if (record->event.pressed) {
                register_code(ctrl_or_win());
            } else {
                unregister_code(ctrl_or_win());
            }
            return false;
        case KC_MS_WH_UP:
        case KC_MS_WH_DOWN:
        case KC_MS_WH_LEFT:
            //        case KC_MS_RIGHT:
            if ((get_mods() | get_weak_mods()) & MOD_MASK_CG) {
                if (record->event.pressed) {
                    tap_code(keymap_key_to_keycode(0, record->event.key));
                }
                return false;
            }
            break;
        case TT(4):
            if (get_highest_layer(layer_state) == 4 && record->tap.count > 0) {
                return false;
            }
            break;
    }
    return true;
}

uint16_t keymap_key_to_keycode(uint8_t layer, keypos_t key) {
    if (layer == 1) {
        uint8_t mods = get_mods() | get_weak_mods();

#ifndef NO_ACTION_ONESHOT
        mods |= get_oneshot_mods();
#endif
        if (mods & ~MOD_MASK_SHIFT) {
            return KC_TRANSPARENT;
        }
    }
    if (key.row < MATRIX_ROWS && key.col < MATRIX_COLS) {
        return pgm_read_word(&keymaps[layer][key.row][key.col]);
    }
    return KC_NO;
}

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        case KC_MINS:
        case QK_UNICODEMAP ... QK_UNICODEMAP_PAIR_MAX:
        case TD(DANCE_1)... TD(DANCE_8):
            add_weak_mods(MOD_BIT(KC_LSFT)); // Apply shift to next key.
            send_keyboard_report();
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
        case TD(DANCE_0):
            return true;

        default:
            return false; // Deactivate Caps Word.
    }
}

enum combo_events { JK_ESC, THUMBS_TT_NAV, COMBO_LENGTH };
uint16_t               COMBO_LEN      = COMBO_LENGTH;
const uint16_t PROGMEM jk_combo[]     = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM tt_nav_combo[] = {CMD_OR_CTRL, TD(DANCE_1), COMBO_END};
combo_t                key_combos[]   = {
    [JK_ESC]        = COMBO(jk_combo, KC_ESC),
    [THUMBS_TT_NAV] = COMBO(tt_nav_combo, TT(4)),
};

typedef struct {
    bool    is_press_action;
    uint8_t step;
} tap;

enum { SINGLE_TAP = 1, SINGLE_HOLD, DOUBLE_TAP, DOUBLE_HOLD, DOUBLE_SINGLE_TAP, MORE_TAPS };

static tap dance_state[15];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed)
            return SINGLE_TAP;
        else
            return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted)
            return DOUBLE_SINGLE_TAP;
        else if (state->pressed)
            return DOUBLE_HOLD;
        else
            return DOUBLE_TAP;
    }
    return MORE_TAPS;
}

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    bool osl_is_held    = get_oneshot_layer_state() & ONESHOT_PRESSED;
    dance_state[0].step = osl_is_held ? get_oneshot_layer() : 0;
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    uint8_t held_osl    = dance_state[0].step;
    dance_state[0].step = 0;
    if (state->count == 1 && state->pressed) {
        dance_state[0].step = SINGLE_HOLD;
    }
    if (dance_state[0].step == SINGLE_HOLD) {
        caps_word_off();
        register_code16(cmd_or_ctrl());
    } else if (held_osl) {
        reset_oneshot_layer();
        layer_on(held_osl);
    } else {
        layer_and(2);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    if (dance_state[0].step == SINGLE_HOLD) {
        unregister_code16(cmd_or_ctrl());
    }
    dance_state[0].step = 0;
}

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    uint8_t current_layer = get_highest_layer(layer_state);
    uint8_t target_layer  = current_layer < 2 ? 2 : current_layer + 1;
    if (target_layer > 4 || state->count > 2) {
        target_layer = 4;
    }
    dance_state[1].step = target_layer;
    if (current_layer == 4) {
        send_char('\a');
        return;
    }
    if (target_layer < 4) {
        bool orig_paired    = rawhid_state.paired;
        rawhid_state.paired = false;
        set_oneshot_layer(target_layer, ONESHOT_START);
        layer_and(2 | (1 << target_layer));
        rawhid_state.paired = orig_paired;
    } else {
        reset_oneshot_layer();
        layer_and(2);
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    uint8_t target_layer = dance_state[1].step;
    if (target_layer < 4) {
        layer_state_set_oryx(1 << target_layer);
    } else if (state->count == 1 && target_layer == 4) {
        layer_on(target_layer);
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    uint8_t target_layer = dance_state[1].step;
    if (target_layer < 4) {
        clear_oneshot_layer_state(ONESHOT_PRESSED);
    }
    dance_state[1].step = 0;
}

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_unicodemap_code(UA_40);
        tap_unicodemap_code(UA_40);
        tap_unicodemap_code(UA_40);
    }
    if (state->count > 3) {
        tap_unicodemap_code(UA_40);
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP:
            tap_unicodemap_code(UA_40);
            break;
        case SINGLE_HOLD:
            tap_unicodemap_code(RU_YO);
            break;
        case DOUBLE_TAP:
            tap_unicodemap_code(UA_40);
            tap_unicodemap_code(UA_40);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_unicodemap_code(UA_40);
            tap_unicodemap_code(UA_40);
    }
}

void on_dance_3(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_unicodemap_code(UA_30);
        tap_unicodemap_code(UA_30);
        tap_unicodemap_code(UA_30);
    }
    if (state->count > 3) {
        tap_unicodemap_code(UA_30);
    }
}

void dance_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP:
            tap_unicodemap_code(UA_30);
            break;
        case SINGLE_HOLD:
            tap_unicodemap_code(RU_YERU);
            break;
        case DOUBLE_TAP:
            tap_unicodemap_code(UA_30);
            tap_unicodemap_code(UA_30);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_unicodemap_code(UA_30);
            tap_unicodemap_code(UA_30);
    }
}

void on_dance_4(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_unicodemap_code(UA_38);
        tap_unicodemap_code(UA_38);
        tap_unicodemap_code(UA_38);
    }
    if (state->count > 3) {
        tap_unicodemap_code(UA_38);
    }
}

void dance_4_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP:
            tap_unicodemap_code(UA_38);
            break;
        case SINGLE_HOLD:
            tap_unicodemap_code_or_layout_change(UA_37, KC_GRAVE);
            break;
        case DOUBLE_TAP:
            tap_unicodemap_code(UA_38);
            tap_unicodemap_code(UA_38);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_unicodemap_code(UA_38);
            tap_unicodemap_code(UA_38);
    }
}

void on_dance_5(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_unicodemap_code(UA_21);
        tap_unicodemap_code(UA_21);
        tap_unicodemap_code(UA_21);
    }
    if (state->count > 3) {
        tap_unicodemap_code(UA_21);
    }
}

void dance_5_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP:
            tap_unicodemap_code(UA_21);
            break;
        case SINGLE_HOLD:
            tap_unicodemap_code(RU_E);
            break;
        case DOUBLE_TAP:
            tap_unicodemap_code(UA_21);
            tap_unicodemap_code(UA_21);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_unicodemap_code(UA_21);
            tap_unicodemap_code(UA_21);
    }
}

void on_dance_6(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_unicodemap_code(UA_14);
        tap_unicodemap_code(UA_14);
        tap_unicodemap_code(UA_14);
    }
    if (state->count > 3) {
        tap_unicodemap_code(UA_14);
    }
}

void dance_6_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP:
            tap_unicodemap_code(UA_14);
            break;
        case SINGLE_HOLD:
            tap_unicodemap_code(RU_HARD);
            break;
        case DOUBLE_TAP:
            tap_unicodemap_code(UA_14);
            tap_unicodemap_code(UA_14);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_unicodemap_code(UA_14);
            tap_unicodemap_code(UA_14);
    }
}

void on_dance_7(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_unicodemap_code(UA_13);
        tap_unicodemap_code(UA_13);
        tap_unicodemap_code(UA_13);
    }
    if (state->count > 3) {
        tap_unicodemap_code(UA_13);
    }
}

void dance_7_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP:
            tap_unicodemap_code(UA_13);
            break;
        case SINGLE_HOLD:
            caps_word_off();
            tap_code16(KC_COMMA);
            break;
        case DOUBLE_TAP:
            tap_unicodemap_code(UA_13);
            tap_unicodemap_code(UA_13);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_unicodemap_code(UA_13);
            tap_unicodemap_code(UA_13);
    }
}

void on_dance_8(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_unicodemap_code(UA_12);
        tap_unicodemap_code(UA_12);
        tap_unicodemap_code(UA_12);
    }
    if (state->count > 3) {
        tap_unicodemap_code(UA_12);
    }
}

void dance_8_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP:
            tap_unicodemap_code(UA_12);
            break;
        case SINGLE_HOLD:
            caps_word_off();
            tap_code16(KC_DOT);
            break;
        case DOUBLE_TAP:
            tap_unicodemap_code(UA_12);
            tap_unicodemap_code(UA_12);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_unicodemap_code(UA_12);
            tap_unicodemap_code(UA_12);
    }
}

void on_dance_9(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_unicodemap_code(UA_32);
        tap_unicodemap_code(UA_32);
        tap_unicodemap_code(UA_32);
    }
    if (state->count > 3) {
        tap_unicodemap_code(UA_32);
    }
}

void dance_9_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP:
            tap_unicodemap_code(UA_32);
            break;
        case SINGLE_HOLD:
            caps_word_off();
            tap_code16(KC_SLASH);
            break;
        case DOUBLE_TAP:
            tap_unicodemap_code(UA_32);
            tap_unicodemap_code(UA_32);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_unicodemap_code(UA_32);
            tap_unicodemap_code(UA_32);
    }
}

void on_dance_10(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(LCTL(LSFT(KC_MEDIA_EJECT)));
        tap_code16(LCTL(LSFT(KC_MEDIA_EJECT)));
        tap_code16(LCTL(LSFT(KC_MEDIA_EJECT)));
    }
    if (state->count > 3) {
        tap_code16(LCTL(LSFT(KC_MEDIA_EJECT)));
    }
}

void dance_10_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP:
            register_code16(LCTL(LSFT(KC_MEDIA_EJECT)));
            break;
        case DOUBLE_TAP:
            register_code16(LALT(LGUI(KC_MEDIA_EJECT)));

            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(LCTL(LSFT(KC_MEDIA_EJECT)));
            register_code16(LCTL(LSFT(KC_MEDIA_EJECT)));
    }
}

void dance_10_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP:
            unregister_code16(LCTL(LSFT(KC_MEDIA_EJECT)));
            break;
        case DOUBLE_TAP:
            unregister_code16(LALT(LGUI(KC_MEDIA_EJECT)));

            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(LCTL(LSFT(KC_MEDIA_EJECT)));
            break;
    }
    dance_state[10].step = 0;
}

void on_dance_11(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_HOME);
        tap_code16(KC_HOME);
        tap_code16(KC_HOME);
    }
    if (state->count > 3) {
        tap_code16(KC_HOME);
    }
}

void dance_11_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP:
            register_code16(KC_HOME);
            break;
        case SINGLE_HOLD:
            register_code16(LALT(LCTL(LGUI(LSFT(KC_H)))));
            break;
        case DOUBLE_TAP:
            register_code16(KC_HOME);
            register_code16(KC_HOME);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_HOME);
            register_code16(KC_HOME);
    }
}

void dance_11_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP:
            unregister_code16(KC_HOME);
            break;
        case SINGLE_HOLD:
            unregister_code16(LALT(LCTL(LGUI(LSFT(KC_H)))));
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_HOME);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_HOME);
            break;
    }
    dance_state[11].step = 0;
}

void on_dance_12(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_PGDOWN);
        tap_code16(KC_PGDOWN);
        tap_code16(KC_PGDOWN);
    }
    if (state->count > 3) {
        tap_code16(KC_PGDOWN);
    }
}

void dance_12_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP:
            register_code16(KC_PGDOWN);
            break;
        case SINGLE_HOLD:
            register_code16(LGUI(KC_LBRACKET));
            break;
        case DOUBLE_TAP:
            register_code16(KC_PGDOWN);
            register_code16(KC_PGDOWN);
            break;
        case DOUBLE_HOLD:
            register_code16(LALT(LCTL(LGUI(LSFT(KC_J)))));
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_PGDOWN);
            register_code16(KC_PGDOWN);
    }
}

void dance_12_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP:
            unregister_code16(KC_PGDOWN);
            break;
        case SINGLE_HOLD:
            unregister_code16(LGUI(KC_LBRACKET));
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_PGDOWN);
            break;
        case DOUBLE_HOLD:
            unregister_code16(LALT(LCTL(LGUI(LSFT(KC_J)))));
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_PGDOWN);
            break;
    }
    dance_state[12].step = 0;
}

void on_dance_13(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_PGUP);
        tap_code16(KC_PGUP);
        tap_code16(KC_PGUP);
    }
    if (state->count > 3) {
        tap_code16(KC_PGUP);
    }
}

void dance_13_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP:
            register_code16(KC_PGUP);
            break;
        case SINGLE_HOLD:
            register_code16(LGUI(KC_RBRACKET));
            break;
        case DOUBLE_TAP:
            register_code16(KC_PGUP);
            register_code16(KC_PGUP);
            break;
        case DOUBLE_HOLD:
            register_code16(LALT(LCTL(LGUI(LSFT(KC_K)))));
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_PGUP);
            register_code16(KC_PGUP);
    }
}

void dance_13_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP:
            unregister_code16(KC_PGUP);
            break;
        case SINGLE_HOLD:
            unregister_code16(LGUI(KC_RBRACKET));
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_PGUP);
            break;
        case DOUBLE_HOLD:
            unregister_code16(LALT(LCTL(LGUI(LSFT(KC_K)))));
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_PGUP);
            break;
    }
    dance_state[13].step = 0;
}

void on_dance_14(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_END);
        tap_code16(KC_END);
        tap_code16(KC_END);
    }
    if (state->count > 3) {
        tap_code16(KC_END);
    }
}

void dance_14_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP:
            register_code16(KC_END);
            break;
        case SINGLE_HOLD:
            register_code16(LALT(LCTL(LGUI(LSFT(KC_L)))));
            break;
        case DOUBLE_TAP:
            register_code16(KC_END);
            register_code16(KC_END);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_END);
            register_code16(KC_END);
    }
}

void dance_14_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP:
            unregister_code16(KC_END);
            break;
        case SINGLE_HOLD:
            unregister_code16(LALT(LCTL(LGUI(LSFT(KC_L)))));
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_END);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_END);
            break;
    }
    dance_state[14].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [DANCE_0]  = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
    [DANCE_1]  = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
    [DANCE_2]  = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, NULL),
    [DANCE_3]  = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, NULL),
    [DANCE_4]  = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, NULL),
    [DANCE_5]  = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, NULL),
    [DANCE_6]  = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, NULL),
    [DANCE_7]  = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, NULL),
    [DANCE_8]  = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, NULL),
    [DANCE_9]  = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, NULL),
    [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
    [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
    [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
    [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
    [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
};
