![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# LED_Driver5 Click

---

- **CIC Prefix**  : LEDDRIVER5
- **Author**      : Katarina Perendic
- **Verison**     : 1.0.0
- **Date**        : okt 2018.

---

### Software Support

We provide a library for the LED_Driver5 Click on our [LibStock](https://libstock.mikroe.com/projects/view/2618/led-driver-5-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

You can find all the functions for controlling LED lighting in the file Click_LED_Driver5_pwm

Key functions :

- ``` uint32_t leddriver5_pwmInit(uint16_t freq) ``` - PWM init function
- ``` void leddriver5_pwmSetDuty(uint16_t duty) ``` - PWM set duty function
- ``` void leddriver5_pwmStart() ``` - PWM start function
- ``` void leddriver5_pwmStop() ``` - PWM stop function

**Examples Description**

The application is composed of three sections :

- System Initialization - Sets PWM pin as OUTPUT 
- Application Initialization - Initialization driver init and pwm init
- Application Task - (code snippet) - Controls the brightness of the LED using PWM


```.c
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
```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/2618/led-driver-5-click) page.

Other mikroE Libraries used in the example:

- PWM

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
---
