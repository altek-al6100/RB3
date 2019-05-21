/* Copyright (c) 2017-2019, The Linux Foundation. All rights reserved.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 and
* only version 2 as published by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*/

///ALTEK_TAG_HwMiniISP>>>

#include <linux/types.h>
#include <asm-generic/ioctl.h>         //_IOW(), _IOR()

#define SPIBULK_BLOCKSIZE 8192 // 8k bytes
#define SPI_CMD_LENGTH 64

#define ISPCMD_LOAD_FW 0x0001
#define ISPCMD_PURE_BYPASS 0x0010
#define ISPCMD_POWER_OFF 0x0100
#define ISPCMD_ENTER_CP_MODE 0x0200
#define ISPCMD_LEAVE_CP_MODE_STANDBY 0x0002

/*Calibration Profile*/
#define ISPCMD_CAMERA_SET_SENSORMODE 0x300A
#define ISPCMD_CAMERA_GET_SENSORMODE 0x300B
#define ISPCMD_CAMERA_SET_OUTPUTFORMAT 0x300D
#define ISPCMD_CAMERA_SET_CP_MODE 0x300E
#define ISPCMD_CAMERA_SET_AE_STATISTICS 0x300F
#define ISPCMD_CAMERA_PREVIEWSTREAMONOFF 0x3010
#define ISPCMD_CAMERA_DUALPDYCALCULATIONWEIGHT 0x3011
#define ISPCMD_LED_POWERCONTROL 0x3012
#define ISPCMD_CAMERA_ACTIVE_AE 0x3013
#define ISPCMD_ISP_AECONTROLONOFF 0x3014
#define ISPCMD_CAMERA_SET_FRAMERATELIMITS 0x3015
#define ISPCMD_CAMERA_SET_PERIODDROPFRAME 0x3016
#define ISPCMD_CAMERA_SET_MAX_EXPOSURE 0x3017
#define ISPCMD_CAMERA_SET_AE_TARGET_MEAN 0x3018

/* Bulk Data*/
#define ISPCMD_BULK_WRITE_BASICCODE 0x2002
#define ISPCMD_BULK_WRITE_BOOTCODE 0x2008
#define ISPCMD_BULK_READ_MEMORY 0x2101
#define ISPCMD_BULK_READ_COMLOG 0x2102
#define ISPCMD_BULK_WRITE_CALIBRATION_DATA 0x210B

/*Basic Setting*/
#define ISPCMD_BASIC_SET_DEPTH_3A_INFO 0x10B9
#define ISPCMD_BASIC_SET_DEPTH_AUTO_INTERLEAVE_MODE 0x10BC
#define ISPCMD_BASIC_SET_INTERLEAVE_MODE_DEPTH_TYPE 0x10BD
#define ISPCMD_BASIC_SET_DEPTH_POLISH_LEVEL 0x10BE

/*System Cmd*/
#define ISPCMD_SYSTEM_GET_STATUSOFLASTEXECUTEDCOMMAND 0x0015
#define ISPCMD_SYSTEM_GET_ERRORCODE 0x0016
#define ISPCMD_SYSTEM_SET_ISPREGISTER 0x0100
#define ISPCMD_SYSTEM_GET_ISPREGISTER 0x0101
/*#define ISPCMD_SYSTEM_SET_DEBUGCMD 0x0104*/
#define ISPCMD_SYSTEM_SET_COMLOGLEVEL 0x0109
#define ISPCMD_SYSTEM_GET_CHIPTESTREPORT 0x010A

/*Operarion Code*/
#define ISPCMD_MINIISPOPEN 0x4000



// ALTEK_AL6100_KERNEL >>>
#define IOC_ISP_CTRL_FLOW_CHI_MAGIC 'D'

#define IOCTL_ISP_RUN_TASK_START \
	_IOWR(IOC_ISP_CTRL_FLOW_CHI_MAGIC, BASE_MINIISP_CONTROL, struct miniISP_cmd_config)

#define IOCTL_ISP_RUN_TASK_STOP \
	_IOWR(IOC_ISP_CTRL_FLOW_CHI_MAGIC, BASE_MINIISP_CONTROL + 1, struct miniISP_cmd_config)
// ALTEK_AL6100_KERNEL <<<




//TODO: Need to solve the kernel panic >>>
struct miniISP_cmd_config{
    uint16_t opcode;
    uint32_t size;
    //__u8 *param;
    uint32_t param;
} __attribute__ ((packed));

#define BASE_MINIISP_CONTROL 100

#define IOC_ISP_CTRL_FLOW_MAGIC 'C'

#define IOCTL_ISP_LOAD_FW \
	_IOWR(IOC_ISP_CTRL_FLOW_MAGIC, BASE_MINIISP_CONTROL, struct miniISP_cmd_config)

#define IOCTL_ISP_PURE_BYPASS \
	_IOWR(IOC_ISP_CTRL_FLOW_MAGIC, BASE_MINIISP_CONTROL + 1, struct miniISP_cmd_config)

#define IOCTL_ISP_POWER_OFF \
	_IOWR(IOC_ISP_CTRL_FLOW_MAGIC, BASE_MINIISP_CONTROL + 2, struct miniISP_cmd_config)
//TODO: Need to solve the kernel panic <<<

///ALTEK_TAG_HwMiniISP<<<
