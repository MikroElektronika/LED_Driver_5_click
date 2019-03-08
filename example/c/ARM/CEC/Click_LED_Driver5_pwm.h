#include "Click_LED_Driver5_types.h"


uint32_t leddriver5_pwmInit(uint16_t freq)
{
    uint32_t pwmPeriod;
	
	pwmPeriod = PWM0_Init( freq );
	
	return pwmPeriod;
}

void leddriver5_pwmSetDuty(uint16_t duty)
{
    PWM0_Set_Duty( duty, _PWM_NON_INVERTED );
}

void leddriver5_pwmStart()
{
    PWM0_Start();
}

void leddriver5_pwmStop()
{
    PWM0_Stop();
}