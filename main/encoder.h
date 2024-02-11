#pragma once

#include "driver/gpio.h"
#include "driver/pulse_cnt.h"

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
    static bool example_pcnt_on_reach(pcnt_unit_handle_t unit, const pcnt_watch_event_data_t *edata, void *user_ctx);
    void encoderConfig();
    void encoderRotate();
    void encoderRemoteLightState(Mode p_new_mode);
};
