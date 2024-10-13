/*
 *
 * Copyright (c) 2021 Darryl deHaan
 * SPDX-License-Identifier: MIT
 *
 */

#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif
#ifndef LV_ATTRIBUTE_IMG_BLUETOOTH_ADVERTISING_4
#define LV_ATTRIBUTE_IMG_BLUETOOTH_ADVERTISING_4
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_BLUETOOTH_ADVERTISING_4 uint8_t
    bluetooth_advertising_4_map[] = {
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/

        0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x01, 0xfc, 0x00, 0x00, 0xfe, 0x00,
        0x00, 0x0f, 0xff, 0x00, 0x20, 0xff, 0x00, 0x00, 0x1f, 0xff, 0xc0, 0x70, 0xf7, 0x80, 0x00,
        0x3f, 0xff, 0xe0, 0xf8, 0xf3, 0xc0, 0xc0, 0x7f, 0xff, 0xe0, 0x7c, 0xf3, 0xe0, 0xc0, 0xff,
        0xff, 0xf0, 0x3e, 0xf7, 0xc0, 0xe0, 0xff, 0xcf, 0xf8, 0x1f, 0xff, 0x84, 0x61, 0xff, 0x8f,
        0xf8, 0x0f, 0xff, 0x0e, 0x71, 0xff, 0x0f, 0xf8, 0x07, 0xfe, 0x06, 0x31, 0xff, 0x0f, 0xfc,
        0x03, 0xfc, 0x27, 0x31, 0xfe, 0x4f, 0xfc, 0x01, 0xf8, 0x67, 0x31, 0xfc, 0x4f, 0xfc, 0x01,
        0xf8, 0x67, 0x33, 0xfc, 0xcf, 0xfc, 0x03, 0xfc, 0x27, 0x31, 0xf8, 0x07, 0xfc, 0x07, 0xfe,
        0x06, 0x31, 0xf8, 0x03, 0xfc, 0x0f, 0xff, 0x0e, 0x71, 0xf8, 0x07, 0xf8, 0x1f, 0xff, 0x84,
        0x61, 0xff, 0xcf, 0xf8, 0x3e, 0xf7, 0xc0, 0xe0, 0xff, 0xcf, 0xf8, 0x7c, 0xf3, 0xe1, 0xc0,
        0xff, 0xff, 0xf0, 0xf8, 0xf3, 0xc0, 0xc0, 0x7f, 0xff, 0xe0, 0x70, 0xf7, 0x80, 0x00, 0x3f,
        0xff, 0xc0, 0x20, 0xff, 0x00, 0x00, 0x1f, 0xff, 0x80, 0x00, 0xfe, 0x00, 0x00, 0x07, 0xff,
        0x00, 0x00, 0xfc, 0x00, 0x00, 0x01, 0xf8, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00,
};

const lv_img_dsc_t bluetooth_advertising_4 = {
    .header.always_zero = 0,
    .header.w = 54,
    .header.h = 35,
    .data_size = 254,
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = bluetooth_advertising_4_map,
};
