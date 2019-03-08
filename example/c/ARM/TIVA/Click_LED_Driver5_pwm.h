#include "Click_LED_Driver5_types.h"


uint32_t leddriver5_pwmInit(uint16_t freq)
{
    uint32_t pwmPeriod;
	
	pwmPeriod = PWM_T0CCP0_Init( freq, &_GPIO_MODULE_T0CCP0_D0_AHB );
	
	return pwmPeriod;
}

void leddriver5_pwmSetDuty(uint16_t duty)
{
    PWM_T0CCP0_Set_Duty( duty, _PWM_INVERTED_DISABLE );
}

void leddriver5_pwmStart()
{
    PWM_T0CCP0_Start();
}

void leddriver5_pwmStop()
{
    PWM_T0CCP0_Stop();
}