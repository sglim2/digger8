# digger8 (handwired, Raspberry Pi Pico / RP2040)

- Matrix: 6 rows × 16 columns
- Diodes: **COL2ROW** (anode → column, cathode/banded → row)
- Controller: Raspberry Pi Pico (RP2040)

## Pins

Cols → `GP2, GP3, GP4, GP5, GP6, GP7, GP14, GP15, GP16, GP17, GP18, GP19, GP20, GP21, GP26, GP27`
Rows → `GP8, GP9, GP10, GP11, GP12, GP13`

## Build

```bash
qmk compile -kb handwired/digger8 -km default

