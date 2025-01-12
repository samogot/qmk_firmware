/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define IGNORE_MOD_TAP_INTERRUPT
#undef DEBOUNCE
#define DEBOUNCE 7

#undef TAPPING_TERM
#define TAPPING_TERM 250

#define PERMISSIVE_HOLD

#define USB_SUSPEND_WAKEUP_DELAY 0
#define FIRMWARE_VERSION u8"r5xOb/gNXQ7"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_8BIT

#define RGB_MATRIX_STARTUP_SPD 60

#define MK_KINETIC_SPEED
#define MOUSEKEY_BASE_SPEED 2000

#define UNICODE_SELECTED_MODES UC_AUTO, UC_WINC
#define UNICODE_CYCLE_PERSIST false
#define UNICODE_KEY_MAC LALT(KC_KP_PLUS)
#define CAPS_LOCK_STATUS
#define MOONLANDER_USER_LEDS
#define ONESHOT_TIMEOUT 1000
#define COMBO_ONLY_FROM_LAYER 0
#define SENDSTRING_BELL
//#define DEBUG_ACTION
