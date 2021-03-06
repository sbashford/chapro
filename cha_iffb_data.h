// cha_data.h - data size = 9952 bytes
#ifndef CHA_DATA_H
#define CHA_DATA_H

static CHA_DATA cha_magic[4] = {0x55530,0x68131,24,9952};
static CHA_DATA p00[      64] = { // _size
               256,        64,       128,      2048,       320,         0,       256,      5408,
                 0,        32,         0,         0,         0,         0,         0,         0,
                 0,       512,         0,         0,         0,       400,       400,       128
};
static CHA_DATA p01[      16] = { // _ivar
                32,         8,         5,       169,       128,         0,         0,       100,
               100,       100
};
static double   p02[      16] = { // _dvar
                      0,              0,          24000,              0,              0,
                      0,              0,              0,              0,              0,
                 0.0004,            0.9,         1e-005,              0,   0.0881657467
};
static CHA_DATA p03[     512] = {         0};
static CHA_DATA p04[      80] = {
        0x3720D4FC,0x37A0D4FC,0x3720D4FC,0x3FF78667,0xBF70AB22,0x3F800000,0x40000000,0x3F800000,
        0x3FED7800,0xBF5C7D7E,0x3A7C0A6A,0x00000000,0xBA7C0A6A,0x3FFB9DA4,0xBF794D6C,0x3F800000,
        0x00000000,0xBF800000,0x3FF9A50F,0xBF770745,0x3B6FE46A,0x00000000,0xBB6FE46A,0x3FF80632,
        0xBF75201F,0x3F800000,0x00000000,0xBF800000,0x3FF3FB77,0xBF7152DC,0x3C213A01,0x00000000,
        0xBC213A01,0x3FF1150E,0xBF6E9B93,0x3F800000,0x00000000,0xBF800000,0x3FE8B37D,0xBF688DFF,
        0x3CAF7384,0x00000000,0xBCAF7384,0x3FE31D23,0xBF6483AE,0x3F800000,0x00000000,0xBF800000,
        0x3FD199A9,0xBF5B6FE9,0x3D709A9D,0x00000000,0xBD709A9D,0x3FC64412,0xBF54E22B,0x3F800000,
        0x00000000,0xBF800000,0x3FA21CD7,0xBF489A35,0x3E1A1F6C,0x00000000,0xBE1A1F6C,0x3F8B3C32,
        0xBF3C42EA,0x3F800000,0x00000000,0xBF800000,0x3F0A358E,0xBF2FEBEC,0xBF18B5CE,0x3F98B5CE,
        0xBF18B5CE,0x3EB717C1,0xBEEAE56F,0x3F800000,0xC0000000,0x3F800000,0x3E846ABC,0xBD61618D
};
// empty array ->     p05
static CHA_DATA p06[      64] = {         0};
static CHA_DATA p07[    1352] = {         0};
// empty array ->     p08
static CHA_DATA p09[       8] = {
        0x00000085,0x0000006F,0x00000084,0x00000092,0x0000009A,0x000000A0,0x000000A3,0x000000A8
};
// empty array ->     p10
// empty array ->     p11
// empty array ->     p12
// empty array ->     p13
// empty array ->     p14
// empty array ->     p15
// empty array ->     p16
static CHA_DATA p17[     128] = {         0};
// empty array ->     p18
// empty array ->     p19
// empty array ->     p20
static CHA_DATA p21[     100] = {         0};
static CHA_DATA p22[     100] = {
        0x3AE73605,0x384D8559,0x3B07A8D6,0x3C1EECC0,0xBC4A89FC,0x3B42B51C,0x3B5898B3,0x3D2D1AEB,
        0x3DA3137B,0x3D921B3B,0xBBCD2913,0xBDD590C1,0xBE18F3AA,0xBDFAE148,0xBD5D3CBC,0x3C7BD6A6,
        0x3D9D883C,0x3DAC83ED,0x3D4F0846,0x3BCB6C7A,0xBD03AB86,0xBD01754B,0xBC422681,0x3C5944AA,
        0x3D0A3E7D,0x3D2E2435,0x3D07F024,0x3C892253,0x39999DCB,0xBB9331A1,0xBBCEF673,0xBABE9425,
        0x3A59D777,0x3B7483CB,0x3ACBF2B2,0xBB001F75,0xBBF42FE8,0xBC2C4B4D,0xBC49B845,0xBC41D29E,
        0xBC4011D3,0xBC08094E,0xBBB64170,0xBB4A1CEF,0xBB0D5C74,0xBAA569B1,0xBA0D0892,0xB87BA882,
        0x39DBAD3A,0x3AC9B845,0x3B5AB192,0x3BA84381,0x3BB2AF14,0x3BADE658,0x3B98DCDB,0x3B7A58F7,
        0x3B4DB7AE,0x3B2DAB9F,0x3B0DB057,0x3ADB4891,0x3A9B3073,0x3A3630A9,0x394C78EA,0xB9CBF2B2,
        0xBA7F10ED,0xBACC1440,0xBB0C5005,0xBB3295EA,0xBB58DBCF,0xBB3D5561,0xBB1E98DD,0xBAFFB8B2,
        0xBAC23FAB,0xBA84E832,0xBA0EDE55,0xB952C387,0x38302928,0x39956C0D,0x3A0A697B,0x3A4A1CEF,
        0x3A84E832,0x3A77B9E0,0x3A50678C,0x3A295853,0x3A0205FF,0x39B56755,0x394E91C9,0x384521DE,
        0xB8D801B4,0xB9841EDE,0xB9D2C387,0xB9E496EE,0xB9E496EE,0xB9E496EE,0xB9E496EE,0xB9E496EE,
        0xB9E496EE,0xB9E496EE,0xB9E496EE,0xB9E496EE
};
static CHA_DATA p23[      32] = {         0};

static CHA_DATA *cha_data[NPTR+1] = {
    (CHA_DATA *)p00,(CHA_DATA *)p01,(CHA_DATA *)p02,
    p03, p04,NULL, p06, p07,NULL, p09,NULL,NULL,NULL,NULL,NULL,NULL,NULL, p17,NULL,
   NULL,NULL, p21, p22, p23,
    cha_magic
};

#endif // CHA_DATA_H
