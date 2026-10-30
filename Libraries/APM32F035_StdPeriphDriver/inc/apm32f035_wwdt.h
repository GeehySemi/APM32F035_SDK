/*!
 * @file        apm32f035_wwdt.h
 *
 * @brief       This file contains all the functions prototypes for the WWDG firmware library
 *
 * @version     V1.0.0
 *
 * @date        2022-09-30
 *
 * @attention
 *
 *  Copyright (C) 2022-2024 Geehy Semiconductor
 *
 *  You may not use this file except in compliance with the
 *  GEEHY COPYRIGHT NOTICE (GEEHY SOFTWARE PACKAGE LICENSE).
 *
 *  The program is only for reference, which is distributed in the hope
 *  that it will be useful and instructional for customers to develop
 *  their software. Unless required by applicable law or agreed to in
 *  writing, the program is distributed on an "AS IS" BASIS, WITHOUT
 *  ANY WARRANTY OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the GEEHY SOFTWARE PACKAGE LICENSE for the governing permissions
 *  and limitations under the License.
 */

/* Define to prevent recursive inclusion */
#ifndef __APM32F035_WWDT_H
#define __APM32F035_WWDT_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes */
#include "apm32f035.h"

/** @addtogroup APM32F035_StdPeriphDriver
  @{
*/

/** @addtogroup WWDT_Driver
  @{
*/

/** @defgroup WWDT_Macros Macros
  @{
*/

/**@} end of group WWDT_Macros */

/** @defgroup WWDT_Enumerations Enumerations
  @{
*/

/**
 * @brief   WWDT Timebase(Prescaler) define
 */
typedef enum
{
    WWDT_DIV_1 = ((uint8_t)0x00),
    WWDT_DIV_2 = ((uint8_t)0x01),
    WWDT_DIV_4 = ((uint8_t)0x02),
    WWDT_DIV_8 = ((uint8_t)0x03)
} WWDT_DIV_T;

/**@} end of group WWDT_Enumerations*/

/** @defgroup WWDT_Structures Structures
  @{
*/

/**@} end of group WWDT_Structures */

/** @defgroup WWDT_Variables Variables
  @{
*/

/**@} end of group WWDT_Variables */

/** @defgroup  WWDT_Functions Functions
  @{
*/

/* WWDT reset */
void WWDT_Reset(void);

/* Set WWDT Timebase */
void WWDT_SetTimebase(WWDT_DIV_T div);

/* Set Window Data */
void WWDT_ConfigWindowValue(uint16_t windowValue);

/* Set Couter */
void WWDT_ConfigCounter(uint8_t couter);

/* Enable WWDT and Early Wakeup interrupt */
void WWDT_EnableEWI(void);
void WWDT_Enable(uint8_t count);

/* Read Flag and Clear Flag */
uint8_t WWDT_ReadStatusFlag(void);
void WWDT_ClearStatusFlag(void);

/**@} end of group WWDT_Functions */
/**@} end of group WWDT_Driver */
/**@} end of group APM32F035_StdPeriphDriver */

#ifdef __cplusplus
}
#endif

#endif /* __APM32F0XX_WWDT_H */
