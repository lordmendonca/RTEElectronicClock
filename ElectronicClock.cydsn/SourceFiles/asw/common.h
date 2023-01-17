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
#ifndef _H_DEFINE_COMMON
#define _H_DEFINE_COMMON
    
#include "global.h"

/**
 * Global definition for error test case.
 * 1 if error test case to be implemented.
 * 0 if error test case to be not implemented.
 */
#define TESTERROR 1
/**
 * @brief increment1Min_st	:	Flag variable that is set only when the machine is in ISDISPLAY Container state and needs a 1 minute auto increment.
 */
extern boolean_t increment1Min_st;
/**
 * @brief autoIncrement_st	:	Flag variable that is set only when the machine is in ISAUTOINCREMENT Widget state and needs an increment every 250 ms.
 */
extern boolean_t autoIncrement_st;
    
#endif /* COMMON_H */   
/* [] */
