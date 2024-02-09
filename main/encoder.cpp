#include "encoder.h"

#include <initializer_list>

const char *Encoder::TAG = "ENCODER";

Encoder::Encoder(gpio_num_t a_pin, gpio_num_t b_pin, gpio_num_t switch_pin, Mode light_mode) : e_a_pin(a_pin), e_b_pin(b_pin), e_switch_pin(switch_pin), e_light_mode(light_mode)
{
    /*     ESP_LOGW(TAG, "Creation of class, pin: %d", p_wait_pin);
     */
    for (gpio_num_t pin : {e_a_pin, e_b_pin, e_switch_pin})
    {
        gpio_reset_pin(pin);
        gpio_set_direction(pin, GPIO_MODE_INPUT_OUTPUT);
    }
}

Encoder::~Encoder() {}

void Encoder::encoderRotate()
{
}
