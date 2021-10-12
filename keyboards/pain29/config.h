#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Pradipta00
#define PRODUCT         Pain29

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 10

/* key matrix pins */
/* #define MATRIX_COL_PINS { B2, B3, B1, B5, B4, E6, D7, C6, D2, D3 } */
#define MATRIX_ROW_PINS { B6, D4, D0, D1 }
#define MATRIX_COL_PINS { D3, D2, C6, D7, E6, B4, B5, B1, B3, B2 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#define AUTO_SHIFT_TIMEOUT 125

#define ONESHOT_TAP_TOGGLE 3  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 3250  /* Time (in ms) before the one shot key is released */


/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
// #define LOCKING_SUPPORT_ENABLE
