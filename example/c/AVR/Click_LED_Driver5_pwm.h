#include "Click_LED_Driver5_types.h"


uint32_t leddriver5_pwmInit(uint16_t freq)
{
	return 0;
}

void leddriver5_pwmSetDuty(uint16_t duty)
{
    PWM16bit_Init( _PWM16_PHASE_CORRECT_MODE_8BIT, 
	               _PWM16_PRESCALER_16bit_8, 
				   _PWM16_NON_INVERTED, duty, 1 );
}

void leddriver5_pwmStart()
{
    PWM16bit_Start( 1 );
}

void leddriver5_pwmStop()
{
    PWM16bit_Stop( 1 );
}