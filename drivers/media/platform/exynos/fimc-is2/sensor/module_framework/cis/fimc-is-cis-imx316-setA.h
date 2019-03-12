/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_CIS_IMX316_SET_A_H
#define FIMC_IS_CIS_IMX316_SET_A_H

#include "fimc-is-cis.h"
#include "fimc-is-cis-imx316.h"
#include "fimc-is-helper-i2c.h"

const u32 sensor_imx316_setfile_A_Global[] = { /* Fixed*/
	0x1006,	0x1A, 0x01,
	0x1007,	0x00, 0x01,
	0x1000,	0x00, 0x01,
	0x210F,	0x00, 0x01,
	0x4053,	0x00, 0x01,
	0x474C,	0x00, 0x01,
	0x474D,	0x00, 0x01,
	0x474E,	0x1F, 0x01,
	0x474F,	0xFF, 0x01,
	0x492D,	0x78, 0x01,
	0x4937,	0x3C, 0x01,
	0x493D,	0x76, 0x01,
	0x4947,	0x3F, 0x01,
	0x4963,	0x78, 0x01,
	0x496D,	0x3C, 0x01,
	0x4B7F,	0x41, 0x01,
	0x4B83,	0x44, 0x01,
	0x4C39,	0x07, 0x01,
	0x4C4C,	0x02, 0x01,
	0x4D13,	0x01, 0x01,
	0x4E11,	0x01, 0x01,
	0x4F08,	0x72, 0x01,
	0x5825,	0x2F, 0x01,
	0x5827,	0x1E, 0x01,
	0x2140,	0x00, 0x01,
	0x4F03,	0x40, 0x01,
	0x5857,	0xDB, 0x01,
	0x5886,	0x3B, 0x01,
	0x5887,	0x28, 0x01,
	0x588A,	0x05, 0x01,
	0x588B,	0x14, 0x01,
	0x4765,	0xD4, 0x01,
	0x4767,	0xD6, 0x01,
	0x4755,	0xDA, 0x01,
	0x4756,	0x0B, 0x01,
	0x4757,	0x41, 0x01,
	0x4BBD,	0xDA, 0x01,
	0x4BBE,	0x0B, 0x01,
	0x4BBF,	0x41, 0x01,
	0x4B7C,	0x0A, 0x01,
	0x4B7D,	0xDA, 0x01,
	0x4B7E,	0x0B, 0x01,
	0x4B80,	0x0A, 0x01,
	0x4B81,	0xD7, 0x01,
	0x4B82,	0x0B, 0x01,
	0x4B8C,	0x0A, 0x01,
	0x4B8D,	0xDA, 0x01,
	0x4B8E,	0x0A, 0x01,
	0x4B8F,	0xDC, 0x01,
	0x4D03,	0x04, 0x01,
	0x4D0A,	0x04, 0x01,
	0x4D0F,	0x04, 0x01,
	0x3C2B,	0x1B, 0x01,
	0x4C02,	0x2F, 0x01,
	0x4F09,	0x18, 0x01,
	0x4058,	0xFF, 0x01,
	0x4059,	0xFF, 0x01,
	0x405A,	0xFF, 0x01,
	0x405B,	0xFF, 0x01,
	0x21B8,	0x31, 0x01,
	0x21B9,	0x09, 0x01,
	0x21BA,	0x09, 0x01,
};

/* rear tof */
const u32 sensor_imx316_setfile_A_480x180_240fps_CD2D[] = {
	0x4073,	0x01, 0x01,
	0x1040,	0x00, 0x01,
	0x1041,	0x8A, 0x01,
	0x1042,	0x03, 0x01,
	0x1048,	0x00, 0x01,
	0x1049,	0x8A, 0x01,
	0x104A,	0x03, 0x01,
	0x100C,	0x09, 0x01,
	0x100D,	0x58, 0x01,
	0x100E,	0x00, 0x01,
	0x100F,	0x00, 0x01,
	0x1016,	0x02, 0x01,
	0x1017,	0x66, 0x01,
	0x1060,	0x00, 0x01,
	0x1071,	0x06, 0x01,
	0x020E,	0x00, 0x01,
	0x020F,	0x96, 0x01,
	0x1010,	0x01, 0x01,
	0x1C40,	0x01, 0x01,
	0x0800,	0x02, 0x01,
	0x0801,	0xFE, 0x01,
	0x4015,	0x00, 0x01,
	0x4016,	0x2A, 0x01,
	0x4078,	0x00, 0x01,
	0x4079,	0x00, 0x01,
	0x407A,	0x00, 0x01,
	0x407B,	0x17, 0x01,
	0x4080,	0x00, 0x01,
	0x4081,	0x00, 0x01,
	0x4082,	0x00, 0x01,
	0x4083,	0x32, 0x01,
	0x5869,	0x00, 0x01,
	0x586A,	0x23, 0x01,
	0x586B,	0xBA, 0x01,
	0x46FA,	0x0E, 0x01,
	0x46FB,	0x77, 0x01,
	0x4716,	0x0E, 0x01,
	0x4717,	0x77, 0x01,
	0x2148,	0x05, 0x01,
	0x2149,	0x05, 0x01,
	0x214A,	0x05, 0x01,
	0x214B,	0x05, 0x01,
	0x400E,	0x03, 0x01,
	0x400F,	0xFE, 0x01,
	0x5865,	0x00, 0x01,
	0x5866,	0x00, 0x01,
	0x5867,	0x01, 0x01,
	0x082C,	0x22, 0x01,
	0x082D,	0x22, 0x01,
	0x082E,	0x00, 0x01,
	0x082F,	0x00, 0x01,
	0x0830,	0x33, 0x01,
	0x0831,	0x33, 0x01,
	0x0832,	0x00, 0x01,
	0x0833,	0x00, 0x01,
	0x0834,	0xFF, 0x01,
	0x212C,	0x00, 0x01,
	0x212D,	0x00, 0x01,
	0x2130,	0x00, 0x01,
	0x2131,	0x00, 0x01,
	0x2134,	0x00, 0x01,
	0x2135,	0x00, 0x01,
	0x1433,	0x01, 0x01,
	0x149b,	0x00, 0x01,
	0x1434,	0x00, 0x01,
	0x1435,	0x00, 0x01,
	0x1436,	0x00, 0x01,
	0x1437,	0x00, 0x01,
	0x1438,	0x00, 0x01,
	0x1439,	0x00, 0x01,
	0x143C,	0x06, 0x01,
	0x143D,	0x40, 0x01,
	0x143E,	0x06, 0x01,
	0x143F,	0x40, 0x01,
	0x1440,	0x06, 0x01,
	0x1441,	0x40, 0x01,
	0x2C0C,	0x00, 0x01,
	0x2C0D,	0x84, 0x01,
	0x3c18,	0x02, 0x01,
	0x0804,	0x00, 0x01,
	0x0805,	0x01, 0x01,
	0x0807,	0xF0, 0x01,
	0x0808,	0x00, 0x01,
	0x0809,	0x01, 0x01,
	0x080a,	0x00, 0x01,
	0x080b,	0x5A, 0x01,
	0x0810,	0x00, 0x01,
	0x0811,	0x00, 0x01,
	0x2110,	0x00, 0x01,
	0x2111,	0x01, 0x01,
	0x2112,	0x0A, 0x01,
	0x2113,	0x4C, 0x01,
	0x2114,	0x00, 0x01,
	0x2115,	0x01, 0x01,
	0x2116,	0x0A, 0x01,
	0x2117,	0x4C, 0x01,
	0x2118,	0x00, 0x01,
	0x2119,	0x00, 0x01,
	0x211A,	0x09, 0x01,
	0x211B,	0x60, 0x01,
	0x2168,	0x04, 0x01,
	0x216C,	0x1E, 0x01,
	0x216D,	0x06, 0x01,
	0x216E,	0x06, 0x01,
	0x2154,	0x00, 0x01,
	0x2155,	0x00, 0x01,
	0x2108,	0x00, 0x01,
	0x2109,	0x00, 0x01,
	0x210A,	0x0A, 0x01,
	0x210B,	0x28, 0x01,
	0x2100,	0x48, 0x01,
	0x0828,	0x2D, 0x01,
	0x2018,	0x06, 0x01,
	0x2178,	0x06, 0x01,
	0x2179,	0x15, 0x01,
	0x217A,	0x24, 0x01,
	0x217B,	0x33, 0x01,
	0x2180,	0x06, 0x01,
	0x2181,	0x09, 0x01,
	0x2182,	0x0C, 0x01,
	0x2183,	0x0F, 0x01,
	0x2188,	0x06, 0x01,
	0x2189,	0x09, 0x01,
	0x218A,	0x0C, 0x01,
	0x218B,	0x0F, 0x01,
	0x4131,	0x01, 0x01,
	0x21a8,	0x14, 0x01,
	0x21a9,	0x04, 0x01,
	0x21aa,	0x04, 0x01,
	0x0145,	0x00, 0x01,
	0x0148,	0x01, 0x01,
	0x2020,	0x01, 0x01,
	0x3071,	0x03, 0x01,
	0x2F05,	0x07, 0x01,
	0x2F06,	0x00, 0x01,
	0x2F07,	0x00, 0x01,
	0x2237,	0x01, 0x01,
	0x2238,	0x7F, 0x01,
	0x2239,	0xFF, 0x01,
	0x2211,	0x00, 0x01,
	0x2212,	0x00, 0x01,
	0x2213,	0xF8, 0x01,
	0x2215,	0x00, 0x01,
	0x2216,	0x00, 0x01,
	0x2217,	0xF8, 0x01,
	0x2219,	0x00, 0x01,
	0x221a,	0x00, 0x01,
	0x221b,	0xF8, 0x01,
	0x221d,	0x00, 0x01,
	0x221e,	0x00, 0x01,
	0x221f,	0xF8, 0x01,
	0x2221,	0x00, 0x01,
	0x2222,	0x00, 0x01,
	0x2223,	0xF8, 0x01,
	0x2225,	0x00, 0x01,
	0x2226,	0x00, 0x01,
	0x2227,	0xF8, 0x01,
	0x1405,	0x01, 0x01,
	0x1406,	0x80, 0x01,
	0x1407,	0x00, 0x01,
	0x0403,	0x20, 0x01,
	0x0405,	0x00, 0x01,
	0x0450,	0x47, 0x01,
	0x0500,	0x02, 0x01,
	0x0501,	0x13, 0x01,
	0x0502,	0x23, 0x01,
	0x0401,	0x01, 0x01,
	0x0400,	0x01, 0x01,
	0x0401,	0x00, 0x01,
	I2C_MODE_DELAY, 100, 0x00,
	0x0403,	0x20, 0x01,
	0x0405,	0x01, 0x01,
	0x0450,	0x47, 0x01,
	0x0500,	0x02, 0x01,
	0x0501,	0x25, 0x01,
	0x0502,	0x01, 0x01,
	0x0503,	0x15, 0x01,
	0x0504,	0x00, 0x01,
	0x0505,	0x0C, 0x01,
	0x0506,	0x00, 0x01,
	0x0507,	0x00, 0x01,
	0x0508,	0x00, 0x01,
	0x0509,	0x00, 0x01,
	0x050A,	0x00, 0x01,
	0x050B,	0x00, 0x01,
	0x050C,	0x50, 0x01,
	0x050D,	0xAA, 0x01,
	0x050E,	0x00, 0x01,
	0x050F,	0x04, 0x01,
	0x0510,	0x00, 0x01,
	0x0511,	0x28, 0x01,
	0x0512,	0xC0, 0x01,
	0x0513,	0x77, 0x01,
	0x0514,	0xAC, 0x01,
	0x0515,	0x06, 0x01,
	0x0516,	0x00, 0x01,
	0x0517,	0x20, 0x01,
	0x0518,	0x01, 0x01,
	0x0401,	0x01, 0x01,
	0x0400,	0x01, 0x01,
	0x0401,	0x00, 0x01,
	0x0413,	0xA0, 0x01,
	0x0417,	0x19, 0x01,
	0x0423,	0xA0, 0x01,
	0x0427,	0x1C, 0x01,
	0x042a,	0x01, 0x01,
	0x0519,	0x02, 0x01,
	0x051A,	0x13, 0x01,
	0x051B,	0x21, 0x01,
	0x051C,	0x03, 0x01,
	0x051D,	0x94, 0x01,
	0x0411,	0x01, 0x01,
	0x0421,	0x01, 0x01,
};

const u32 sensor_imx316_setfile_A_480x180_240fps_CD2E[] = {
	0x4073,	0x01, 0x01,
	0x1040,	0x00, 0x01,
	0x1041,	0x8A, 0x01,
	0x1042,	0x03, 0x01,
	0x1048,	0x00, 0x01,
	0x1049,	0x8A, 0x01,
	0x104A,	0x03, 0x01,
	0x100C,	0x09, 0x01,
	0x100D,	0x58, 0x01,
	0x100E,	0x00, 0x01,
	0x100F,	0x00, 0x01,
	0x1016,	0x02, 0x01,
	0x1017,	0x66, 0x01,
	0x1060,	0x00, 0x01,
	0x1071,	0x06, 0x01,
	0x020E,	0x00, 0x01,
	0x020F,	0x96, 0x01,
	0x1010,	0x01, 0x01,
	0x1C40,	0x01, 0x01,
	0x0800,	0x02, 0x01,
	0x0801,	0xFE, 0x01,
	0x4015,	0x00, 0x01,
	0x4016,	0x2A, 0x01,
	0x4078,	0x00, 0x01,
	0x4079,	0x00, 0x01,
	0x407A,	0x00, 0x01,
	0x407B,	0x17, 0x01,
	0x4080,	0x00, 0x01,
	0x4081,	0x00, 0x01,
	0x4082,	0x00, 0x01,
	0x4083,	0x32, 0x01,
	0x5869,	0x00, 0x01,
	0x586A,	0x23, 0x01,
	0x586B,	0xBA, 0x01,
	0x46FA,	0x0E, 0x01,
	0x46FB,	0x77, 0x01,
	0x4716,	0x0E, 0x01,
	0x4717,	0x77, 0x01,
	0x2148,	0x05, 0x01,
	0x2149,	0x05, 0x01,
	0x214A,	0x05, 0x01,
	0x214B,	0x05, 0x01,
	0x400E,	0x03, 0x01,
	0x400F,	0xFE, 0x01,
	0x5865,	0x00, 0x01,
	0x5866,	0x00, 0x01,
	0x5867,	0x01, 0x01,
	0x082C,	0x22, 0x01,
	0x082D,	0x22, 0x01,
	0x082E,	0x00, 0x01,
	0x082F,	0x00, 0x01,
	0x0830,	0x33, 0x01,
	0x0831,	0x33, 0x01,
	0x0832,	0x00, 0x01,
	0x0833,	0x00, 0x01,
	0x0834,	0xFF, 0x01,
	0x212C,	0x00, 0x01,
	0x212D,	0x00, 0x01,
	0x2130,	0x00, 0x01,
	0x2131,	0x00, 0x01,
	0x2134,	0x00, 0x01,
	0x2135,	0x00, 0x01,
	0x1433,	0x01, 0x01,
	0x149b,	0x00, 0x01,
	0x1434,	0x00, 0x01,
	0x1435,	0x00, 0x01,
	0x1436,	0x00, 0x01,
	0x1437,	0x00, 0x01,
	0x1438,	0x00, 0x01,
	0x1439,	0x00, 0x01,
	0x143C,	0x06, 0x01,
	0x143D,	0x40, 0x01,
	0x143E,	0x06, 0x01,
	0x143F,	0x40, 0x01,
	0x1440,	0x06, 0x01,
	0x1441,	0x40, 0x01,
	0x2C0C,	0x00, 0x01,
	0x2C0D,	0x84, 0x01,
	0x3c18,	0x02, 0x01,
	0x0804,	0x00, 0x01,
	0x0805,	0x01, 0x01,
	0x0807,	0xF0, 0x01,
	0x0808,	0x00, 0x01,
	0x0809,	0x01, 0x01,
	0x080a,	0x00, 0x01,
	0x080b,	0x5A, 0x01,
	0x0810,	0x00, 0x01,
	0x0811,	0x00, 0x01,
	0x2110,	0x00, 0x01,
	0x2111,	0x01, 0x01,
	0x2112,	0x0A, 0x01,
	0x2113,	0x4C, 0x01,
	0x2114,	0x00, 0x01,
	0x2115,	0x01, 0x01,
	0x2116,	0x0A, 0x01,
	0x2117,	0x4C, 0x01,
	0x2118,	0x00, 0x01,
	0x2119,	0x00, 0x01,
	0x211A,	0x09, 0x01,
	0x211B,	0x60, 0x01,
	0x2168,	0x04, 0x01,
	0x216C,	0x1E, 0x01,
	0x216D,	0x06, 0x01,
	0x216E,	0x06, 0x01,
	0x2154,	0x00, 0x01,
	0x2155,	0x00, 0x01,
	0x2108,	0x00, 0x01,
	0x2109,	0x00, 0x01,
	0x210A,	0x0A, 0x01,
	0x210B,	0x28, 0x01,
	0x2100,	0x48, 0x01,
	0x0828,	0x2E, 0x01,
	0x2018,	0x06, 0x01,
	0x2178,	0x06, 0x01,
	0x2179,	0x15, 0x01,
	0x217A,	0x24, 0x01,
	0x217B,	0x33, 0x01,
	0x2180,	0x06, 0x01,
	0x2181,	0x09, 0x01,
	0x2182,	0x0C, 0x01,
	0x2183,	0x0F, 0x01,
	0x2188,	0x06, 0x01,
	0x2189,	0x09, 0x01,
	0x218A,	0x0C, 0x01,
	0x218B,	0x0F, 0x01,
	0x4131,	0x01, 0x01,
	0x21a8,	0x14, 0x01,
	0x21a9,	0x04, 0x01,
	0x21aa,	0x04, 0x01,
	0x0145,	0x00, 0x01,
	0x0148,	0x01, 0x01,
	0x2020,	0x01, 0x01,
	0x3071,	0x03, 0x01,
	0x2F05,	0x07, 0x01,
	0x2F06,	0x00, 0x01,
	0x2F07,	0x00, 0x01,
	0x2237,	0x01, 0x01,
	0x2238,	0x7F, 0x01,
	0x2239,	0xFF, 0x01,
	0x2211,	0x00, 0x01,
	0x2212,	0x00, 0x01,
	0x2213,	0xF8, 0x01,
	0x2215,	0x00, 0x01,
	0x2216,	0x00, 0x01,
	0x2217,	0xF8, 0x01,
	0x2219,	0x00, 0x01,
	0x221a,	0x00, 0x01,
	0x221b,	0xF8, 0x01,
	0x221d,	0x00, 0x01,
	0x221e,	0x00, 0x01,
	0x221f,	0xF8, 0x01,
	0x2221,	0x00, 0x01,
	0x2222,	0x00, 0x01,
	0x2223,	0xF8, 0x01,
	0x2225,	0x00, 0x01,
	0x2226,	0x00, 0x01,
	0x2227,	0xF8, 0x01,
	0x1405,	0x01, 0x01,
	0x1406,	0x80, 0x01,
	0x1407,	0x00, 0x01,
	0x0403,	0x20, 0x01,
	0x0405,	0x00, 0x01,
	0x0450,	0x47, 0x01,
	0x0500,	0x02, 0x01,
	0x0501,	0x13, 0x01,
	0x0502,	0x23, 0x01,
	0x0401,	0x01, 0x01,
	0x0400,	0x01, 0x01,
	0x0401,	0x00, 0x01,
	I2C_MODE_DELAY, 100, 0x00,
	0x0403,	0x20, 0x01,
	0x0405,	0x01, 0x01,
	0x0450,	0x47, 0x01,
	0x0500,	0x02, 0x01,
	0x0501,	0x25, 0x01,
	0x0502,	0x01, 0x01,
	0x0503,	0x15, 0x01,
	0x0504,	0x00, 0x01,
	0x0505,	0x0C, 0x01,
	0x0506,	0x00, 0x01,
	0x0507,	0x00, 0x01,
	0x0508,	0x00, 0x01,
	0x0509,	0x00, 0x01,
	0x050A,	0x00, 0x01,
	0x050B,	0x00, 0x01,
	0x050C,	0x50, 0x01,
	0x050D,	0xAA, 0x01,
	0x050E,	0x00, 0x01,
	0x050F,	0x04, 0x01,
	0x0510,	0x00, 0x01,
	0x0511,	0x28, 0x01,
	0x0512,	0xC0, 0x01,
	0x0513,	0x77, 0x01,
	0x0514,	0xAC, 0x01,
	0x0515,	0x06, 0x01,
	0x0516,	0x00, 0x01,
	0x0517,	0x20, 0x01,
	0x0518,	0x01, 0x01,
	0x0401,	0x01, 0x01,
	0x0400,	0x01, 0x01,
	0x0401,	0x00, 0x01,
	0x0413,	0xA0, 0x01,
	0x0417,	0x19, 0x01,
	0x0423,	0xA0, 0x01,
	0x0427,	0x1C, 0x01,
	0x042a,	0x01, 0x01,
	0x0519,	0x02, 0x01,
	0x051A,	0x13, 0x01,
	0x051B,	0x21, 0x01,
	0x051C,	0x03, 0x01,
	0x051D,	0x94, 0x01,
	0x0411,	0x01, 0x01,
	0x0421,	0x01, 0x01,
};

const u32 sensor_imx316_setfile_A_480x180_240fps_CD35[] = {
	0x4073,	0x01, 0x01,
	0x1040,	0x00, 0x01,
	0x1041,	0x8A, 0x01,
	0x1042,	0x03, 0x01,
	0x1048,	0x00, 0x01,
	0x1049,	0x8A, 0x01,
	0x104A,	0x03, 0x01,
	0x100C,	0x09, 0x01,
	0x100D,	0x58, 0x01,
	0x100E,	0x00, 0x01,
	0x100F,	0x00, 0x01,
	0x1016,	0x02, 0x01,
	0x1017,	0x66, 0x01,
	0x1060,	0x00, 0x01,
	0x1071,	0x06, 0x01,
	0x020E,	0x00, 0x01,
	0x020F,	0x96, 0x01,
	0x1010,	0x01, 0x01,
	0x1C40,	0x01, 0x01,
	0x0800,	0x02, 0x01,
	0x0801,	0xFE, 0x01,
	0x4015,	0x00, 0x01,
	0x4016,	0x2A, 0x01,
	0x4078,	0x00, 0x01,
	0x4079,	0x00, 0x01,
	0x407A,	0x00, 0x01,
	0x407B,	0x17, 0x01,
	0x4080,	0x00, 0x01,
	0x4081,	0x00, 0x01,
	0x4082,	0x00, 0x01,
	0x4083,	0x32, 0x01,
	0x5869,	0x00, 0x01,
	0x586A,	0x23, 0x01,
	0x586B,	0xBA, 0x01,
	0x46FA,	0x0E, 0x01,
	0x46FB,	0x77, 0x01,
	0x4716,	0x0E, 0x01,
	0x4717,	0x77, 0x01,
	0x2148,	0x05, 0x01,
	0x2149,	0x05, 0x01,
	0x214A,	0x05, 0x01,
	0x214B,	0x05, 0x01,
	0x400E,	0x03, 0x01,
	0x400F,	0xFE, 0x01,
	0x5865,	0x00, 0x01,
	0x5866,	0x00, 0x01,
	0x5867,	0x01, 0x01,
	0x082C,	0x22, 0x01,
	0x082D,	0x22, 0x01,
	0x082E,	0x00, 0x01,
	0x082F,	0x00, 0x01,
	0x0830,	0x33, 0x01,
	0x0831,	0x33, 0x01,
	0x0832,	0x00, 0x01,
	0x0833,	0x00, 0x01,
	0x0834,	0xFF, 0x01,
	0x212C,	0x00, 0x01,
	0x212D,	0x00, 0x01,
	0x2130,	0x00, 0x01,
	0x2131,	0x00, 0x01,
	0x2134,	0x00, 0x01,
	0x2135,	0x00, 0x01,
	0x1433,	0x01, 0x01,
	0x149b,	0x00, 0x01,
	0x1434,	0x00, 0x01,
	0x1435,	0x00, 0x01,
	0x1436,	0x00, 0x01,
	0x1437,	0x00, 0x01,
	0x1438,	0x00, 0x01,
	0x1439,	0x00, 0x01,
	0x143C,	0x06, 0x01,
	0x143D,	0x40, 0x01,
	0x143E,	0x06, 0x01,
	0x143F,	0x40, 0x01,
	0x1440,	0x06, 0x01,
	0x1441,	0x40, 0x01,
	0x2C0C,	0x00, 0x01,
	0x2C0D,	0x84, 0x01,
	0x3c18,	0x02, 0x01,
	0x0804,	0x00, 0x01,
	0x0805,	0x01, 0x01,
	0x0807,	0xF0, 0x01,
	0x0808,	0x00, 0x01,
	0x0809,	0x01, 0x01,
	0x080a,	0x00, 0x01,
	0x080b,	0x5A, 0x01,
	0x0810,	0x00, 0x01,
	0x0811,	0x00, 0x01,
	0x2110,	0x00, 0x01,
	0x2111,	0x01, 0x01,
	0x2112,	0x0A, 0x01,
	0x2113,	0x4C, 0x01,
	0x2114,	0x00, 0x01,
	0x2115,	0x01, 0x01,
	0x2116,	0x0A, 0x01,
	0x2117,	0x4C, 0x01,
	0x2118,	0x00, 0x01,
	0x2119,	0x00, 0x01,
	0x211A,	0x09, 0x01,
	0x211B,	0x60, 0x01,
	0x2168,	0x04, 0x01,
	0x216C,	0x1E, 0x01,
	0x216D,	0x06, 0x01,
	0x216E,	0x06, 0x01,
	0x2154,	0x00, 0x01,
	0x2155,	0x00, 0x01,
	0x2108,	0x00, 0x01,
	0x2109,	0x00, 0x01,
	0x210A,	0x0A, 0x01,
	0x210B,	0x28, 0x01,
	0x2100,	0x48, 0x01,
	0x0828,	0x35, 0x01,
	0x2018,	0x06, 0x01,
	0x2178,	0x06, 0x01,
	0x2179,	0x15, 0x01,
	0x217A,	0x24, 0x01,
	0x217B,	0x33, 0x01,
	0x2180,	0x06, 0x01,
	0x2181,	0x09, 0x01,
	0x2182,	0x0C, 0x01,
	0x2183,	0x0F, 0x01,
	0x2188,	0x06, 0x01,
	0x2189,	0x09, 0x01,
	0x218A,	0x0C, 0x01,
	0x218B,	0x0F, 0x01,
	0x4131,	0x01, 0x01,
	0x21a8,	0x14, 0x01,
	0x21a9,	0x04, 0x01,
	0x21aa,	0x04, 0x01,
	0x0145,	0x00, 0x01,
	0x0148,	0x01, 0x01,
	0x2020,	0x01, 0x01,
	0x3071,	0x03, 0x01,
	0x2F05,	0x07, 0x01,
	0x2F06,	0x00, 0x01,
	0x2F07,	0x00, 0x01,
	0x2237,	0x01, 0x01,
	0x2238,	0x7F, 0x01,
	0x2239,	0xFF, 0x01,
	0x2211,	0x00, 0x01,
	0x2212,	0x00, 0x01,
	0x2213,	0xF8, 0x01,
	0x2215,	0x00, 0x01,
	0x2216,	0x00, 0x01,
	0x2217,	0xF8, 0x01,
	0x2219,	0x00, 0x01,
	0x221a,	0x00, 0x01,
	0x221b,	0xF8, 0x01,
	0x221d,	0x00, 0x01,
	0x221e,	0x00, 0x01,
	0x221f,	0xF8, 0x01,
	0x2221,	0x00, 0x01,
	0x2222,	0x00, 0x01,
	0x2223,	0xF8, 0x01,
	0x2225,	0x00, 0x01,
	0x2226,	0x00, 0x01,
	0x2227,	0xF8, 0x01,
	0x1405,	0x01, 0x01,
	0x1406,	0x80, 0x01,
	0x1407,	0x00, 0x01,
	0x0403,	0x20, 0x01,
	0x0405,	0x00, 0x01,
	0x0450,	0x47, 0x01,
	0x0500,	0x02, 0x01,
	0x0501,	0x13, 0x01,
	0x0502,	0x23, 0x01,
	0x0401,	0x01, 0x01,
	0x0400,	0x01, 0x01,
	0x0401,	0x00, 0x01,
	I2C_MODE_DELAY, 100, 0x00,
	0x0403,	0x20, 0x01,
	0x0405,	0x01, 0x01,
	0x0450,	0x47, 0x01,
	0x0500,	0x02, 0x01,
	0x0501,	0x25, 0x01,
	0x0502,	0x01, 0x01,
	0x0503,	0x15, 0x01,
	0x0504,	0x00, 0x01,
	0x0505,	0x0C, 0x01,
	0x0506,	0x93, 0x01,
	0x0507,	0xB1, 0x01,
	0x0508,	0x00, 0x01,
	0x0509,	0x00, 0x01,
	0x050A,	0x82, 0x01,
	0x050B,	0xA5, 0x01,
	0x050C,	0x34, 0x01,
	0x050D,	0xB5, 0x01,
	0x050E,	0x14, 0x01,
	0x050F,	0x04, 0x01,
	0x0510,	0x00, 0x01,
	0x0511,	0x28, 0x01,
	0x0512,	0xC3, 0x01,
	0x0513,	0x77, 0x01,
	0x0514,	0xAC, 0x01,
	0x0515,	0x06, 0x01,
	0x0516,	0x00, 0x01,
	0x0517,	0x20, 0x01,
	0x0518,	0x01, 0x01,
	0x0401,	0x01, 0x01,
	0x0400,	0x01, 0x01,
	0x0401,	0x00, 0x01,
	0x0413,	0xA0, 0x01,
	0x0417,	0x19, 0x01,
	0x0423,	0xA0, 0x01,
	0x0427,	0x1C, 0x01,
	0x042a,	0x01, 0x01,
	0x0519,	0x02, 0x01,
	0x051A,	0x13, 0x01,
	0x051B,	0x21, 0x01,
	0x051C,	0x03, 0x01,
	0x051D,	0x94, 0x01,
	0x0411,	0x01, 0x01,
	0x0421,	0x01, 0x01,
};

const u32 sensor_imx316_setfile_A_480x180_240fps_CD36[] = {
	0x4073,	0x01, 0x01,
	0x1040,	0x00, 0x01,
	0x1041,	0x8A, 0x01,
	0x1042,	0x03, 0x01,
	0x1048,	0x00, 0x01,
	0x1049,	0x8A, 0x01,
	0x104A,	0x03, 0x01,
	0x100C,	0x09, 0x01,
	0x100D,	0x58, 0x01,
	0x100E,	0x00, 0x01,
	0x100F,	0x00, 0x01,
	0x1016,	0x02, 0x01,
	0x1017,	0x66, 0x01,
	0x1060,	0x00, 0x01,
	0x1071,	0x06, 0x01,
	0x020E,	0x00, 0x01,
	0x020F,	0x96, 0x01,
	0x1010,	0x01, 0x01,
	0x1C40,	0x01, 0x01,
	0x0800,	0x02, 0x01,
	0x0801,	0xFE, 0x01,
	0x4015,	0x00, 0x01,
	0x4016,	0x2A, 0x01,
	0x4078,	0x00, 0x01,
	0x4079,	0x00, 0x01,
	0x407A,	0x00, 0x01,
	0x407B,	0x17, 0x01,
	0x4080,	0x00, 0x01,
	0x4081,	0x00, 0x01,
	0x4082,	0x00, 0x01,
	0x4083,	0x32, 0x01,
	0x5869,	0x00, 0x01,
	0x586A,	0x23, 0x01,
	0x586B,	0xBA, 0x01,
	0x46FA,	0x0E, 0x01,
	0x46FB,	0x77, 0x01,
	0x4716,	0x0E, 0x01,
	0x4717,	0x77, 0x01,
	0x2148,	0x05, 0x01,
	0x2149,	0x05, 0x01,
	0x214A,	0x05, 0x01,
	0x214B,	0x05, 0x01,
	0x400E,	0x03, 0x01,
	0x400F,	0xFE, 0x01,
	0x5865,	0x00, 0x01,
	0x5866,	0x00, 0x01,
	0x5867,	0x01, 0x01,
	0x082C,	0x22, 0x01,
	0x082D,	0x22, 0x01,
	0x082E,	0x00, 0x01,
	0x082F,	0x00, 0x01,
	0x0830,	0x33, 0x01,
	0x0831,	0x33, 0x01,
	0x0832,	0x00, 0x01,
	0x0833,	0x00, 0x01,
	0x0834,	0xFF, 0x01,
	0x212C,	0x00, 0x01,
	0x212D,	0x00, 0x01,
	0x2130,	0x00, 0x01,
	0x2131,	0x00, 0x01,
	0x2134,	0x00, 0x01,
	0x2135,	0x00, 0x01,
	0x1433,	0x01, 0x01,
	0x149b,	0x00, 0x01,
	0x1434,	0x00, 0x01,
	0x1435,	0x00, 0x01,
	0x1436,	0x00, 0x01,
	0x1437,	0x00, 0x01,
	0x1438,	0x00, 0x01,
	0x1439,	0x00, 0x01,
	0x143C,	0x06, 0x01,
	0x143D,	0x40, 0x01,
	0x143E,	0x06, 0x01,
	0x143F,	0x40, 0x01,
	0x1440,	0x06, 0x01,
	0x1441,	0x40, 0x01,
	0x2C0C,	0x00, 0x01,
	0x2C0D,	0x84, 0x01,
	0x3c18,	0x02, 0x01,
	0x0804,	0x00, 0x01,
	0x0805,	0x01, 0x01,
	0x0807,	0xF0, 0x01,
	0x0808,	0x00, 0x01,
	0x0809,	0x01, 0x01,
	0x080a,	0x00, 0x01,
	0x080b,	0x5A, 0x01,
	0x0810,	0x00, 0x01,
	0x0811,	0x00, 0x01,
	0x2110,	0x00, 0x01,
	0x2111,	0x01, 0x01,
	0x2112,	0x0A, 0x01,
	0x2113,	0x4C, 0x01,
	0x2114,	0x00, 0x01,
	0x2115,	0x01, 0x01,
	0x2116,	0x0A, 0x01,
	0x2117,	0x4C, 0x01,
	0x2118,	0x00, 0x01,
	0x2119,	0x00, 0x01,
	0x211A,	0x09, 0x01,
	0x211B,	0x60, 0x01,
	0x2168,	0x04, 0x01,
	0x216C,	0x1E, 0x01,
	0x216D,	0x06, 0x01,
	0x216E,	0x06, 0x01,
	0x2154,	0x00, 0x01,
	0x2155,	0x00, 0x01,
	0x2108,	0x00, 0x01,
	0x2109,	0x00, 0x01,
	0x210A,	0x0A, 0x01,
	0x210B,	0x28, 0x01,
	0x2100,	0x48, 0x01,
	0x0828,	0x36, 0x01,
	0x2018,	0x06, 0x01,
	0x2178,	0x06, 0x01,
	0x2179,	0x15, 0x01,
	0x217A,	0x24, 0x01,
	0x217B,	0x33, 0x01,
	0x2180,	0x06, 0x01,
	0x2181,	0x09, 0x01,
	0x2182,	0x0C, 0x01,
	0x2183,	0x0F, 0x01,
	0x2188,	0x06, 0x01,
	0x2189,	0x09, 0x01,
	0x218A,	0x0C, 0x01,
	0x218B,	0x0F, 0x01,
	0x4131,	0x01, 0x01,
	0x21a8,	0x14, 0x01,
	0x21a9,	0x04, 0x01,
	0x21aa,	0x04, 0x01,
	0x0145,	0x00, 0x01,
	0x0148,	0x01, 0x01,
	0x2020,	0x01, 0x01,
	0x3071,	0x03, 0x01,
	0x2F05,	0x07, 0x01,
	0x2F06,	0x00, 0x01,
	0x2F07,	0x00, 0x01,
	0x2237,	0x01, 0x01,
	0x2238,	0x7F, 0x01,
	0x2239,	0xFF, 0x01,
	0x2211,	0x00, 0x01,
	0x2212,	0x00, 0x01,
	0x2213,	0xF8, 0x01,
	0x2215,	0x00, 0x01,
	0x2216,	0x00, 0x01,
	0x2217,	0xF8, 0x01,
	0x2219,	0x00, 0x01,
	0x221a,	0x00, 0x01,
	0x221b,	0xF8, 0x01,
	0x221d,	0x00, 0x01,
	0x221e,	0x00, 0x01,
	0x221f,	0xF8, 0x01,
	0x2221,	0x00, 0x01,
	0x2222,	0x00, 0x01,
	0x2223,	0xF8, 0x01,
	0x2225,	0x00, 0x01,
	0x2226,	0x00, 0x01,
	0x2227,	0xF8, 0x01,
	0x1405,	0x01, 0x01,
	0x1406,	0x80, 0x01,
	0x1407,	0x00, 0x01,
	0x0403,	0x20, 0x01,
	0x0405,	0x00, 0x01,
	0x0450,	0x47, 0x01,
	0x0500,	0x02, 0x01,
	0x0501,	0x13, 0x01,
	0x0502,	0x23, 0x01,
	0x0401,	0x01, 0x01,
	0x0400,	0x01, 0x01,
	0x0401,	0x00, 0x01,
	I2C_MODE_DELAY, 100, 0x00,
	0x0403,	0x20, 0x01,
	0x0405,	0x01, 0x01,
	0x0450,	0x47, 0x01,
	0x0500,	0x02, 0x01,
	0x0501,	0x25, 0x01,
	0x0502,	0x01, 0x01,
	0x0503,	0x15, 0x01,
	0x0504,	0x00, 0x01,
	0x0505,	0x0C, 0x01,
	0x0506,	0x93, 0x01,
	0x0507,	0xB1, 0x01,
	0x0508,	0x00, 0x01,
	0x0509,	0x00, 0x01,
	0x050A,	0x82, 0x01,
	0x050B,	0xA5, 0x01,
	0x050C,	0x34, 0x01,
	0x050D,	0xB5, 0x01,
	0x050E,	0x14, 0x01,
	0x050F,	0x04, 0x01,
	0x0510,	0x00, 0x01,
	0x0511,	0x28, 0x01,
	0x0512,	0xC3, 0x01,
	0x0513,	0x77, 0x01,
	0x0514,	0xAC, 0x01,
	0x0515,	0x06, 0x01,
	0x0516,	0x00, 0x01,
	0x0517,	0x20, 0x01,
	0x0518,	0x01, 0x01,
	0x0401,	0x01, 0x01,
	0x0400,	0x01, 0x01,
	0x0401,	0x00, 0x01,
	0x0413,	0xA0, 0x01,
	0x0417,	0x19, 0x01,
	0x0423,	0xA0, 0x01,
	0x0427,	0x1C, 0x01,
	0x042a,	0x01, 0x01,
	0x0519,	0x02, 0x01,
	0x051A,	0x13, 0x01,
	0x051B,	0x21, 0x01,
	0x051C,	0x03, 0x01,
	0x051D,	0x94, 0x01,
	0x0411,	0x01, 0x01,
	0x0421,	0x01, 0x01,
};

/* front tof */
const u32 sensor_imx316_setfile_A_480x180_120fps_CB29[] = {
	0x4073,	0x01, 0x01,
	0x1040,	0x00, 0x01,
	0x1041,	0x8A, 0x01,
	0x1042,	0x03, 0x01,
	0x1048,	0x00, 0x01,
	0x1049,	0x8A, 0x01,
	0x104A,	0x03, 0x01,
	0x100C,	0x09, 0x01,
	0x100D,	0x58, 0x01,
	0x100E,	0x00, 0x01,
	0x100F,	0x00, 0x01,
	0x1016,	0x02, 0x01,
	0x1017,	0x66, 0x01,
	0x1060,	0x00, 0x01,
	0x1071,	0x06, 0x01,
	0x020E,	0x00, 0x01,
	0x020F,	0xA4, 0x01,
	0x1010,	0x01, 0x01,
	0x1C40,	0x01, 0x01,
	0x0800,	0x02, 0x01,
	0x0801,	0xFE, 0x01,
	0x4015,	0x00, 0x01,
	0x4016,	0x2A, 0x01,
	0x4078,	0x00, 0x01,
	0x4079,	0x00, 0x01,
	0x407A,	0x00, 0x01,
	0x407B,	0x15, 0x01,
	0x4080,	0x00, 0x01,
	0x4081,	0x00, 0x01,
	0x4082,	0x00, 0x01,
	0x4083,	0x2B, 0x01,
	0x5869,	0x00, 0x01,
	0x586A,	0x23, 0x01,
	0x586B,	0xBA, 0x01,
	0x46FA,	0x0E, 0x01,
	0x46FB,	0x77, 0x01,
	0x4716,	0x0E, 0x01,
	0x4717,	0x77, 0x01,
	0x2148,	0x05, 0x01,
	0x2149,	0x05, 0x01,
	0x214A,	0x05, 0x01,
	0x214B,	0x05, 0x01,
	0x400E,	0x03, 0x01,
	0x400F,	0xFE, 0x01,
	0x5865,	0x00, 0x01,
	0x5866,	0x00, 0x01,
	0x5867,	0x01, 0x01,
	0x082C,	0x22, 0x01,
	0x082D,	0x22, 0x01,
	0x082E,	0x00, 0x01,
	0x082F,	0x00, 0x01,
	0x0830,	0x33, 0x01,
	0x0831,	0x33, 0x01,
	0x0832,	0x00, 0x01,
	0x0833,	0x00, 0x01,
	0x0834,	0xFF, 0x01,
	0x212C,	0x00, 0x01,
	0x212D,	0x00, 0x01,
	0x2130,	0x00, 0x01,
	0x2131,	0x00, 0x01,
	0x2134,	0x00, 0x01,
	0x2135,	0x00, 0x01,
	0x1433,	0x01, 0x01,
	0x149b,	0x00, 0x01,
	0x1434,	0x00, 0x01,
	0x1435,	0x00, 0x01,
	0x1436,	0x00, 0x01,
	0x1437,	0x00, 0x01,
	0x1438,	0x00, 0x01,
	0x1439,	0x00, 0x01,
	0x143C,	0x06, 0x01,
	0x143D,	0x40, 0x01,
	0x143E,	0x06, 0x01,
	0x143F,	0x40, 0x01,
	0x1440,	0x06, 0x01,
	0x1441,	0x40, 0x01,
	0x2C0C,	0x00, 0x01,
	0x2C0D,	0x84, 0x01,
	0x3c18,	0x02, 0x01,
	0x0804,	0x00, 0x01,
	0x0805,	0x01, 0x01,
	0x0807,	0xF0, 0x01,
	0x0808,	0x00, 0x01,
	0x0809,	0x01, 0x01,
	0x080a,	0x00, 0x01,
	0x080b,	0x5A, 0x01,
	0x0810,	0x00, 0x01,
	0x0811,	0x00, 0x01,
	0x2110,	0x00, 0x01,
	0x2111,	0x01, 0x01,
	0x2112,	0x0A, 0x01,
	0x2113,	0x4C, 0x01,
	0x2114,	0x00, 0x01,
	0x2115,	0x00, 0x01,
	0x2116,	0x09, 0x01,
	0x2117,	0x60, 0x01,
	0x2118,	0x00, 0x01,
	0x2119,	0x00, 0x01,
	0x211A,	0x09, 0x01,
	0x211B,	0x60, 0x01,
	0x2168,	0x04, 0x01,
	0x216C,	0x06, 0x01,
	0x216D,	0x06, 0x01,
	0x216E,	0x06, 0x01,
	0x2154,	0x00, 0x01,
	0x2155,	0x00, 0x01,
	0x2108,	0x00, 0x01,
	0x2109,	0x00, 0x01,
	0x210A,	0x14, 0x01,
	0x210B,	0x53, 0x01,
	0x2100,	0x08, 0x01,
	0x0828,	0x29, 0x01,
	0x2018,	0x06, 0x01,
	0x2178,	0x06, 0x01,
	0x2179,	0x09, 0x01,
	0x217A,	0x0C, 0x01,
	0x217B,	0x0F, 0x01,
	0x2180,	0x06, 0x01,
	0x2181,	0x09, 0x01,
	0x2182,	0x0C, 0x01,
	0x2183,	0x0F, 0x01,
	0x2188,	0x06, 0x01,
	0x2189,	0x09, 0x01,
	0x218A,	0x0C, 0x01,
	0x218B,	0x0F, 0x01,
	0x4131,	0x01, 0x01,
	0x21a8,	0x04, 0x01,
	0x21a9,	0x04, 0x01,
	0x21aa,	0x04, 0x01,
	0x0145,	0x00, 0x01,
	0x0148,	0x01, 0x01,
	0x2020,	0x01, 0x01,
	0x3071,	0x03, 0x01,
	0x2F05,	0x07, 0x01,
	0x2F06,	0x00, 0x01,
	0x2F07,	0x00, 0x01,
	0x2237,	0x01, 0x01,
	0x2238,	0x7F, 0x01,
	0x2239,	0xFF, 0x01,
	0x2211,	0x00, 0x01,
	0x2212,	0x00, 0x01,
	0x2213,	0xF8, 0x01,
	0x2215,	0x00, 0x01,
	0x2216,	0x00, 0x01,
	0x2217,	0xF8, 0x01,
	0x2219,	0x00, 0x01,
	0x221a,	0x00, 0x01,
	0x221b,	0xF8, 0x01,
	0x221d,	0x00, 0x01,
	0x221e,	0x00, 0x01,
	0x221f,	0xF8, 0x01,
	0x2221,	0x00, 0x01,
	0x2222,	0x00, 0x01,
	0x2223,	0xF8, 0x01,
	0x2225,	0x00, 0x01,
	0x2226,	0x00, 0x01,
	0x2227,	0xF8, 0x01,
	0x1405,	0x01, 0x01,
	0x1406,	0x80, 0x01,
	0x1407,	0x00, 0x01,
	0x0403,	0x20, 0x01,
	0x0405,	0x00, 0x01,
	0x0450,	0x47, 0x01,
	0x0500,	0x02, 0x01,
	0x0501,	0x13, 0x01,
	0x0502,	0x23, 0x01,
	0x0401,	0x01, 0x01,
	0x0400,	0x01, 0x01,
	0x0401,	0x00, 0x01,
	I2C_MODE_DELAY, 100, 0x00,
	0x0403,	0x20, 0x01,
	0x0405,	0x01, 0x01,
	0x0450,	0x47, 0x01,
	0x0500,	0x02, 0x01,
	0x0501,	0x25, 0x01,
	0x0502,	0x01, 0x01,
	0x0503,	0x15, 0x01,
	0x0504,	0x00, 0x01,
	0x0505,	0x0C, 0x01,
	0x0506,	0x6B, 0x01,
	0x0507,	0x89, 0x01,
	0x0508,	0x00, 0x01,
	0x0509,	0x00, 0x01,
	0x050A,	0x9C, 0x01,
	0x050B,	0xBA, 0x01,
	0x050C,	0x41, 0x01,
	0x050D,	0xB3, 0x01,
	0x050E,	0x05, 0x01,
	0x050F,	0x04, 0x01,
	0x0510,	0x00, 0x01,
	0x0511,	0x28, 0x01,
	0x0512,	0xC4, 0x01,
	0x0513,	0xF1, 0x01,
	0x0514,	0x90, 0x01,
	0x0515,	0x00, 0x01,
	0x0516,	0x00, 0x01,
	0x0517,	0x20, 0x01,
	0x0518,	0x01, 0x01,
	0x0401,	0x01, 0x01,
	0x0400,	0x01, 0x01,
	0x0401,	0x00, 0x01,
	0x0413,	0xA0, 0x01,
	0x0417,	0x19, 0x01,
	0x0423,	0xA0, 0x01,
	0x0427,	0x1C, 0x01,
	0x042a,	0x01, 0x01,
	0x0519,	0x02, 0x01,
	0x051A,	0x13, 0x01,
	0x051B,	0x21, 0x01,
	0x051C,	0x03, 0x01,
	0x051D,	0x94, 0x01,
	0x0411,	0x01, 0x01,
	0x0421,	0x01, 0x01,
};

const u32 sensor_imx316_setfile_A_480x180_120fps_CB2A[] = {
	0x4073,	0x01, 0x01,
	0x1040,	0x00, 0x01,
	0x1041,	0x8A, 0x01,
	0x1042,	0x03, 0x01,
	0x1048,	0x00, 0x01,
	0x1049,	0x8A, 0x01,
	0x104A,	0x03, 0x01,
	0x100C,	0x09, 0x01,
	0x100D,	0x58, 0x01,
	0x100E,	0x00, 0x01,
	0x100F,	0x00, 0x01,
	0x1016,	0x02, 0x01,
	0x1017,	0x66, 0x01,
	0x1060,	0x00, 0x01,
	0x1071,	0x06, 0x01,
	0x020E,	0x00, 0x01,
	0x020F,	0xA4, 0x01,
	0x1010,	0x01, 0x01,
	0x1C40,	0x01, 0x01,
	0x0800,	0x02, 0x01,
	0x0801,	0xFE, 0x01,
	0x4015,	0x00, 0x01,
	0x4016,	0x2A, 0x01,
	0x4078,	0x00, 0x01,
	0x4079,	0x00, 0x01,
	0x407A,	0x00, 0x01,
	0x407B,	0x15, 0x01,
	0x4080,	0x00, 0x01,
	0x4081,	0x00, 0x01,
	0x4082,	0x00, 0x01,
	0x4083,	0x2B, 0x01,
	0x5869,	0x00, 0x01,
	0x586A,	0x23, 0x01,
	0x586B,	0xBA, 0x01,
	0x46FA,	0x0E, 0x01,
	0x46FB,	0x77, 0x01,
	0x4716,	0x0E, 0x01,
	0x4717,	0x77, 0x01,
	0x2148,	0x05, 0x01,
	0x2149,	0x05, 0x01,
	0x214A,	0x05, 0x01,
	0x214B,	0x05, 0x01,
	0x400E,	0x03, 0x01,
	0x400F,	0xFE, 0x01,
	0x5865,	0x00, 0x01,
	0x5866,	0x00, 0x01,
	0x5867,	0x01, 0x01,
	0x082C,	0x22, 0x01,
	0x082D,	0x22, 0x01,
	0x082E,	0x00, 0x01,
	0x082F,	0x00, 0x01,
	0x0830,	0x33, 0x01,
	0x0831,	0x33, 0x01,
	0x0832,	0x00, 0x01,
	0x0833,	0x00, 0x01,
	0x0834,	0xFF, 0x01,
	0x212C,	0x00, 0x01,
	0x212D,	0x00, 0x01,
	0x2130,	0x00, 0x01,
	0x2131,	0x00, 0x01,
	0x2134,	0x00, 0x01,
	0x2135,	0x00, 0x01,
	0x1433,	0x01, 0x01,
	0x149b,	0x00, 0x01,
	0x1434,	0x00, 0x01,
	0x1435,	0x00, 0x01,
	0x1436,	0x00, 0x01,
	0x1437,	0x00, 0x01,
	0x1438,	0x00, 0x01,
	0x1439,	0x00, 0x01,
	0x143C,	0x06, 0x01,
	0x143D,	0x40, 0x01,
	0x143E,	0x06, 0x01,
	0x143F,	0x40, 0x01,
	0x1440,	0x06, 0x01,
	0x1441,	0x40, 0x01,
	0x2C0C,	0x00, 0x01,
	0x2C0D,	0x84, 0x01,
	0x3c18,	0x02, 0x01,
	0x0804,	0x00, 0x01,
	0x0805,	0x01, 0x01,
	0x0807,	0xF0, 0x01,
	0x0808,	0x00, 0x01,
	0x0809,	0x01, 0x01,
	0x080a,	0x00, 0x01,
	0x080b,	0x5A, 0x01,
	0x0810,	0x00, 0x01,
	0x0811,	0x00, 0x01,
	0x2110,	0x00, 0x01,
	0x2111,	0x01, 0x01,
	0x2112,	0x0A, 0x01,
	0x2113,	0x4C, 0x01,
	0x2114,	0x00, 0x01,
	0x2115,	0x00, 0x01,
	0x2116,	0x09, 0x01,
	0x2117,	0x60, 0x01,
	0x2118,	0x00, 0x01,
	0x2119,	0x00, 0x01,
	0x211A,	0x09, 0x01,
	0x211B,	0x60, 0x01,
	0x2168,	0x04, 0x01,
	0x216C,	0x06, 0x01,
	0x216D,	0x06, 0x01,
	0x216E,	0x06, 0x01,
	0x2154,	0x00, 0x01,
	0x2155,	0x00, 0x01,
	0x2108,	0x00, 0x01,
	0x2109,	0x00, 0x01,
	0x210A,	0x14, 0x01,
	0x210B,	0x53, 0x01,
	0x2100,	0x08, 0x01,
	0x0828,	0x2A, 0x01,
	0x2018,	0x06, 0x01,
	0x2178,	0x06, 0x01,
	0x2179,	0x09, 0x01,
	0x217A,	0x0C, 0x01,
	0x217B,	0x0F, 0x01,
	0x2180,	0x06, 0x01,
	0x2181,	0x09, 0x01,
	0x2182,	0x0C, 0x01,
	0x2183,	0x0F, 0x01,
	0x2188,	0x06, 0x01,
	0x2189,	0x09, 0x01,
	0x218A,	0x0C, 0x01,
	0x218B,	0x0F, 0x01,
	0x4131,	0x01, 0x01,
	0x21a8,	0x04, 0x01,
	0x21a9,	0x04, 0x01,
	0x21aa,	0x04, 0x01,
	0x0145,	0x00, 0x01,
	0x0148,	0x01, 0x01,
	0x2020,	0x01, 0x01,
	0x3071,	0x03, 0x01,
	0x2F05,	0x07, 0x01,
	0x2F06,	0x00, 0x01,
	0x2F07,	0x00, 0x01,
	0x2237,	0x01, 0x01,
	0x2238,	0x7F, 0x01,
	0x2239,	0xFF, 0x01,
	0x2211,	0x00, 0x01,
	0x2212,	0x00, 0x01,
	0x2213,	0xF8, 0x01,
	0x2215,	0x00, 0x01,
	0x2216,	0x00, 0x01,
	0x2217,	0xF8, 0x01,
	0x2219,	0x00, 0x01,
	0x221a,	0x00, 0x01,
	0x221b,	0xF8, 0x01,
	0x221d,	0x00, 0x01,
	0x221e,	0x00, 0x01,
	0x221f,	0xF8, 0x01,
	0x2221,	0x00, 0x01,
	0x2222,	0x00, 0x01,
	0x2223,	0xF8, 0x01,
	0x2225,	0x00, 0x01,
	0x2226,	0x00, 0x01,
	0x2227,	0xF8, 0x01,
	0x1405,	0x01, 0x01,
	0x1406,	0x80, 0x01,
	0x1407,	0x00, 0x01,
	0x0403,	0x20, 0x01,
	0x0405,	0x00, 0x01,
	0x0450,	0x47, 0x01,
	0x0500,	0x02, 0x01,
	0x0501,	0x13, 0x01,
	0x0502,	0x23, 0x01,
	0x0401,	0x01, 0x01,
	0x0400,	0x01, 0x01,
	0x0401,	0x00, 0x01,
	I2C_MODE_DELAY, 100, 0x00,
	0x0403,	0x20, 0x01,
	0x0405,	0x01, 0x01,
	0x0450,	0x47, 0x01,
	0x0500,	0x02, 0x01,
	0x0501,	0x25, 0x01,
	0x0502,	0x01, 0x01,
	0x0503,	0x15, 0x01,
	0x0504,	0x00, 0x01,
	0x0505,	0x0C, 0x01,
	0x0506,	0x6B, 0x01,
	0x0507,	0x89, 0x01,
	0x0508,	0x00, 0x01,
	0x0509,	0x00, 0x01,
	0x050A,	0x9C, 0x01,
	0x050B,	0xBA, 0x01,
	0x050C,	0x41, 0x01,
	0x050D,	0xB3, 0x01,
	0x050E,	0x05, 0x01,
	0x050F,	0x04, 0x01,
	0x0510,	0x00, 0x01,
	0x0511,	0x28, 0x01,
	0x0512,	0xC4, 0x01,
	0x0513,	0xF1, 0x01,
	0x0514,	0x90, 0x01,
	0x0515,	0x00, 0x01,
	0x0516,	0x00, 0x01,
	0x0517,	0x20, 0x01,
	0x0518,	0x01, 0x01,
	0x0401,	0x01, 0x01,
	0x0400,	0x01, 0x01,
	0x0401,	0x00, 0x01,
	0x0413,	0xA0, 0x01,
	0x0417,	0x19, 0x01,
	0x0423,	0xA0, 0x01,
	0x0427,	0x1C, 0x01,
	0x042a,	0x01, 0x01,
	0x0519,	0x02, 0x01,
	0x051A,	0x13, 0x01,
	0x051B,	0x21, 0x01,
	0x051C,	0x03, 0x01,
	0x051D,	0x94, 0x01,
	0x0411,	0x01, 0x01,
	0x0421,	0x01, 0x01,
};

const u32 sensor_imx316_setfile_A_480x180_120fps_CB31[] = {
	0x4073,	0x01, 0x01,
	0x1040,	0x00, 0x01,
	0x1041,	0x8A, 0x01,
	0x1042,	0x03, 0x01,
	0x1048,	0x00, 0x01,
	0x1049,	0x8A, 0x01,
	0x104A,	0x03, 0x01,
	0x100C,	0x09, 0x01,
	0x100D,	0x58, 0x01,
	0x100E,	0x00, 0x01,
	0x100F,	0x00, 0x01,
	0x1016,	0x02, 0x01,
	0x1017,	0x66, 0x01,
	0x1060,	0x00, 0x01,
	0x1071,	0x06, 0x01,
	0x020E,	0x00, 0x01,
	0x020F,	0xA4, 0x01,
	0x1010,	0x01, 0x01,
	0x1C40,	0x01, 0x01,
	0x0800,	0x02, 0x01,
	0x0801,	0xFE, 0x01,
	0x4015,	0x00, 0x01,
	0x4016,	0x2A, 0x01,
	0x4078,	0x00, 0x01,
	0x4079,	0x00, 0x01,
	0x407A,	0x00, 0x01,
	0x407B,	0x15, 0x01,
	0x4080,	0x00, 0x01,
	0x4081,	0x00, 0x01,
	0x4082,	0x00, 0x01,
	0x4083,	0x2B, 0x01,
	0x5869,	0x00, 0x01,
	0x586A,	0x23, 0x01,
	0x586B,	0xBA, 0x01,
	0x46FA,	0x0E, 0x01,
	0x46FB,	0x77, 0x01,
	0x4716,	0x0E, 0x01,
	0x4717,	0x77, 0x01,
	0x2148,	0x05, 0x01,
	0x2149,	0x05, 0x01,
	0x214A,	0x05, 0x01,
	0x214B,	0x05, 0x01,
	0x400E,	0x03, 0x01,
	0x400F,	0xFE, 0x01,
	0x5865,	0x00, 0x01,
	0x5866,	0x00, 0x01,
	0x5867,	0x01, 0x01,
	0x082C,	0x22, 0x01,
	0x082D,	0x22, 0x01,
	0x082E,	0x00, 0x01,
	0x082F,	0x00, 0x01,
	0x0830,	0x33, 0x01,
	0x0831,	0x33, 0x01,
	0x0832,	0x00, 0x01,
	0x0833,	0x00, 0x01,
	0x0834,	0xFF, 0x01,
	0x212C,	0x00, 0x01,
	0x212D,	0x00, 0x01,
	0x2130,	0x00, 0x01,
	0x2131,	0x00, 0x01,
	0x2134,	0x00, 0x01,
	0x2135,	0x00, 0x01,
	0x1433,	0x01, 0x01,
	0x149b,	0x00, 0x01,
	0x1434,	0x00, 0x01,
	0x1435,	0x00, 0x01,
	0x1436,	0x00, 0x01,
	0x1437,	0x00, 0x01,
	0x1438,	0x00, 0x01,
	0x1439,	0x00, 0x01,
	0x143C,	0x06, 0x01,
	0x143D,	0x40, 0x01,
	0x143E,	0x06, 0x01,
	0x143F,	0x40, 0x01,
	0x1440,	0x06, 0x01,
	0x1441,	0x40, 0x01,
	0x2C0C,	0x00, 0x01,
	0x2C0D,	0x84, 0x01,
	0x3c18,	0x02, 0x01,
	0x0804,	0x00, 0x01,
	0x0805,	0x01, 0x01,
	0x0807,	0xF0, 0x01,
	0x0808,	0x00, 0x01,
	0x0809,	0x01, 0x01,
	0x080a,	0x00, 0x01,
	0x080b,	0x5A, 0x01,
	0x0810,	0x00, 0x01,
	0x0811,	0x00, 0x01,
	0x2110,	0x00, 0x01,
	0x2111,	0x01, 0x01,
	0x2112,	0x0A, 0x01,
	0x2113,	0x4C, 0x01,
	0x2114,	0x00, 0x01,
	0x2115,	0x00, 0x01,
	0x2116,	0x09, 0x01,
	0x2117,	0x60, 0x01,
	0x2118,	0x00, 0x01,
	0x2119,	0x00, 0x01,
	0x211A,	0x09, 0x01,
	0x211B,	0x60, 0x01,
	0x2168,	0x04, 0x01,
	0x216C,	0x06, 0x01,
	0x216D,	0x06, 0x01,
	0x216E,	0x06, 0x01,
	0x2154,	0x00, 0x01,
	0x2155,	0x00, 0x01,
	0x2108,	0x00, 0x01,
	0x2109,	0x00, 0x01,
	0x210A,	0x14, 0x01,
	0x210B,	0x53, 0x01,
	0x2100,	0x08, 0x01,
	0x0828,	0x31, 0x01,
	0x2018,	0x06, 0x01,
	0x2178,	0x06, 0x01,
	0x2179,	0x09, 0x01,
	0x217A,	0x0C, 0x01,
	0x217B,	0x0F, 0x01,
	0x2180,	0x06, 0x01,
	0x2181,	0x09, 0x01,
	0x2182,	0x0C, 0x01,
	0x2183,	0x0F, 0x01,
	0x2188,	0x06, 0x01,
	0x2189,	0x09, 0x01,
	0x218A,	0x0C, 0x01,
	0x218B,	0x0F, 0x01,
	0x4131,	0x01, 0x01,
	0x21a8,	0x04, 0x01,
	0x21a9,	0x04, 0x01,
	0x21aa,	0x04, 0x01,
	0x0145,	0x00, 0x01,
	0x0148,	0x01, 0x01,
	0x2020,	0x01, 0x01,
	0x3071,	0x03, 0x01,
	0x2F05,	0x07, 0x01,
	0x2F06,	0x00, 0x01,
	0x2F07,	0x00, 0x01,
	0x2237,	0x01, 0x01,
	0x2238,	0x7F, 0x01,
	0x2239,	0xFF, 0x01,
	0x2211,	0x00, 0x01,
	0x2212,	0x00, 0x01,
	0x2213,	0xF8, 0x01,
	0x2215,	0x00, 0x01,
	0x2216,	0x00, 0x01,
	0x2217,	0xF8, 0x01,
	0x2219,	0x00, 0x01,
	0x221a,	0x00, 0x01,
	0x221b,	0xF8, 0x01,
	0x221d,	0x00, 0x01,
	0x221e,	0x00, 0x01,
	0x221f,	0xF8, 0x01,
	0x2221,	0x00, 0x01,
	0x2222,	0x00, 0x01,
	0x2223,	0xF8, 0x01,
	0x2225,	0x00, 0x01,
	0x2226,	0x00, 0x01,
	0x2227,	0xF8, 0x01,
	0x1405,	0x01, 0x01,
	0x1406,	0x80, 0x01,
	0x1407,	0x00, 0x01,
	0x0403,	0x20, 0x01,
	0x0405,	0x00, 0x01,
	0x0450,	0x47, 0x01,
	0x0500,	0x02, 0x01,
	0x0501,	0x13, 0x01,
	0x0502,	0x23, 0x01,
	0x0401,	0x01, 0x01,
	0x0400,	0x01, 0x01,
	0x0401,	0x00, 0x01,
	I2C_MODE_DELAY, 100, 0x00,
	0x0403,	0x20, 0x01,
	0x0405,	0x01, 0x01,
	0x0450,	0x47, 0x01,
	0x0500,	0x02, 0x01,
	0x0501,	0x25, 0x01,
	0x0502,	0x01, 0x01,
	0x0503,	0x15, 0x01,
	0x0504,	0x00, 0x01,
	0x0505,	0x0C, 0x01,
	0x0506,	0x6B, 0x01,
	0x0507,	0x89, 0x01,
	0x0508,	0x00, 0x01,
	0x0509,	0x00, 0x01,
	0x050A,	0x9C, 0x01,
	0x050B,	0xBA, 0x01,
	0x050C,	0x41, 0x01,
	0x050D,	0xB3, 0x01,
	0x050E,	0x05, 0x01,
	0x050F,	0x04, 0x01,
	0x0510,	0x00, 0x01,
	0x0511,	0x28, 0x01,
	0x0512,	0xC4, 0x01,
	0x0513,	0xF1, 0x01,
	0x0514,	0x90, 0x01,
	0x0515,	0x00, 0x01,
	0x0516,	0x00, 0x01,
	0x0517,	0x20, 0x01,
	0x0518,	0x01, 0x01,
	0x0401,	0x01, 0x01,
	0x0400,	0x01, 0x01,
	0x0401,	0x00, 0x01,
	0x0413,	0xA0, 0x01,
	0x0417,	0x19, 0x01,
	0x0423,	0xA0, 0x01,
	0x0427,	0x1C, 0x01,
	0x042a,	0x01, 0x01,
	0x0519,	0x02, 0x01,
	0x051A,	0x13, 0x01,
	0x051B,	0x21, 0x01,
	0x051C,	0x03, 0x01,
	0x051D,	0x94, 0x01,
	0x0411,	0x01, 0x01,
	0x0421,	0x01, 0x01,
};
static const u32 sensor_imx316_setfiles_uid[] = {
	0xCD2D,
	0xCD2E,
	0xCD35,
	0xCD36,
	0xCB29,
	0xCB2A,
	0xCB31,
};

static const u32 *sensor_imx316_setfiles_A[] = {
	sensor_imx316_setfile_A_480x180_240fps_CD2D,
	sensor_imx316_setfile_A_480x180_240fps_CD2E,
	sensor_imx316_setfile_A_480x180_240fps_CD35,
	sensor_imx316_setfile_A_480x180_240fps_CD36,
	sensor_imx316_setfile_A_480x180_120fps_CB29,
	sensor_imx316_setfile_A_480x180_120fps_CB2A,
	sensor_imx316_setfile_A_480x180_120fps_CB31,
};

static const u32 sensor_imx316_setfile_A_sizes[] = {
	sizeof(sensor_imx316_setfile_A_480x180_240fps_CD2D) / sizeof(sensor_imx316_setfile_A_480x180_240fps_CD2D[0]),
	sizeof(sensor_imx316_setfile_A_480x180_240fps_CD2E) / sizeof(sensor_imx316_setfile_A_480x180_240fps_CD2E[0]),
	sizeof(sensor_imx316_setfile_A_480x180_240fps_CD35) / sizeof(sensor_imx316_setfile_A_480x180_240fps_CD35[0]),
	sizeof(sensor_imx316_setfile_A_480x180_240fps_CD36) / sizeof(sensor_imx316_setfile_A_480x180_240fps_CD36[0]),
	sizeof(sensor_imx316_setfile_A_480x180_120fps_CB29) / sizeof(sensor_imx316_setfile_A_480x180_120fps_CB29[0]),
	sizeof(sensor_imx316_setfile_A_480x180_120fps_CB2A) / sizeof(sensor_imx316_setfile_A_480x180_120fps_CB2A[0]),
	sizeof(sensor_imx316_setfile_A_480x180_120fps_CB31) / sizeof(sensor_imx316_setfile_A_480x180_120fps_CB31[0]),
};

#endif
