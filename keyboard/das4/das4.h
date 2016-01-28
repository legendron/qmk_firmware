#ifndef DAS4_H
#define DAS4_H

#include "matrix.h"
#include "keymap_common.h"
#include <stddef.h>

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array

#define KEYMAP( \
	k00,      k01, k02, k03, k04,   k05, k06, k07, k08,    k09, k0a, k0b, k0c,\
	k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c,      k1d, \
	k20,  k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c,     k2d, \
	k30,   k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b,         k3d, \
	k40,    k41, k42, k43, k44, k45, k46, k47, k48, k49, k4a,             k4b, \
	k50, k51,  k52,               k53,             k54,  k55,     k56,    k57, \
	k60, k61, k62, \
	k70, k71, k72, \
	k80, k81, k82, \
	     k90,      \
	k91, k92, k93, \
	ka0, ka1, ka2, ka3, \
	kb0, kb1, kb2, kb3, \
	kc0, kc1, kc2,      \
	kd0, kd1, kd2, kd3, \
	ke0,      ke1       \
) \
{ \
	{k31,   kd3,   kd2,   k4b,   k55,   kd1,   kd0,   k3a,   k38,   k37,   k34,   k33,   k32,   k39,   k2d   }, \
	{KC_NO, k91,   ka3,   KC_NO, k54    k93,   k92,   k4a,   KC_NO, k46,   k45,   KC_NO, KC_NO, k56,   k0c   }, \
	{k00,   k90,   ke1,   KC_NO, k52    ke0,   k53,   k3b,   k06,   k36,   k35,   k04,   KC_NO, KC_NO, k0b   }, \
	{k41,   KC_NO, ka2,   k57,   KC_NO, ka1,   ka0,   KC_NO, k48,   k47,   k44,   k43,   k42,   k49,   k3d   }, \
	{k20,   KC_NO, kc2,   k40,   k51,   kc1,   kc0,   k2b,   k2c,   k26,   k25,   k03,   k30,   k07,   k1d   }, \
	{k10,   k71,   k72,   k50,   KC_NO, k70,   k80,   k1b,   k1c,   k16,   k15,   k02,   k01,   k08,   k09   }, \
	{k21,   kb3,   k09,   k62,   k61,   kb1,   kb0,   k2a,   k28,   k27,   k24,   k23,   k22,   k29,   KC_NO }, \
	{k11,   k81,   k82,   k05,   k60,   KC_NO, KC_NO, k1a,   k18,   k17,   k14,   k13,   k12,   k19,   k0a   }  \
}

void * matrix_init_user(void);
void * matrix_scan_user(void);

#endif
