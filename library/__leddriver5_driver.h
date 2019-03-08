/*
    __leddriver5_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __leddriver5_driver.h
@brief    LED_Driver5 Driver
@mainpage LED_Driver5 Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   LEDDRIVER5
@brief      LED_Driver5 Click Driver
@{

| Global Library Prefix | **LEDDRIVER5** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **okt 2018.**      |
| Developer             | **Katarina Perendic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _LEDDRIVER5_H_
#define _LEDDRIVER5_H_

/** 
 * @macro T_LEDDRIVER5_P
 * @brief Driver Abstract type 
 */
#define T_LEDDRIVER5_P    const uint8_t*

/** @defgroup LEDDRIVER5_COMPILE Compilation Config */              /** @{ */

//  #define   __LEDDRIVER5_DRV_SPI__                            /**<     @macro __LEDDRIVER5_DRV_SPI__  @brief SPI driver selector */
//  #define   __LEDDRIVER5_DRV_I2C__                            /**<     @macro __LEDDRIVER5_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __LEDDRIVER5_DRV_UART__                           /**<     @macro __LEDDRIVER5_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup LEDDRIVER5_VAR Variables */                           /** @{ */



                                                                       /** @} */
/** @defgroup LEDDRIVER5_TYPES Types */                             /** @{ */



                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup LEDDRIVER5_INIT Driver Initialization */              /** @{ */

#ifdef   __LEDDRIVER5_DRV_SPI__
void leddriver5_spiDriverInit(T_LEDDRIVER5_P gpioObj, T_LEDDRIVER5_P spiObj);
#endif
#ifdef   __LEDDRIVER5_DRV_I2C__
void leddriver5_i2cDriverInit(T_LEDDRIVER5_P gpioObj, T_LEDDRIVER5_P i2cObj, uint8_t slave);
#endif
#ifdef   __LEDDRIVER5_DRV_UART__
void leddriver5_uartDriverInit(T_LEDDRIVER5_P gpioObj, T_LEDDRIVER5_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void leddriver5_gpioDriverInit(T_LEDDRIVER5_P gpioObj);
                                                                       /** @} */
/** @defgroup LEDDRIVER5_FUNC Driver Functions */                   /** @{ */







                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_LED_Driver5_STM.c
    @example Click_LED_Driver5_TIVA.c
    @example Click_LED_Driver5_CEC.c
    @example Click_LED_Driver5_KINETIS.c
    @example Click_LED_Driver5_MSP.c
    @example Click_LED_Driver5_PIC.c
    @example Click_LED_Driver5_PIC32.c
    @example Click_LED_Driver5_DSPIC.c
    @example Click_LED_Driver5_AVR.c
    @example Click_LED_Driver5_FT90x.c
    @example Click_LED_Driver5_STM.mbas
    @example Click_LED_Driver5_TIVA.mbas
    @example Click_LED_Driver5_CEC.mbas
    @example Click_LED_Driver5_KINETIS.mbas
    @example Click_LED_Driver5_MSP.mbas
    @example Click_LED_Driver5_PIC.mbas
    @example Click_LED_Driver5_PIC32.mbas
    @example Click_LED_Driver5_DSPIC.mbas
    @example Click_LED_Driver5_AVR.mbas
    @example Click_LED_Driver5_FT90x.mbas
    @example Click_LED_Driver5_STM.mpas
    @example Click_LED_Driver5_TIVA.mpas
    @example Click_LED_Driver5_CEC.mpas
    @example Click_LED_Driver5_KINETIS.mpas
    @example Click_LED_Driver5_MSP.mpas
    @example Click_LED_Driver5_PIC.mpas
    @example Click_LED_Driver5_PIC32.mpas
    @example Click_LED_Driver5_DSPIC.mpas
    @example Click_LED_Driver5_AVR.mpas
    @example Click_LED_Driver5_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __leddriver5_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */

