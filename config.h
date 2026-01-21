// keyboards/handwired/digger8/config.h
#pragma once
//#include "config_common.h"  // if this ever errors, you may safely remove this line

// USB IDs & strings
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0xD707
#define DEVICE_VER      0x0001
#define MANUFACTURER    "Ian Merrick"
#define PRODUCT         "digger8"

// Matrix size
#define MATRIX_ROWS 6
#define MATRIX_COLS 16

// Raspberry Pi Pico (RP2040) pins
#define MATRIX_COL_PINS { GP2, GP3, GP4, GP5, GP6, GP7, GP14, GP15, GP16, GP17, GP18, GP19, GP20, GP21, GP26, GP27 }
#define MATRIX_ROW_PINS { GP8, GP9, GP10, GP11, GP12, GP13}

//#define DIODE_DIRECTION COL2ROW
#define DIODE_DIRECTION ROW2COL

// Optional
#define DEBOUNCE 5
// #define USB_POLLING_INTERVAL_MS 1

