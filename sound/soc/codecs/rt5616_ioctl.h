/*
 * rt5616_ioctl.h  --  RT5616 ALSA SoC audio driver IO control
 *
 * Copyright 2012 Realtek Microelectronics
 * Author: Bard <bardliao@realtek.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __RT5616_IOCTL_H__
#define __RT5616_IOCTL_H__

#include <sound/hwdep.h>
#include <linux/ioctl.h>

enum {
	NORMAL=0,
	LOUT,
	HP,
	MODE_NUM,
};

#define EQ_REG_NUM 19
typedef struct  hweq_s {
 	unsigned int reg[EQ_REG_NUM];
	unsigned int value[EQ_REG_NUM];
	unsigned int ctrl;
} hweq_t;

int rt5616_ioctl_common(struct snd_hwdep *hw, struct file *file,
			unsigned int cmd, unsigned long arg);
int rt5616_update_eqmode(struct snd_soc_codec *codec, int mode);
#endif /* __RT5616_IOCTL_H__ */
