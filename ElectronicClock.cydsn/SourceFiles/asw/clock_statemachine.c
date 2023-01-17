
/*
 * Filename: clock_statemachine.c
 */

/*****************************************************************************/
/* Include files                                                             */
/*****************************************************************************/

#include "clock_statemachine.h"

/*****************************************************************************/
/* Global pre-processor symbols/macros and type declarations                 */
/*****************************************************************************/

#define INVALIDINDEX -1

/*****************************************************************************/
/* Function implementation - global ('extern') and local ('static')          */
/*****************************************************************************/


/** return the index of the provided state in the given table 
 **/
sint16_t STATE__getIndexCurrentState(   STATE_stateOuterTransitionTable_t const  transitionTable,
                                        uint16_t transitionTableSize,
                                        STATE_State_t state)
{
    
    sint16_t result = INVALIDINDEX; //error
    
    for (uint16_t i = 0; i < transitionTableSize; i++)
    {
        if (transitionTable[i].fromState == state)
        {
            return i;
        }
    }
    
    return INVALIDINDEX;
}

/**
 * This function will initialise the state machine and process any state actions of the initial state
 * The state machine is implemented as a generic object, Several instances and configurations are supported
 * \param STATE_stateActionTable_t const * const actionTable            : IN - Pointer to the action table
 * \param uint16_t actionTableSize                                      : IN - action table size 
 * \param STATE_state_t state                                           : IN/OUT - Leaving and Resulting state
 * \return RC_SUCCESS or error
 */
RC_t STATE_initState(   STATE_stateActionTable_t const actionTable, 
                        uint16_t actionTableSize,
                        STATE_State_t* state)
{
    
    STATE_ActionPtr_t acEntry = 0;
    
    *state = STATE_CLOCK_C_ISDISPLAYING;
    
    //Check if entry actios are present in the init state
    if (0 != actionTable)
    {
        for (uint16_t j = 0; j < actionTableSize; j++)
        {

            if (STATE_CLOCK_C_ISDISPLAYING == actionTable[j].state)
            {
                acEntry = actionTable[j].actionEntry;
                if (0 != acEntry) acEntry();
            }
        }
    }
    
}

/**
 * This function will process the event with the defined state machine
 * The state machine is implemented as a generic object, Several instances and configurations are supported
 * \param STATE_stateTransitionTable_t const * const transitionTable    : IN - Pointer to the transition table
 * \param uint16_t transitionTableSize                                  : IN - transition table size
 * \param STATE_stateActionTable_t const * const actionTable            : IN - Pointer to the action table
 * \param uint16_t actionTableSize                                      : IN - action table size 
 * \param STATE_event_t ev                                              : IN - Event to be processed
 * \param STATE_state_t state                                           : IN/OUT - Leaving and Resulting state
 * \return RC_SUCCESS or error
 */
RC_t STATE_processEvent(
						STATE_stateOuterTransitionTable_t	const		transitionTable,
                        uint16_t										transitionTableSize,
                        STATE_stateActionTable_t			const		actionTable, 
                        uint16_t										actionTableSize,
                        STATE_Event_t									ev,
                        STATE_State_t*									state
						)
{
    STATE_GuardPtr_t    guard = 0;
    STATE_ActionPtr_t   acTransition = 0;
    STATE_ActionPtr_t   acEntry = 0;
    STATE_ActionPtr_t   acExit = 0;
    
    
    //Read the state from the watchdog object;
    STATE_State_t currentState = *state;
    STATE_State_t toState = currentState; //Just in case
    
    //Calculate the table index of the outer table

    sint16_t index = STATE__getIndexCurrentState(transitionTable, transitionTableSize, currentState);
    
    //This should never happen
    if (INVALIDINDEX == index)
    {
        return RC_ERROR_BAD_PARAM;
    }
    
    STATE_stateInnerTransitionTable_t const* const pInnerTable = transitionTable[index].pInnerTransitionTable;
	
    uint16_t innerTableSize = 0;
	if (0 != pInnerTable)
	{
		innerTableSize = transitionTable[index].size;
	}
    
    if (0 == pInnerTable || 0 == innerTableSize)
    {
        //No transitions in this state
        return RC_ERROR_INVALID_STATE;
    }
    
    //Iterate through the inner table and find correct transition
    for (uint16_t i = 0; i < innerTableSize; i++)
    {
        if ((*pInnerTable)[i].event == ev)
        {
            //Transition found, let's check the guard
            guard = (*pInnerTable)[i].guard;
            if (0 == guard || TRUE == guard())
            {
                //Transition is valid
                acTransition = (*pInnerTable)[i].actionTransition;
                toState = (*pInnerTable)[i].toState;
                
                //Now lets find exit actions. Note: their might be more than one
                if (0 != actionTable)
                {
                    for (uint16_t j = 0; j < actionTableSize; j++)
                    {
                        if (currentState == actionTable[j].state)
                        {
                            acExit = actionTable[j].actionExit;
                            if (0 != acExit) acExit();
                        }
                    }
                }

                //Lets call the transition action
                if (0 != acTransition) acTransition();
                
                //Now lets find the entry actions. Note: their might be more than one
                if (0 != actionTable)
                {
                    for (uint16_t j = 0; j < actionTableSize; j++)
                    {

                        if (toState == actionTable[j].state)
                        {
                            acEntry = actionTable[j].actionEntry;
                            if (0 != acEntry) acEntry();
                        }
                    }
                }
                
                *state = toState;
                
                //Only one transition will be fired
                break;
            }
        }
    }
    
    return RC_SUCCESS;
}
