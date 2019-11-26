/*******************************************************************************
Copyright (C) 2014 - 2018, Marvell International Ltd. and its affiliates
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/********************************************************************
This file contains the Z80 loader image for higher-level functions using 
MDIO access to download firmware into the internal RAM or attached 
EEPROM memory of the Marvell X7120/X6181/X6141 Ethernet PHY.
********************************************************************/
#ifndef MYDZ80_H
#define MYDZ80_H

#if C_LINKAGE
#if defined __cplusplus 
    extern "C" { 
#endif 
#endif


static const MYD_U16 z80LoaderArray[] = 
{
0x6bc3,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x80cd,
0xed00,
0x314d,
0x07ff,
0x56ed,
0xcdfb,
0x0083,
0xd1c3,
0x0005,
0x0000,
0x0000,
0x0000,
0x0000,
0xc9c9,
0xddc9,
0xdde5,
0x0021,
0xdd00,
0x2139,
0xffed,
0xf939,
0x96cd,
0x4d04,
0xcdc5,
0x049e,
0x45c1,
0xcdc5,
0x04a6,
0x55c1,
0xd5c5,
0xaecd,
0xd104,
0xddc1,
0xff75,
0xd5c5,
0xb6cd,
0xd104,
0x5dc1,
0xd5c5,
0xbecd,
0xd104,
0xddc1,
0xfe75,
0xd5c5,
0xc6cd,
0xd104,
0xddc1,
0xfd75,
0x3e61,
0x0e00,
0x8000,
0x7c47,
0xdd89,
0xfb70,
0x77dd,
0x63fc,
0x002e,
0x5edd,
0x0efe,
0x7d00,
0x5f83,
0x897c,
0x73dd,
0xddf9,
0xfa77,
0x2e62,
0xdd00,
0xff5e,
0x0016,
0xdd19,
0xf775,
0x74dd,
0xddf8,
0xfb7e,
0x7fe6,
0x0cc2,
0xdd02,
0xf336,
0xdd00,
0xf436,
0xdd00,
0xfb7e,
0x77dd,
0xddef,
0xfc7e,
0x77dd,
0xddf0,
0xef7e,
0xb6dd,
0xcaf0,
0x03fe,
0x0221,
0xe500,
0x6edd,
0xddf3,
0xf466,
0xcde5,
0x05e1,
0xf1f1,
0x75dd,
0xddf1,
0xf274,
0x0221,
0xe500,
0x6edd,
0xddf3,
0xf466,
0xcde5,
0x05ed,
0xf1f1,
0x2e65,
0xdd00,
0xf14e,
0x46dd,
0xcbf2,
0xcb21,
0xcb10,
0xcb21,
0xcb10,
0xcb21,
0xcb10,
0xcb21,
0xcb10,
0xcb21,
0xcb10,
0xcb21,
0xcb10,
0xcb21,
0x0910,
0x447d,
0x86dd,
0x4ff7,
0xdd78,
0xf88e,
0x71dd,
0xddf5,
0xf677,
0xddaf,
0xfdb6,
0x2f20,
0x6edd,
0xddf3,
0xf466,
0x2929,
0x2929,
0x2929,
0xdd29,
0xf97e,
0x5f85,
0x7edd,
0x8cfa,
0xdd57,
0xf54e,
0x46dd,
0xd5f6,
0x7f21,
0xe500,
0xf579,
0xc533,
0xcd33,
0x04ce,
0xf1f1,
0x18f1,
0xdd2d,
0xf36e,
0x66dd,
0x29f4,
0x2929,
0x2929,
0x2929,
0x7edd,
0x85f9,
0xdd5f,
0xfa7e,
0x578c,
0x4edd,
0xddf5,
0xf646,
0x21d5,
0x007f,
0x79e5,
0x33f5,
0x33c5,
0x43cd,
0xf105,
0xf1f1,
0x34dd,
0x20f3,
0xdd03,
0xf434,
0x7edd,
0xc6ef,
0xdd80,
0xef77,
0x7edd,
0xcef0,
0xddff,
0xf077,
0xdc01,
0xc505,
0x4621,
0xe5f8,
0x0021,
0xe51f,
0x0ecd,
0xf104,
0xc1f1,
0x790b,
0x20b0,
0xc3ec,
0x0113,
0x36dd,
0x00f3,
0x36dd,
0x00f4,
0x7edd,
0xddfb,
0xed77,
0x7edd,
0xddfc,
0xee77,
0x803e,
0x96dd,
0x3eed,
0xdd00,
0xee9e,
0x1dd2,
0x2103,
0x0002,
0xdde5,
0xf36e,
0x66dd,
0xe5f4,
0xe1cd,
0xf105,
0xddf1,
0xf175,
0x74dd,
0x21f2,
0x0002,
0xdde5,
0xf36e,
0x66dd,
0xe5f4,
0xedcd,
0xf105,
0x65f1,
0x002e,
0x4edd,
0xddf1,
0xf246,
0x21cb,
0x10cb,
0x21cb,
0x10cb,
0x21cb,
0x10cb,
0x21cb,
0x10cb,
0x21cb,
0x10cb,
0x21cb,
0x10cb,
0x21cb,
0x10cb,
0x7d09,
0xdd44,
0xf786,
0x784f,
0x8edd,
0xddf8,
0xf571,
0x77dd,
0xaff6,
0xb6dd,
0x20fd,
0xdd2f,
0xf36e,
0x66dd,
0x29f4,
0x2929,
0x2929,
0x2929,
0x7edd,
0x85f9,
0xdd5f,
0xfa7e,
0x578c,
0x4edd,
0xddf5,
0xf646,
0x21d5,
0x007f,
0x79e5,
0x33f5,
0x33c5,
0xcecd,
0xf104,
0xf1f1,
0x2d18,
0x6edd,
0xddf3,
0xf466,
0x2929,
0x2929,
0x2929,
0xdd29,
0xf97e,
0x5f85,
0x7edd,
0x8cfa,
0xdd57,
0xf54e,
0x46dd,
0xd5f6,
0x7f21,
0xe500,
0xf579,
0xc533,
0xcd33,
0x0543,
0xf1f1,
0xddf1,
0xf334,
0x0320,
0x34dd,
0xddf4,
0xed7e,
0x80c6,
0x77dd,
0xdded,
0xee7e,
0xffce,
0x77dd,
0x01ee,
0x05dc,
0x21c5,
0xf846,
0x21e5,
0x1f00,
0xcde5,
0x040e,
0xf1f1,
0x0bc1,
0xb079,
0xec20,
0x20c3,
0x2102,
0x0002,
0xdde5,
0xf36e,
0x66dd,
0xe5f4,
0xe1cd,
0xf105,
0xddf1,
0xf175,
0x74dd,
0x21f2,
0x0002,
0xdde5,
0xf36e,
0x66dd,
0xe5f4,
0xedcd,
0xf105,
0x65f1,
0x002e,
0x4edd,
0xddf1,
0xf246,
0x21cb,
0x10cb,
0x21cb,
0x10cb,
0x21cb,
0x10cb,
0x21cb,
0x10cb,
0x21cb,
0x10cb,
0x21cb,
0x10cb,
0x21cb,
0x10cb,
0x7d09,
0xdd44,
0xf786,
0x784f,
0x8edd,
0xddf8,
0xf571,
0x77dd,
0xaff6,
0xb6dd,
0x20fd,
0xdd42,
0xf36e,
0x66dd,
0x29f4,
0x2929,
0x2929,
0x2929,
0x7edd,
0x85f9,
0xdd4f,
0xfa7e,
0x478c,
0x7edd,
0xc6ed,
0xddff,
0xef77,
0x7edd,
0xceee,
0xddff,
0xf077,
0x5edd,
0xddf5,
0xf656,
0xddc5,
0xef6e,
0x66dd,
0xe5f0,
0xf57b,
0xd533,
0xcd33,
0x04ce,
0xf1f1,
0x18f1,
0xdd3d,
0xf36e,
0x66dd,
0x29f4,
0x2929,
0x2929,
0x2929,
0x7edd,
0x85f9,
0xdd4f,
0xfa7e,
0x478c,
0x6edd,
0xdded,
0xee66,
0xdd2b,
0xed75,
0x74dd,
0xddee,
0xf55e,
0x56dd,
0xc5f6,
0x6edd,
0xdded,
0xee66,
0x7be5,
0x33f5,
0x33d5,
0x43cd,
0xf105,
0xf1f1,
0x6ecd,
0x7d04,
0x01f6,
0x33f5,
0x86cd,
0xdd04,
0xddf9,
0xc9e1,
0xddf3,
0xdde5,
0x0021,
0xdd00,
0xdd39,
0x047e,
0x38d3,
0x7edd,
0xd305,
0xdd39,
0x077e,
0x3ad3,
0x7edd,
0xd306,
0x3e3b,
0xd301,
0x3e3c,
0xdb01,
0x673d,
0x3edb,
0xdd6f,
0xfbe1,
0xf3c9,
0xe5dd,
0x21dd,
0x0000,
0x39dd,
0x7edd,
0xd304,
0xdd31,
0x057e,
0x32d3,
0x7edd,
0xd307,
0xdd33,
0x067e,
0x34d3,
0x7edd,
0xd309,
0xdd35,
0x087e,
0x36d3,
0xe1dd,
0xc9fb,
0xe5dd,
0x50db,
0xdd6f,
0xc9e1,
0xe5dd,
0x51db,
0xdd6f,
0xc9e1,
0xe5dd,
0x21dd,
0x0000,
0x39dd,
0x7edd,
0xd304,
0xdd50,
0xc9e1,
0xe5dd,
0x21dd,
0x0000,
0x39dd,
0x7edd,
0xd304,
0xdd51,
0xc9e1,
0xe5dd,
0x60db,
0xdd6f,
0xc9e1,
0xe5dd,
0x61db,
0xdd6f,
0xc9e1,
0xe5dd,
0x62db,
0xdd6f,
0xc9e1,
0xe5dd,
0x63db,
0xdd6f,
0xc9e1,
0xe5dd,
0x64db,
0xdd6f,
0xc9e1,
0xe5dd,
0x65db,
0xdd6f,
0xc9e1,
0xe5dd,
0x66db,
0xdd6f,
0xc9e1,
0xe5dd,
0x21dd,
0x0000,
0x39dd,
0xd5c5,
0x3ee5,
0xd3e4,
0xcdc2,
0x0536,
0xa03e,
0xc1d3,
0xc43e,
0xc2d3,
0x36cd,
0xdd05,
0x047e,
0xc1d3,
0xc43e,
0xc2d3,
0x36cd,
0xdd05,
0x057e,
0xc1d3,
0xc43e,
0xc2d3,
0x36cd,
0xdd05,
0x097e,
0xdd47,
0x087e,
0x114f,
0x0001,
0x7edd,
0x6707,
0x7edd,
0x6f06,
0x2bcd,
0x0305,
0x3f37,
0x52ed,
0x16d2,
0x3e05,
0xd3d4,
0xe1c2,
0xc1d1,
0xe1dd,
0x0ac9,
0xc1d3,
0x803e,
0xc2d3,
0x36cd,
0xc905,
0xd0db,
0xda1f,
0x0536,
0xd0db,
0xd21f,
0x053c,
0xddc9,
0xdde5,
0x0021,
0xdd00,
0xc539,
0xe5d5,
0xe43e,
0xc2d3,
0xabcd,
0x3e05,
0xd3a8,
0x3ec1,
0xd3c4,
0xcdc2,
0x05ab,
0x7edd,
0xd304,
0x3ec1,
0xd3c4,
0xcdc2,
0x05ab,
0x7edd,
0xd305,
0x3ec1,
0xd3c4,
0xcdc2,
0x05ab,
0x7edd,
0x4709,
0x7edd,
0x4f08,
0x0111,
0xdd00,
0x077e,
0xdd67,
0x067e,
0xcd6f,
0x05a0,
0x3703,
0xed3f,
0xd252,
0x058b,
0xd43e,
0xc2d3,
0xd1e1,
0xddc1,
0xc9e1,
0xd30a,
0x3ec1,
0xd380,
0xcdc2,
0x05ab,
0xdbc9,
0x1fd0,
0xabda,
0xdb05,
0x1fd0,
0xb1d2,
0xc905,
0xe5dd,
0x21dd,
0x0000,
0x39dd,
0xddc5,
0x057e,
0xdd47,
0x047e,
0xdd4f,
0x067e,
0xc102,
0xe1dd,
0x76c9,
0xfd18,
0x0321,
0x3900,
0x2b5e,
0xcd6e,
0x05fd,
0x2bc3,
0xf106,
0xd1e1,
0xe5d5,
0xcdf5,
0x0605,
0x2bc3,
0xf106,
0xd1e1,
0xe5d5,
0xc3f5,
0x0605,
0x0321,
0x3900,
0x2b5e,
0x7d6e,
0x9f07,
0x7b67,
0x9f07,
0x7c57,
0x17aa,
0xf57c,
0x3017,
0x9706,
0x6f95,
0x949f,
0xcb67,
0x287a,
0x9706,
0x5f93,
0x929f,
0xcd57,
0x0647,
0xd0f1,
0x9747,
0x6f95,
0x949f,
0x7867,
0x17c9,
0xd0eb,
0x9597,
0x9f6f,
0x6794,
0xf1c9,
0xd1e1,
0xe5d5,
0x18f5,
0x210a,
0x0003,
0x5e39,
0x6e2b,
0x0026,
0x7b54,
0xe6b2,
0x2080,
0xb213,
0x1020,
0x1006,
0x6aed,
0x9317,
0x0130,
0x3f83,
0x6aed,
0xf610,
0xc95f,
0x0906,
0x6c7d,
0x0026,
0x1dcb,
0x6aed,
0x52ed,
0x0130,
0x3f19,
0x1017,
0xcbf5,
0x5010,
0xeb5f,
0x00c9
};


#if C_LINKAGE
#if defined __cplusplus 
}
#endif 
#endif

#endif /* defined MYDZ80_H */