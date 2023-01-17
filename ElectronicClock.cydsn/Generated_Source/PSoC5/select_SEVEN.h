/*******************************************************************************
* File Name: select_SEVEN.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_select_SEVEN_H) /* Pins select_SEVEN_H */
#define CY_PINS_select_SEVEN_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "select_SEVEN_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 select_SEVEN__PORT == 15 && ((select_SEVEN__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    select_SEVEN_Write(uint8 value);
void    select_SEVEN_SetDriveMode(uint8 mode);
uint8   select_SEVEN_ReadDataReg(void);
uint8   select_SEVEN_Read(void);
void    select_SEVEN_SetInterruptMode(uint16 position, uint16 mode);
uint8   select_SEVEN_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the select_SEVEN_SetDriveMode() function.
     *  @{
     */
        #define select_SEVEN_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define select_SEVEN_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define select_SEVEN_DM_RES_UP          PIN_DM_RES_UP
        #define select_SEVEN_DM_RES_DWN         PIN_DM_RES_DWN
        #define select_SEVEN_DM_OD_LO           PIN_DM_OD_LO
        #define select_SEVEN_DM_OD_HI           PIN_DM_OD_HI
        #define select_SEVEN_DM_STRONG          PIN_DM_STRONG
        #define select_SEVEN_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define select_SEVEN_MASK               select_SEVEN__MASK
#define select_SEVEN_SHIFT              select_SEVEN__SHIFT
#define select_SEVEN_WIDTH              1u

/* Interrupt constants */
#if defined(select_SEVEN__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in select_SEVEN_SetInterruptMode() function.
     *  @{
     */
        #define select_SEVEN_INTR_NONE      (uint16)(0x0000u)
        #define select_SEVEN_INTR_RISING    (uint16)(0x0001u)
        #define select_SEVEN_INTR_FALLING   (uint16)(0x0002u)
        #define select_SEVEN_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define select_SEVEN_INTR_MASK      (0x01u) 
#endif /* (select_SEVEN__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define select_SEVEN_PS                     (* (reg8 *) select_SEVEN__PS)
/* Data Register */
#define select_SEVEN_DR                     (* (reg8 *) select_SEVEN__DR)
/* Port Number */
#define select_SEVEN_PRT_NUM                (* (reg8 *) select_SEVEN__PRT) 
/* Connect to Analog Globals */                                                  
#define select_SEVEN_AG                     (* (reg8 *) select_SEVEN__AG)                       
/* Analog MUX bux enable */
#define select_SEVEN_AMUX                   (* (reg8 *) select_SEVEN__AMUX) 
/* Bidirectional Enable */                                                        
#define select_SEVEN_BIE                    (* (reg8 *) select_SEVEN__BIE)
/* Bit-mask for Aliased Register Access */
#define select_SEVEN_BIT_MASK               (* (reg8 *) select_SEVEN__BIT_MASK)
/* Bypass Enable */
#define select_SEVEN_BYP                    (* (reg8 *) select_SEVEN__BYP)
/* Port wide control signals */                                                   
#define select_SEVEN_CTL                    (* (reg8 *) select_SEVEN__CTL)
/* Drive Modes */
#define select_SEVEN_DM0                    (* (reg8 *) select_SEVEN__DM0) 
#define select_SEVEN_DM1                    (* (reg8 *) select_SEVEN__DM1)
#define select_SEVEN_DM2                    (* (reg8 *) select_SEVEN__DM2) 
/* Input Buffer Disable Override */
#define select_SEVEN_INP_DIS                (* (reg8 *) select_SEVEN__INP_DIS)
/* LCD Common or Segment Drive */
#define select_SEVEN_LCD_COM_SEG            (* (reg8 *) select_SEVEN__LCD_COM_SEG)
/* Enable Segment LCD */
#define select_SEVEN_LCD_EN                 (* (reg8 *) select_SEVEN__LCD_EN)
/* Slew Rate Control */
#define select_SEVEN_SLW                    (* (reg8 *) select_SEVEN__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define select_SEVEN_PRTDSI__CAPS_SEL       (* (reg8 *) select_SEVEN__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define select_SEVEN_PRTDSI__DBL_SYNC_IN    (* (reg8 *) select_SEVEN__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define select_SEVEN_PRTDSI__OE_SEL0        (* (reg8 *) select_SEVEN__PRTDSI__OE_SEL0) 
#define select_SEVEN_PRTDSI__OE_SEL1        (* (reg8 *) select_SEVEN__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define select_SEVEN_PRTDSI__OUT_SEL0       (* (reg8 *) select_SEVEN__PRTDSI__OUT_SEL0) 
#define select_SEVEN_PRTDSI__OUT_SEL1       (* (reg8 *) select_SEVEN__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define select_SEVEN_PRTDSI__SYNC_OUT       (* (reg8 *) select_SEVEN__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(select_SEVEN__SIO_CFG)
    #define select_SEVEN_SIO_HYST_EN        (* (reg8 *) select_SEVEN__SIO_HYST_EN)
    #define select_SEVEN_SIO_REG_HIFREQ     (* (reg8 *) select_SEVEN__SIO_REG_HIFREQ)
    #define select_SEVEN_SIO_CFG            (* (reg8 *) select_SEVEN__SIO_CFG)
    #define select_SEVEN_SIO_DIFF           (* (reg8 *) select_SEVEN__SIO_DIFF)
#endif /* (select_SEVEN__SIO_CFG) */

/* Interrupt Registers */
#if defined(select_SEVEN__INTSTAT)
    #define select_SEVEN_INTSTAT            (* (reg8 *) select_SEVEN__INTSTAT)
    #define select_SEVEN_SNAP               (* (reg8 *) select_SEVEN__SNAP)
    
	#define select_SEVEN_0_INTTYPE_REG 		(* (reg8 *) select_SEVEN__0__INTTYPE)
#endif /* (select_SEVEN__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_select_SEVEN_H */


/* [] END OF FILE */
