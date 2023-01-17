/*******************************************************************************
* File Name: SEVEN_PM.c
* Version 1.80
*
* Description:
*  This file contains the setup, control, and status commands to support 
*  the component operation in the low power mode. 
*
* Note:
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "SEVEN.h"

/* Check for removal by optimization */
#if !defined(SEVEN_Sync_ctrl_reg__REMOVED)

static SEVEN_BACKUP_STRUCT  SEVEN_backup = {0u};

    
/*******************************************************************************
* Function Name: SEVEN_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the control register value.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void SEVEN_SaveConfig(void) 
{
    SEVEN_backup.controlState = SEVEN_Control;
}


/*******************************************************************************
* Function Name: SEVEN_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the control register value.
*
* Parameters:
*  None
*
* Return:
*  None
*
*
*******************************************************************************/
void SEVEN_RestoreConfig(void) 
{
     SEVEN_Control = SEVEN_backup.controlState;
}


/*******************************************************************************
* Function Name: SEVEN_Sleep
********************************************************************************
*
* Summary:
*  Prepares the component for entering the low power mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void SEVEN_Sleep(void) 
{
    SEVEN_SaveConfig();
}


/*******************************************************************************
* Function Name: SEVEN_Wakeup
********************************************************************************
*
* Summary:
*  Restores the component after waking up from the low power mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void SEVEN_Wakeup(void)  
{
    SEVEN_RestoreConfig();
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
