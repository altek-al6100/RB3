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

extern int handle_ControlFlowCmd_II(u16 miniisp_op_code, u8 *param);
extern long handle_ControlFlowCmd(unsigned int cmd, unsigned long arg);
// ALTEK_AL6100_CHI >>>
enum miniisp_firmware {
	IQ_CODE,
	DEPTH_CODE,
	OTHER_MAX
};
extern long handle_ControlFlowCmd_CHI(unsigned int cmd, unsigned long arg);
extern void mini_isp_other_drv_open(char *file_name, u8 type);
extern void mini_isp_other_drv_read(struct file *filp, u8 type);
// ALTEK_AL6100_CHI <<<
