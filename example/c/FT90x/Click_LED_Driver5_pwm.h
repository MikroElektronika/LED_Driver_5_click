#include "Click_LED_Driver5_types.h"


uint32_t leddriver5_pwmInit(uint16_t freq)
{
    uint32_t pwmPeriod;
	
	pwmPeriod = PWM_Init(freq);
	
	return pwmPeriod;
}

void leddriver5_pwmSetDuty(uint16_t duty)
{
    PWM_ConfigChannel(duty,  _PWM_INIT_STATE_1, _PWM_CHANNEL_0);
}

void leddriver5_pwmStart()
{
    PWM_EnableOutput();
}

void leddriver5_pwmStop()
{
    PWM_DisableOutput();
}