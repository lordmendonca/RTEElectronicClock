
/*
 * Filename: clock_statemachine.h
 */

#ifndef _H_DEFINE_CLOCK_STATEMACHINE
#define _H_DEFINE_CLOCK_STATEMACHINE

/*****************************************************************************/
/* Global pre-processor symbols/macros and type declarations                 */
/*****************************************************************************/
    
#include "project.h"
#include "global.h"
    
#include "clock_statemachine_cfg.h"

//================================Enumeration================================

    
//================================FUNCTION POINTERS==========================
/** function pointer used for actions */
typedef void (*STATE_ActionPtr_t)();

/** function pointer used for guards */
typedef boolean_t (*STATE_GuardPtr_t)();

//================================TYPE DEFINITIONS===========================

/** Inner state transition table */ 
typedef struct
{
    STATE_Event_t       event;              /**< \brief The event firing the transition */
    STATE_State_t       toState;            /**< \brief The target state */
    STATE_GuardPtr_t    guard;              /**< \brief The guard function */
    STATE_ActionPtr_t   actionTransition;   /**< \brief The transition action */
}STATE_stateInnerTransition_t;

typedef STATE_stateInnerTransition_t  STATE_stateInnerTransitionTable_t[];

/** Outer state transition table */ 
typedef struct
{
    STATE_State_t                                           fromState;
    STATE_stateInnerTransitionTable_t   const   *   const   pInnerTransitionTable;  /**< \brief Pointer to the transitions valid for this state */ 
    uint16_t                            const               size;                   /**< \brief Size of the inner table in elements */
}STATE_stateOuterTransition_t;

typedef STATE_stateOuterTransition_t  STATE_stateOuterTransitionTable_t[];

/** State Action table. Here, no inner table is used as we do not have guards and not so many actions. */
typedef struct
{
    STATE_State_t       state;              /**< \brief The state */
	STATE_ActionPtr_t   actionEntry;        /**< \brief Entry Action of the state */
	STATE_ActionPtr_t   actionExit;         /**< \brief Exit Action of the state */
} STATE_stateAction_t;

typedef STATE_stateAction_t  STATE_stateActionTable_t[];

//================================STATE TRANSITION TABLE=====================



/*****************************************************************************/
/* API functions                                                             */
/*****************************************************************************/


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
                        STATE_State_t* state);

/**
 * This function will process the event with the defined state machine
 * The state machine is implemented as a generic object, Several instances and configurations are supported
 * \param STATE_stateOuterTransitionTable_t const * const transitionTable	: IN - Pointer to the transition table
 * \param uint16_t transitionTableSize                                  	: IN - transition table size
 * \param STATE_stateActionTable_t const * const actionTable				: IN - Pointer to the action table
 * \param uint16_t actionTableSize											: IN - action table size 
 * \param STATE_event_t ev													: IN - Event to be processed
 * \param STATE_state_t state												: IN/OUT - Leaving and Resulting state
 * \return RC_SUCCESS or error
 */
RC_t STATE_processEvent(	STATE_stateOuterTransitionTable_t const transitionTable,
							uint16_t transitionTableSize,
							STATE_stateActionTable_t const actionTable, 
							uint16_t actionTableSize,
							STATE_Event_t ev,
							STATE_State_t* state);

#endif
