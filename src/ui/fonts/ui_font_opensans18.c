/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font C:/Users/monte/SquareLine/assets/OpenSans_Condensed-Regular.ttf -o C:/Users/monte/SquareLine/assets\ui_font_opensans18.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_OPENSANS18
#define UI_FONT_OPENSANS18 1
#endif

#if UI_FONT_OPENSANS18

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0x30,

    /* U+0022 "\"" */
    0x99, 0x99,

    /* U+0023 "#" */
    0x28, 0xa2, 0xbf, 0x29, 0x24, 0xbf, 0x49, 0x45,
    0x14,

    /* U+0024 "$" */
    0x21, 0xfa, 0x28, 0xa3, 0x87, 0xe, 0x24, 0x92,
    0xfe, 0x20, 0x80,

    /* U+0025 "%" */
    0x62, 0x49, 0x24, 0x92, 0x89, 0x44, 0xa9, 0xaa,
    0x15, 0xa, 0x89, 0x44, 0xa6, 0x20,

    /* U+0026 "&" */
    0x31, 0x24, 0x92, 0x49, 0xc7, 0x25, 0x8e, 0x28,
    0xdd,

    /* U+0027 "'" */
    0xf0,

    /* U+0028 "(" */
    0x29, 0x69, 0x24, 0x92, 0x24, 0xc8,

    /* U+0029 ")" */
    0x89, 0x22, 0x49, 0x24, 0xa5, 0xa0,

    /* U+002A "*" */
    0x21, 0x3e, 0xcd, 0x0,

    /* U+002B "+" */
    0x20, 0x82, 0x3f, 0x20, 0x82, 0x0,

    /* U+002C "," */
    0xea,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x8, 0x20, 0x84, 0x10, 0x42, 0x8, 0x21, 0x4,
    0x30,

    /* U+0030 "0" */
    0x72, 0xa3, 0x18, 0xc6, 0x31, 0x8c, 0x54, 0xe0,

    /* U+0031 "1" */
    0x2e, 0x92, 0x49, 0x24, 0x90,

    /* U+0032 "2" */
    0x74, 0x42, 0x10, 0x8c, 0x46, 0x22, 0x31, 0xf0,

    /* U+0033 "3" */
    0x74, 0x42, 0x11, 0x30, 0x61, 0x8, 0x47, 0xe0,

    /* U+0034 "4" */
    0x8, 0x61, 0x8a, 0x29, 0x24, 0xa2, 0xfc, 0x20,
    0x82,

    /* U+0035 "5" */
    0x7d, 0x4, 0x10, 0x41, 0xe0, 0xc1, 0x4, 0x18,
    0xbe,

    /* U+0036 "6" */
    0x3a, 0x21, 0xb, 0x6e, 0x31, 0x8c, 0x56, 0xe0,

    /* U+0037 "7" */
    0xfc, 0x10, 0x82, 0x8, 0x61, 0x4, 0x30, 0x82,
    0x18,

    /* U+0038 "8" */
    0x74, 0x63, 0x1d, 0x39, 0x51, 0x8c, 0x62, 0xe0,

    /* U+0039 "9" */
    0x76, 0xa3, 0x18, 0xcd, 0xa1, 0x8, 0x85, 0xc0,

    /* U+003A ":" */
    0xc1, 0x80,

    /* U+003B ";" */
    0xc1, 0xe0,

    /* U+003C "<" */
    0x0, 0x33, 0x38, 0xc0, 0xc0, 0xc1,

    /* U+003D "=" */
    0xfc, 0x0, 0x0, 0xfc,

    /* U+003E ">" */
    0x3, 0x7, 0x7, 0xc, 0xcc, 0x20,

    /* U+003F "?" */
    0xe9, 0x11, 0x32, 0x44, 0x40, 0x44,

    /* U+0040 "@" */
    0x1e, 0x11, 0x90, 0x4b, 0x9b, 0x4d, 0x26, 0x93,
    0x49, 0xa4, 0xcd, 0x90, 0xc, 0x3, 0xc0,

    /* U+0041 "A" */
    0x10, 0x50, 0xa1, 0x42, 0x8d, 0x99, 0x3e, 0x44,
    0x8f, 0x1c, 0x10,

    /* U+0042 "B" */
    0xf4, 0x63, 0x18, 0xfa, 0x71, 0x8c, 0x67, 0xe0,

    /* U+0043 "C" */
    0x3d, 0x4, 0x20, 0x82, 0x8, 0x20, 0x81, 0x4,
    0xf,

    /* U+0044 "D" */
    0xf2, 0x28, 0xe1, 0x86, 0x18, 0x61, 0x86, 0x28,
    0xbc,

    /* U+0045 "E" */
    0xf8, 0x88, 0x8f, 0x88, 0x88, 0x8f,

    /* U+0046 "F" */
    0xf8, 0x88, 0x88, 0xf8, 0x88, 0x88,

    /* U+0047 "G" */
    0x3c, 0xc5, 0x4, 0x8, 0x10, 0x23, 0xc1, 0x82,
    0x85, 0x89, 0xf0,

    /* U+0048 "H" */
    0x86, 0x18, 0x61, 0x87, 0xf8, 0x61, 0x86, 0x18,
    0x61,

    /* U+0049 "I" */
    0xff, 0xf0,

    /* U+004A "J" */
    0x24, 0x92, 0x49, 0x24, 0x92, 0x70,

    /* U+004B "K" */
    0x8a, 0x69, 0x2c, 0xa3, 0x8e, 0x2c, 0x92, 0x68,
    0xa2,

    /* U+004C "L" */
    0x88, 0x88, 0x88, 0x88, 0x88, 0x8f,

    /* U+004D "M" */
    0xc1, 0xe0, 0xf0, 0x7c, 0x7a, 0x2d, 0x16, 0xcb,
    0x29, 0x94, 0xca, 0x67, 0x31, 0x10,

    /* U+004E "N" */
    0xc3, 0x87, 0x8d, 0x1b, 0x32, 0x64, 0xc5, 0x8b,
    0x1e, 0x1c, 0x30,

    /* U+004F "O" */
    0x38, 0x8b, 0x1c, 0x18, 0x30, 0x60, 0xc1, 0x83,
    0x8d, 0x11, 0xc0,

    /* U+0050 "P" */
    0xf4, 0xe3, 0x18, 0xcf, 0xd0, 0x84, 0x21, 0x0,

    /* U+0051 "Q" */
    0x38, 0x8b, 0x14, 0x18, 0x30, 0x60, 0xc1, 0x83,
    0x8d, 0x11, 0xc0, 0xc0, 0x81, 0x80,

    /* U+0052 "R" */
    0xf2, 0x68, 0xa2, 0x8a, 0x6f, 0x2c, 0x92, 0x68,
    0xa2,

    /* U+0053 "S" */
    0x7c, 0x61, 0xc, 0x30, 0xc1, 0x8, 0x47, 0xe0,

    /* U+0054 "T" */
    0xfc, 0x82, 0x8, 0x20, 0x82, 0x8, 0x20, 0x82,
    0x8,

    /* U+0055 "U" */
    0x86, 0x18, 0x61, 0x86, 0x18, 0x61, 0x86, 0x1c,
    0xde,

    /* U+0056 "V" */
    0x83, 0x8d, 0x12, 0x24, 0x49, 0x9a, 0x14, 0x28,
    0x50, 0xe0, 0x80,

    /* U+0057 "W" */
    0x84, 0x38, 0xc5, 0x18, 0xa5, 0x34, 0xa4, 0x94,
    0x9a, 0xd1, 0x4a, 0x39, 0xc6, 0x30, 0xc6, 0x18,
    0xc0,

    /* U+0058 "X" */
    0x45, 0x36, 0x8a, 0x30, 0xc3, 0xe, 0x69, 0x24,
    0xf1,

    /* U+0059 "Y" */
    0x8c, 0x76, 0xa5, 0x28, 0x84, 0x21, 0x8, 0x40,

    /* U+005A "Z" */
    0xf8, 0xc4, 0x23, 0x10, 0x8c, 0x42, 0x31, 0xf0,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0x92, 0x49, 0xc0,

    /* U+005C "\\" */
    0xc1, 0x4, 0x8, 0x20, 0x81, 0x4, 0x10, 0x20,
    0x82,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0x24, 0x93, 0xc0,

    /* U+005E "^" */
    0x10, 0x70, 0xa3, 0x64, 0x58, 0xc0,

    /* U+005F "_" */
    0xfe,

    /* U+0060 "`" */
    0x99, 0x0,

    /* U+0061 "a" */
    0x70, 0x42, 0x17, 0xc6, 0x33, 0x68,

    /* U+0062 "b" */
    0x82, 0x8, 0x2e, 0xca, 0x18, 0x61, 0x86, 0x1c,
    0xae,

    /* U+0063 "c" */
    0x7a, 0x21, 0x8, 0x42, 0x8, 0x78,

    /* U+0064 "d" */
    0x4, 0x10, 0x5d, 0x4e, 0x18, 0x61, 0x86, 0x14,
    0xdd,

    /* U+0065 "e" */
    0x76, 0xe3, 0x1f, 0xc2, 0x8, 0x78,

    /* U+0066 "f" */
    0x34, 0x4f, 0x44, 0x44, 0x44, 0x44,

    /* U+0067 "g" */
    0x3d, 0x24, 0x92, 0x48, 0xc4, 0x10, 0x3b, 0x18,
    0x63, 0x78,

    /* U+0068 "h" */
    0x84, 0x21, 0x6c, 0xc6, 0x31, 0x8c, 0x63, 0x10,

    /* U+0069 "i" */
    0xdf, 0xf0,

    /* U+006A "j" */
    0x51, 0x55, 0x55, 0x57,

    /* U+006B "k" */
    0x84, 0x21, 0x39, 0x53, 0x9c, 0xb4, 0xa5, 0x30,

    /* U+006C "l" */
    0xff, 0xf0,

    /* U+006D "m" */
    0xb3, 0x66, 0x62, 0x31, 0x18, 0x8c, 0x46, 0x23,
    0x11, 0x88, 0x80,

    /* U+006E "n" */
    0xb6, 0x63, 0x18, 0xc6, 0x31, 0x88,

    /* U+006F "o" */
    0x79, 0x28, 0x61, 0x86, 0x18, 0x52, 0x78,

    /* U+0070 "p" */
    0xbb, 0x28, 0x61, 0x86, 0x18, 0x72, 0xba, 0x8,
    0x20, 0x80,

    /* U+0071 "q" */
    0x75, 0x38, 0x61, 0x86, 0x18, 0x73, 0x74, 0x10,
    0x41, 0x4,

    /* U+0072 "r" */
    0xba, 0x49, 0x24, 0x80,

    /* U+0073 "s" */
    0x78, 0x8c, 0x63, 0x11, 0xe0,

    /* U+0074 "t" */
    0x44, 0xf4, 0x44, 0x44, 0x44, 0x70,

    /* U+0075 "u" */
    0x8c, 0x63, 0x18, 0xc6, 0x33, 0x68,

    /* U+0076 "v" */
    0x8f, 0x24, 0x92, 0x49, 0x43, 0xc, 0x30,

    /* U+0077 "w" */
    0x8c, 0xe6, 0x53, 0x2a, 0x95, 0x52, 0xb9, 0xcc,
    0x66, 0x23, 0x0,

    /* U+0078 "x" */
    0x49, 0x27, 0x8c, 0x30, 0xc7, 0x92, 0xc8,

    /* U+0079 "y" */
    0x8a, 0x24, 0x92, 0x51, 0x43, 0xc, 0x20, 0x82,
    0x18, 0xc0,

    /* U+007A "z" */
    0xf3, 0x22, 0x64, 0x4c, 0xf0,

    /* U+007B "{" */
    0x19, 0x8, 0x42, 0x10, 0x98, 0x21, 0x8, 0x42,
    0xc,

    /* U+007C "|" */
    0xff, 0xff,

    /* U+007D "}" */
    0xc1, 0x8, 0x42, 0x10, 0x83, 0x21, 0x8, 0x42,
    0x60,

    /* U+007E "~" */
    0xe2, 0x70
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 48, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 59, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 95, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 5, .adv_w = 117, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 109, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 25, .adv_w = 167, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 39, .adv_w = 120, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 48, .adv_w = 52, .box_w = 1, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 49, .adv_w = 74, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 55, .adv_w = 74, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 61, .adv_w = 100, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 65, .adv_w = 109, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 71, .adv_w = 57, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 72, .adv_w = 70, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 73, .adv_w = 57, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 74, .adv_w = 94, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 109, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 109, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 96, .adv_w = 109, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 109, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 112, .adv_w = 109, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 121, .adv_w = 109, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 130, .adv_w = 109, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 109, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 109, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 109, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 57, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 57, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 167, .adv_w = 109, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 173, .adv_w = 109, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 177, .adv_w = 109, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 183, .adv_w = 80, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 189, .adv_w = 165, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 204, .adv_w = 113, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 215, .adv_w = 121, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 113, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 131, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 102, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 97, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 253, .adv_w = 139, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 264, .adv_w = 135, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 273, .adv_w = 57, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 275, .adv_w = 56, .box_w = 3, .box_h = 15, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 281, .adv_w = 113, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 94, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 182, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 310, .adv_w = 144, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 321, .adv_w = 140, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 332, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 140, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 354, .adv_w = 116, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 363, .adv_w = 105, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 371, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 380, .adv_w = 133, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 389, .adv_w = 111, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 400, .adv_w = 182, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 417, .adv_w = 101, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 426, .adv_w = 98, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 434, .adv_w = 91, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 442, .adv_w = 80, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 448, .adv_w = 94, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 457, .adv_w = 80, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 463, .adv_w = 112, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 469, .adv_w = 111, .box_w = 7, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 470, .adv_w = 67, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 472, .adv_w = 105, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 478, .adv_w = 117, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 487, .adv_w = 88, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 493, .adv_w = 117, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 502, .adv_w = 106, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 508, .adv_w = 64, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 514, .adv_w = 99, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 524, .adv_w = 115, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 532, .adv_w = 53, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 534, .adv_w = 53, .box_w = 2, .box_h = 16, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 538, .adv_w = 100, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 546, .adv_w = 53, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 548, .adv_w = 173, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 559, .adv_w = 115, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 565, .adv_w = 113, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 572, .adv_w = 117, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 582, .adv_w = 117, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 592, .adv_w = 77, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 596, .adv_w = 86, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 601, .adv_w = 65, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 607, .adv_w = 115, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 613, .adv_w = 93, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 620, .adv_w = 152, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 631, .adv_w = 94, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 638, .adv_w = 93, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 648, .adv_w = 76, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 653, .adv_w = 92, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 662, .adv_w = 103, .box_w = 1, .box_h = 16, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 664, .adv_w = 92, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 673, .adv_w = 109, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 5}
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
const lv_font_t ui_font_opensans18 = {
#else
lv_font_t ui_font_opensans18 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if UI_FONT_OPENSANS18*/

