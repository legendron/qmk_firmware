#ifndef NEUBLE_H
#define NEUBLE_H

#include "matrix.h"
#include "keymap_common.h"
#include "backlight.h"
#include "rgblight.h"
#include <stddef.h>

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
#define KEYMAP( \
	k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e,\
	k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e,\
	k20,      k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e,\
	k30,      k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e,\
	k40, k41, k42,           k45,                k49, k4a, k4b, k4c, k4d, k4e  \
) \
{ \
	{KC_NO, KC_NO, k40,   k41,   k03,   k13,   k23,   k33,   k42   },\
	{k00,   k10,   k20,   k30,   k04,   k14,   k24,   k34,   k45   },\
    {k01,   k11,   KC_NO, KC_NO, k05,   k15,   k25,   k35,   k49   },\
    {k02,   k12,   k22,   k32,   k06,   k16,   k26,   k36,   k4a   },\
    {k07,   k17,   k27,   k37,   k0b,   k1b,   k2b,   k3b,   k4b   },\
    {k08,   k18,   k28,   k38,   k0c,   k1c,   k2c,   k3c,   k4c   },\
    {k09,   k19,   k29,   k39,   k0d,   k1d,   k2d,   k3d,   k4d   },\
    {k0a,   k1a,   k2a,   k3a,   k0e,   k1e,   k2e,   k3e,   k4e   }\
}

void * matrix_init_user(void);
void * matrix_scan_user(void);

#endif
