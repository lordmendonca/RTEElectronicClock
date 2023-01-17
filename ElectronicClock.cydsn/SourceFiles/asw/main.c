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
#include "project.h"
#include "global.h"

#include "tft.h"

#include "common.h"
#include "sp_common.h"
#include "sc_event.h"
#include "swc_clock_control.h"

#include "tsk_control.h"
#include "tsk_background.h"

/**
 * @brief The callback function associated with the alarm 'alrm_cyclic_1ms'.
 */
void alrm_callback();

//ISR which will increment the systick counter every ms
ISR(systick_handler)
{
    CounterTick(cnt_systick);
}

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */
   
    //Set systick period to 1 ms. Enable the INT and start it.
	EE_systick_set_period(MILLISECONDS_TO_TICKS(1, BCLK__BUS_CLK__HZ));
	EE_systick_enable_int();
   
    // Start Operating System
    for(;;)	    
    	StartOS(OSDEFAULTAPPMODE);
}

void unhandledException()
{
    //Ooops, something terrible happened....check the call stack to see how we got here...
    __asm("bkpt");
}

/********************************************************************************
 * Task Definitions
 ********************************************************************************/

TASK(tsk_init)
{
    //Init MCAL Drivers
    UART_LOG_Start();
    TFT_init();
    
    //Reconfigure ISRs with OS parameters.
    //This line MUST be called after the hardware driver initialisation!
    EE_system_init();
	
    //Start SysTick
	//Must be done here, because otherwise the isr vector is not overwritten yet
    EE_systick_start();  
	
    //Start the alarm with 1ms cycle time
    SetRelAlarm(alrm_cyclic_1ms,1,1);
    
    //Tasks that need to be activated
    ActivateTask(tsk_control);
    ActivateTask(tsk_background);
    
    //State machine initialization
    CLOCK_CONTROL_init_run(0);
    
    TerminateTask();
    
}

void alrm_callback()
{   
    /**
	 * @brief counter to trigger event associated with 1 minute.
	 */
	static uint32_t alrm_1min = 0;
	/**
	 * @brief counter to trigger event associated with 250 ms.
	 */
    static uint32_t alrm_250ms = 0;
    
	//Event associated with 1 minute is triggered only when increment1Min_st is true.
    if(TRUE == increment1Min_st)
    {
        if(60000 == alrm_1min)
        {
            alrm_1min = 0;
            SC_EVENT_data_t ev = {EV_1MIN};
            RTE_SC_EVENT_set(&SO_EVENT_signal, ev);
        }
        else
        {
            alrm_1min++;   
        }
    }
    
	//Event associated with 250 ms is triggered only when autoIncrement_st is true.
    if(TRUE == autoIncrement_st)
    {
        if(250 == alrm_250ms)
        {
            alrm_250ms = 0;
            SC_EVENT_data_t ev = {EV_250MS};
            RTE_SC_EVENT_set(&SO_EVENT_signal, ev); 
        }
        else
        {
            alrm_250ms++;   
        }
    }
    
	// The below cyclic tasks are activated every 1 ms such that the runnables associated
	// with these tasks are called based on the corresponding RTE cyclic table.
    ActivateTask(tsk_input);
    ActivateTask(tsk_display);
    
}

/********************************************************************************
 * ISR Definitions
 ********************************************************************************/


ISR2(isr_ButtonLeft)
{
    if(TRUE == button_1_Read())
    {
        // Set event associated with the left button pressed which then triggers the ev_onUpdate
		SC_EVENT_data_t ev = {EV_KEYLEFT};
        RTE_SC_EVENT_set(&SO_EVENT_signal, ev);
    }
}

ISR2(isr_ButtonRight)
{
    if(TRUE == button_2_Read())
    {
        // Set event associated with the right button pressed which then triggers the ev_onUpdate
		SC_EVENT_data_t ev = {EV_KEYRIGHT};
        RTE_SC_EVENT_set(&SO_EVENT_signal, ev);
    }
}

/* [] END OF FILE */
