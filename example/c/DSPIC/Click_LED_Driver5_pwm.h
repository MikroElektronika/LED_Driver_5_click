#include "Click_LED_Driver5_types.h"


uint32_t leddriver5_pwmInit(uint16_t freq)
{
    uint32_t pwmPeriod;
	
	pwmPeriod = PWM_Init( freq, 1, 1, 3 );
	
	return pwmPeriod;
}

void leddriver5_pwmSetDuty(uint16_t duty)
{
    PWM_Set_Duty( duty, 1 );
}

void leddriver5_pwmStart()
{
    PWM_Start( 1 );
}

void leddriver5_pwmStop()
{
    PWM_Stop( 1 );
}