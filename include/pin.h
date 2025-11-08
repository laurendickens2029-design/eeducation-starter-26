#ifndef __PIN_H__
#define __PIN_H__

#include <Arduino.h>

enum pin_t : uint8_t {
    GPIO_15 = GPIO_NUM_15,
    GPIO_16 = GPIO_NUM_16,
    GPIO_17 = GPIO_NUM_17,
    GPIO_18 = GPIO_NUM_18,
    GPIO_23 = GPIO_NUM_23,
    GPIO_25 = GPIO_NUM_25,

    // SPI
    SPI_MISO = GPIO_NUM_12,
    SPI_MOSI = GPIO_NUM_13,
    SPI_CLK = GPIO_NUM_14,

    // i2c for IMU
    SCL = GPIO_NUM_21,
    SDA = GPIO_NUM_22,
    IMU_INT = GPIO_NUM_27,

    // Buttons
    BTN_0 = GPIO_NUM_32,
    BTN_1 = GPIO_NUM_33,

    // Neopixel Lights
    NEO_DATA = GPIO_NUM_26,

    // Rotary Encoder
    RE_BTN = GPIO_NUM_34,
    RE_CW = GPIO_NUM_35,
    RE_CCW = GPIO_NUM_19,
};


#endif // __PIN_H__