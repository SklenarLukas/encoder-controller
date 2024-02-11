#include "leds.h"
#include "encoder.h"

static const char *TAG = "example";

static const gpio_num_t ENCODER_A = GPIO_NUM_33;
static const gpio_num_t ENCODER_B = GPIO_NUM_25;
static const gpio_num_t ENCODER_SW = GPIO_NUM_32;

extern "C"
{
    void app_main(void)
    {

        ledsInit();
        Encoder *rotaryEncoder = new Encoder(ENCODER_A, ENCODER_B, ENCODER_SW, Encoder::Mode::REMOTE_LIGHT_OFF);

        while (true)
        {
            rotaryEncoder->encoderConfig();
        }
    }
}