// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2019 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#pragma once

// Micropython setup

#define MICROPY_HW_BOARD_NAME       "ESP32-P4-Function-EV"
#define MICROPY_HW_MCU_NAME         "ESP32P4"


#define CIRCUITPY_BOOT_BUTTON       (&pin_GPIO0)

#define DEFAULT_UART_BUS_RX         (&pin_GPIO44)
#define DEFAULT_UART_BUS_TX         (&pin_GPIO43)

#define AUTORESET_DELAY_MS          500
#define OPT_MCU_ESP32P4             907 // guess
#define SOC_LCD_I80_SUPPORTED       0
#define TUP_DCD_ENDPOINT_MAX        6