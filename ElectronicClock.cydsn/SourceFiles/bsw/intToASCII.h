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

// Project libraries
#include "project.h"
#include "global.h"

/**
 *  \brief Conversion from integer value to its respective ASCII value.
 *  
 *  \param [in] integerNum Integer number to be converted.
 *  \param [in] asciiEquiPtr Pointer to the array that stores the ASCII equivalent of the digits of the number.
 *  \param [in] noDigits Number of digits in in the integer number. 
 *  \return returns success or failure through the enumerator defined for proper error handling.
 */
RC_t intToASCII(uint32_t integerNum, uint8_t* asciiEquiPtr, uint8_t noDigits);

/* [] END OF FILE */
