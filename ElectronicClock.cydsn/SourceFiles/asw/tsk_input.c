

/*
 * Filename: tsk_input.c
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 */

#include "project.h"
#include "global.h"
#include "rte.h"
#include "rte_types.h"
#include "tsk_input.h"



/* USER CODE START TSK_INPUT_INCLUDE */

/* USER CODE END TSK_INPUT_INCLUDE */

#include "swc_clock_input.h"



/* USER CODE START TSK_INPUT_USERDEFINITIONS */

/* USER CODE END TSK_INPUT_USERDEFINITIONS */

/*******************************************************************************
 * Runnable Tables from Activation Engine
 *******************************************************************************/

/* Cyclic Table */

const RTE_cyclicTable_t RTE_cyclicActivationTable_tsk_input[] = {
	{ CLOCK_INPUT__run, 50 },	//Runnable for clock input.
};
const uint16_t RTE_cyclicActivation_tsk_input_size = sizeof (RTE_cyclicActivationTable_tsk_input) / sizeof(RTE_cyclicTable_t); 


/*******************************************************************************
 * Task Body
 *******************************************************************************/


/*
* description: Task that handles the input signals.
* events: 
* mode: Cyclic
* name: tsk_input
* shortname: input
* signalpoolsRO: sp_common
* signalpoolsRW: sp_common
* tickEvent: 0
* timertickperiod: 1
*/
TASK(tsk_input)
{
	/* ticktime of the task */
	static uint32_t ticktime = 0;

	/* USER CODE START TSK_INPUT_TASKBOBY_PRE */

	/* USER CODE END TSK_INPUT_TASKBODY_PRE */
    
    //Process all cyclic runnables which are due
    RTE_ProcessCyclicTable(RTE_cyclicActivationTable_tsk_input, RTE_cyclicActivation_tsk_input_size, ticktime);
	
	/* USER CODE START TSK_INPUT_TASKBODY_POST */

		/* USER CODE END TSK_INPUT_TASKBODY_POST */

	ticktime += 1;
	if (ticktime > 0xFFFFFF00) ticktime = 0;
    
}


/*******************************************************************************
 * Interrupt Service Routines
 *******************************************************************************/

/* USER CODE START TSK_INPUT_ISR */

/* USER CODE END TSK_INPUT_ISR */

