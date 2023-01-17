/*******************************************************************************
* File Name: DP.h  
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

#if !defined(CY_PINS_DP_H) /* Pins DP_H */
#define CY_PINS_DP_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "DP_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 DP__PORT == 15 && ((DP__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    DP_Write(uint8 value);
void    DP_SetDriveMode(uint8 mode);
uint8   DP_ReadDataReg(void);
uint8   DP_Read(void);
void    DP_SetInterruptMode(uint16 position, uint16 mode);
uint8   DP_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the DP_SetDriveMode() function.
     *  @{
     */
        #define DP_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define DP_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define DP_DM_RES_UP          PIN_DM_RES_UP
        #define DP_DM_RES_DWN         PIN_DM_RES_DWN
        #define DP_DM_OD_LO           PIN_DM_OD_LO
        #define DP_DM_OD_HI           PIN_DM_OD_HI
        #define DP_DM_STRONG          PIN_DM_STRONG
        #define DP_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define DP_MASK               DP__MASK
#define DP_SHIFT              DP__SHIFT
#define DP_WIDTH              1u

/* Interrupt constants */
#if defined(DP__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in DP_SetInterruptMode() function.
     *  @{
     */
        #define DP_INTR_NONE      (uint16)(0x0000u)
        #define DP_INTR_RISING    (uint16)(0x0001u)
        #define DP_INTR_FALLING   (uint16)(0x0002u)
        #define DP_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define DP_INTR_MASK      (0x01u) 
#endif /* (DP__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define DP_PS                     (* (reg8 *) DP__PS)
/* Data Register */
#define DP_DR                     (* (reg8 *) DP__DR)
/* Port Number */
#define DP_PRT_NUM                (* (reg8 *) DP__PRT) 
/* Connect to Analog Globals */                                                  
#define DP_AG                     (* (reg8 *) DP__AG)                       
/* Analog MUX bux enable */
#define DP_AMUX                   (* (reg8 *) DP__AMUX) 
/* Bidirectional Enable */                                                        
#define DP_BIE                    (* (reg8 *) DP__BIE)
/* Bit-mask for Aliased Register Access */
#define DP_BIT_MASK               (* (reg8 *) DP__BIT_MASK)
/* Bypass Enable */
#define DP_BYP                    (* (reg8 *) DP__BYP)
/* Port wide control signals */                                                   
#define DP_CTL                    (* (reg8 *) DP__CTL)
/* Drive Modes */
#define DP_DM0                    (* (reg8 *) DP__DM0) 
#define DP_DM1                    (* (reg8 *) DP__DM1)
#define DP_DM2                    (* (reg8 *) DP__DM2) 
/* Input Buffer Disable Override */
#define DP_INP_DIS                (* (reg8 *) DP__INP_DIS)
/* LCD Common or Segment Drive */
#define DP_LCD_COM_SEG            (* (reg8 *) DP__LCD_COM_SEG)
/* Enable Segment LCD */
#define DP_LCD_EN                 (* (reg8 *) DP__LCD_EN)
/* Slew Rate Control */
#define DP_SLW                    (* (reg8 *) DP__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define DP_PRTDSI__CAPS_SEL       (* (reg8 *) DP__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define DP_PRTDSI__DBL_SYNC_IN    (* (reg8 *) DP__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define DP_PRTDSI__OE_SEL0        (* (reg8 *) DP__PRTDSI__OE_SEL0) 
#define DP_PRTDSI__OE_SEL1        (* (reg8 *) DP__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define DP_PRTDSI__OUT_SEL0       (* (reg8 *) DP__PRTDSI__OUT_SEL0) 
#define DP_PRTDSI__OUT_SEL1       (* (reg8 *) DP__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define DP_PRTDSI__SYNC_OUT       (* (reg8 *) DP__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(DP__SIO_CFG)
    #define DP_SIO_HYST_EN        (* (reg8 *) DP__SIO_HYST_EN)
    #define DP_SIO_REG_HIFREQ     (* (reg8 *) DP__SIO_REG_HIFREQ)
    #define DP_SIO_CFG            (* (reg8 *) DP__SIO_CFG)
    #define DP_SIO_DIFF           (* (reg8 *) DP__SIO_DIFF)
#endif /* (DP__SIO_CFG) */

/* Interrupt Registers */
#if defined(DP__INTSTAT)
    #define DP_INTSTAT            (* (reg8 *) DP__INTSTAT)
    #define DP_SNAP               (* (reg8 *) DP__SNAP)
    
	#define DP_0_INTTYPE_REG 		(* (reg8 *) DP__0__INTTYPE)
#endif /* (DP__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_DP_H */


/* [] END OF FILE */
