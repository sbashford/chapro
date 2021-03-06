// dciirfb_prepare.c - complex-double filterbank preparation functions

#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "chapro.h"
#include "cha_gf.h"

/***********************************************************/

static void
root2poly(
    double *yr, double *yi,
    float  *x,
    float  *g,
    int n
) {
    double yyr, yyi;
    int i, j, jr, ji;

    dzero(yr, n + 1);
    dzero(yi, n + 1);
    yr[0] = 1;
    for (j = 0; j < n; j++) {
        jr = j * 2;
        ji = jr + 1;
        for (i = j; i >= 0; i--) {
            yr[i + 1] -= yr[i] * x[jr] - yi[i] * x[ji];
            yi[i + 1] -= yi[i] * x[jr] + yr[i] * x[ji];
        }
    }
    if (g) {
        for (i = 0; i <= n; i++) {
            yyr = yr[i] * g[0] - yi[i] * g[1];
            yyi = yi[i] * g[0] + yr[i] * g[1];
            yr[i] = yyr;
            yi[i] = yyi;
        }
    }
}

static void
zp2tf(
    double *coef,
    float *z, float *p, float *g,
    int no, int nc
) {
    double *br, *bi, *ar, *ai;
    float  *zz, *pp, *gg;
    int     j, op;

    op = no + 1;
    for (j = 0; j < nc; j++) {
        zz = z + j * no * 2;
        pp = p + j * no * 2;
        br = coef + j * op * 4;
        bi = br + op;
        ar = bi + op;
        ai = ar + op;
        gg = g + j * 2;
        root2poly(br, bi, zz, gg, no);
        root2poly(ar, ai, pp,  0, no);
    }
}

/***********************************************************/

static void
filterbank_prepare(CHA_PTR cp, float *z, float *p, float *g, int *d, 
                   int nc, int no, double sr, int cs)
{
    double  fs, *br;
    int     k, mxd, ns, op, *dn;

    op = no + 1;
    br = (double *) cha_allocate(cp, nc * op * 4, sizeof(double), _br);
    zp2tf(br, z, p, g, no, nc);
    cha_allocate(cp, nc * op * 4, sizeof(double), _zr);
    //-----------------------------
    dn = (int *) cha_allocate(cp, nc, sizeof(int), _dn);
    mxd = 0;
    /* find maximum delay */
    for (k = 0; k < nc; k++) {
        dn[k] = d[k];
        if (mxd < dn[k]) {
            mxd = dn[k];
        }
    }
    ns = mxd + 1;
    CHA_IVAR[_ns] = ns;
    cha_allocate(cp, ns * nc * 2, sizeof(float), _ydr);
    //-----------------------------
    fs = sr / 1000;
    CHA_IVAR[_cs] = cs;
    CHA_DVAR[_fs] = fs;
    CHA_IVAR[_nc] = nc;
}

/***********************************************************/

FUNC(int)
cha_dciirfb_prepare(CHA_PTR cp, float *z, float *p, float *g, int *d, 
                   int nc, int no, double sr, int cs)
{
    cha_prepare(cp);
    filterbank_prepare(cp, z, p, g, d, nc, no, sr, cs);

    return (0);
}
