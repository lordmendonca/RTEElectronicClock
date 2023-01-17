

/*
 * Filename: tsk_display.c
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 */

#include "project.h"
#include "global.h"
#include "rte.h"
#include "rte_types.h"
#include "tsk_display.h"



/* USER CODE START TSK_DISPLAY_INCLUDE */

/* USER CODE END TSK_DISPLAY_INCLUDE */

#include "swc_clock_display.h"



/* USER CODE START TSK_DISPLAY_USERDEFINITIONS */

/* USER CODE END TSK_DISPLAY_USERDEFINITIONS */

/*******************************************************************************
 * Runnable Tables from Activation Engine
 *******************************************************************************/

/* Cyclic Table */

const RTE_cyclicTable_t RTE_cyclicActivationTable_tsk_display[] = {
	{ CLOCK_DISPLAY__run, 250 },	//Runnable for clock display.
};
const uint16_t RTE_cyclicActivation_tsk_display_size = sizeof (RTE_cyclicActivationTable_tsk_display) / sizeof(RTE_cyclicTable_t); 


/*******************************************************************************
 * Task Body
 *******************************************************************************/


/*
* description: Task handling the TFT display
* events: 
* mode: Cyclic
* name: tsk_display
* shortname: display
* signalpoolsRO: sp_common
* signalpoolsRW: sp_common
* tickEvent: 0
* timertickperiod: 1
*/
TASK(tsk_display)
{
	/* ticktime of the task */
	static uint32_t ticktime = 0;

	/* USER CODE START TSK_DISPLAY_TASKBOBY_PRE */

	/* USER CODE END TSK_DISPLAY_TASKBODY_PRE */
    
    //Process all cyclic runnables which are due
    RTE_ProcessCyclicTable(RTE_cyclicActivationTable_tsk_display, RTE_cyclicActivation_tsk_display_size, ticktime);
	
	/* USER CODE START TSK_DISPLAY_TASKBODY_POST */

		/* USER CODE END TSK_DISPLAY_TASKBODY_POST */

	ticktime += 1;
	if (ticktime > 0xFFFFFF00) ticktime = 0;
    
}


/*******************************************************************************
 * Interrupt Service Routines
 *******************************************************************************/

/* USER CODE START TSK_DISPLAY_ISR */

/* USER CODE END TSK_DISPLAY_ISR */

