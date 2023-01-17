

/*
 * Filename: swc_clock_input.c
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 */

#include "project.h"
#include "global.h"
#include "rte.h"
#include "rte_types.h"
#include "swc_clock_input.h"



/* USER CODE START SWC_CLOCK_INPUT_INCLUDE */
#include "sc_event_type.h"
/* USER CODE END SWC_CLOCK_INPUT_INCLUDE */


#include "sp_common.h"

/* USER CODE START SWC_CLOCK_INPUT_USERDEFINITIONS */

/* USER CODE END SWC_CLOCK_INPUT_USERDEFINITIONS */



/*
* component: swc_CLOCK_input
* cycletime: 50
* description: Runnable for clock input.
* events: 
* name: CLOCK_INPUT__run
* shortname: 
* signalIN: 
* signalOUT: so_EVENT
* task: tsk_input
*/
void CLOCK_INPUT__run(RTE_event ev){
	
	/* USER CODE START CLOCK_INPUT__run */
    /**
	 * @brief counter to check if button is pressed longer than 1 second.
	 */
	static uint32_t timer_1s = 0;
    
    if(TRUE == button_2_Read())
    {
        timer_1s =  timer_1s + 50;
    }
    else
    {
        timer_1s =  0;
    }
    
	// If right key was pressed for longer than 1 second then set the event associated with long key press. */
    if(timer_1s == 1000)
    {
        timer_1s = 0;
        SC_EVENT_data_t event = {EV_KEYRIGHTLONGPRESS};
        RTE_SC_EVENT_set(&SO_EVENT_signal, event);
    }
    
    /* USER CODE END CLOCK_INPUT__run */
}

/* USER CODE START SWC_CLOCK_INPUT_FUNCTIONS */

/* USER CODE END SWC_CLOCK_INPUT_FUNCTIONS */

