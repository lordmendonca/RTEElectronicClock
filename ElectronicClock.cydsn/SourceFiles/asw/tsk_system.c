

/*
 * Filename: tsk_system.c
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 */

#include "project.h"
#include "global.h"
#include "rte.h"
#include "rte_types.h"
#include "tsk_system.h"



/* USER CODE START TSK_SYSTEM_INCLUDE */

/* USER CODE END TSK_SYSTEM_INCLUDE */




/* USER CODE START TSK_SYSTEM_USERDEFINITIONS */

/* USER CODE END TSK_SYSTEM_USERDEFINITIONS */

/*******************************************************************************
 * Runnable Tables from Activation Engine
 *******************************************************************************/


/*******************************************************************************
 * Task Body
 *******************************************************************************/


/*
* description: Task incrementing the age of all the signals.
* events: 
* mode: System
* name: tsk_system
* shortname: system
* signalpoolsRO: sp_common
* signalpoolsRW: sp_common
* tickEvent: 0
* timertickperiod: 1
*/
TASK(tsk_system)
{
	//Increment the age of all signals
	//Ticktime of the task: 1 ms
    
	/* USER CODE START TSK_SYSTEM_TASKBOBY_PRE */

	/* USER CODE END TSK_SYSTEM_TASKBODY_PRE */
	
    // tick for signalpool sp_common
    RTE_timertick_sp_common_tick(1);
    
    /* USER CODE START TSK_SYSTEM_TASKBODY_POST */

    /* USER CODE END TSK_SYSTEM_TASKBODY_POST */
}

/*******************************************************************************
 * Interrupt Service Routines
 *******************************************************************************/

/* USER CODE START TSK_SYSTEM_ISR */

/* USER CODE END TSK_SYSTEM_ISR */

