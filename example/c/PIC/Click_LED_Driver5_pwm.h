#include "Click_LED_Driver5_types.h"


uint32_t leddriver5_pwmInit(uint16_t freq)
{
	PWM2_Init( 5000 );
	return 0;
}

void leddriver5_pwmSetDuty(uint16_t duty)
{
    PWM2_Set_Duty( duty );
}

void leddriver5_pwmStart()
{
    PWM2_Start();
}

void leddriver5_pwmStop()
{
    PWM2_Stop();
}