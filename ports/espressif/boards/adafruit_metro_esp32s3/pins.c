#include "shared-bindings/board/__init__.h"

STATIC const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS

    { MP_OBJ_NEW_QSTR(MP_QSTR_A0), MP_ROM_PTR(&pin_GPIO14) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IO14), MP_ROM_PTR(&pin_GPIO14) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_A1), MP_ROM_PTR(&pin_GPIO15) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IO15), MP_ROM_PTR(&pin_GPIO15) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_A2), MP_ROM_PTR(&pin_GPIO16) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IO16), MP_ROM_PTR(&pin_GPIO16) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_A3), MP_ROM_PTR(&pin_GPIO17) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IO17), MP_ROM_PTR(&pin_GPIO17) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_A4), MP_ROM_PTR(&pin_GPIO18) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IO18), MP_ROM_PTR(&pin_GPIO18) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_A5), MP_ROM_PTR(&pin_GPIO1) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IO1), MP_ROM_PTR(&pin_GPIO1) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_TX), MP_ROM_PTR(&pin_GPIO40) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IO40), MP_ROM_PTR(&pin_GPIO40) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_RX), MP_ROM_PTR(&pin_GPIO41) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IO41), MP_ROM_PTR(&pin_GPIO41) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_IO2), MP_ROM_PTR(&pin_GPIO2) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IO3), MP_ROM_PTR(&pin_GPIO3) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IO4), MP_ROM_PTR(&pin_GPIO4) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IO5), MP_ROM_PTR(&pin_GPIO5) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IO6), MP_ROM_PTR(&pin_GPIO6) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IO7), MP_ROM_PTR(&pin_GPIO7) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IO8), MP_ROM_PTR(&pin_GPIO8) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IO9), MP_ROM_PTR(&pin_GPIO9) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IO10), MP_ROM_PTR(&pin_GPIO10) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IO11), MP_ROM_PTR(&pin_GPIO11) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IO12), MP_ROM_PTR(&pin_GPIO12) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IO13), MP_ROM_PTR(&pin_GPIO13) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_SDA),MP_ROM_PTR(&pin_GPIO47) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IO47),MP_ROM_PTR(&pin_GPIO47) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_SCL),MP_ROM_PTR(&pin_GPIO48) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IO48),MP_ROM_PTR(&pin_GPIO48) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_SCK), MP_ROM_PTR(&pin_GPIO36) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IO36), MP_ROM_PTR(&pin_GPIO36) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_MOSI),MP_ROM_PTR(&pin_GPIO35) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IO35),MP_ROM_PTR(&pin_GPIO35) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_MISO),MP_ROM_PTR(&pin_GPIO37) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IO37),MP_ROM_PTR(&pin_GPIO37) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_LED), MP_ROM_PTR(&pin_GPIO13) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_NEOPIXEL), MP_ROM_PTR(&pin_GPIO45) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_IO45), MP_ROM_PTR(&pin_GPIO45) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_DEBUG_RX), MP_ROM_PTR(&pin_GPIO44) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_DEBUG_TX), MP_ROM_PTR(&pin_GPIO43) },

    { MP_ROM_QSTR(MP_QSTR_I2C), MP_ROM_PTR(&board_i2c_obj) },
    { MP_ROM_QSTR(MP_QSTR_STEMMA_I2C), MP_ROM_PTR(&board_i2c_obj) },
    { MP_ROM_QSTR(MP_QSTR_SPI), MP_ROM_PTR(&board_spi_obj) },
    { MP_ROM_QSTR(MP_QSTR_UART), MP_ROM_PTR(&board_uart_obj) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
