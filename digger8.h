// digger8/digger8.h
#pragma once
#include "quantum.h"

// Use KC_NO for empty matrix spots
#define XXX KC_NO

/* Revised layout (columns C0..C15 across, rows R0..R5 down)
   '||' is only a visual split; rows are continuous across the whole board.

Row 0: ESC   F1   F2   F3  F4   ·  ||  F5   F6  F7  F8  F9    F10  F11   F12    ·   INS
Row 1: `     1    2    3   4    5  ||  6    7   8   9   0     -    =     BSPC   ·   DEL
Row 2: TAB   Q    W    E   R    T  ||  Y    U   I   O   P     [    ]     ENTER  ·   HOME
Row 3: CAPS  A    S    D   F    G  ||  H    J   K   L   ;     '    #     ·      ·   END
Row 4: LSFT  \    Z    X   C    V  ||  ·    N   M   ,   .     /    ·     RSFT   ↑   ·
Row 5: LCTL  WIN  LALT ·   SPCL B  ||  SPCR ·   ·   ·   ALTGR FN   RCTL  ←      ↓   →
*/

#define LAYOUT( \
/* R0 */ K00, K01, K02, K03, K04,        K05, K06, K07, K08, K09, K0A, K0B, K0C,      K0D, \
/* R1 */ K10, K11, K12, K13, K14, K15,   K16, K17, K18, K19, K1A, K1B, K1C, K1D,      K1E, \
/* R2 */ K20, K21, K22, K23, K24, K25,   K26, K27, K28, K29, K2A, K2B, K2C, K2D,      K2E, \
/* R3 */ K30, K31, K32, K33, K34, K35,   K36, K37, K38, K39, K3A, K3B, K3C,           K3D, \
/* R4 */ K40, K41, K42, K43, K44, K45,        K46, K47, K48, K49, K4A, K4B, K4C,      \
/* R5 */ K50, K51, K52,      K53, K54,   K55,                K56, K57, K58, K59, K5A, K5B \
) \
{ \
/* R0 */ { K00, K01, K02, K03, K04, XXX, K05, K06, K07, K08, K09, K0A, K0B, K0C, XXX, K0D }, \
/* R1 */ { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, XXX, K1E }, \
/* R2 */ { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, XXX, K2E }, \
/* R3 */ { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, XXX, XXX, K3D }, \
/* R4 */ { K40, K41, K42, K43, K44, K45, XXX, K46, K47, K48, K49, K4A, XXX, K4B, K4C, XXX }, \
/* R5 */ { K50, K51, K52, XXX, K53, K54, K55, XXX, XXX, XXX, K56, K57, K58, K59, K5A, K5B }  \
}

