/*******************************************************************************
 * Size: 20 px
 * Bpp: 1
 * Opts: --bpp 1 --size 20 --font C:/Users/monte/SquareLine/assets/OpenSans-SemiBold.ttf -o C:/Users/monte/SquareLine/assets\ui_font_opensansSemiBolt20.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_OPENSANSSEMIBOLT20
#define UI_FONT_OPENSANSSEMIBOLT20 1
#endif

#if UI_FONT_OPENSANSSEMIBOLT20

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xdb, 0x6d, 0xb6, 0xd8, 0x7f, 0xc0,

    /* U+0022 "\"" */
    0xef, 0x3c, 0xd3, 0x44,

    /* U+0023 "#" */
    0xc, 0xc0, 0xcc, 0xc, 0xc0, 0x88, 0x7f, 0xf7,
    0xff, 0x19, 0x81, 0x98, 0xff, 0xef, 0xfe, 0x13,
    0x3, 0x30, 0x33, 0x3, 0x30,

    /* U+0024 "$" */
    0xc, 0x6, 0x1f, 0xfd, 0xac, 0xc6, 0x63, 0xf0,
    0x7c, 0xf, 0x6, 0xc3, 0x71, 0xbf, 0xf3, 0xf0,
    0x30, 0x18,

    /* U+0025 "%" */
    0x78, 0x30, 0x78, 0x30, 0xcc, 0x60, 0xcc, 0x60,
    0xcc, 0xc0, 0xcc, 0xdc, 0xcd, 0xbe, 0x7b, 0x67,
    0x7b, 0x63, 0x6, 0x63, 0x6, 0x63, 0xc, 0x67,
    0x8, 0x3e, 0x18, 0x1c,

    /* U+0026 "&" */
    0x1e, 0x1, 0xfe, 0x6, 0x18, 0x18, 0x60, 0x63,
    0x80, 0xdc, 0x3, 0xe0, 0x1f, 0x86, 0xe7, 0x3b,
    0xe, 0xcc, 0xe, 0x38, 0x78, 0x7f, 0xb0, 0xfc,
    0xe0,

    /* U+0027 "'" */
    0xfb, 0x24,

    /* U+0028 "(" */
    0x31, 0x98, 0xc6, 0x63, 0x18, 0xc6, 0x31, 0x8e,
    0x31, 0x86, 0x30,

    /* U+0029 ")" */
    0x63, 0xc, 0x63, 0xc, 0x63, 0x18, 0xc6, 0x33,
    0x18, 0xcc, 0x60,

    /* U+002A "*" */
    0x1c, 0x4, 0x2, 0x1d, 0x7f, 0xf8, 0xe0, 0xd8,
    0xee, 0x22, 0x0,

    /* U+002B "+" */
    0xc, 0x3, 0x0, 0xc3, 0xff, 0xff, 0xc3, 0x0,
    0xc0, 0x30, 0xc, 0x0,

    /* U+002C "," */
    0x7f, 0x6c,

    /* U+002D "-" */
    0xff, 0xc0,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0x6, 0x6, 0x6, 0xc, 0xc, 0x1c, 0x18, 0x18,
    0x30, 0x30, 0x70, 0x60, 0x60, 0xe0,

    /* U+0030 "0" */
    0x1e, 0x1f, 0xe6, 0x1b, 0x87, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xf0, 0x3e, 0x1d, 0x86, 0x7f,
    0x87, 0x80,

    /* U+0031 "1" */
    0xc, 0xf7, 0xfb, 0x4c, 0x30, 0xc3, 0xc, 0x30,
    0xc3, 0xc, 0x30,

    /* U+0032 "2" */
    0x3e, 0x1f, 0xc6, 0x38, 0x6, 0x1, 0x80, 0x60,
    0x30, 0x18, 0xe, 0x7, 0x3, 0x81, 0xc0, 0xff,
    0xff, 0xf0,

    /* U+0033 "3" */
    0x3e, 0x3f, 0xe4, 0x18, 0x6, 0x3, 0x8f, 0x83,
    0xf0, 0x6, 0x0, 0xc0, 0x30, 0xe, 0x7, 0xff,
    0x9f, 0x80,

    /* U+0034 "4" */
    0x1, 0x80, 0x70, 0x1e, 0x6, 0xc0, 0xd8, 0x33,
    0xc, 0x63, 0xc, 0x61, 0x9f, 0xff, 0xff, 0x80,
    0xc0, 0x18, 0x3, 0x0,

    /* U+0035 "5" */
    0x7f, 0x3f, 0x98, 0xc, 0xe, 0x7, 0xf3, 0xfc,
    0x7, 0x1, 0x80, 0xc0, 0x70, 0x7f, 0xf3, 0xe0,

    /* U+0036 "6" */
    0xf, 0x8f, 0xe7, 0x1, 0x80, 0xc0, 0x33, 0xcf,
    0xfb, 0x87, 0xc0, 0xf0, 0x3c, 0xd, 0x87, 0x7f,
    0x87, 0xc0,

    /* U+0037 "7" */
    0xff, 0xff, 0xf0, 0x1c, 0x6, 0x3, 0x80, 0xc0,
    0x70, 0x18, 0xe, 0x3, 0x1, 0xc0, 0x60, 0x18,
    0xe, 0x0,

    /* U+0038 "8" */
    0x1e, 0xf, 0xc6, 0x39, 0x86, 0x61, 0x8c, 0xc1,
    0xe0, 0xfc, 0x61, 0xb0, 0x3c, 0xf, 0x87, 0x7f,
    0x8f, 0xc0,

    /* U+0039 "9" */
    0x3e, 0x1f, 0xee, 0x1b, 0x3, 0xc0, 0xf0, 0x3e,
    0x1d, 0xff, 0x3e, 0xc0, 0x30, 0x18, 0xe, 0x7f,
    0x1f, 0x0,

    /* U+003A ":" */
    0xff, 0x80, 0x0, 0xff, 0x80,

    /* U+003B ";" */
    0x77, 0x70, 0x0, 0x0, 0x7, 0x66, 0x6c,

    /* U+003C "<" */
    0x0, 0xc0, 0xf0, 0xf0, 0xe0, 0xe0, 0x3c, 0x3,
    0xc0, 0x3e, 0x3, 0xc0, 0x10,

    /* U+003D "=" */
    0xff, 0xff, 0xc0, 0x0, 0xf, 0xff, 0xfc,

    /* U+003E ">" */
    0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0xf1,
    0xf1, 0xe0, 0xe0, 0x20, 0x0,

    /* U+003F "?" */
    0x7c, 0xfe, 0x83, 0x3, 0x3, 0x6, 0x1c, 0x38,
    0x30, 0x0, 0x0, 0x38, 0x38, 0x38,

    /* U+0040 "@" */
    0x7, 0xf0, 0x1f, 0xf8, 0x3c, 0x1c, 0x73, 0xe6,
    0x67, 0xf7, 0xee, 0x33, 0xcc, 0x33, 0xcc, 0x33,
    0xcc, 0x33, 0xce, 0x77, 0xc7, 0xde, 0xe3, 0x9c,
    0x60, 0x0, 0x38, 0x8, 0x1f, 0xf8, 0x7, 0xe0,

    /* U+0041 "A" */
    0x7, 0x0, 0x38, 0x3, 0x60, 0x1b, 0x0, 0xdc,
    0xc, 0x60, 0x63, 0x7, 0xc, 0x3f, 0xe1, 0xff,
    0x9c, 0x1c, 0xc0, 0x66, 0x3, 0xf0, 0xc,

    /* U+0042 "B" */
    0xff, 0x3f, 0xec, 0x1f, 0x3, 0xc0, 0xf0, 0x7f,
    0xfb, 0xfe, 0xc1, 0xf0, 0x3c, 0xf, 0x7, 0xff,
    0xbf, 0xc0,

    /* U+0043 "C" */
    0xf, 0xc7, 0xfd, 0xc1, 0x30, 0xe, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x18, 0x1, 0x80, 0x38,
    0x13, 0xfe, 0x1f, 0x80,

    /* U+0044 "D" */
    0xfe, 0x1f, 0xf3, 0x7, 0x60, 0x6c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0x1f, 0x3, 0x61,
    0xef, 0xf9, 0xfc, 0x0,

    /* U+0045 "E" */
    0xff, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xff, 0xff,
    0xc0, 0xc0, 0xc0, 0xc0, 0xff, 0xff,

    /* U+0046 "F" */
    0xff, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xff, 0xff,
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,

    /* U+0047 "G" */
    0xf, 0xe3, 0xff, 0x78, 0x6, 0x0, 0xe0, 0xc,
    0x0, 0xc1, 0xfc, 0x1f, 0xc0, 0x3e, 0x3, 0x60,
    0x37, 0x83, 0x3f, 0xf0, 0xfe,

    /* U+0048 "H" */
    0xc0, 0x78, 0xf, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xff, 0xff, 0xff, 0xc0, 0x78, 0xf, 0x1, 0xe0,
    0x3c, 0x7, 0x80, 0xc0,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xf0,

    /* U+004A "J" */
    0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30,
    0xc3, 0xc, 0x30, 0xc7, 0xfb, 0xc0,

    /* U+004B "K" */
    0xc1, 0xd8, 0x73, 0xc, 0x63, 0xc, 0xe1, 0xb8,
    0x3e, 0x7, 0xe0, 0xce, 0x18, 0xc3, 0x1c, 0x61,
    0xcc, 0x1d, 0x83, 0x80,

    /* U+004C "L" */
    0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3, 0x1,
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xf, 0xff, 0xfc,

    /* U+004D "M" */
    0xe0, 0xf, 0xe0, 0x3f, 0xc0, 0x7e, 0xc1, 0xbd,
    0x83, 0x7b, 0x6, 0xf3, 0x19, 0xe6, 0x33, 0xcc,
    0x67, 0x8d, 0x8f, 0x1b, 0x1e, 0x3c, 0x3c, 0x38,
    0x78, 0x70, 0xc0,

    /* U+004E "N" */
    0xe0, 0x3f, 0x3, 0xf0, 0x3f, 0x83, 0xdc, 0x3c,
    0xc3, 0xce, 0x3c, 0x73, 0xc3, 0x3c, 0x3b, 0xc1,
    0xfc, 0xf, 0xc0, 0xfc, 0x7,

    /* U+004F "O" */
    0xf, 0x81, 0xff, 0x1c, 0x1c, 0xc0, 0x6c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xd8, 0xc, 0xe0, 0xe3, 0xfe, 0x7, 0xc0,

    /* U+0050 "P" */
    0xfe, 0x7f, 0xb0, 0xf8, 0x3c, 0x1e, 0xf, 0xf,
    0xfe, 0xfc, 0x60, 0x30, 0x18, 0xc, 0x6, 0x0,

    /* U+0051 "Q" */
    0xf, 0x81, 0xff, 0x1c, 0x1c, 0xc0, 0x6c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xd8, 0xc, 0xe0, 0xe3, 0xfe, 0x7, 0xe0, 0x7,
    0x0, 0x1c, 0x0, 0x70,

    /* U+0052 "R" */
    0xfe, 0x3f, 0xcc, 0x3b, 0x6, 0xc1, 0xb0, 0xef,
    0xf3, 0xf8, 0xc6, 0x31, 0xcc, 0x33, 0xe, 0xc1,
    0xb0, 0x30,

    /* U+0053 "S" */
    0x3f, 0x3f, 0xf8, 0x58, 0xc, 0x7, 0x1, 0xf0,
    0x3e, 0x3, 0x80, 0xc0, 0x70, 0x7f, 0xf3, 0xf0,

    /* U+0054 "T" */
    0xff, 0xff, 0xfc, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1, 0x80, 0x30, 0x6,
    0x0, 0xc0, 0x18, 0x0,

    /* U+0055 "U" */
    0xc0, 0x78, 0xf, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0xf, 0x1, 0xb0,
    0x67, 0xfc, 0x3e, 0x0,

    /* U+0056 "V" */
    0xe0, 0x36, 0x3, 0x60, 0x77, 0x6, 0x30, 0x63,
    0xe, 0x38, 0xc1, 0x9c, 0x19, 0x81, 0xd8, 0xd,
    0x80, 0xf0, 0xf, 0x0, 0x70,

    /* U+0057 "W" */
    0xe0, 0xe0, 0xec, 0x1c, 0x19, 0x83, 0x83, 0x30,
    0xd8, 0xe7, 0x1b, 0x1c, 0x63, 0x63, 0xc, 0xec,
    0x61, 0x98, 0xcc, 0x3b, 0x1b, 0x83, 0x63, 0x60,
    0x78, 0x6c, 0xf, 0x7, 0x81, 0xe0, 0xe0, 0x1c,
    0x1c, 0x0,

    /* U+0058 "X" */
    0x60, 0x77, 0x6, 0x38, 0xc1, 0x9c, 0x1d, 0x80,
    0xf0, 0x7, 0x0, 0xf0, 0xf, 0x81, 0x98, 0x38,
    0xc3, 0xe, 0x70, 0x6e, 0x7,

    /* U+0059 "Y" */
    0x60, 0x67, 0xe, 0x30, 0xc3, 0x9c, 0x19, 0x81,
    0xf8, 0xf, 0x0, 0xf0, 0x6, 0x0, 0x60, 0x6,
    0x0, 0x60, 0x6, 0x0, 0x60,

    /* U+005A "Z" */
    0xff, 0xff, 0xf0, 0x18, 0xe, 0x7, 0x1, 0x80,
    0xe0, 0x70, 0x18, 0xe, 0x7, 0x1, 0x80, 0xff,
    0xff, 0xf0,

    /* U+005B "[" */
    0xff, 0xf1, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0x8c,
    0x63, 0x18, 0xff, 0xc0,

    /* U+005C "\\" */
    0xe0, 0x60, 0x60, 0x30, 0x30, 0x30, 0x18, 0x18,
    0x1c, 0xc, 0xc, 0x6, 0x6, 0x6,

    /* U+005D "]" */
    0xff, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31,
    0x8c, 0x63, 0xff, 0xc0,

    /* U+005E "^" */
    0x8, 0x7, 0x1, 0x40, 0xd8, 0x32, 0x18, 0xc6,
    0x1b, 0x6, 0xc0, 0xc0,

    /* U+005F "_" */
    0xff, 0xff, 0xc0,

    /* U+0060 "`" */
    0xe3, 0x8c,

    /* U+0061 "a" */
    0x3e, 0x3f, 0x80, 0x60, 0x33, 0xfb, 0xff, 0x87,
    0x83, 0xc3, 0xff, 0xdf, 0x60,

    /* U+0062 "b" */
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xdf, 0x3f, 0xee,
    0x1b, 0x3, 0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xe1,
    0xbf, 0xed, 0xf0,

    /* U+0063 "c" */
    0x1f, 0x7f, 0x61, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
    0x61, 0x7f, 0x1f,

    /* U+0064 "d" */
    0x0, 0xc0, 0x30, 0xc, 0x3, 0x3e, 0xdf, 0xf6,
    0x1f, 0x3, 0xc0, 0xf0, 0x3c, 0xf, 0x3, 0x61,
    0xdf, 0xf3, 0xec,

    /* U+0065 "e" */
    0x3e, 0x3f, 0x98, 0xf8, 0x3f, 0xff, 0xff, 0x1,
    0x80, 0x60, 0xbf, 0xc7, 0xc0,

    /* U+0066 "f" */
    0x1f, 0x3f, 0x30, 0x30, 0x7e, 0xfe, 0x30, 0x30,
    0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30,

    /* U+0067 "g" */
    0x1f, 0xcf, 0xf7, 0x39, 0x86, 0x61, 0x9c, 0xe3,
    0xf0, 0xf8, 0x60, 0xf, 0xe7, 0xff, 0x3, 0xc0,
    0xf8, 0x7f, 0xf8, 0xf8,

    /* U+0068 "h" */
    0xc0, 0x60, 0x30, 0x18, 0xd, 0xe7, 0xfb, 0x8f,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf,
    0x6,

    /* U+0069 "i" */
    0xf0, 0xff, 0xff, 0xfc,

    /* U+006A "j" */
    0x18, 0xc0, 0x1, 0x8c, 0x63, 0x18, 0xc6, 0x31,
    0x8c, 0x63, 0x18, 0xff, 0xe0,

    /* U+006B "k" */
    0xc0, 0x60, 0x30, 0x18, 0xc, 0x3e, 0x3b, 0x39,
    0xb8, 0xd8, 0x7c, 0x3b, 0x19, 0xcc, 0x76, 0x1b,
    0xe,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xfc,

    /* U+006D "m" */
    0xde, 0x3c, 0xff, 0x7e, 0xe3, 0xc7, 0xc1, 0x83,
    0xc1, 0x83, 0xc1, 0x83, 0xc1, 0x83, 0xc1, 0x83,
    0xc1, 0x83, 0xc1, 0x83, 0xc1, 0x83,

    /* U+006E "n" */
    0xde, 0x7f, 0xb8, 0xf8, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x60,

    /* U+006F "o" */
    0x1e, 0x1f, 0xe6, 0x1b, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0x61, 0x9f, 0xe1, 0xe0,

    /* U+0070 "p" */
    0xdf, 0x3f, 0xee, 0x1b, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xe1, 0xbf, 0xed, 0xf3, 0x0, 0xc0,
    0x30, 0xc, 0x3, 0x0,

    /* U+0071 "q" */
    0x3e, 0xdf, 0xf6, 0x1f, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0x61, 0xdf, 0xf3, 0xec, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3,

    /* U+0072 "r" */
    0xdf, 0xfe, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xc,
    0x0,

    /* U+0073 "s" */
    0x3e, 0xff, 0xc0, 0xc0, 0x70, 0x3c, 0x7, 0x3,
    0x83, 0xff, 0xfc,

    /* U+0074 "t" */
    0x10, 0x60, 0xc3, 0xff, 0xe6, 0xc, 0x18, 0x30,
    0x60, 0xc1, 0x83, 0xe3, 0xc0,

    /* U+0075 "u" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xe3, 0xbf, 0xcf, 0x60,

    /* U+0076 "v" */
    0xe0, 0xec, 0x19, 0x87, 0x38, 0xc3, 0x18, 0x67,
    0xe, 0xc0, 0xd8, 0x1f, 0x1, 0xc0, 0x38, 0x0,

    /* U+0077 "w" */
    0xe1, 0xc3, 0x63, 0xc7, 0x63, 0xc6, 0x63, 0x46,
    0x73, 0x66, 0x36, 0x6e, 0x36, 0x6c, 0x36, 0x2c,
    0x1c, 0x3c, 0x1c, 0x38, 0x1c, 0x38,

    /* U+0078 "x" */
    0x60, 0xce, 0x38, 0xee, 0xd, 0x81, 0xf0, 0x1c,
    0x7, 0xc0, 0xd8, 0x31, 0x8e, 0x39, 0x83, 0x0,

    /* U+0079 "y" */
    0xc0, 0xf8, 0x76, 0x19, 0x86, 0x73, 0x8c, 0xc3,
    0x30, 0x7c, 0x1e, 0x7, 0x80, 0xc0, 0x30, 0x1c,
    0x6, 0xf, 0x83, 0x80,

    /* U+007A "z" */
    0xff, 0xff, 0x6, 0xe, 0xc, 0x18, 0x30, 0x70,
    0x60, 0xff, 0xff,

    /* U+007B "{" */
    0xe, 0x3c, 0x60, 0xc1, 0x83, 0x6, 0x1c, 0xf1,
    0xe0, 0xe0, 0xc1, 0x83, 0x6, 0xc, 0x1e, 0x1c,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+007D "}" */
    0xe1, 0xe0, 0xc1, 0x83, 0x6, 0xc, 0x1c, 0x1e,
    0x3c, 0xe1, 0x83, 0x6, 0xc, 0x18, 0xf1, 0xc0,

    /* U+007E "~" */
    0x78, 0x7f, 0xf8, 0x78
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 83, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 88, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7, .adv_w = 139, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 11, .adv_w = 207, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 32, .adv_w = 183, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 50, .adv_w = 276, .box_w = 16, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 237, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 103, .adv_w = 78, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 105, .adv_w = 101, .box_w = 5, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 116, .adv_w = 101, .box_w = 5, .box_h = 17, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 127, .adv_w = 175, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 138, .adv_w = 183, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 150, .adv_w = 87, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 152, .adv_w = 103, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 154, .adv_w = 88, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 125, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 170, .adv_w = 183, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 183, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 183, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 183, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 235, .adv_w = 183, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 255, .adv_w = 183, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 271, .adv_w = 183, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 289, .adv_w = 183, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 307, .adv_w = 183, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 325, .adv_w = 183, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 343, .adv_w = 88, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 348, .adv_w = 88, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 355, .adv_w = 183, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 368, .adv_w = 183, .box_w = 9, .box_h = 6, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 375, .adv_w = 183, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 388, .adv_w = 145, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 402, .adv_w = 287, .box_w = 16, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 434, .adv_w = 212, .box_w = 13, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 457, .adv_w = 211, .box_w = 10, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 475, .adv_w = 203, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 495, .adv_w = 235, .box_w = 11, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 515, .adv_w = 179, .box_w = 8, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 529, .adv_w = 170, .box_w = 8, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 543, .adv_w = 232, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 564, .adv_w = 240, .box_w = 11, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 584, .adv_w = 98, .box_w = 2, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 588, .adv_w = 96, .box_w = 6, .box_h = 18, .ofs_x = -2, .ofs_y = -4},
    {.bitmap_index = 602, .adv_w = 204, .box_w = 11, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 622, .adv_w = 174, .box_w = 9, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 638, .adv_w = 295, .box_w = 15, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 665, .adv_w = 251, .box_w = 12, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 686, .adv_w = 252, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 709, .adv_w = 197, .box_w = 9, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 725, .adv_w = 252, .box_w = 13, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 753, .adv_w = 204, .box_w = 10, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 771, .adv_w = 176, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 787, .adv_w = 181, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 807, .adv_w = 238, .box_w = 11, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 827, .adv_w = 199, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 848, .adv_w = 303, .box_w = 19, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 882, .adv_w = 199, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 903, .adv_w = 189, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 924, .adv_w = 184, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 942, .adv_w = 105, .box_w = 5, .box_h = 18, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 954, .adv_w = 125, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 968, .adv_w = 105, .box_w = 5, .box_h = 18, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 980, .adv_w = 183, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 992, .adv_w = 136, .box_w = 9, .box_h = 2, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 995, .adv_w = 102, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 997, .adv_w = 186, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1010, .adv_w = 199, .box_w = 10, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1029, .adv_w = 159, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1040, .adv_w = 199, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1059, .adv_w = 184, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1072, .adv_w = 116, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1087, .adv_w = 177, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1107, .adv_w = 203, .box_w = 9, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1124, .adv_w = 89, .box_w = 2, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1128, .adv_w = 89, .box_w = 5, .box_h = 20, .ofs_x = -1, .ofs_y = -5},
    {.bitmap_index = 1141, .adv_w = 183, .box_w = 9, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1158, .adv_w = 89, .box_w = 2, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1162, .adv_w = 305, .box_w = 16, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1184, .adv_w = 203, .box_w = 9, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1197, .adv_w = 195, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1211, .adv_w = 199, .box_w = 10, .box_h = 16, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 1231, .adv_w = 199, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1251, .adv_w = 138, .box_w = 6, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1260, .adv_w = 156, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1271, .adv_w = 127, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1284, .adv_w = 203, .box_w = 9, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1297, .adv_w = 171, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1313, .adv_w = 261, .box_w = 16, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1335, .adv_w = 176, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1351, .adv_w = 171, .box_w = 10, .box_h = 16, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 1371, .adv_w = 153, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1382, .adv_w = 123, .box_w = 7, .box_h = 18, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1398, .adv_w = 176, .box_w = 2, .box_h = 20, .ofs_x = 5, .ofs_y = -5},
    {.bitmap_index = 1403, .adv_w = 123, .box_w = 7, .box_h = 18, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1419, .adv_w = 183, .box_w = 10, .box_h = 3, .ofs_x = 1, .ofs_y = 6}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_opensansSemiBolt20 = {
#else
lv_font_t ui_font_opensansSemiBolt20 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 20,          /*The maximum line height required by the font*/
    .base_line = 5,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_OPENSANSSEMIBOLT20*/

