/*******************************************************************************
 * Size: 18 px
 * Bpp: 1
 * Opts: --bpp 1 --size 18 --font D:/square_projects/clock/assets/fonts/OPPOSans-H.ttf -o D:/square_projects/clock/assets/fonts\ui_font_OPPOSansH18.c --format lvgl -r 0x20-0x7f --symbols 多云晴阴雪天中小转大雨周一二三四五六日今功德圆满 --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_OPPOSANSH18
#define UI_FONT_OPPOSANSH18 1
#endif

#if UI_FONT_OPPOSANSH18

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xff, 0xfc, 0xf, 0xf8,

    /* U+0022 "\"" */
    0x66, 0xcd, 0x9f, 0x7e, 0xfd, 0xc0,

    /* U+0023 "#" */
    0xc, 0x82, 0x61, 0x98, 0x66, 0x7f, 0xdf, 0xf3,
    0x30, 0xcc, 0x33, 0x3f, 0xef, 0xf9, 0x98, 0x66,
    0x19, 0x4, 0xc0,

    /* U+0024 "$" */
    0xc, 0x1, 0x80, 0x30, 0x3f, 0xc7, 0xfd, 0xd9,
    0xfb, 0x7, 0x60, 0xfc, 0xf, 0xf0, 0x7f, 0x6,
    0xf0, 0xce, 0x99, 0xfb, 0x7f, 0xfe, 0x7f, 0x81,
    0x80, 0x30, 0x6, 0x0,

    /* U+0025 "%" */
    0x38, 0x18, 0x7c, 0x38, 0xc6, 0x30, 0xc6, 0x70,
    0xc6, 0xe0, 0xc6, 0xc0, 0x7d, 0xc0, 0x39, 0x9c,
    0x3, 0xbe, 0x3, 0x63, 0x7, 0x63, 0xe, 0x63,
    0xc, 0x63, 0x1c, 0x3e, 0x18, 0x1c,

    /* U+0026 "&" */
    0x1f, 0x0, 0xfe, 0x7, 0x1c, 0x1c, 0x70, 0x71,
    0xc0, 0xef, 0x3, 0xf8, 0xf, 0x86, 0x7f, 0x1b,
    0x9e, 0xee, 0x3f, 0xb8, 0x7c, 0xf1, 0xf1, 0xff,
    0xe3, 0xf3, 0xc0,

    /* U+0027 "'" */
    0x6d, 0xff, 0xc0,

    /* U+0028 "(" */
    0x1c, 0xe3, 0x1c, 0x73, 0x8e, 0x38, 0xe3, 0x8e,
    0x38, 0xe1, 0xc7, 0xc, 0x38, 0x70,

    /* U+0029 ")" */
    0xe1, 0xc7, 0xe, 0x38, 0x71, 0xc7, 0x1c, 0x71,
    0xc7, 0x1c, 0xe3, 0x8c, 0x73, 0x80,

    /* U+002A "*" */
    0x1c, 0xe, 0x37, 0x7f, 0xff, 0xf8, 0xe0, 0xd8,
    0xee, 0x22, 0x0,

    /* U+002B "+" */
    0x18, 0xc, 0x6, 0x1f, 0xff, 0xf8, 0xc0, 0x60,
    0x30, 0x18, 0x0,

    /* U+002C "," */
    0x77, 0x77, 0x66,

    /* U+002D "-" */
    0xff, 0xc0,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0xe, 0x1c, 0x30, 0x61, 0xc3, 0x87, 0xc, 0x38,
    0x70, 0xe1, 0x83, 0xe, 0x1c, 0x38, 0x60, 0xc3,
    0x80,

    /* U+0030 "0" */
    0x1f, 0x7, 0xf1, 0xc7, 0x38, 0xee, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0xe0, 0xfc, 0x1f, 0x83, 0xb8,
    0xe7, 0x1c, 0x7f, 0x7, 0xc0,

    /* U+0031 "1" */
    0x1d, 0xff, 0xf7, 0x9c, 0x71, 0xc7, 0x1c, 0x71,
    0xc7, 0x1c, 0x71, 0xc0,

    /* U+0032 "2" */
    0x3e, 0x1f, 0xee, 0x3d, 0x7, 0x1, 0xc0, 0x70,
    0x3c, 0x1e, 0x7, 0x3, 0x81, 0xc0, 0xe0, 0x70,
    0x3f, 0xff, 0xfc,

    /* U+0033 "3" */
    0x7f, 0xcf, 0xf8, 0xe, 0x3, 0x80, 0xe0, 0x3e,
    0xf, 0xf0, 0x8e, 0x0, 0xe0, 0x1c, 0x3, 0xb0,
    0x77, 0x1c, 0xff, 0x87, 0xc0,

    /* U+0034 "4" */
    0x3, 0x80, 0x70, 0x1e, 0x7, 0xc0, 0xf8, 0x37,
    0xe, 0xe1, 0x9c, 0x73, 0x8c, 0x73, 0xff, 0xff,
    0xf0, 0x38, 0x7, 0x0, 0xe0,

    /* U+0035 "5" */
    0x7f, 0x9f, 0xe6, 0x1, 0x80, 0xe0, 0x3f, 0x8f,
    0xfb, 0x8e, 0x1, 0xc0, 0x70, 0x1f, 0x7, 0xe3,
    0x9f, 0xe3, 0xe0,

    /* U+0036 "6" */
    0xe, 0x3, 0x1, 0xc0, 0xe0, 0x30, 0x1f, 0xc7,
    0xfb, 0xce, 0xe1, 0xf8, 0x7e, 0x1f, 0x87, 0x73,
    0x9f, 0xe1, 0xe0,

    /* U+0037 "7" */
    0xff, 0xff, 0xf0, 0x1c, 0x6, 0x3, 0x80, 0xe0,
    0x30, 0x1c, 0x6, 0x3, 0x80, 0xe0, 0x70, 0x1c,
    0x7, 0x3, 0x80,

    /* U+0038 "8" */
    0x3f, 0xf, 0xf3, 0xcf, 0x70, 0xee, 0x1c, 0xe7,
    0x8f, 0xe1, 0xfc, 0x71, 0xdc, 0x1f, 0x83, 0xf0,
    0x7f, 0x1e, 0xff, 0x87, 0xc0,

    /* U+0039 "9" */
    0x1e, 0x1f, 0xef, 0x3b, 0x87, 0xe1, 0xf8, 0x7f,
    0x3d, 0xff, 0x3f, 0x80, 0xe0, 0x70, 0x1c, 0xe,
    0x7, 0x1, 0xc0,

    /* U+003A ":" */
    0xff, 0x80, 0x0, 0xff, 0x80,

    /* U+003B ";" */
    0xff, 0x80, 0x0, 0xff, 0xfd, 0x80,

    /* U+003C "<" */
    0x1, 0x83, 0xc7, 0xcf, 0x8f, 0x7, 0x81, 0xf0,
    0x3e, 0x3, 0x80, 0x40,

    /* U+003D "=" */
    0xff, 0xff, 0xc0, 0x0, 0xf, 0xff, 0xfc,

    /* U+003E ">" */
    0xc0, 0x78, 0x1f, 0x3, 0xe0, 0x78, 0x3c, 0x7d,
    0xf8, 0xe0, 0x40, 0x0,

    /* U+003F "?" */
    0x3e, 0x3f, 0xb9, 0xe8, 0x70, 0x38, 0x3c, 0x1c,
    0x1c, 0xc, 0x6, 0x0, 0x0, 0x1, 0xc0, 0xe0,
    0x70,

    /* U+0040 "@" */
    0x3, 0xf8, 0x1, 0xff, 0xc0, 0x78, 0x1e, 0x1c,
    0x0, 0xe7, 0x3d, 0xcc, 0xcf, 0xf9, 0xfb, 0xcf,
    0x1e, 0x70, 0xe3, 0xce, 0x1c, 0x79, 0xc3, 0x8f,
    0x38, 0x71, 0xe3, 0x9e, 0x6e, 0x7e, 0xfc, 0xc7,
    0x8f, 0x1c, 0x0, 0x1, 0xc0, 0x18, 0x1e, 0x7,
    0x1, 0xff, 0xc0, 0xf, 0xe0, 0x0,

    /* U+0041 "A" */
    0x7, 0x80, 0x1e, 0x0, 0x7c, 0x3, 0xf0, 0xc,
    0xc0, 0x33, 0x81, 0xce, 0x7, 0x18, 0x18, 0x70,
    0xff, 0xc3, 0xff, 0xc, 0xe, 0x70, 0x39, 0xc0,
    0xe6, 0x1, 0xc0,

    /* U+0042 "B" */
    0xff, 0x9f, 0xfb, 0x87, 0xf0, 0x7e, 0xf, 0xc3,
    0xbf, 0xe7, 0xfc, 0xe1, 0xdc, 0x1f, 0x83, 0xf0,
    0x7e, 0x1f, 0xff, 0xbf, 0xe0,

    /* U+0043 "C" */
    0xf, 0xc1, 0xfe, 0x38, 0x77, 0x3, 0xf0, 0xe,
    0x0, 0xe0, 0xe, 0x0, 0xe0, 0xe, 0x0, 0xf0,
    0x7, 0x3, 0x38, 0x71, 0xfe, 0xf, 0xc0,

    /* U+0044 "D" */
    0xff, 0xf, 0xfc, 0xe1, 0xee, 0xe, 0xe0, 0xfe,
    0x7, 0xe0, 0x7e, 0x7, 0xe0, 0x7e, 0x7, 0xe0,
    0xfe, 0xe, 0xe1, 0xef, 0xfc, 0xff, 0x0,

    /* U+0045 "E" */
    0xff, 0xff, 0xf8, 0x1c, 0xe, 0x7, 0x3, 0xff,
    0xff, 0xe0, 0x70, 0x38, 0x1c, 0xe, 0x7, 0xff,
    0xfe,

    /* U+0046 "F" */
    0xff, 0xff, 0xf8, 0x1c, 0xe, 0x7, 0x3, 0xff,
    0xff, 0xe0, 0x70, 0x38, 0x1c, 0xe, 0x7, 0x3,
    0x80,

    /* U+0047 "G" */
    0xf, 0xc0, 0xff, 0xe, 0x1c, 0xe0, 0x6f, 0x0,
    0x70, 0x3, 0x80, 0x1c, 0x3f, 0xe1, 0xff, 0x1,
    0xfc, 0xe, 0xe0, 0x73, 0x87, 0xf, 0xf0, 0x3f,
    0x0,

    /* U+0048 "H" */
    0xe0, 0x7e, 0x7, 0xe0, 0x7e, 0x7, 0xe0, 0x7e,
    0x7, 0xff, 0xff, 0xff, 0xe0, 0x7e, 0x7, 0xe0,
    0x7e, 0x7, 0xe0, 0x7e, 0x7, 0xe0, 0x70,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,

    /* U+004A "J" */
    0x3, 0x81, 0xc0, 0xe0, 0x70, 0x38, 0x1c, 0xe,
    0x7, 0x3, 0x81, 0xc0, 0xe0, 0x7e, 0x3b, 0xf8,
    0xf8,

    /* U+004B "K" */
    0xe0, 0xee, 0x1c, 0xe3, 0xce, 0x78, 0xe7, 0xe,
    0xe0, 0xfc, 0xf, 0xc0, 0xee, 0xe, 0xf0, 0xe7,
    0x8e, 0x38, 0xe1, 0xce, 0xe, 0xe0, 0xf0,

    /* U+004C "L" */
    0xe0, 0x70, 0x38, 0x1c, 0xe, 0x7, 0x3, 0x81,
    0xc0, 0xe0, 0x70, 0x38, 0x1c, 0xe, 0x7, 0xff,
    0xfe,

    /* U+004D "M" */
    0xf8, 0xf, 0xf8, 0x1f, 0xf8, 0x1f, 0xfc, 0x1f,
    0xfc, 0x3f, 0xec, 0x37, 0xec, 0x37, 0xee, 0x77,
    0xee, 0x77, 0xe6, 0x67, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe3, 0xc7, 0xe3, 0xc7, 0xe3, 0xc7,

    /* U+004E "N" */
    0xf0, 0x7f, 0x7, 0xf8, 0x7f, 0x87, 0xfc, 0x7e,
    0xc7, 0xee, 0x7e, 0x77, 0xe7, 0x7e, 0x3f, 0xe3,
    0xfe, 0x1f, 0xe0, 0xfe, 0xf, 0xe0, 0x70,

    /* U+004F "O" */
    0xf, 0xc0, 0x7f, 0x83, 0x87, 0x1c, 0xe, 0xf0,
    0x3f, 0x80, 0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1f,
    0x80, 0x7f, 0x3, 0xdc, 0xe, 0x38, 0x70, 0x7f,
    0x80, 0xfc, 0x0,

    /* U+0050 "P" */
    0xfe, 0x3f, 0xee, 0x3b, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0x8f, 0xff, 0xbf, 0xce, 0x3, 0x80, 0xe0,
    0x38, 0xe, 0x0,

    /* U+0051 "Q" */
    0xf, 0xc0, 0x7f, 0x83, 0x87, 0x1c, 0xe, 0xf0,
    0x3b, 0x80, 0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1f,
    0x80, 0x7f, 0x3, 0xdc, 0xe, 0x38, 0x78, 0x7f,
    0xc0, 0xfe, 0x0, 0x1c, 0x0, 0x38,

    /* U+0052 "R" */
    0xff, 0x8f, 0xfc, 0xe1, 0xee, 0xe, 0xe0, 0xee,
    0xe, 0xe1, 0xef, 0xfc, 0xff, 0x8e, 0x70, 0xe3,
    0x8e, 0x38, 0xe1, 0xce, 0x1e, 0xe0, 0xf0,

    /* U+0053 "S" */
    0xf, 0x83, 0xfe, 0x78, 0xf7, 0x4, 0x70, 0x7,
    0xc0, 0x3f, 0x81, 0xfe, 0x7, 0xf0, 0xf, 0x0,
    0x76, 0x7, 0x70, 0xe7, 0xfe, 0x1f, 0x80,

    /* U+0054 "T" */
    0xff, 0xff, 0xfc, 0x38, 0x7, 0x0, 0xe0, 0x1c,
    0x3, 0x80, 0x70, 0xe, 0x1, 0xc0, 0x38, 0x7,
    0x0, 0xe0, 0x1c, 0x3, 0x80,

    /* U+0055 "U" */
    0xe0, 0x7e, 0x7, 0xe0, 0x7e, 0x7, 0xe0, 0x7e,
    0x7, 0xe0, 0x7e, 0x7, 0xe0, 0x7e, 0x7, 0xe0,
    0x7e, 0x7, 0x70, 0xe3, 0xfc, 0x1f, 0x80,

    /* U+0056 "V" */
    0x70, 0x1d, 0xc0, 0x67, 0x3, 0x8c, 0xe, 0x38,
    0x30, 0xe1, 0xc1, 0x87, 0x7, 0x18, 0x1c, 0xe0,
    0x33, 0x80, 0xec, 0x3, 0xb0, 0x7, 0xc0, 0x1e,
    0x0, 0x78, 0x0,

    /* U+0057 "W" */
    0x70, 0x70, 0x77, 0xf, 0xe, 0x70, 0xf0, 0xe7,
    0xf, 0xe, 0x30, 0xf8, 0xe3, 0x9d, 0x8c, 0x39,
    0x99, 0xc3, 0x99, 0x9c, 0x19, 0x9d, 0xc1, 0xb8,
    0xd8, 0x1f, 0xd, 0x81, 0xf0, 0xf8, 0xf, 0xf,
    0x80, 0xf0, 0x70, 0xe, 0x7, 0x0,

    /* U+0058 "X" */
    0xe0, 0x77, 0xe, 0x70, 0xe3, 0x9c, 0x39, 0x81,
    0xf8, 0xf, 0x0, 0xf0, 0x1f, 0x1, 0xf8, 0x39,
    0xc3, 0x9c, 0x70, 0xee, 0xe, 0xe0, 0x70,

    /* U+0059 "Y" */
    0xe0, 0x3b, 0x83, 0x9c, 0x1c, 0x71, 0xc3, 0x8e,
    0xe, 0xe0, 0x36, 0x1, 0xf0, 0x7, 0x0, 0x38,
    0x1, 0xc0, 0xe, 0x0, 0x70, 0x3, 0x80, 0x1c,
    0x0,

    /* U+005A "Z" */
    0xff, 0xff, 0xfc, 0x7, 0x1, 0xe0, 0x38, 0xe,
    0x3, 0xc0, 0x70, 0x1c, 0x3, 0x0, 0xe0, 0x38,
    0x6, 0x1, 0xff, 0xff, 0xf8,

    /* U+005B "[" */
    0xff, 0xfe, 0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8e,
    0x38, 0xe3, 0x8e, 0x38, 0xff, 0xf0,

    /* U+005C "\\" */
    0xe1, 0xc1, 0x83, 0x7, 0xe, 0xc, 0x18, 0x38,
    0x70, 0xe0, 0xc1, 0x83, 0x87, 0xe, 0xc, 0x1c,
    0x38,

    /* U+005D "]" */
    0xff, 0xf1, 0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x71,
    0xc7, 0x1c, 0x71, 0xc7, 0xff, 0xf0,

    /* U+005E "^" */
    0xc, 0x7, 0x81, 0xe0, 0xfc, 0x33, 0xc, 0xe6,
    0x19, 0x86, 0xe0, 0xc0,

    /* U+005F "_" */
    0xff, 0xc0,

    /* U+0060 "`" */
    0xe6, 0x30,

    /* U+0061 "a" */
    0x1e, 0xef, 0xfd, 0xc7, 0xf0, 0x7e, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0x71, 0xef, 0xfc, 0x7b, 0x80,

    /* U+0062 "b" */
    0xe0, 0x1c, 0x3, 0x80, 0x70, 0xe, 0xf1, 0xff,
    0xbc, 0x77, 0x7, 0xe0, 0xfc, 0x1f, 0x83, 0xf0,
    0x7f, 0x1d, 0xff, 0xbb, 0xc0,

    /* U+0063 "c" */
    0x1f, 0xf, 0xe7, 0x1f, 0x80, 0xe0, 0x38, 0xe,
    0x3, 0x80, 0x71, 0xcf, 0xe1, 0xf0,

    /* U+0064 "d" */
    0x0, 0xe0, 0x1c, 0x3, 0x80, 0x71, 0xee, 0xff,
    0xdc, 0x7f, 0x7, 0xe0, 0xfc, 0x1f, 0x83, 0xf0,
    0x77, 0x1e, 0xff, 0xc7, 0xb8,

    /* U+0065 "e" */
    0x1e, 0x1f, 0xe6, 0x1b, 0x87, 0xff, 0xff, 0xfe,
    0x3, 0x80, 0x71, 0xdf, 0xe1, 0xf0,

    /* U+0066 "f" */
    0x3e, 0xfd, 0xc3, 0x8f, 0xff, 0xdc, 0x38, 0x70,
    0xe1, 0xc3, 0x87, 0xe, 0x1c, 0x0,

    /* U+0067 "g" */
    0x1e, 0xef, 0xfd, 0xc7, 0xf0, 0x7e, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0x71, 0xef, 0xfc, 0x7b, 0x80,
    0x76, 0xf, 0xc3, 0x9f, 0xf1, 0xf8,

    /* U+0068 "h" */
    0xe0, 0x38, 0xe, 0x3, 0x80, 0xef, 0x3f, 0xef,
    0x3f, 0x87, 0xe1, 0xf8, 0x7e, 0x1f, 0x87, 0xe1,
    0xf8, 0x7e, 0x1c,

    /* U+0069 "i" */
    0xff, 0x8f, 0xff, 0xff, 0xff, 0xf8,

    /* U+006A "j" */
    0x1c, 0x71, 0xc0, 0x1c, 0x71, 0xc7, 0x1c, 0x71,
    0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x7f, 0xbc,

    /* U+006B "k" */
    0xe0, 0x38, 0xe, 0x3, 0x80, 0xe3, 0xf8, 0xee,
    0x73, 0xb8, 0xfc, 0x3f, 0xe, 0xe3, 0xbc, 0xe7,
    0x38, 0xee, 0x1c,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,

    /* U+006D "m" */
    0xef, 0x3d, 0xff, 0xff, 0xcf, 0x3f, 0x1c, 0x7e,
    0x38, 0xfc, 0x71, 0xf8, 0xe3, 0xf1, 0xc7, 0xe3,
    0x8f, 0xc7, 0x1f, 0x8e, 0x38,

    /* U+006E "n" */
    0xef, 0x3f, 0xef, 0x3f, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0x87, 0xe1, 0xf8, 0x7e, 0x1c,

    /* U+006F "o" */
    0x1f, 0x7, 0xf1, 0xc7, 0x70, 0x7e, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0x71, 0xc7, 0xf0, 0x7c, 0x0,

    /* U+0070 "p" */
    0xef, 0x1f, 0xfb, 0xc7, 0x70, 0x7e, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0xf1, 0xdf, 0xfb, 0xbc, 0x70,
    0xe, 0x1, 0xc0, 0x38, 0x7, 0x0,

    /* U+0071 "q" */
    0x1e, 0xef, 0xfd, 0xc7, 0xf0, 0x7e, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0x71, 0xef, 0xfc, 0x7b, 0x80,
    0x70, 0xe, 0x1, 0xc0, 0x38, 0x7,

    /* U+0072 "r" */
    0xef, 0xff, 0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8e,
    0x0,

    /* U+0073 "s" */
    0x3e, 0x3f, 0xb8, 0xdc, 0xf, 0x83, 0xf8, 0x1e,
    0x7, 0xe3, 0xff, 0x8f, 0x80,

    /* U+0074 "t" */
    0x70, 0xe1, 0xc7, 0xff, 0xee, 0x1c, 0x38, 0x70,
    0xe1, 0xc3, 0x83, 0xe3, 0xc0,

    /* U+0075 "u" */
    0xe1, 0xf8, 0x7e, 0x1f, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0x87, 0xf3, 0xdf, 0xf3, 0xdc,

    /* U+0076 "v" */
    0x70, 0xee, 0x1d, 0xc3, 0x18, 0x63, 0x9c, 0x73,
    0x6, 0x60, 0xfc, 0x1f, 0x1, 0xe0, 0x3c, 0x0,

    /* U+0077 "w" */
    0xc3, 0x87, 0xe3, 0xc7, 0xe3, 0xc6, 0xe6, 0xc6,
    0x66, 0xee, 0x66, 0x6c, 0x76, 0x6c, 0x3c, 0x6c,
    0x3c, 0x7c, 0x3c, 0x38, 0x3c, 0x38,

    /* U+0078 "x" */
    0xe1, 0xdc, 0xe7, 0x38, 0xfc, 0x1e, 0x7, 0x81,
    0xe0, 0xfc, 0x73, 0x98, 0xee, 0x1c,

    /* U+0079 "y" */
    0x70, 0xee, 0x1d, 0xc3, 0x98, 0x63, 0x9c, 0x73,
    0x86, 0x60, 0xec, 0xf, 0x81, 0xe0, 0x3c, 0x3,
    0x0, 0x60, 0x1c, 0x3, 0x0, 0xe0,

    /* U+007A "z" */
    0xff, 0xff, 0xc1, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0,
    0xe0, 0x70, 0x7f, 0xff, 0xe0,

    /* U+007B "{" */
    0x1e, 0x7c, 0xe1, 0xc3, 0x83, 0x87, 0xe, 0xf9,
    0xf0, 0x70, 0xe1, 0xc7, 0xe, 0x1c, 0x3e, 0x3c,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,

    /* U+007D "}" */
    0xf3, 0xe3, 0x8e, 0x39, 0xc7, 0x1c, 0x3c, 0xf7,
    0x1c, 0x70, 0xe3, 0x8e, 0xfb, 0xc0,

    /* U+007E "~" */
    0x79, 0xff, 0xec, 0x70,

    /* U+4E00 "一" */
    0xff, 0xff, 0xff, 0xff,

    /* U+4E09 "三" */
    0x7f, 0xfe, 0x7f, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0xfc, 0x3f, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xff, 0xff, 0xff, 0xff,

    /* U+4E2D "中" */
    0x3, 0x0, 0xc, 0x0, 0x30, 0x0, 0xc0, 0xff,
    0xff, 0xff, 0xfc, 0x30, 0xf0, 0xc3, 0xc3, 0xf,
    0xc, 0x3f, 0xff, 0xff, 0xff, 0x3, 0x0, 0xc,
    0x0, 0x30, 0x0, 0xc0, 0x3, 0x0,

    /* U+4E8C "二" */
    0x7f, 0xfe, 0x7f, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xff, 0xff, 0xff, 0xff,

    /* U+4E91 "云" */
    0x7f, 0xfe, 0x7f, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xff, 0xff, 0xff, 0x7, 0x0,
    0xf, 0x30, 0xe, 0x70, 0x1c, 0x38, 0x3c, 0x1c,
    0x78, 0x1e, 0x7f, 0xfe, 0x7f, 0xff, 0x0, 0x2,

    /* U+4E94 "五" */
    0x7f, 0xfe, 0x7f, 0xfe, 0x7, 0x0, 0x6, 0x0,
    0x6, 0x0, 0x6, 0x0, 0x7f, 0xfc, 0x7f, 0xfc,
    0xe, 0x1c, 0xc, 0x1c, 0xc, 0x1c, 0xc, 0x1c,
    0x1c, 0x1c, 0xff, 0xff, 0xff, 0xff,

    /* U+4ECA "今" */
    0x1, 0xc0, 0x0, 0xf0, 0x0, 0xfc, 0x0, 0xef,
    0x1, 0xe3, 0xc1, 0xec, 0xf3, 0xe7, 0x3e, 0xc3,
    0x87, 0x40, 0xc0, 0x1f, 0xff, 0xf, 0xff, 0x80,
    0x3, 0xc0, 0x1, 0xc0, 0x1, 0xc0, 0x1, 0xc0,
    0x1, 0xc0, 0x0, 0x40, 0x0,

    /* U+516D "六" */
    0x3, 0x80, 0x1, 0x80, 0x1, 0x80, 0xff, 0xff,
    0xff, 0xff, 0x0, 0x0, 0xc, 0x10, 0xe, 0x70,
    0xc, 0x38, 0x1c, 0x1c, 0x38, 0x1c, 0x38, 0xe,
    0x70, 0xe, 0xf0, 0x7, 0xe0, 0x7, 0x40, 0x0,

    /* U+529F "功" */
    0x0, 0xc0, 0x1, 0x83, 0xf3, 0x7, 0xe6, 0xf,
    0xdf, 0xe6, 0x3f, 0xcc, 0x31, 0x98, 0x63, 0x30,
    0xc6, 0x61, 0x8c, 0xc3, 0x19, 0xfc, 0x3f, 0xf8,
    0x7f, 0xf0, 0xf0, 0xc1, 0x83, 0xbf, 0x6, 0x7c,
    0x0, 0x0,

    /* U+5468 "周" */
    0x3f, 0xff, 0x3f, 0xff, 0x31, 0xc3, 0x37, 0xf3,
    0x37, 0xf3, 0x31, 0xc3, 0x3f, 0xfb, 0x3f, 0xfb,
    0x30, 0x3, 0x37, 0xf3, 0x37, 0xf3, 0x36, 0x33,
    0x37, 0xf3, 0x67, 0xf3, 0x60, 0x1f, 0x60, 0x1e,

    /* U+56DB "四" */
    0xff, 0xff, 0xff, 0xfc, 0xcc, 0xf3, 0x33, 0xcc,
    0xcf, 0x33, 0x3c, 0xcc, 0xf7, 0x33, 0xd8, 0xff,
    0xe1, 0xfd, 0x0, 0xf0, 0x3, 0xc0, 0xf, 0xff,
    0xff, 0xff, 0xc0,

    /* U+5706 "圆" */
    0xff, 0xff, 0xff, 0xff, 0x0, 0x1e, 0xff, 0xbd,
    0x87, 0x7b, 0xfe, 0xf0, 0x1, 0xef, 0xfb, 0xd8,
    0x37, 0xb6, 0x6f, 0x7f, 0xde, 0x7f, 0xbf, 0xc7,
    0x7a, 0x2, 0xff, 0xff, 0xff, 0xff,

    /* U+591A "多" */
    0x0, 0x0, 0x3, 0x80, 0xf, 0xfe, 0x1f, 0xfe,
    0x7e, 0x1e, 0x76, 0x78, 0x7, 0xe0, 0x7f, 0xc0,
    0x7b, 0xff, 0xf, 0xff, 0x1e, 0xe, 0x7f, 0x9c,
    0x73, 0x78, 0x3, 0xe0, 0x3f, 0x80, 0xfe, 0x0,
    0x70, 0x0,

    /* U+5927 "大" */
    0x1, 0xc0, 0x0, 0xe0, 0x0, 0x70, 0x0, 0x38,
    0x7, 0xff, 0xf3, 0xff, 0xf8, 0x7, 0x0, 0x3,
    0x80, 0x3, 0xe0, 0x1, 0xf0, 0x1, 0xdc, 0x1,
    0xe7, 0x1, 0xe1, 0xc1, 0xe0, 0xf3, 0xe0, 0x3e,
    0xe0, 0xe, 0x0, 0x0, 0x0,

    /* U+5929 "天" */
    0x3f, 0xfe, 0x1f, 0xff, 0x0, 0x70, 0x0, 0x38,
    0x0, 0x1c, 0x0, 0xe, 0x1, 0xff, 0xfc, 0xff,
    0xfe, 0x1, 0xc0, 0x1, 0xf0, 0x0, 0xf8, 0x0,
    0xee, 0x0, 0xe3, 0x81, 0xe0, 0xf3, 0xe0, 0x3c,
    0xe0, 0xe, 0x0, 0x0, 0x0,

    /* U+5C0F "小" */
    0x1, 0xc0, 0x0, 0xe0, 0x0, 0x70, 0x3, 0x39,
    0x81, 0x9c, 0xc1, 0xce, 0x70, 0xe7, 0x38, 0x63,
    0x8e, 0x71, 0xc7, 0x38, 0xe1, 0xb8, 0x70, 0xfc,
    0x38, 0x7c, 0x1c, 0x18, 0xe, 0x0, 0x3f, 0x0,
    0xf, 0x0,

    /* U+5FB7 "德" */
    0x18, 0x70, 0x1f, 0xff, 0x8f, 0xff, 0xce, 0xe,
    0xf, 0x7f, 0xf2, 0xf6, 0xd9, 0xfb, 0x6c, 0x6d,
    0xb6, 0x77, 0xff, 0x38, 0x0, 0x3d, 0xff, 0xce,
    0xff, 0xe3, 0x7b, 0x71, 0xbd, 0x98, 0xf6, 0x3e,
    0x7b, 0xfb, 0x31, 0xf8, 0x0,

    /* U+65E5 "日" */
    0xff, 0xff, 0xff, 0xc0, 0x3c, 0x3, 0xc0, 0x3c,
    0x3, 0xc0, 0x3f, 0xff, 0xff, 0xfc, 0x3, 0xc0,
    0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xff, 0xff, 0xff,

    /* U+6674 "晴" */
    0x0, 0x30, 0xfb, 0xff, 0xfb, 0xff, 0xd8, 0x30,
    0xd9, 0xfe, 0xd8, 0x30, 0xdb, 0xff, 0xf8, 0x0,
    0xf8, 0x0, 0xfb, 0xfe, 0xdb, 0x86, 0xdb, 0xfe,
    0xdb, 0x86, 0xfb, 0xfe, 0xfb, 0x86, 0x3, 0x9e,
    0x3, 0x9e,

    /* U+6EE1 "满" */
    0x41, 0x98, 0xef, 0xff, 0x7f, 0xff, 0x31, 0x98,
    0x0, 0x0, 0xcf, 0xff, 0xef, 0xff, 0x71, 0xb0,
    0x2f, 0xff, 0xf, 0xff, 0x7d, 0xb3, 0x6d, 0xfb,
    0x6f, 0xff, 0x6f, 0x7f, 0xee, 0x63, 0xcc, 0xf,
    0x4c, 0xe,

    /* U+8F6C "转" */
    0x38, 0x30, 0x38, 0x70, 0x30, 0x70, 0xff, 0xfe,
    0xff, 0xfe, 0x78, 0x60, 0x79, 0xff, 0xd9, 0xff,
    0xfe, 0xc0, 0xff, 0xfe, 0x19, 0xfe, 0x1e, 0xe,
    0xfe, 0xcc, 0xf8, 0xf8, 0x18, 0x7c, 0x18, 0x1e,
    0x18, 0xc, 0x0, 0x4,

    /* U+9634 "阴" */
    0xfd, 0xff, 0xfb, 0xff, 0x36, 0x1e, 0xcc, 0x3d,
    0x9f, 0xff, 0x3f, 0xf6, 0x61, 0xee, 0xc3, 0xcd,
    0x87, 0x9b, 0xff, 0x37, 0xff, 0xfc, 0x3f, 0xb8,
    0x78, 0xe0, 0xf3, 0xcf, 0xe3, 0xe,

    /* U+96E8 "雨" */
    0xff, 0xff, 0xff, 0xff, 0x1, 0x80, 0x1, 0x80,
    0xff, 0xfe, 0xff, 0xfe, 0xe1, 0xa6, 0xfd, 0xf6,
    0xef, 0xbe, 0xe5, 0x86, 0xf9, 0xa6, 0xfd, 0xfe,
    0xef, 0x9e, 0xe1, 0x86, 0xe1, 0x9e, 0xe1, 0x9e,

    /* U+96EA "雪" */
    0x7f, 0xfc, 0xff, 0xf8, 0xe, 0x7, 0xff, 0xfc,
    0x38, 0x7b, 0xfe, 0xc0, 0xe0, 0xf, 0xf8, 0x0,
    0x0, 0xff, 0xf8, 0x0, 0x31, 0xff, 0xe3, 0xff,
    0xc0, 0x1, 0x9f, 0xff, 0x3f, 0xfe
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 85, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 88, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 7, .adv_w = 154, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 13, .adv_w = 195, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 32, .adv_w = 195, .box_w = 11, .box_h = 20, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 60, .adv_w = 270, .box_w = 16, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 90, .adv_w = 235, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 117, .adv_w = 90, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 120, .adv_w = 122, .box_w = 6, .box_h = 18, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 134, .adv_w = 122, .box_w = 6, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 148, .adv_w = 175, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 159, .adv_w = 195, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 170, .adv_w = 88, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 173, .adv_w = 113, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 175, .adv_w = 88, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 177, .adv_w = 113, .box_w = 7, .box_h = 19, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 194, .adv_w = 195, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 215, .adv_w = 147, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 227, .adv_w = 195, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 246, .adv_w = 195, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 267, .adv_w = 195, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 288, .adv_w = 195, .box_w = 10, .box_h = 15, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 307, .adv_w = 195, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 326, .adv_w = 195, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 345, .adv_w = 195, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 366, .adv_w = 195, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 385, .adv_w = 88, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 390, .adv_w = 88, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 396, .adv_w = 195, .box_w = 9, .box_h = 10, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 408, .adv_w = 195, .box_w = 9, .box_h = 6, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 415, .adv_w = 195, .box_w = 9, .box_h = 10, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 427, .adv_w = 166, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 444, .adv_w = 332, .box_w = 19, .box_h = 19, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 490, .adv_w = 228, .box_w = 14, .box_h = 15, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 517, .adv_w = 212, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 538, .adv_w = 222, .box_w = 12, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 561, .adv_w = 236, .box_w = 12, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 584, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 601, .adv_w = 180, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 618, .adv_w = 236, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 643, .adv_w = 239, .box_w = 12, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 666, .adv_w = 94, .box_w = 3, .box_h = 15, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 672, .adv_w = 165, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 689, .adv_w = 215, .box_w = 12, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 712, .adv_w = 178, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 729, .adv_w = 293, .box_w = 16, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 759, .adv_w = 238, .box_w = 12, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 782, .adv_w = 249, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 809, .adv_w = 200, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 828, .adv_w = 249, .box_w = 14, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 858, .adv_w = 209, .box_w = 12, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 881, .adv_w = 200, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 904, .adv_w = 195, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 925, .adv_w = 236, .box_w = 12, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 948, .adv_w = 228, .box_w = 14, .box_h = 15, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 975, .adv_w = 322, .box_w = 20, .box_h = 15, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1013, .adv_w = 221, .box_w = 12, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1036, .adv_w = 214, .box_w = 13, .box_h = 15, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1061, .adv_w = 213, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1082, .adv_w = 122, .box_w = 6, .box_h = 18, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 1096, .adv_w = 113, .box_w = 7, .box_h = 19, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1113, .adv_w = 122, .box_w = 6, .box_h = 18, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1127, .adv_w = 195, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1139, .adv_w = 85, .box_w = 5, .box_h = 2, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 1141, .adv_w = 169, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 1143, .adv_w = 206, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1159, .adv_w = 206, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1180, .adv_w = 178, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1194, .adv_w = 206, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1215, .adv_w = 191, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1229, .adv_w = 124, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1243, .adv_w = 202, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = -6},
    {.bitmap_index = 1265, .adv_w = 200, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1284, .adv_w = 88, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1290, .adv_w = 88, .box_w = 6, .box_h = 20, .ofs_x = -1, .ofs_y = -6},
    {.bitmap_index = 1305, .adv_w = 184, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1324, .adv_w = 88, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1330, .adv_w = 296, .box_w = 15, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1351, .adv_w = 200, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1365, .adv_w = 199, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1381, .adv_w = 206, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = -6},
    {.bitmap_index = 1403, .adv_w = 206, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = -6},
    {.bitmap_index = 1425, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1434, .adv_w = 167, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1447, .adv_w = 128, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1460, .adv_w = 200, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1474, .adv_w = 189, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1490, .adv_w = 280, .box_w = 16, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1512, .adv_w = 190, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1526, .adv_w = 190, .box_w = 11, .box_h = 16, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 1548, .adv_w = 177, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1561, .adv_w = 122, .box_w = 7, .box_h = 18, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1577, .adv_w = 90, .box_w = 3, .box_h = 18, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 1584, .adv_w = 122, .box_w = 6, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1598, .adv_w = 195, .box_w = 10, .box_h = 3, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 1602, .adv_w = 288, .box_w = 16, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1606, .adv_w = 288, .box_w = 16, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1634, .adv_w = 288, .box_w = 14, .box_h = 17, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 1664, .adv_w = 288, .box_w = 16, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1692, .adv_w = 288, .box_w = 16, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1724, .adv_w = 288, .box_w = 16, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1754, .adv_w = 288, .box_w = 17, .box_h = 17, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1791, .adv_w = 288, .box_w = 16, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1823, .adv_w = 288, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1857, .adv_w = 288, .box_w = 16, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1889, .adv_w = 288, .box_w = 14, .box_h = 15, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 1916, .adv_w = 288, .box_w = 15, .box_h = 16, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 1946, .adv_w = 288, .box_w = 16, .box_h = 17, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1980, .adv_w = 288, .box_w = 17, .box_h = 17, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2017, .adv_w = 288, .box_w = 17, .box_h = 17, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2054, .adv_w = 288, .box_w = 17, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2088, .adv_w = 288, .box_w = 17, .box_h = 17, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2125, .adv_w = 288, .box_w = 12, .box_h = 16, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 2149, .adv_w = 288, .box_w = 16, .box_h = 17, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2183, .adv_w = 288, .box_w = 16, .box_h = 17, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2217, .adv_w = 288, .box_w = 16, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2253, .adv_w = 288, .box_w = 15, .box_h = 16, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 2283, .adv_w = 288, .box_w = 16, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2315, .adv_w = 288, .box_w = 15, .box_h = 16, .ofs_x = 1, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0x9, 0x2d, 0x8c, 0x91, 0x94, 0xca, 0x36d,
    0x49f, 0x668, 0x8db, 0x906, 0xb1a, 0xb27, 0xb29, 0xe0f,
    0x11b7, 0x17e5, 0x1874, 0x20e1, 0x416c, 0x4834, 0x48e8, 0x48ea
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 19968, .range_length = 18667, .glyph_id_start = 96,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 24, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    36, 34,
    36, 53,
    36, 55,
    36, 56,
    36, 57,
    36, 58,
    37, 34,
    37, 53,
    37, 55,
    37, 56,
    37, 57,
    37, 58,
    37, 71,
    37, 85,
    37, 89,
    44, 66,
    44, 68,
    44, 69,
    44, 70,
    44, 72,
    44, 80,
    44, 82,
    44, 84,
    44, 85,
    44, 86,
    48, 34,
    48, 53,
    48, 56,
    48, 57,
    48, 58,
    48, 89,
    52, 34,
    52, 66,
    52, 71,
    52, 85,
    52, 87,
    52, 88,
    52, 90,
    53, 1,
    53, 13,
    53, 14,
    53, 15,
    53, 34,
    53, 36,
    53, 40,
    53, 43,
    53, 48,
    53, 50,
    53, 52,
    53, 56,
    53, 66,
    53, 68,
    53, 69,
    53, 70,
    53, 71,
    53, 72,
    53, 78,
    53, 79,
    53, 80,
    53, 81,
    53, 82,
    53, 83,
    53, 84,
    53, 85,
    53, 86,
    53, 87,
    53, 88,
    53, 90,
    53, 91,
    55, 1,
    55, 13,
    55, 14,
    55, 15,
    55, 34,
    55, 56,
    55, 66,
    55, 68,
    55, 69,
    55, 70,
    55, 71,
    55, 72,
    55, 78,
    55, 79,
    55, 80,
    55, 81,
    55, 82,
    55, 83,
    55, 84,
    55, 85,
    55, 86,
    55, 91,
    56, 1,
    57, 14,
    57, 36,
    57, 40,
    57, 48,
    57, 50,
    57, 52,
    57, 54,
    57, 66,
    57, 68,
    57, 69,
    57, 70,
    57, 72,
    57, 80,
    57, 82,
    57, 84,
    57, 85,
    57, 86,
    57, 87,
    57, 88,
    57, 90,
    58, 1,
    58, 66,
    58, 68,
    58, 69,
    58, 70,
    58, 71,
    58, 72,
    58, 78,
    58, 79,
    58, 80,
    58, 81,
    58, 82,
    58, 83,
    58, 84,
    58, 85,
    58, 86,
    58, 87,
    58, 88,
    58, 89,
    58, 90,
    58, 91
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -6, -6, -6, -3, -6, -6, -6, -13,
    -6, -6, -9, -17, -3, -3, -3, -10,
    -13, -13, -13, -13, -13, -13, -13, -9,
    -10, -6, -13, -6, -9, -13, -6, -6,
    -4, -4, -4, -9, -9, -9, -14, -29,
    -29, -29, -26, -9, -9, -29, -9, -9,
    -9, -6, -40, -40, -40, -40, -26, -40,
    -26, -26, -40, -26, -40, -26, -40, -26,
    -26, -26, -26, -26, -26, -14, -35, -17,
    -35, -23, -6, -23, -23, -23, -23, -9,
    -23, -9, -9, -23, -9, -23, -9, -23,
    -9, -9, -9, -9, -17, -10, -10, -10,
    -10, -10, -10, -10, -13, -13, -13, -13,
    -13, -13, -10, -10, -10, -22, -22, -17,
    -14, -40, -40, -40, -40, -26, -40, -26,
    -26, -40, -26, -40, -26, -40, -26, -26,
    -26, -26, -26, -26, -26
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 133,
    .glyph_ids_size = 0
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
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 2,
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
const lv_font_t ui_font_OPPOSansH18 = {
#else
lv_font_t ui_font_OPPOSansH18 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 22,          /*The maximum line height required by the font*/
    .base_line = 6,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_OPPOSANSH18*/

