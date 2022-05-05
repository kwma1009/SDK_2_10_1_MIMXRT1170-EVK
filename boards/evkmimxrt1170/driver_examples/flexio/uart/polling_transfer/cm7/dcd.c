/*
 * Copyright 2020 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#include "dcd.h"

/* Component ID definition, used by tools. */
#ifndef FSL_COMPONENT_ID
#define FSL_COMPONENT_ID "platform.drivers.xip_board"
#endif

#if defined(XIP_BOOT_HEADER_ENABLE) && (XIP_BOOT_HEADER_ENABLE == 1)
#if defined(XIP_BOOT_HEADER_DCD_ENABLE) && (XIP_BOOT_HEADER_DCD_ENABLE == 1)
#if defined(__CC_ARM) || defined(__ARMCC_VERSION) || defined(__GNUC__)
__attribute__((section(".boot_hdr.dcd_data"), used))
#elif defined(__ICCARM__)
#pragma location = ".boot_hdr.dcd_data"
#endif

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: DCDx V2.0
processor: MIMXRT1176xxxxx
package_id: MIMXRT1176DVMAA
mcu_data: ksdk2_0
processor_version: 0.0.0
output_format: c_array
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* COMMENTS BELOW ARE USED AS SETTINGS FOR DCD DATA */
const uint8_t dcd_data[] = {
	/* HEADER */
	/* Tag */
	0xD2,
	/* Image Length */
	0x05, 0x18,
	/* Version */
	0x41,

	/* COMMANDS */

	/* group: 'Imported Commands' */
	/* #1.1-139, command header bytes for merged 'Write - value' command */
	0xCC, 0x04, 0x5C, 0x04,
	/* #1.1, command: write_value, address: CCM_CLOCK_ROOT4_CONTROL, value: 0x602, size: 4 */
	0x40, 0xCC, 0x02, 0x00, 0x00, 0x00, 0x06, 0x02,
	/* #1.2, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_00, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x10, 0x00, 0x00, 0x00, 0x00,
	/* #1.3, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_01, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x14, 0x00, 0x00, 0x00, 0x00,
	/* #1.4, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_02, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x18, 0x00, 0x00, 0x00, 0x00,
	/* #1.5, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_03, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x1C, 0x00, 0x00, 0x00, 0x00,
	/* #1.6, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_04, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00,
	/* #1.7, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_05, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x24, 0x00, 0x00, 0x00, 0x00,
	/* #1.8, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_06, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x28, 0x00, 0x00, 0x00, 0x00,
	/* #1.9, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_07, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x2C, 0x00, 0x00, 0x00, 0x00,
	/* #1.10, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_08, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x30, 0x00, 0x00, 0x00, 0x00,
	/* #1.11, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_09, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x34, 0x00, 0x00, 0x00, 0x00,
	/* #1.12, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_10, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x38, 0x00, 0x00, 0x00, 0x00,
	/* #1.13, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_11, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x3C, 0x00, 0x00, 0x00, 0x00,
	/* #1.14, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_12, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x40, 0x00, 0x00, 0x00, 0x00,
	/* #1.15, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_13, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x44, 0x00, 0x00, 0x00, 0x00,
	/* #1.16, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_14, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x48, 0x00, 0x00, 0x00, 0x00,
	/* #1.17, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_15, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x4C, 0x00, 0x00, 0x00, 0x00,
	/* #1.18, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_16, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x50, 0x00, 0x00, 0x00, 0x00,
	/* #1.19, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_17, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x54, 0x00, 0x00, 0x00, 0x00,
	/* #1.20, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_18, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x58, 0x00, 0x00, 0x00, 0x00,
	/* #1.21, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_19, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x5C, 0x00, 0x00, 0x00, 0x00,
	/* #1.22, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_20, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x60, 0x00, 0x00, 0x00, 0x00,
	/* #1.23, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_21, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x64, 0x00, 0x00, 0x00, 0x00,
	/* #1.24, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_22, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x68, 0x00, 0x00, 0x00, 0x00,
	/* #1.25, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_23, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x6C, 0x00, 0x00, 0x00, 0x00,
	/* #1.26, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_24, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x70, 0x00, 0x00, 0x00, 0x00,
	/* #1.27, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_25, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x74, 0x00, 0x00, 0x00, 0x00,
	/* #1.28, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_26, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x78, 0x00, 0x00, 0x00, 0x00,
	/* #1.29, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_27, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x7C, 0x00, 0x00, 0x00, 0x00,
	/* #1.30, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_28, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00,
	/* #1.31, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_29, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x84, 0x00, 0x00, 0x00, 0x00,
	/* #1.32, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_30, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x88, 0x00, 0x00, 0x00, 0x00,
	/* #1.33, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_31, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x8C, 0x00, 0x00, 0x00, 0x00,
	/* #1.34, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_32, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x90, 0x00, 0x00, 0x00, 0x00,
	/* #1.35, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_33, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x94, 0x00, 0x00, 0x00, 0x00,
	/* #1.36, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_34, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x98, 0x00, 0x00, 0x00, 0x00,
	/* #1.37, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_35, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0x9C, 0x00, 0x00, 0x00, 0x00,
	/* #1.38, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_36, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0xA0, 0x00, 0x00, 0x00, 0x00,
	/* #1.39, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_37, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0xA4, 0x00, 0x00, 0x00, 0x00,
	/* #1.40, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_38, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0xA8, 0x00, 0x00, 0x00, 0x00,
	/* #1.41, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_39, value: 0x10, size: 4 */
	0x40, 0x0E, 0x80, 0xAC, 0x00, 0x00, 0x00, 0x10,
	/* #1.42, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0xB0, 0x00, 0x00, 0x00, 0x00,
	/* #1.43, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_41, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0xB4, 0x00, 0x00, 0x00, 0x00,
	/* #1.44, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_00, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0xB8, 0x00, 0x00, 0x00, 0x00,
	/* #1.45, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_01, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0xBC, 0x00, 0x00, 0x00, 0x00,
	/* #1.46, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_02, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0xC0, 0x00, 0x00, 0x00, 0x00,
	/* #1.47, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0xC4, 0x00, 0x00, 0x00, 0x00,
	/* #1.48, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0xC8, 0x00, 0x00, 0x00, 0x00,
	/* #1.49, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_05, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0xCC, 0x00, 0x00, 0x00, 0x00,
	/* #1.50, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_06, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0xD0, 0x00, 0x00, 0x00, 0x00,
	/* #1.51, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_07, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0xD4, 0x00, 0x00, 0x00, 0x00,
	/* #1.52, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_08, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0xD8, 0x00, 0x00, 0x00, 0x00,
	/* #1.53, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_09, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0xDC, 0x00, 0x00, 0x00, 0x00,
	/* #1.54, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_10, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0xE0, 0x00, 0x00, 0x00, 0x00,
	/* #1.55, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0xE4, 0x00, 0x00, 0x00, 0x00,
	/* #1.56, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0xE8, 0x00, 0x00, 0x00, 0x00,
	/* #1.57, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_13, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0xEC, 0x00, 0x00, 0x00, 0x00,
	/* #1.58, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_14, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0xF0, 0x00, 0x00, 0x00, 0x00,
	/* #1.59, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_15, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0xF4, 0x00, 0x00, 0x00, 0x00,
	/* #1.60, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_16, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0xF8, 0x00, 0x00, 0x00, 0x00,
	/* #1.61, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17, value: 0x00, size: 4 */
	0x40, 0x0E, 0x80, 0xFC, 0x00, 0x00, 0x00, 0x00,
	/* #1.62, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_18, value: 0x00, size: 4 */
	0x40, 0x0E, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00,
	/* #1.63, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19, value: 0x00, size: 4 */
	0x40, 0x0E, 0x81, 0x04, 0x00, 0x00, 0x00, 0x00,
	/* #1.64, command: write_value, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_20, value: 0x00, size: 4 */
	0x40, 0x0E, 0x81, 0x08, 0x00, 0x00, 0x00, 0x00,
	/* #1.65, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_00, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0x54, 0x00, 0x00, 0x00, 0x08,
	/* #1.66, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_01, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0x58, 0x00, 0x00, 0x00, 0x08,
	/* #1.67, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_02, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0x5C, 0x00, 0x00, 0x00, 0x08,
	/* #1.68, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_03, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0x60, 0x00, 0x00, 0x00, 0x08,
	/* #1.69, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_04, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0x64, 0x00, 0x00, 0x00, 0x08,
	/* #1.70, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_05, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0x68, 0x00, 0x00, 0x00, 0x08,
	/* #1.71, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_06, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0x6C, 0x00, 0x00, 0x00, 0x08,
	/* #1.72, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_07, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0x70, 0x00, 0x00, 0x00, 0x08,
	/* #1.73, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_08, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0x74, 0x00, 0x00, 0x00, 0x08,
	/* #1.74, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_09, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0x78, 0x00, 0x00, 0x00, 0x08,
	/* #1.75, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_10, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0x7C, 0x00, 0x00, 0x00, 0x08,
	/* #1.76, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_11, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0x80, 0x00, 0x00, 0x00, 0x08,
	/* #1.77, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_12, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0x84, 0x00, 0x00, 0x00, 0x08,
	/* #1.78, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_13, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0x88, 0x00, 0x00, 0x00, 0x08,
	/* #1.79, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_14, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0x8C, 0x00, 0x00, 0x00, 0x08,
	/* #1.80, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_15, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0x90, 0x00, 0x00, 0x00, 0x08,
	/* #1.81, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_16, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0x94, 0x00, 0x00, 0x00, 0x08,
	/* #1.82, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_17, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0x98, 0x00, 0x00, 0x00, 0x08,
	/* #1.83, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_18, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0x9C, 0x00, 0x00, 0x00, 0x08,
	/* #1.84, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_19, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0xA0, 0x00, 0x00, 0x00, 0x08,
	/* #1.85, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_20, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0xA4, 0x00, 0x00, 0x00, 0x08,
	/* #1.86, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_21, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0xA8, 0x00, 0x00, 0x00, 0x08,
	/* #1.87, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_22, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0xAC, 0x00, 0x00, 0x00, 0x08,
	/* #1.88, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_23, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0xB0, 0x00, 0x00, 0x00, 0x08,
	/* #1.89, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_24, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0xB4, 0x00, 0x00, 0x00, 0x08,
	/* #1.90, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_25, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0xB8, 0x00, 0x00, 0x00, 0x08,
	/* #1.91, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_26, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0xBC, 0x00, 0x00, 0x00, 0x08,
	/* #1.92, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_27, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0xC0, 0x00, 0x00, 0x00, 0x08,
	/* #1.93, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_28, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0xC4, 0x00, 0x00, 0x00, 0x08,
	/* #1.94, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_29, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0xC8, 0x00, 0x00, 0x00, 0x08,
	/* #1.95, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_30, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0xCC, 0x00, 0x00, 0x00, 0x08,
	/* #1.96, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_31, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0xD0, 0x00, 0x00, 0x00, 0x08,
	/* #1.97, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_32, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0xD4, 0x00, 0x00, 0x00, 0x08,
	/* #1.98, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_33, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0xD8, 0x00, 0x00, 0x00, 0x08,
	/* #1.99, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_34, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0xDC, 0x00, 0x00, 0x00, 0x08,
	/* #1.100, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_35, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0xE0, 0x00, 0x00, 0x00, 0x08,
	/* #1.101, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_36, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0xE4, 0x00, 0x00, 0x00, 0x08,
	/* #1.102, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_37, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0xE8, 0x00, 0x00, 0x00, 0x08,
	/* #1.103, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_38, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0xEC, 0x00, 0x00, 0x00, 0x08,
	/* #1.104, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_39, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0xF0, 0x00, 0x00, 0x00, 0x08,
	/* #1.105, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_40, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0xF4, 0x00, 0x00, 0x00, 0x08,
	/* #1.106, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_41, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0xF8, 0x00, 0x00, 0x00, 0x08,
	/* #1.107, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_00, value: 0x08, size: 4 */
	0x40, 0x0E, 0x82, 0xFC, 0x00, 0x00, 0x00, 0x08,
	/* #1.108, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_01, value: 0x08, size: 4 */
	0x40, 0x0E, 0x83, 0x00, 0x00, 0x00, 0x00, 0x08,
	/* #1.109, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_02, value: 0x08, size: 4 */
	0x40, 0x0E, 0x83, 0x04, 0x00, 0x00, 0x00, 0x08,
	/* #1.110, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_03, value: 0x08, size: 4 */
	0x40, 0x0E, 0x83, 0x08, 0x00, 0x00, 0x00, 0x08,
	/* #1.111, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_04, value: 0x08, size: 4 */
	0x40, 0x0E, 0x83, 0x0C, 0x00, 0x00, 0x00, 0x08,
	/* #1.112, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_05, value: 0x08, size: 4 */
	0x40, 0x0E, 0x83, 0x10, 0x00, 0x00, 0x00, 0x08,
	/* #1.113, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_06, value: 0x08, size: 4 */
	0x40, 0x0E, 0x83, 0x14, 0x00, 0x00, 0x00, 0x08,
	/* #1.114, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_07, value: 0x08, size: 4 */
	0x40, 0x0E, 0x83, 0x18, 0x00, 0x00, 0x00, 0x08,
	/* #1.115, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_08, value: 0x08, size: 4 */
	0x40, 0x0E, 0x83, 0x1C, 0x00, 0x00, 0x00, 0x08,
	/* #1.116, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_09, value: 0x08, size: 4 */
	0x40, 0x0E, 0x83, 0x20, 0x00, 0x00, 0x00, 0x08,
	/* #1.117, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_10, value: 0x08, size: 4 */
	0x40, 0x0E, 0x83, 0x24, 0x00, 0x00, 0x00, 0x08,
	/* #1.118, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_11, value: 0x08, size: 4 */
	0x40, 0x0E, 0x83, 0x28, 0x00, 0x00, 0x00, 0x08,
	/* #1.119, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_12, value: 0x08, size: 4 */
	0x40, 0x0E, 0x83, 0x2C, 0x00, 0x00, 0x00, 0x08,
	/* #1.120, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_13, value: 0x08, size: 4 */
	0x40, 0x0E, 0x83, 0x30, 0x00, 0x00, 0x00, 0x08,
	/* #1.121, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_14, value: 0x08, size: 4 */
	0x40, 0x0E, 0x83, 0x34, 0x00, 0x00, 0x00, 0x08,
	/* #1.122, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_15, value: 0x08, size: 4 */
	0x40, 0x0E, 0x83, 0x38, 0x00, 0x00, 0x00, 0x08,
	/* #1.123, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_16, value: 0x08, size: 4 */
	0x40, 0x0E, 0x83, 0x3C, 0x00, 0x00, 0x00, 0x08,
	/* #1.124, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B2_02, value: 0x08, size: 4 */
	0x40, 0x0E, 0x84, 0x00, 0x00, 0x00, 0x00, 0x08,
	/* #1.125, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B2_03, value: 0x08, size: 4 */
	0x40, 0x0E, 0x84, 0x04, 0x00, 0x00, 0x00, 0x08,
	/* #1.126, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B2_04, value: 0x08, size: 4 */
	0x40, 0x0E, 0x84, 0x08, 0x00, 0x00, 0x00, 0x08,
	/* #1.127, command: write_value, address: IOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B2_05, value: 0x08, size: 4 */
	0x40, 0x0E, 0x84, 0x0C, 0x00, 0x00, 0x00, 0x08,
	/* #1.128, command: write_value, address: SEMC_MCR, value: 0x10000004, size: 4 */
	0x40, 0x0D, 0x40, 0x00, 0x10, 0x00, 0x00, 0x04,
	/* #1.129, command: write_value, address: SEMC_BMCR0, value: 0x81, size: 4 */
	0x40, 0x0D, 0x40, 0x08, 0x00, 0x00, 0x00, 0x81,
	/* #1.130, command: write_value, address: SEMC_BMCR1, value: 0x81, size: 4 */
	0x40, 0x0D, 0x40, 0x0C, 0x00, 0x00, 0x00, 0x81,
	/* #1.131, command: write_value, address: SEMC_BR0, value: 0x8000001D, size: 4 */
	0x40, 0x0D, 0x40, 0x10, 0x80, 0x00, 0x00, 0x1D,
	/* #1.132, command: write_value, address: SEMC_SDRAMCR0, value: 0xF32, size: 4 */
	0x40, 0x0D, 0x40, 0x40, 0x00, 0x00, 0x0F, 0x32,
	/* #1.133, command: write_value, address: SEMC_SDRAMCR1, value: 0x772A22, size: 4 */
	0x40, 0x0D, 0x40, 0x44, 0x00, 0x77, 0x2A, 0x22,
	/* #1.134, command: write_value, address: SEMC_SDRAMCR2, value: 0x10A0D, size: 4 */
	0x40, 0x0D, 0x40, 0x48, 0x00, 0x01, 0x0A, 0x0D,
	/* #1.135, command: write_value, address: SEMC_SDRAMCR3, value: 0x21210408, size: 4 */
	0x40, 0x0D, 0x40, 0x4C, 0x21, 0x21, 0x04, 0x08,
	/* #1.136, command: write_value, address: SEMC_IPCR0, value: 0x80000000, size: 4 */
	0x40, 0x0D, 0x40, 0x90, 0x80, 0x00, 0x00, 0x00,
	/* #1.137, command: write_value, address: SEMC_IPCR1, value: 0x02, size: 4 */
	0x40, 0x0D, 0x40, 0x94, 0x00, 0x00, 0x00, 0x02,
	/* #1.138, command: write_value, address: SEMC_IPCR2, value: 0x00, size: 4 */
	0x40, 0x0D, 0x40, 0x98, 0x00, 0x00, 0x00, 0x00,
	/* #1.139, command: write_value, address: SEMC_IPCMD, value: 0xA55A000F, size: 4 */
	0x40, 0x0D, 0x40, 0x9C, 0xA5, 0x5A, 0x00, 0x0F,
	/* #2, command: nop */
	0xC0, 0x00, 0x04, 0x00,
	/* #3, command: nop */
	0xC0, 0x00, 0x04, 0x00,
	/* #4, command: nop */
	0xC0, 0x00, 0x04, 0x00,
	/* #5, command: nop */
	0xC0, 0x00, 0x04, 0x00,
	/* #6, command: nop */
	0xC0, 0x00, 0x04, 0x00,
	/* #7.1-2, command header bytes for merged 'Write - value' command */
	0xCC, 0x00, 0x14, 0x04,
	/* #7.1, command: write_value, address: SEMC_INTR, value: 0x03, size: 4 */
	0x40, 0x0D, 0x40, 0x3C, 0x00, 0x00, 0x00, 0x03,
	/* #7.2, command: write_value, address: SEMC_IPCMD, value: 0xA55A000C, size: 4 */
	0x40, 0x0D, 0x40, 0x9C, 0xA5, 0x5A, 0x00, 0x0C,
	/* #8, command: nop */
	0xC0, 0x00, 0x04, 0x00,
	/* #9, command: nop */
	0xC0, 0x00, 0x04, 0x00,
	/* #10, command: nop */
	0xC0, 0x00, 0x04, 0x00,
	/* #11, command: nop */
	0xC0, 0x00, 0x04, 0x00,
	/* #12, command: nop */
	0xC0, 0x00, 0x04, 0x00,
	/* #13.1-2, command header bytes for merged 'Write - value' command */
	0xCC, 0x00, 0x14, 0x04,
	/* #13.1, command: write_value, address: SEMC_INTR, value: 0x03, size: 4 */
	0x40, 0x0D, 0x40, 0x3C, 0x00, 0x00, 0x00, 0x03,
	/* #13.2, command: write_value, address: SEMC_IPCMD, value: 0xA55A000C, size: 4 */
	0x40, 0x0D, 0x40, 0x9C, 0xA5, 0x5A, 0x00, 0x0C,
	/* #14, command: nop */
	0xC0, 0x00, 0x04, 0x00,
	/* #15, command: nop */
	0xC0, 0x00, 0x04, 0x00,
	/* #16, command: nop */
	0xC0, 0x00, 0x04, 0x00,
	/* #17, command: nop */
	0xC0, 0x00, 0x04, 0x00,
	/* #18, command: nop */
	0xC0, 0x00, 0x04, 0x00,
	/* #19.1-3, command header bytes for merged 'Write - value' command */
	0xCC, 0x00, 0x1C, 0x04,
	/* #19.1, command: write_value, address: SEMC_INTR, value: 0x03, size: 4 */
	0x40, 0x0D, 0x40, 0x3C, 0x00, 0x00, 0x00, 0x03,
	/* #19.2, command: write_value, address: SEMC_IPTXDAT, value: 0x33, size: 4 */
	0x40, 0x0D, 0x40, 0xA0, 0x00, 0x00, 0x00, 0x33,
	/* #19.3, command: write_value, address: SEMC_IPCMD, value: 0xA55A000A, size: 4 */
	0x40, 0x0D, 0x40, 0x9C, 0xA5, 0x5A, 0x00, 0x0A,
	/* #20, command: nop */
	0xC0, 0x00, 0x04, 0x00,
	/* #21, command: nop */
	0xC0, 0x00, 0x04, 0x00,
	/* #22, command: nop */
	0xC0, 0x00, 0x04, 0x00,
	/* #23, command: nop */
	0xC0, 0x00, 0x04, 0x00,
	/* #24, command: nop */
	0xC0, 0x00, 0x04, 0x00,
	/* #25.1-2, command header bytes for merged 'Write - value' command */
	0xCC, 0x00, 0x14, 0x04,
	/* #25.1, command: write_value, address: SEMC_INTR, value: 0x03, size: 4 */
	0x40, 0x0D, 0x40, 0x3C, 0x00, 0x00, 0x00, 0x03,
	/* #25.2, command: write_value, address: SEMC_DCCR, value: 0x17, size: 4 */
	0x40, 0x0D, 0x41, 0x50, 0x00, 0x00, 0x00, 0x17,
	/* #26, command: nop */
	0xC0, 0x00, 0x04, 0x00,
	/* #27, command: write_value, address: SEMC_SDRAMCR3, value: 0x21210409, size: 4 */
	0xCC, 0x00, 0x0C, 0x04, 0x40, 0x0D, 0x40, 0x4C, 0x21, 0x21, 0x04, 0x09
	};
/* BE CAREFUL MODIFYING THIS SETTINGS - IT IS YAML SETTINGS FOR TOOLS */

#else
const uint8_t dcd_data[] = {0x00};
#endif /* XIP_BOOT_HEADER_DCD_ENABLE */
#endif /* XIP_BOOT_HEADER_ENABLE */
