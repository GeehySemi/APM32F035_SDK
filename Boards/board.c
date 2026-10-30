/*!
 * @file        board.c
 *
 * @brief       This file provides firmware functions to manage Leds and push-buttons
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

/* Includes */
#include "board.h"

#ifdef BOARD_APM32F035_MINI
    #include "Board_APM32F035_MINI/src/board_apm32f035_mini.c"
#endif

/** @addtogroup Boards
  @{
*/

/** @addtogroup Board_APM32F035_MINI
  @{
*/

/**@} end of group Board_APM32F035_MINI */
/**@} end of group Boards */
