// cha_data.h - data size = 5320 bytes
#ifndef CHA_DATA_H
#define CHA_DATA_H

static CHA_DATA cha_magic[4] = {0x55530,0x68131,17,5320};
static CHA_DATA p00[      64] = { // _size
               256,        64,       128,      2048,       320,         0,       256,      1920,
                 0,        32,        32,        32,        32,        32,        32,       128,
                 8
};
static CHA_DATA p01[      16] = { // _ivar
                32,         8,         5,        60
};
static double   p02[      16] = { // _dvar
            0.908230841,    0.998517215,          24000,            119,              0,
                    105,             10,            105,    0.980191946,    0.998517215
};
static CHA_DATA p03[     512] = {         0};
static CHA_DATA p04[      80] = {
        0x3620D4FC,0x36A0D4FC,0x3620D4FC,0x3FF78667,0xBF70AB22,0x3F800000,0x40000000,0x3F800000,
        0x3FED7800,0xBF5C7D7E,0x397C0A6A,0x00000000,0xB97C0A6A,0x3FFB9DA4,0xBF794D6C,0x3F800000,
        0x00000000,0xBF800000,0x3FF9A50F,0xBF770745,0x3A6FE46A,0x00000000,0xBA6FE46A,0x3FF80632,
        0xBF75201F,0x3F800000,0x00000000,0xBF800000,0x3FF3FB77,0xBF7152DC,0x3B213A01,0x00000000,
        0xBB213A01,0x3FF1150E,0xBF6E9B93,0x3F800000,0x00000000,0xBF800000,0x3FE8B37D,0xBF688DFF,
        0x3BAF7384,0x00000000,0xBBAF7384,0x3FE31D23,0xBF6483AE,0x3F800000,0x00000000,0xBF800000,
        0x3FD199A9,0xBF5B6FE9,0x3C709A9D,0x00000000,0xBC709A9D,0x3FC64412,0xBF54E22B,0x3F800000,
        0x00000000,0xBF800000,0x3FA21CD7,0xBF489A35,0x3D1A1F6C,0x00000000,0xBD1A1F6C,0x3F8B3C32,
        0xBF3C42EA,0x3F800000,0x00000000,0xBF800000,0x3F0A358E,0xBF2FEBEC,0xBE18B5CE,0x3E98B5CE,
        0xBE18B5CE,0x3EB717C1,0xBEEAE56F,0x3F800000,0xC0000000,0x3F800000,0x3E846ABC,0xBD61618D
};
// empty array ->     p05
static CHA_DATA p06[      64] = {         0};
static CHA_DATA p07[     480] = {         0};
// empty array ->     p08
static CHA_DATA p09[       8] = {
        0x00000018,0x00000002,0x00000017,0x00000025,0x0000002D,0x00000033,0x00000036,0x0000003B
};
static CHA_DATA p10[       8] = {
        0x4200CCCD,0x41D40000,0x41D5999A,0x41D5999A,0x41EE6666,0x42066666,0x42093333,0x4202CCCD
};
static CHA_DATA p11[       8] = {
        0x3F333333,0x3F666666,0x3F800000,0x3F8CCCCD,0x3F99999A,0x3FB33333,0x3FCCCCCD,0x3FD9999A
};
static CHA_DATA p12[       8] = {
        0xC15981D8,0xC184BA2A,0xC0730F28,0x40D3C361,0x4134E148,0x41BDBF14,0x420F6F35,0x42158DD3
};
static CHA_DATA p13[       8] = {
        0x42825852,0x428F37DC,0x42ADCDED,0x42B9AAA6,0x42C46666,0x42CE999A,0x42CBCCCD,0x42C7999A
};
static CHA_DATA p14[       8] = {         0};
static CHA_DATA p15[      32] = {         0};
static CHA_DATA p16[       2] = {         0};

static CHA_DATA *cha_data[NPTR+1] = {
    (CHA_DATA *)p00,(CHA_DATA *)p01,(CHA_DATA *)p02,
    p03, p04,NULL, p06, p07,NULL, p09, p10, p11, p12, p13, p14, p15, p16,
    cha_magic
};

#endif // CHA_DATA_H
