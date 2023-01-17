
/*
 * Filename: clock_statemachine_cfg.h
 */

#ifndef _H_DEFINE_CLOCK_STATEMACHINE_CFG
#define _H_DEFINE_CLOCK_STATEMACHINE_CFG
    
#include "project.h"
#include "global.h"

//================================Enumeration================================

typedef enum
{
	STATE_CLOCK_C_ISDISPLAYING,		/**< \brief Container state ISDISPLAYING */
	STATE_CLOCK_C_ISEDITINGMINUTES,	/**< \brief Container state ISEDITINGMINUTES */
    STATE_CLOCK_C_ISEDITINGHOURS,	/**< \brief Container state ISEDITINGHOURS */
    STATE_CLOCK_W_ISDISPLAYING,		/**< \brief Widget state ISDISPLAYING */
    STATE_CLOCK_W_ISEDITING,		/**< \brief Widget state ISEDITING */
    STATE_CLOCK_W_ISAUTOINCREMENT	/**< \brief Widget state ISAUTOINCREMENT */
} CLOCK_State_t;

typedef enum
{
    EV_NONE,				/**< \brief Occurence of no event. */
    EV_KEYLEFT,				/**< \brief Occurence of event associated with left key being pressed. */
    EV_KEYRIGHT,			/**< \brief Occurence of event associated with right key being pressed. */
    EV_KEYRIGHTLONGPRESS,	/**< \brief Occurence of event associated with right key being pressed for more than 1 second. */
    EV_250MS,				/**< \brief Occurence of event that 250 ms have passed. */
    EV_1MIN,				/**< \brief Occurence of event that 1 min has passed. */
    EV_ERROR				/**< \brief Occurence of event associated with an error. */
} EVENT_t;

//================================TYPE DEFINITIONS===========================

typedef CLOCK_State_t   STATE_State_t;
typedef EVENT_t         STATE_Event_t;

#endif
