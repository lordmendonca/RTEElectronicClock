/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

//standard libraries
#include <stdlib.h>

// Project libraries
#include "project.h"
#include "global.h"

// Custom libraries

// Project specific header inclusions.
#include "intToASCII.h"

RC_t intToASCII(uint32_t integerNum, uint8_t* asciiEquiPtr, uint8_t noDigits)
{
    for (uint8_t i = 1; i <= noDigits; i++)
    {
        *(asciiEquiPtr+noDigits-i) = 0x30+(integerNum%10);

        integerNum /= 10;
    }

    *(asciiEquiPtr+noDigits) = 0;
    
    return RC_SUCCESS;
}

/* [] END OF FILE */
