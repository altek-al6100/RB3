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

/*
 * File: miniisp_chip_base_define.c.c
 * Description: Mini ISP ChipBase Define Code
 *
 *
 *  2017/10/18; Louis Wang; Initial version
 */
 /******Include File******/
#include "linux/init.h"
#include "linux/module.h"

#include "include/miniisp.h"
#include "include/error.h"
#include "include/miniisp_chip_base_define.h"


#define MINI_ISP_LOG_TAG	"[miniisp_chip_base_define]"

/******Private Variable******/
static u32 clk_gen_array[] = clk_gen_dump_field;
static u32 mipi_tx_phy_if_0_array[] = mipi_tx_phy_if_0_dump_field;
static u32 mipi_tx_phy_if_1_array[] = mipi_tx_phy_if_1_dump_field;
static u32 gen_reg_array[] = gen_reg_dump_field;
static u32 mipi_slvds_rx_phy_if_0_array[] = mipi_slvds_rx_phy_if_0_dump_field;
static u32 mipi_slvds_rx_phy_if_1_array[] = mipi_slvds_rx_phy_if_1_dump_field;
static u32 ppi_bridge_a_0_array[] = ppi_bridge_a_0_dump_field;
static u32 ppi_bridge_a_1_array[] = ppi_bridge_a_1_dump_field;
static u32 tx_top_out_mux_a_0_array[] = tx_top_out_mux_a_0_dump_field;
static u32 tx_top_out_mux_a_1_array[] = tx_top_out_mux_a_1_dump_field;
static u32 tx_line_merge_21_a_0_array[] = tx_line_merge_21_a_0_dump_field;
static u32 tx_line_merge_21_b_0_array[] = tx_line_merge_21_b_0_dump_field;
static u32 tx_line_merge_21_c_0_array[] = tx_line_merge_21_c_0_dump_field;
static u32 tx_line_merge_21_d_0_array[] = tx_line_merge_21_d_0_dump_field;
static u32 mipi_csi2_tx_0_array[] = mipi_csi2_tx_0_dump_field;
static u32 mipi_csi2_tx_1_array[] = mipi_csi2_tx_1_dump_field;
static u32 gen_reg_depth_top_array[] = gen_reg_depth_top_dump_field;
static u32 gen_reg_dpc_top_array[] = gen_reg_dpc_top_dump_field;
static u32 gen_reg_hdr_top_array[] = gen_reg_hdr_top_dump_field;
static u32 gen_reg_irp_top_array[] = gen_reg_irp_top_dump_field;
static u32 gen_reg_standby_top_array[] = gen_reg_standby_top_dump_field;
static u32 gen_reg_tx_top_array[] = gen_reg_tx_top_dump_field;
static u32 id_det_a_0_array[] = id_det_a_0_dump_field;
static u32 id_det_a_1_array[] = id_det_a_1_dump_field;
static u32 bayer_binning_a_0_array[] = bayer_binning_a_0_dump_field;
static u32 bayer_binning_a_1_array[] = bayer_binning_a_1_dump_field;
static u32 bayer_scl_a_0_array[] = bayer_scl_a_0_dump_field;
static u32 bayer_scl_a_1_array[] = bayer_scl_a_1_dump_field;
static u32 rlb_a_0_array[] = rlb_a_0_dump_field;
static u32 rlb_b_0_array[] = rlb_b_0_dump_field;
static u32 mipi_csi2_rx_0_array[] = mipi_csi2_rx_0_dump_field;
static u32 mipi_csi2_rx_1_array[] = mipi_csi2_rx_1_dump_field;
static u32 dg_ca_a_0_array[] = dg_ca_a_0_dump_field;
static u32 dg_mcc_a_0_array[] = dg_mcc_a_0_dump_field;
static u32 dp_top_a_0_array[] = dp_top_a_0_dump_field;
static u32 lvhwirp_top_a_0_array[] = lvhwirp_top_a_0_dump_field;
static u32 lvhwirp_top_b_0_array[] = lvhwirp_top_b_0_dump_field;
static u32 lvlumanr_a_0_array[] = lvlumanr_a_0_dump_field;
static u32 lvlumanr_a_1_array[] = lvlumanr_a_1_dump_field;
static u32 lvsharp_a_0_array[] = lvsharp_a_0_dump_field;
static u32 lvsharp_a_1_array[] = lvsharp_a_1_dump_field;
static u32 rectify_a_0_array[] = rectify_a_0_dump_field;
static u32 rectify_b_0_array[] = rectify_b_0_dump_field;

/******Private Function******/

static void mini_isp_chip_base_define_module_reg_dump(char *module_name)
{
	int i = 0;

	/*clk_gen*/
	if (strcmp(module_name, "clk_gen") == 0)
		for (i = 0; i < sizeof(clk_gen_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				clk_gen_array[i],
				clk_gen_array[i+1],
				module_name);
	/*mipi_tx_phy_if_0*/
	else if (strcmp(module_name, "mipi_tx_phy_if_0") == 0)
		for (i = 0; i < sizeof(mipi_tx_phy_if_0_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				mipi_tx_phy_if_0_array[i],
				mipi_tx_phy_if_0_array[i+1],
				module_name);
	/*mipi_tx_phy_if_1*/
	else if (strcmp(module_name, "mipi_tx_phy_if_1") == 0)
		for (i = 0; i < sizeof(mipi_tx_phy_if_1_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				mipi_tx_phy_if_1_array[i],
				mipi_tx_phy_if_1_array[i+1],
				module_name);
	/*gen_reg*/
	else if (strcmp(module_name, "gen_reg") == 0)
		for (i = 0; i < sizeof(gen_reg_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				gen_reg_array[i],
				gen_reg_array[i+1],
				module_name);
	/*mipi_slvds_rx_phy_if_0*/
	else if (strcmp(module_name, "mipi_slvds_rx_phy_if_0") == 0)
		for (i = 0;
			i < sizeof(mipi_slvds_rx_phy_if_0_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				mipi_slvds_rx_phy_if_0_array[i],
				mipi_slvds_rx_phy_if_0_array[i+1],
				module_name);
	/*mipi_slvds_rx_phy_if_1*/
	else if (strcmp(module_name, "mipi_slvds_rx_phy_if_1") == 0)
		for (i = 0;
			i < sizeof(mipi_slvds_rx_phy_if_1_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				mipi_slvds_rx_phy_if_1_array[i],
				mipi_slvds_rx_phy_if_1_array[i+1],
				module_name);
	/*ppi_bridge_a_0*/
	else if (strcmp(module_name, "ppi_bridge_a_0") == 0)
		for (i = 0; i < sizeof(ppi_bridge_a_0_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				ppi_bridge_a_0_array[i],
				ppi_bridge_a_0_array[i+1],
				module_name);
	/*ppi_bridge_a_1*/
	else if (strcmp(module_name, "ppi_bridge_a_1") == 0)
		for (i = 0; i < sizeof(ppi_bridge_a_1_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				ppi_bridge_a_1_array[i],
				ppi_bridge_a_1_array[i+1],
				module_name);
	/*tx_top_out_mux_a_0*/
	else if (strcmp(module_name, "tx_top_out_mux_a_0") == 0)
		for (i = 0; i < sizeof(tx_top_out_mux_a_0_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				tx_top_out_mux_a_0_array[i],
				tx_top_out_mux_a_0_array[i+1],
				module_name);
	/*tx_top_out_mux_a_1*/
	else if (strcmp(module_name, "tx_top_out_mux_a_1") == 0)
		for (i = 0; i < sizeof(tx_top_out_mux_a_1_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				tx_top_out_mux_a_1_array[i],
				tx_top_out_mux_a_1_array[i+1],
				module_name);
	/*tx_line_merge_21_a_0*/
	else if (strcmp(module_name, "tx_line_merge_21_a_0") == 0)
		for (i = 0;
			i < sizeof(tx_line_merge_21_a_0_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				tx_line_merge_21_a_0_array[i],
				tx_line_merge_21_a_0_array[i+1],
				module_name);
	/*tx_line_merge_21_b_0*/
	else if (strcmp(module_name, "tx_line_merge_21_b_0") == 0)
		for (i = 0;
			i < sizeof(tx_line_merge_21_b_0_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				tx_line_merge_21_b_0_array[i],
				tx_line_merge_21_b_0_array[i+1],
				module_name);
	/*tx_line_merge_21_c_0*/
	else if (strcmp(module_name, "tx_line_merge_21_c_0") == 0)
		for (i = 0;
			i < sizeof(tx_line_merge_21_c_0_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				tx_line_merge_21_c_0_array[i],
				tx_line_merge_21_c_0_array[i+1],
				module_name);
	/*tx_line_merge_21_d_0*/
	else if (strcmp(module_name, "tx_line_merge_21_d_0") == 0)
		for (i = 0;
			i < sizeof(tx_line_merge_21_d_0_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				tx_line_merge_21_d_0_array[i],
				tx_line_merge_21_d_0_array[i+1],
				module_name);
	/*mipi_csi2_tx_0*/
	else if (strcmp(module_name, "mipi_csi2_tx_0") == 0)
		for (i = 0; i < sizeof(mipi_csi2_tx_0_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				mipi_csi2_tx_0_array[i],
				mipi_csi2_tx_0_array[i+1],
				module_name);
	/*mipi_csi2_tx_1*/
	else if (strcmp(module_name, "mipi_csi2_tx_1") == 0)
		for (i = 0; i < sizeof(mipi_csi2_tx_1_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				mipi_csi2_tx_1_array[i],
				mipi_csi2_tx_1_array[i+1],
				module_name);
	/*gen_reg_depth_top*/
	else if (strcmp(module_name, "gen_reg_depth_top") == 0)
		for (i = 0; i < sizeof(gen_reg_depth_top_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				gen_reg_depth_top_array[i],
				gen_reg_depth_top_array[i+1],
				module_name);
	/*gen_reg_dpc_top*/
	else if (strcmp(module_name, "gen_reg_dpc_top") == 0)
		for (i = 0; i < sizeof(gen_reg_dpc_top_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				gen_reg_dpc_top_array[i],
				gen_reg_dpc_top_array[i+1],
				module_name);
	/*gen_reg_hdr_top*/
	else if (strcmp(module_name, "gen_reg_hdr_top") == 0)
		for (i = 0; i < sizeof(gen_reg_hdr_top_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				gen_reg_hdr_top_array[i],
				gen_reg_hdr_top_array[i+1],
				module_name);
	/*gen_reg_irp_top*/
	else if (strcmp(module_name, "gen_reg_irp_top") == 0)
		for (i = 0; i < sizeof(gen_reg_irp_top_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				gen_reg_irp_top_array[i],
				gen_reg_irp_top_array[i+1],
				module_name);
	/*gen_reg_standby_top*/
	else if (strcmp(module_name, "gen_reg_standby_top") == 0)
		for (i = 0; i < sizeof(gen_reg_standby_top_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				gen_reg_standby_top_array[i],
				gen_reg_standby_top_array[i+1],
				module_name);
	/*gen_reg_tx_top*/
	else if (strcmp(module_name, "gen_reg_tx_top") == 0)
		for (i = 0; i < sizeof(gen_reg_tx_top_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				gen_reg_tx_top_array[i],
				gen_reg_tx_top_array[i+1],
				module_name);
	/*id_det_a_0*/
	else if (strcmp(module_name, "id_det_a_0") == 0)
		for (i = 0; i < sizeof(id_det_a_0_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				id_det_a_0_array[i],
				id_det_a_0_array[i+1],
				module_name);
	/*id_det_a_1*/
	else if (strcmp(module_name, "id_det_a_1") == 0)
		for (i = 0; i < sizeof(id_det_a_1_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				id_det_a_1_array[i],
				id_det_a_1_array[i+1],
				module_name);
	/*bayer_binning_a_0*/
	else if (strcmp(module_name, "bayer_binning_a_0") == 0)
		for (i = 0; i < sizeof(bayer_binning_a_0_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				bayer_binning_a_0_array[i],
				bayer_binning_a_0_array[i+1],
				module_name);
	/*bayer_binning_a_1*/
	else if (strcmp(module_name, "bayer_binning_a_1") == 0)
		for (i = 0; i < sizeof(bayer_binning_a_1_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				bayer_binning_a_1_array[i],
				bayer_binning_a_1_array[i+1],
				module_name);
	/*bayer_scl_a_0*/
	else if (strcmp(module_name, "bayer_scl_a_0") == 0)
		for (i = 0; i < sizeof(bayer_scl_a_0_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				bayer_scl_a_0_array[i],
				bayer_scl_a_0_array[i+1],
				module_name);
	/*bayer_scl_a_1*/
	else if (strcmp(module_name, "bayer_scl_a_1") == 0)
		for (i = 0; i < sizeof(bayer_scl_a_1_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				bayer_scl_a_1_array[i],
				bayer_scl_a_1_array[i+1],
				module_name);
	/*rlb_a_0*/
	else if (strcmp(module_name, "rlb_a_0") == 0)
		for (i = 0; i < sizeof(rlb_a_0_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				rlb_a_0_array[i],
				rlb_a_0_array[i+1],
				module_name);
	/*rlb_b_0*/
	else if (strcmp(module_name, "rlb_b_0") == 0)
		for (i = 0; i < sizeof(rlb_b_0_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				rlb_b_0_array[i],
				rlb_b_0_array[i+1],
				module_name);
	/*mipi_csi2_rx_0*/
	else if (strcmp(module_name, "mipi_csi2_rx_0") == 0)
		for (i = 0; i < sizeof(mipi_csi2_rx_0_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				mipi_csi2_rx_0_array[i],
				mipi_csi2_rx_0_array[i+1],
				module_name);
	/*mipi_csi2_rx_1*/
	else if (strcmp(module_name, "mipi_csi2_rx_1") == 0)
		for (i = 0; i < sizeof(mipi_csi2_rx_1_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				mipi_csi2_rx_1_array[i],
				mipi_csi2_rx_1_array[i+1],
				module_name);
	/*dg_ca_a_0*/
	else if (strcmp(module_name, "dg_ca_a_0") == 0)
		for (i = 0; i < sizeof(dg_ca_a_0_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				dg_ca_a_0_array[i],
				dg_ca_a_0_array[i+1],
				module_name);
	/*dg_mcc_a_0*/
	else if (strcmp(module_name, "dg_mcc_a_0") == 0)
		for (i = 0; i < sizeof(dg_mcc_a_0_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				dg_mcc_a_0_array[i],
				dg_mcc_a_0_array[i+1],
				module_name);
	/*dp_top_a_0*/
	else if (strcmp(module_name, "dp_top_a_0") == 0)
		for (i = 0; i < sizeof(dp_top_a_0_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				dp_top_a_0_array[i],
				dp_top_a_0_array[i+1],
				module_name);
	/*lvhwirp_top_a_0*/
	else if (strcmp(module_name, "lvhwirp_top_a_0") == 0)
		for (i = 0; i < sizeof(lvhwirp_top_a_0_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				lvhwirp_top_a_0_array[i],
				lvhwirp_top_a_0_array[i+1],
				module_name);
	/*lvhwirp_top_b_0*/
	else if (strcmp(module_name, "lvhwirp_top_b_0") == 0)
		for (i = 0; i < sizeof(lvhwirp_top_b_0_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				lvhwirp_top_b_0_array[i],
				lvhwirp_top_b_0_array[i+1],
				module_name);
	/*lvlumanr_a_0*/
	else if (strcmp(module_name, "lvlumanr_a_0") == 0)
		for (i = 0; i < sizeof(lvlumanr_a_0_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				lvlumanr_a_0_array[i],
				lvlumanr_a_0_array[i+1],
				module_name);
	/*lvlumanr_a_1*/
	else if (strcmp(module_name, "lvlumanr_a_1") == 0)
		for (i = 0; i < sizeof(lvlumanr_a_1_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				lvlumanr_a_1_array[i],
				lvlumanr_a_1_array[i+1],
				module_name);
	/*lvsharp_a_0*/
	else if (strcmp(module_name, "lvsharp_a_0") == 0)
		for (i = 0; i < sizeof(lvsharp_a_0_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				lvsharp_a_0_array[i],
				lvsharp_a_0_array[i+1],
				module_name);
	/*lvsharp_a_1*/
	else if (strcmp(module_name, "lvsharp_a_1") == 0)
		for (i = 0; i < sizeof(lvsharp_a_1_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				lvsharp_a_1_array[i],
				lvsharp_a_1_array[i+1],
				module_name);
	/*rectify_a_0*/
	else if (strcmp(module_name, "rectify_a_0") == 0)
		for (i = 0; i < sizeof(rectify_a_0_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				rectify_a_0_array[i],
				rectify_a_0_array[i+1],
				module_name);
	/*rectify_b_0*/
	else if (strcmp(module_name, "rectify_b_0") == 0)
		for (i = 0; i < sizeof(rectify_b_0_array)/(sizeof(u32));
			i = i + 2)
			mini_isp_register_read_then_write_file(
				rectify_b_0_array[i],
				rectify_b_0_array[i+1],
				module_name);
	else
		misp_err("%s %s dump field not exit, please add",
			__func__, module_name);
}


/******Public Function******/

/**
 *\brief dump bypass mode reg
 *\descript should use SPI e mode or I2C slave
 *\return Error code
 */
errcode mini_isp_chip_base_dump_bypass_mode_register(void)
{
	errcode err = ERR_SUCCESS;

	/*clk_gen*/
	misp_info("%s clk_gen", __func__);
	mini_isp_chip_base_define_module_reg_dump("clk_gen");
	/*mipi_tx_phy_if_0*/
	misp_info("%s mipi_tx_phy_if_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("mipi_tx_phy_if_0");
	/*mipi_tx_phy_if_1*/
	misp_info("%s mipi_tx_phy_if_1", __func__);
	mini_isp_chip_base_define_module_reg_dump("mipi_tx_phy_if_1");
	/*gen_reg*/
	misp_info("%s gen_reg", __func__);
	mini_isp_chip_base_define_module_reg_dump("gen_reg");
	/*mipi_slvds_rx_phy_if_0*/
	misp_info("%s mipi_slvds_rx_phy_if_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("mipi_slvds_rx_phy_if_0");
	/*mipi_slvds_rx_phy_if_1*/
	misp_info("%s mipi_slvds_rx_phy_if_1", __func__);
	mini_isp_chip_base_define_module_reg_dump("mipi_slvds_rx_phy_if_1");
	/*ppi_bridge_a_0*/
	misp_info("%s ppi_bridge_a_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("ppi_bridge_a_0");
	/*ppi_bridge_a_1*/
	misp_info("%s ppi_bridge_a_1", __func__);
	mini_isp_chip_base_define_module_reg_dump("ppi_bridge_a_1");
	return err;
}


/**
 *\brief dump normal mode reg
 *\descript should use SPI e mode or I2C slave
 *\return Error code
 */
errcode mini_isp_chip_base_dump_normal_mode_register(void)
{
	errcode err = ERR_SUCCESS;

	/*clk_gen*/
	misp_info("%s clk_gen", __func__);
	mini_isp_chip_base_define_module_reg_dump("clk_gen");
	/*tx_top_out_mux_a_0*/
	misp_info("%s tx_top_out_mux_a_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("tx_top_out_mux_a_0");
	/*tx_top_out_mux_a_1*/
	misp_info("%s tx_top_out_mux_a_1", __func__);
	mini_isp_chip_base_define_module_reg_dump("tx_top_out_mux_a_1");
	/*tx_line_merge_21_a_0*/
	misp_info("%s tx_line_merge_21_a_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("tx_line_merge_21_a_0");
	/*tx_line_merge_21_b_0*/
	misp_info("%s tx_line_merge_21_b_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("tx_line_merge_21_b_0");
	/*tx_line_merge_21_c_0*/
	misp_info("%s tx_line_merge_21_c_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("tx_line_merge_21_c_0");
	/*tx_line_merge_21_d_0*/
	misp_info("%s tx_line_merge_21_d_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("tx_line_merge_21_d_0");
	/*mipi_csi2_tx_0*/
	misp_info("%s mipi_csi2_tx_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("mipi_csi2_tx_0");
	/*mipi_tx_phy_if_0*/
	misp_info("%s mipi_tx_phy_if_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("mipi_tx_phy_if_0");
	/*mipi_csi2_tx_1*/
	misp_info("%s mipi_csi2_tx_1", __func__);
	mini_isp_chip_base_define_module_reg_dump("mipi_csi2_tx_1");
	/*mipi_tx_phy_if_1*/
	misp_info("%s mipi_tx_phy_if_1", __func__);
	mini_isp_chip_base_define_module_reg_dump("mipi_tx_phy_if_1");
	/*gen_reg_depth_top*/
	misp_info("%s gen_reg_depth_top", __func__);
	mini_isp_chip_base_define_module_reg_dump("gen_reg_depth_top");
	/*gen_reg_dpc_top*/
	misp_info("%s gen_reg_dpc_top", __func__);
	mini_isp_chip_base_define_module_reg_dump("gen_reg_dpc_top");
	/*gen_reg_hdr_top*/
	misp_info("%s gen_reg_hdr_top", __func__);
	mini_isp_chip_base_define_module_reg_dump("gen_reg_hdr_top");
	/*gen_reg_irp_top*/
	misp_info("%s gen_reg_irp_top", __func__);
	mini_isp_chip_base_define_module_reg_dump("gen_reg_irp_top");
	/*gen_reg_standby_top*/
	misp_info("%s gen_reg_standby_top", __func__);
	mini_isp_chip_base_define_module_reg_dump("gen_reg_standby_top");
	/*gen_reg_tx_top*/
	misp_info("%s gen_reg_tx_top", __func__);
	mini_isp_chip_base_define_module_reg_dump("gen_reg_tx_top");
	/*id_det_a_0*/
	misp_info("%s id_det_a_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("id_det_a_0");
	/*id_det_a_1*/
	misp_info("%s id_det_a_1", __func__);
	mini_isp_chip_base_define_module_reg_dump("id_det_a_1");
	/*bayer_binning_a_0*/
	misp_info("%s bayer_binning_a_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("bayer_binning_a_0");
	/*bayer_binning_a_1*/
	misp_info("%s bayer_binning_a_1", __func__);
	mini_isp_chip_base_define_module_reg_dump("bayer_binning_a_1");
	/*bayer_scl_a_0*/
	misp_info("%s bayer_scl_a_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("bayer_scl_a_0");
	/*bayer_scl_a_1*/
	misp_info("%s bayer_scl_a_1", __func__);
	mini_isp_chip_base_define_module_reg_dump("bayer_scl_a_1");
	/*rlb_a_0*/
	misp_info("%s rlb_a_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("rlb_a_0");
	/*rlb_b_0*/
	misp_info("%s rlb_b_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("rlb_b_0");
	/*mipi_slvds_rx_phy_if_0*/
	misp_info("%s mipi_slvds_rx_phy_if_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("mipi_slvds_rx_phy_if_0");
	/*mipi_csi2_rx_0*/
	misp_info("%s mipi_csi2_rx_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("mipi_csi2_rx_0");
	/*mipi_slvds_rx_phy_if_1*/
	misp_info("%s mipi_slvds_rx_phy_if_1", __func__);
	mini_isp_chip_base_define_module_reg_dump("mipi_slvds_rx_phy_if_1");
	/*mipi_csi2_rx_1*/
	misp_info("%s mipi_csi2_rx_1", __func__);
	mini_isp_chip_base_define_module_reg_dump("mipi_csi2_rx_1");
	/*ppi_bridge_a_0*/
	misp_info("%s ppi_bridge_a_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("ppi_bridge_a_0");
	/*ppi_bridge_a_1*/
	misp_info("%s ppi_bridge_a_1", __func__);
	mini_isp_chip_base_define_module_reg_dump("ppi_bridge_a_1");

	return err;
}

/**
 *\brief dump irp and depth based reg
 *\descript should use SPI e mode or I2C slave
 *\return Error code
 */
errcode mini_isp_chip_base_dump_irp_and_depth_based_register(void)
{
	errcode err = ERR_SUCCESS;

	/*dg_ca_a_0*/
	misp_info("%s dg_ca_a_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("dg_ca_a_0");
	/*dg_mcc_a_0*/
	misp_info("%s dg_mcc_a_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("dg_mcc_a_0");
	/*dp_top_a_0*/
	misp_info("%s dp_top_a_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("dp_top_a_0");
	/*lvhwirp_top_a_0*/
	misp_info("%s lvhwirp_top_a_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("lvhwirp_top_a_0");
	/*lvhwirp_top_b_0*/
	misp_info("%s lvhwirp_top_b_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("lvhwirp_top_b_0");
	/*lvlumanr_a_0*/
	misp_info("%s lvlumanr_a_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("lvlumanr_a_0");
	/*lvlumanr_a_1*/
	misp_info("%s lvlumanr_a_1", __func__);
	mini_isp_chip_base_define_module_reg_dump("lvlumanr_a_1");
	/*lvsharp_a_0*/
	misp_info("%s lvsharp_a_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("lvsharp_a_0");
	/*lvsharp_a_1*/
	misp_info("%s lvsharp_a_1", __func__);
	mini_isp_chip_base_define_module_reg_dump("lvsharp_a_1");
	/*rectify_a_0*/
	misp_info("%s rectify_a_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("rectify_a_0");
	/*rectify_b_0*/
	misp_info("%s rectify_b_0", __func__);
	mini_isp_chip_base_define_module_reg_dump("rectify_b_0");
	return err;
}
