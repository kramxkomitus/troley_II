#include "app.h"
#include "tim.h"

void app()
{
    // HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
    // HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_2);
    // HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_3);
    // HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_4);
    while (1)
    {
        HAL_GPIO_TogglePin(LED_1_GPIO_Port, LED_1_Pin);
        HAL_Delay(100);
    }
}
