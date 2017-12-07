/*
 * board/matrix_vision/mvblm7/mvblm7.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#ifndef __MVBC_H__
#define __MVBC_H__

#define MV_GPIO

#define FPGA_CONFIG     0x80000000
#define FPGA_CCLK       0x40000000
#define FPGA_DIN        0x20000000
#define FPGA_STATUS     0x10000000
#define FPGA_CONF_DONE  0x08000000

#define WD_WDI          0x00400000
#define WD_TS           0x00200000
#define MAN_RST         0x00100000

#define MV_GPIO_DAT	(WD_TS)
#define MV_GPIO_OUT	(FPGA_CONFIG|FPGA_DIN|FPGA_CCLK|MVBLM7_MMC_CS)
#define MV_GPIO_ODE	(FPGA_CONFIG|MAN_RST)

#endif