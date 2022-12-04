#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"
#include "unicodemap_keymap_russian.h"
#include "unicodemap_keymap_ukrainian.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  CMD_OR_CTRL,
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
  DANCE_15,
    DANCE_TG,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_MINUS,                                       KC_EQUAL,       KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPACE,      
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    TG(1),          KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_DELETE,                                                                      KC_BSPACE,      KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,      
    KC_LCTRL,       KC_LALT,        KC_LGUI,        KC_LALT,        CMD_OR_CTRL,        KC_ESCAPE,                                                                                                      KC_ENTER,       TD(DANCE_TG),          KC_RCTRL,       KC_RGUI,        KC_RALT,        KC_RCTRL,
    ALL_T(KC_SPACE),UC_MOD,         SH_OS,                 KC_APPLICATION, CAPS_WORD,      OSM(MOD_RSFT)
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, UA_44,          UA_43,          UA_42,          UA_41,          TD(DANCE_0),    KC_TRANSPARENT,                                 KC_TRANSPARENT, UA_39,          TD(DANCE_2),    UA_36,          UA_35,          UA_34,          UA_33,
    KC_TRANSPARENT, UA_31,          TD(DANCE_1),    UA_29,          UA_28,          UA_27,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, UA_26,          UA_25,          UA_24,          UA_23,          UA_22,          TD(DANCE_3),
    KC_TRANSPARENT, UA_20,          UA_19,          UA_18,          UA_17,          UA_16,                                          UA_15,          TD(DANCE_4),    TD(DANCE_5),    TD(DANCE_6),    TD(DANCE_7),    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F11,                                         KC_F12,         KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_NO,          
    KC_NO,          KC_ESCAPE,      KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_NO,                                          KC_NO,          KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_TILD,        KC_BSPACE,      KC_NO,          
    KC_NO,          KC_TAB,         KC_QUOTE,       KC_DQUO,        KC_UNDS,        KC_MINUS,       KC_NO,                                                                          KC_NO,          KC_BSLASH,      KC_LPRN,        KC_RPRN,        KC_PIPE,        KC_ENTER,       KC_NO,
    KC_NO,          KC_GRAVE,       KC_EQUAL,       KC_PLUS,        KC_SCOLON,      KC_COLN,                                        KC_LBRACKET,    KC_LCBR,        KC_RCBR,        KC_RBRACKET,    KC_EXLM,        KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, TD(DANCE_8),    KC_NO,                                                                                                          KC_NO,          TD(DANCE_TG),          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_NO,          RGB_HUD,        RGB_HUD,        RGB_MOD,        RGB_TOG,        TOGGLE_LAYER_COLOR,KC_NO,                                          KC_NO,          KC_NO,          TD(DANCE_10),   KC_NO,          KC_NO,          KC_NO,          RESET,
    KC_NO,          KC_ESCAPE,      KC_MEDIA_PLAY_PAUSE,KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_KP_ASTERISK, KC_NO,                                          KC_NO,          KC_KP_MINUS,    KC_7,           KC_8,           KC_9,           KC_BSPACE,      KC_NO,
    KC_NO,          KC_TAB,         KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_KP_PLUS,     KC_NO,                                                                          KC_NO,          KC_EQUAL,       KC_4,           KC_5,           KC_6,           KC_ENTER,       KC_NO,
    KC_NO,          RGB_VAD,        RGB_VAI,        KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_KP_DOT,                                      KC_0,           KC_1,           KC_2,           KC_3,           KC_KP_SLASH,    KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, TD(DANCE_8),   KC_NO,                                                                                                          KC_NO,          TD(DANCE_TG),          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_ESCAPE,      KC_MS_WH_LEFT,  KC_MS_UP,       KC_MS_WH_RIGHT, KC_MS_BTN3,     KC_NO,                                          KC_NO,          TD(DANCE_12),   TD(DANCE_13),   TD(DANCE_14),   TD(DANCE_15),   KC_BSPACE,      KC_NO,
    KC_NO,          KC_TAB,         KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,          KC_NO,                                                                          KC_NO,          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_ENTER,       KC_NO,
    KC_NO,          KC_GRAVE,       KC_MS_BTN2,     KC_MS_WH_UP,    KC_MS_WH_DOWN,  KC_DELETE,                                      KC_NO,          KC_MS_BTN1,     KC_MS_ACCEL0,   KC_MS_ACCEL2,   KC_NO,          KC_NO,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LALT,        TD(DANCE_8),   KC_NO,                                                                                                          KC_NO,          KC_MS_BTN1,     KC_RCTRL,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
//  debug_enable=true;
//  debug_matrix=true;
//  debug_keyboard=true;
//  debug_mouse=true;
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,218,113}, {188,255,255}, {139,218,113}, {0,0,0}, {0,0,0}, {139,218,113}, {188,255,255}, {139,218,113}, {0,0,0}, {0,0,0}, {139,218,113}, {188,255,255}, {139,218,113}, {0,0,0}, {0,0,0}, {139,218,113}, {188,255,255}, {139,218,113}, {0,0,0}, {0,0,0}, {139,218,113}, {139,218,113}, {139,218,113}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,218,113}, {188,255,255}, {139,218,113}, {0,0,0}, {0,0,0}, {139,218,113}, {188,255,255}, {139,218,113}, {0,0,0}, {0,0,0}, {139,218,113}, {188,255,255}, {139,218,113}, {0,0,0}, {0,0,0}, {139,218,113}, {188,255,255}, {139,218,113}, {0,245,245}, {0,0,0}, {139,218,113}, {139,218,113}, {139,218,113}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {49,255,154}, {49,255,255}, {49,255,154}, {0,0,0}, {0,0,0}, {49,255,154}, {49,255,255}, {49,255,154}, {0,0,0}, {0,0,0}, {49,255,154}, {49,255,255}, {49,255,154}, {0,0,0}, {0,0,0}, {49,255,154}, {49,255,255}, {49,255,154}, {0,0,0}, {0,0,0}, {49,255,154}, {49,255,154}, {49,255,154}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {49,255,154}, {49,255,154}, {0,0,0}, {0,0,0}, {0,0,0}, {49,255,154}, {49,255,255}, {49,255,154}, {0,0,0}, {0,0,0}, {49,255,154}, {49,255,255}, {49,255,154}, {0,0,0}, {0,0,0}, {49,255,154}, {49,255,255}, {49,255,154}, {0,0,0}, {0,0,0}, {49,255,154}, {49,255,255}, {49,255,154}, {0,245,245}, {0,0,0}, {49,255,154}, {49,255,154}, {49,255,154}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {108,255,125}, {0,0,0}, {0,0,0}, {108,255,125}, {108,255,255}, {108,255,125}, {0,0,0}, {0,0,0}, {108,255,125}, {108,255,255}, {108,255,125}, {0,0,0}, {0,0,0}, {108,255,125}, {108,255,255}, {108,255,125}, {0,245,245}, {0,0,0}, {108,255,125}, {108,255,125}, {108,255,125}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {108,255,125}, {0,0,0}, {0,0,0}, {108,255,125}, {108,255,255}, {108,255,125}, {0,0,0}, {0,0,0}, {108,255,125}, {108,255,255}, {108,255,125}, {0,0,0}, {0,0,0}, {108,255,125}, {108,255,255}, {108,255,125}, {0,245,245}, {0,0,0}, {108,255,125}, {108,255,125}, {108,255,125}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {77,252,119}, {0,245,245}, {0,245,245}, {77,252,119}, {0,0,0}, {77,252,119}, {77,252,119}, {77,255,255}, {77,252,119}, {0,0,0}, {77,252,119}, {77,252,119}, {77,255,255}, {77,252,119}, {0,0,0}, {77,252,119}, {77,252,119}, {77,255,255}, {77,252,119}, {0,245,245}, {77,252,119}, {77,252,119}, {77,252,119}, {77,252,119}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {101,255,136}, {0,0,0}, {0,0,0}, {101,255,136}, {101,255,255}, {101,255,136}, {0,0,0}, {0,0,0}, {101,255,136}, {101,255,255}, {101,255,136}, {0,0,0}, {0,0,0}, {101,255,136}, {101,255,255}, {101,255,136}, {0,245,245}, {0,0,0}, {101,255,136}, {101,255,136}, {101,255,136}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {219,255,130}, {0,0,0}, {0,0,0}, {219,255,130}, {219,255,255}, {174,244,245}, {0,0,0}, {0,0,0}, {219,255,255}, {219,255,255}, {219,255,130}, {0,0,0}, {0,0,0}, {219,255,130}, {219,255,255}, {219,255,130}, {0,245,245}, {0,0,0}, {174,244,245}, {0,0,0}, {219,255,130}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {219,255,130}, {219,255,255}, {219,255,130}, {0,0,0}, {0,0,0}, {219,255,130}, {219,255,255}, {219,255,130}, {0,0,0}, {0,0,0}, {219,255,130}, {0,0,255}, {174,244,245}, {0,245,245}, {0,0,0}, {219,255,130}, {219,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return; }
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
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
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

void tap_unicodemap_code_or_latin(uint16_t keycode, uint8_t latin_replacement) {
    if (get_unicode_input_mode() != UC_MAC) {
        tap_unicodemap_code(keycode);
    } else {
        if (is_caps_word_on()) {
            tap_code16(LSFT(latin_replacement));
        } else {
            tap_code(latin_replacement);
        }
    }
}

uint8_t cmd_or_ctrl(void) {
    if (get_unicode_input_mode() == UC_MAC) {
        return KC_LCMD;
    } else {
        return KC_LCTRL;
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
                tap_unicodemap_code_or_latin(UA_28, KC_A);
            }
            return false;
        case UA_26:
            if (record->event.pressed) {
                tap_unicodemap_code_or_latin(UA_26, KC_P);
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
        case KC_MS_WH_UP:
            if ((get_mods() | get_weak_mods()) & MOD_MASK_CG) {
                if (record->event.pressed) {
                    tap_code(KC_C);
                }
                return false;
            }
            break;
        case KC_MS_WH_DOWN:
            if ((get_mods() | get_weak_mods()) & MOD_MASK_CG) {
                if (record->event.pressed) {
                    tap_code(KC_V);
                }
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
        case TD(DANCE_0) ... TD(DANCE_7):
            add_weak_mods(MOD_BIT(KC_LSFT)); // Apply shift to next key.
            send_keyboard_report();
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
        case TD(DANCE_8):
        case TD(DANCE_11):
        case TD(DANCE_TG):
            return true;

        default:
            return false; // Deactivate Caps Word.
    }
}

enum combo_events {
  JK_ESC,
  COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;
const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
combo_t key_combos[] = {
  [JK_ESC] = COMBO(jk_combo, KC_ESC),
};

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[17];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_unicodemap_code(UA_40);
        tap_unicodemap_code(UA_40);
        tap_unicodemap_code(UA_40);
    }
    if(state->count > 3) {
        tap_unicodemap_code(UA_40);
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: tap_unicodemap_code(UA_40); break;
        case SINGLE_HOLD: tap_unicodemap_code(RU_YO); break;
        case DOUBLE_TAP: tap_unicodemap_code(UA_40); tap_unicodemap_code(UA_40); break;
        case DOUBLE_SINGLE_TAP: tap_unicodemap_code(UA_40); tap_unicodemap_code(UA_40);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: break;
        case SINGLE_HOLD: break;
        case DOUBLE_TAP: break;
        case DOUBLE_SINGLE_TAP: break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_unicodemap_code(UA_30);
        tap_unicodemap_code(UA_30);
        tap_unicodemap_code(UA_30);
    }
    if(state->count > 3) {
        tap_unicodemap_code(UA_30);
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: tap_unicodemap_code(UA_30); break;
        case SINGLE_HOLD: tap_unicodemap_code(RU_YERU); break;
        case DOUBLE_TAP: tap_unicodemap_code(UA_30); tap_unicodemap_code(UA_30); break;
        case DOUBLE_SINGLE_TAP: tap_unicodemap_code(UA_30); tap_unicodemap_code(UA_30);
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = 0;
}
void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_unicodemap_code(UA_38);
        tap_unicodemap_code(UA_38);
        tap_unicodemap_code(UA_38);
    }
    if(state->count > 3) {
        tap_unicodemap_code(UA_38);
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: tap_unicodemap_code(UA_38); break;
        case SINGLE_HOLD: tap_unicodemap_code(UA_37); break;
        case DOUBLE_TAP: tap_unicodemap_code(UA_38); tap_unicodemap_code(UA_38); break;
        case DOUBLE_SINGLE_TAP: tap_unicodemap_code(UA_38); tap_unicodemap_code(UA_38);
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = 0;
}
void on_dance_3(qk_tap_dance_state_t *state, void *user_data);
void dance_3_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_3_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_3(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_unicodemap_code(UA_21);
        tap_unicodemap_code(UA_21);
        tap_unicodemap_code(UA_21);
    }
    if(state->count > 3) {
        tap_unicodemap_code(UA_21);
    }
}

void dance_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: tap_unicodemap_code(UA_21); break;
        case SINGLE_HOLD: tap_unicodemap_code(RU_E); break;
        case DOUBLE_TAP: tap_unicodemap_code(UA_21); tap_unicodemap_code(UA_21); break;
        case DOUBLE_SINGLE_TAP: tap_unicodemap_code(UA_21); tap_unicodemap_code(UA_21);
    }
}

void dance_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = 0;
}
void on_dance_4(qk_tap_dance_state_t *state, void *user_data);
void dance_4_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_4_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_4(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_unicodemap_code(UA_14);
        tap_unicodemap_code(UA_14);
        tap_unicodemap_code(UA_14);
    }
    if(state->count > 3) {
        tap_unicodemap_code(UA_14);
    }
}

void dance_4_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: tap_unicodemap_code(UA_14); break;
        case SINGLE_HOLD: tap_unicodemap_code(RU_HARD); break;
        case DOUBLE_TAP: tap_unicodemap_code(UA_14); tap_unicodemap_code(UA_14); break;
        case DOUBLE_SINGLE_TAP: tap_unicodemap_code(UA_14); tap_unicodemap_code(UA_14);
    }
}

void dance_4_reset(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = 0;
}
void on_dance_5(qk_tap_dance_state_t *state, void *user_data);
void dance_5_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_5_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_5(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_unicodemap_code(UA_13);
        tap_unicodemap_code(UA_13);
        tap_unicodemap_code(UA_13);
    }
    if(state->count > 3) {
        tap_unicodemap_code(UA_13);
    }
}

void dance_5_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: tap_unicodemap_code(UA_13); break;
        case SINGLE_HOLD: caps_word_off(); tap_code16(KC_COMMA); break;
        case DOUBLE_TAP: tap_unicodemap_code(UA_13); tap_unicodemap_code(UA_13); break;
        case DOUBLE_SINGLE_TAP: tap_unicodemap_code(UA_13); tap_unicodemap_code(UA_13);
    }
}

void dance_5_reset(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = 0;
}
void on_dance_6(qk_tap_dance_state_t *state, void *user_data);
void dance_6_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_6_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_6(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_unicodemap_code(UA_12);
        tap_unicodemap_code(UA_12);
        tap_unicodemap_code(UA_12);
    }
    if(state->count > 3) {
        tap_unicodemap_code(UA_12);
    }
}

void dance_6_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: tap_unicodemap_code(UA_12); break;
        case SINGLE_HOLD: caps_word_off(); tap_code16(KC_DOT); break;
        case DOUBLE_TAP: tap_unicodemap_code(UA_12); tap_unicodemap_code(UA_12); break;
        case DOUBLE_SINGLE_TAP: tap_unicodemap_code(UA_12); tap_unicodemap_code(UA_12);
    }
}

void dance_6_reset(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = 0;
}
void on_dance_7(qk_tap_dance_state_t *state, void *user_data);
void dance_7_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_7_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_7(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_unicodemap_code(UA_32);
        tap_unicodemap_code(UA_32);
        tap_unicodemap_code(UA_32);
    }
    if(state->count > 3) {
        tap_unicodemap_code(UA_32);
    }
}

void dance_7_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: tap_unicodemap_code(UA_32); break;
        case SINGLE_HOLD: caps_word_off(); tap_code16(KC_SLASH); break;
        case DOUBLE_TAP: tap_unicodemap_code(UA_32); tap_unicodemap_code(UA_32); break;
        case DOUBLE_SINGLE_TAP: tap_unicodemap_code(UA_32); tap_unicodemap_code(UA_32);
    }
}

void dance_7_reset(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = 0;
}
void dance_8_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_8_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_8_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    if (dance_state[8].step == SINGLE_TAP && state->pressed) {
        dance_state[8].step = SINGLE_HOLD;
    }
    if (dance_state[8].step == SINGLE_HOLD) {
        caps_word_off();
        register_code16(cmd_or_ctrl());
    } else if (get_oneshot_layer_state()) {
        reset_oneshot_layer();
    } else {
        layer_and(2);
    }
}

void dance_8_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    if (dance_state[8].step == SINGLE_HOLD) {
        unregister_code16(cmd_or_ctrl());
    }
    dance_state[8].step = 0;
}
void dance_9_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_9_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_9_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: layer_move(0); break;
        case SINGLE_HOLD: register_code16(KC_LGUI); break;
        case DOUBLE_TAP: layer_move(0); break;
        case DOUBLE_SINGLE_TAP: layer_move(0); break;
    }
}

void dance_9_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_HOLD: unregister_code16(KC_LGUI); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(qk_tap_dance_state_t *state, void *user_data);
void dance_10_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_10_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_10(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(LSFT(KC_MEDIA_EJECT)));
        tap_code16(LCTL(LSFT(KC_MEDIA_EJECT)));
        tap_code16(LCTL(LSFT(KC_MEDIA_EJECT)));
    }
    if(state->count > 3) {
        tap_code16(LCTL(LSFT(KC_MEDIA_EJECT)));
    }
}

void dance_10_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(LCTL(LSFT(KC_MEDIA_EJECT))); break;
        case SINGLE_HOLD: register_code16(LALT(LGUI(KC_MEDIA_EJECT))); break;
        case DOUBLE_TAP: register_code16(LCTL(LSFT(KC_MEDIA_EJECT))); register_code16(LCTL(LSFT(KC_MEDIA_EJECT))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(LSFT(KC_MEDIA_EJECT))); register_code16(LCTL(LSFT(KC_MEDIA_EJECT)));
    }
}

void dance_10_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_MEDIA_EJECT))); break;
        case SINGLE_HOLD: unregister_code16(LALT(LGUI(KC_MEDIA_EJECT))); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LSFT(KC_MEDIA_EJECT))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_MEDIA_EJECT))); break;
    }
    dance_state[10].step = 0;
}
void dance_11_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_11_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_11_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    if (dance_state[11].step == SINGLE_TAP && state->pressed) {
        dance_state[11].step = SINGLE_HOLD;
    }
    switch (dance_state[11].step) {
        case SINGLE_TAP: layer_and(2); break;
        case SINGLE_HOLD: caps_word_off(); register_code16(cmd_or_ctrl()); break;
        case DOUBLE_TAP: layer_and(2); break;
        case DOUBLE_SINGLE_TAP: layer_and(2); break;
    }
}

void dance_11_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_HOLD: unregister_code16(cmd_or_ctrl()); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(qk_tap_dance_state_t *state, void *user_data);
void dance_12_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_12_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_12(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_HOME);
        tap_code16(KC_HOME);
        tap_code16(KC_HOME);
    }
    if(state->count > 3) {
        tap_code16(KC_HOME);
    }
}

void dance_12_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(KC_HOME); break;
        case SINGLE_HOLD: register_code16(LALT(LCTL(LGUI(LSFT(KC_H))))); break;
        case DOUBLE_TAP: register_code16(KC_HOME); register_code16(KC_HOME); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_HOME); register_code16(KC_HOME);
    }
}

void dance_12_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(KC_HOME); break;
        case SINGLE_HOLD: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_H))))); break;
        case DOUBLE_TAP: unregister_code16(KC_HOME); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_HOME); break;
    }
    dance_state[12].step = 0;
}
void on_dance_13(qk_tap_dance_state_t *state, void *user_data);
void dance_13_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_13_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_13(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PGDOWN);
        tap_code16(KC_PGDOWN);
        tap_code16(KC_PGDOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_PGDOWN);
    }
}

void dance_13_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(KC_PGDOWN); break;
        case SINGLE_HOLD: register_code16(LGUI(KC_LBRACKET)); break;
        case DOUBLE_TAP: register_code16(KC_PGDOWN); register_code16(KC_PGDOWN); break;
        case DOUBLE_HOLD: register_code16(LALT(LCTL(LGUI(LSFT(KC_J))))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PGDOWN); register_code16(KC_PGDOWN);
    }
}

void dance_13_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(KC_PGDOWN); break;
        case SINGLE_HOLD: unregister_code16(LGUI(KC_LBRACKET)); break;
        case DOUBLE_TAP: unregister_code16(KC_PGDOWN); break;
        case DOUBLE_HOLD: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_J))))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PGDOWN); break;
    }
    dance_state[13].step = 0;
}
void on_dance_14(qk_tap_dance_state_t *state, void *user_data);
void dance_14_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_14_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_14(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PGUP);
        tap_code16(KC_PGUP);
        tap_code16(KC_PGUP);
    }
    if(state->count > 3) {
        tap_code16(KC_PGUP);
    }
}

void dance_14_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(KC_PGUP); break;
        case SINGLE_HOLD: register_code16(LGUI(KC_RBRACKET)); break;
        case DOUBLE_TAP: register_code16(KC_PGUP); register_code16(KC_PGUP); break;
        case DOUBLE_HOLD: register_code16(LALT(LCTL(LGUI(LSFT(KC_K))))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PGUP); register_code16(KC_PGUP);
    }
}

void dance_14_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(KC_PGUP); break;
        case SINGLE_HOLD: unregister_code16(LGUI(KC_RBRACKET)); break;
        case DOUBLE_TAP: unregister_code16(KC_PGUP); break;
        case DOUBLE_HOLD: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_K))))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PGUP); break;
    }
    dance_state[14].step = 0;
}
void on_dance_15(qk_tap_dance_state_t *state, void *user_data);
void dance_15_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_15_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_15(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_END);
        tap_code16(KC_END);
        tap_code16(KC_END);
    }
    if(state->count > 3) {
        tap_code16(KC_END);
    }
}

void dance_15_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_TAP: register_code16(KC_END); break;
        case SINGLE_HOLD: register_code16(LALT(LCTL(LGUI(LSFT(KC_L))))); break;
        case DOUBLE_TAP: register_code16(KC_END); register_code16(KC_END); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_END); register_code16(KC_END);
    }
}

void dance_15_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_TAP: unregister_code16(KC_END); break;
        case SINGLE_HOLD: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_L))))); break;
        case DOUBLE_TAP: unregister_code16(KC_END); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_END); break;
    }
    dance_state[15].step = 0;
}

void on_dance_tg(qk_tap_dance_state_t *state, void *user_data) {
    uint8_t want  = state->count + 1;
    uint8_t layer = get_highest_layer(layer_state);
    if (layer > 1) {
        want += layer - 1;
    }
    if (want > 4) {
        want = 4;
    }
    dance_state[16].step = want;
    reset_oneshot_layer();
}

void dance_tg_finished(qk_tap_dance_state_t *state, void *user_data) {
    uint8_t want = dance_state[16].step;
    if (want < 4) {
        set_oneshot_layer(want, ONESHOT_START);
    } else {
        layer_invert(want);
    }
}

void dance_tg_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    if (dance_state[16].step < 4) {
        clear_oneshot_layer_state(ONESHOT_PRESSED);
    }
    dance_state[16].step = 0;
}
qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
        [DANCE_15] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_15, dance_15_finished, dance_15_reset),
        [DANCE_TG] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_tg, dance_tg_finished, dance_tg_reset),
};

