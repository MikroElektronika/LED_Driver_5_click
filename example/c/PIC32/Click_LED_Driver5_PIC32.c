/*
Example for LED_Driver5 Click

    Date          : okt 2018.
    Author        : Katarina Perendic

Test configuration PIC32 :
    
    MCU                : P32MX795F512L
    Dev. Board         : EasyPIC Fusion v7
    PIC32 Compiler ver : v4.0.0.0

---

Description :

The application is composed of three sections :

- System Initialization - Sets PWM pin as OUTPUT 
- Application Initialization - Initialization driver init and pwm init
- Application Task - (code snippet) - Controls the brightness of the LED using PWM

*/

#include "Click_LED_Driver5_types.h"
#include "Click_LED_Driver5_config.h"
#include "Click_LED_Driver5_pwm.h"

static uint16_t _dutyCycle = 1000;
static uint16_t _frequency = 5000;

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_PWM_PIN, _GPIO_OUTPUT );
    Delay_ms( 100 );
}

void applicationInit()
{
// CLICK INIT
    leddriver5_gpioDriverInit( (T_LEDDRIVER5_P)&_MIKROBUS1_GPIO );
        
// PWM INIT
    leddriver5_pwmInit(_frequency);
    leddriver5_pwmSetDuty(_dutyCycle);
    leddriver5_pwmStart();
    Delay_100ms();
}

void applicationTask()
{
 
    _dutyCycle += 250;
    leddriver5_pwmSetDuty(_dutyCycle);
    if (_dutyCycle > 10000 )
    {
        _dutyCycle = 0;
        leddriver5_pwmSetDuty(_dutyCycle);
        Delay_ms(2000);
    }
    Delay_ms( 100 );
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
            applicationTask();
    }
}