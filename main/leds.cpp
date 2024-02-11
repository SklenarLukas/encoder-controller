#include "leds.h"

#include "driver/gpio.h"

static const gpio_num_t LED1 = GPIO_NUM_13;
static const gpio_num_t LED2 = GPIO_NUM_12;
static const gpio_num_t LED3 = GPIO_NUM_14;
static const gpio_num_t LED4 = GPIO_NUM_27;
static const gpio_num_t LED5 = GPIO_NUM_26;
static const gpio_num_t LED6 = GPIO_NUM_4;
static const gpio_num_t LED7 = GPIO_NUM_15;
static const gpio_num_t LED8 = GPIO_NUM_16;
static const gpio_num_t LED9 = GPIO_NUM_22;
static const gpio_num_t LED10 = GPIO_NUM_23;
static const gpio_num_t LED11 = GPIO_NUM_21;
static const gpio_num_t LED12 = GPIO_NUM_19;
static const gpio_num_t LED13 = GPIO_NUM_18;
static const gpio_num_t LED14 = GPIO_NUM_5;
static const gpio_num_t LED15 = GPIO_NUM_17;

gpio_num_t LEDS[15] = {LED1, LED2, LED3, LED4, LED5, LED6, LED7, LED8, LED9, LED10, LED11, LED12, LED13, LED14, LED15};

void ledsInit()
{
    for (int i = 0; i < 15; ++i)
    {
        gpio_reset_pin(LEDS[i]);
        gpio_set_direction(LEDS[i], GPIO_MODE_OUTPUT);
        // gpio_set_level(LEDS[i], 1);
    }
}