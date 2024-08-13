// Copyright 2024 yamage (@yamage)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define MASTER_RIGHT

#define SPLIT_HAND_PIN GP10

// https://docs.qmk.fm/drivers/serial#setup-2
#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN GP12     // USART TX pin
#define SERIAL_USART_RX_PIN GP13     // USART RX pin

/* SPI & PMW3360 settings. */
#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP2
#define SPI_MISO_PIN GP3
#define SPI_MOSI_PIN GP4
#define POINTING_DEVICE_CS_PIN GP5