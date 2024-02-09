#pragma once

#include "driver/gpio.h"

class Encoder
{
public:
    enum class Mode
    {
        REMOTE_LIGHT_OFF,
        REMOTE_LIGHT_ON
    };

private:
    gpio_num_t e_a_pin = GPIO_NUM_0;
    gpio_num_t e_b_pin = GPIO_NUM_0;
    gpio_num_t e_switch_pin = GPIO_NUM_0;
    Mode e_light_mode;

    static const char *TAG;

public:
    Encoder(gpio_num_t a_pin, gpio_num_t b_pin, gpio_num_t switch_pin, Mode light_mode = Mode::REMOTE_LIGHT_OFF);
    virtual ~Encoder();

public:
    void encoderInit();
    void encoderRotate();
    void encoderRemoteLightState(Mode p_new_mode);
};
