
/*
 * Filename: sc_event_type.h
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 */

#ifndef _H_DEFINE_SC_EVENT_TYPE
#define _H_DEFINE_SC_EVENT_TYPE

#include "project.h"
#include "global.h"
#include "rte_types.h"

/* USER CODE START SC_EVENT_INCLUDES */

/* USER CODE END SC_EVENT_INCLUDES */



/**********************************************************************
 *       Type Definition for SC_EVENT signal    
 **********************************************************************/

/* USER CODE START SC_EVENT_USERDEFINITIONS */

/* USER CODE END SC_EVENT_USERDEFINITIONS */

typedef 
/* USER CODE START SC_EVENT_SIGNALDATADEFINITION */
struct
{
	#error "Provide your data structure"
} 
/* USER CODE END SC_EVENT_SIGNALDATADEFINITION */
SC_EVENT_data_t;

/* USER CODE START InitSC_EVENT */
#error "Provide a sensible init value"
#define SC_EVENT_INIT_DATA ((SC_EVENT_data_t){})
/* USER CODE END InitSC_EVENT */


/**
 * Default IN driver API
 * \param SC_EVENT_data_t *const data : [OUT] scaled data read from the driver
 * \return RC_SUCCESS is all was ok, error code otherwise
 */
RC_t SC_EVENT_driverIn(SC_EVENT_data_t *const data);




/* USER CODE START SC_EVENT_USERFUNCTIONS */

/* USER CODE END SC_EVENT_USERFUNCTIONS */


#endif