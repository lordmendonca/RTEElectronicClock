;
; File Name: cyfitterrv.inc
; 
; PSoC Creator  4.4
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv.inc
    GET cydevicerv_trm.inc

; Rx_LOG
Rx_LOG__0__INTTYPE EQU CYREG_PICU12_INTTYPE6
Rx_LOG__0__MASK EQU 0x40
Rx_LOG__0__PC EQU CYREG_PRT12_PC6
Rx_LOG__0__PORT EQU 12
Rx_LOG__0__SHIFT EQU 6
Rx_LOG__AG EQU CYREG_PRT12_AG
Rx_LOG__BIE EQU CYREG_PRT12_BIE
Rx_LOG__BIT_MASK EQU CYREG_PRT12_BIT_MASK
Rx_LOG__BYP EQU CYREG_PRT12_BYP
Rx_LOG__DM0 EQU CYREG_PRT12_DM0
Rx_LOG__DM1 EQU CYREG_PRT12_DM1
Rx_LOG__DM2 EQU CYREG_PRT12_DM2
Rx_LOG__DR EQU CYREG_PRT12_DR
Rx_LOG__INP_DIS EQU CYREG_PRT12_INP_DIS
Rx_LOG__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
Rx_LOG__MASK EQU 0x40
Rx_LOG__PORT EQU 12
Rx_LOG__PRT EQU CYREG_PRT12_PRT
Rx_LOG__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
Rx_LOG__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
Rx_LOG__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
Rx_LOG__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
Rx_LOG__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
Rx_LOG__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
Rx_LOG__PS EQU CYREG_PRT12_PS
Rx_LOG__SHIFT EQU 6
Rx_LOG__SIO_CFG EQU CYREG_PRT12_SIO_CFG
Rx_LOG__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
Rx_LOG__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
Rx_LOG__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
Rx_LOG__SLW EQU CYREG_PRT12_SLW

; TFT_CS
TFT_CS__0__INTTYPE EQU CYREG_PICU3_INTTYPE3
TFT_CS__0__MASK EQU 0x08
TFT_CS__0__PC EQU CYREG_PRT3_PC3
TFT_CS__0__PORT EQU 3
TFT_CS__0__SHIFT EQU 3
TFT_CS__AG EQU CYREG_PRT3_AG
TFT_CS__AMUX EQU CYREG_PRT3_AMUX
TFT_CS__BIE EQU CYREG_PRT3_BIE
TFT_CS__BIT_MASK EQU CYREG_PRT3_BIT_MASK
TFT_CS__BYP EQU CYREG_PRT3_BYP
TFT_CS__CTL EQU CYREG_PRT3_CTL
TFT_CS__DM0 EQU CYREG_PRT3_DM0
TFT_CS__DM1 EQU CYREG_PRT3_DM1
TFT_CS__DM2 EQU CYREG_PRT3_DM2
TFT_CS__DR EQU CYREG_PRT3_DR
TFT_CS__INP_DIS EQU CYREG_PRT3_INP_DIS
TFT_CS__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
TFT_CS__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
TFT_CS__LCD_EN EQU CYREG_PRT3_LCD_EN
TFT_CS__MASK EQU 0x08
TFT_CS__PORT EQU 3
TFT_CS__PRT EQU CYREG_PRT3_PRT
TFT_CS__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
TFT_CS__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
TFT_CS__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
TFT_CS__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
TFT_CS__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
TFT_CS__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
TFT_CS__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
TFT_CS__PS EQU CYREG_PRT3_PS
TFT_CS__SHIFT EQU 3
TFT_CS__SLW EQU CYREG_PRT3_SLW

; TFT_DC
TFT_DC__0__INTTYPE EQU CYREG_PICU12_INTTYPE3
TFT_DC__0__MASK EQU 0x08
TFT_DC__0__PC EQU CYREG_PRT12_PC3
TFT_DC__0__PORT EQU 12
TFT_DC__0__SHIFT EQU 3
TFT_DC__AG EQU CYREG_PRT12_AG
TFT_DC__BIE EQU CYREG_PRT12_BIE
TFT_DC__BIT_MASK EQU CYREG_PRT12_BIT_MASK
TFT_DC__BYP EQU CYREG_PRT12_BYP
TFT_DC__DM0 EQU CYREG_PRT12_DM0
TFT_DC__DM1 EQU CYREG_PRT12_DM1
TFT_DC__DM2 EQU CYREG_PRT12_DM2
TFT_DC__DR EQU CYREG_PRT12_DR
TFT_DC__INP_DIS EQU CYREG_PRT12_INP_DIS
TFT_DC__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
TFT_DC__MASK EQU 0x08
TFT_DC__PORT EQU 12
TFT_DC__PRT EQU CYREG_PRT12_PRT
TFT_DC__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
TFT_DC__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
TFT_DC__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
TFT_DC__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
TFT_DC__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
TFT_DC__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
TFT_DC__PS EQU CYREG_PRT12_PS
TFT_DC__SHIFT EQU 3
TFT_DC__SIO_CFG EQU CYREG_PRT12_SIO_CFG
TFT_DC__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
TFT_DC__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
TFT_DC__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
TFT_DC__SLW EQU CYREG_PRT12_SLW

; Tx_LOG
Tx_LOG__0__INTTYPE EQU CYREG_PICU12_INTTYPE7
Tx_LOG__0__MASK EQU 0x80
Tx_LOG__0__PC EQU CYREG_PRT12_PC7
Tx_LOG__0__PORT EQU 12
Tx_LOG__0__SHIFT EQU 7
Tx_LOG__AG EQU CYREG_PRT12_AG
Tx_LOG__BIE EQU CYREG_PRT12_BIE
Tx_LOG__BIT_MASK EQU CYREG_PRT12_BIT_MASK
Tx_LOG__BYP EQU CYREG_PRT12_BYP
Tx_LOG__DM0 EQU CYREG_PRT12_DM0
Tx_LOG__DM1 EQU CYREG_PRT12_DM1
Tx_LOG__DM2 EQU CYREG_PRT12_DM2
Tx_LOG__DR EQU CYREG_PRT12_DR
Tx_LOG__INP_DIS EQU CYREG_PRT12_INP_DIS
Tx_LOG__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
Tx_LOG__MASK EQU 0x80
Tx_LOG__PORT EQU 12
Tx_LOG__PRT EQU CYREG_PRT12_PRT
Tx_LOG__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
Tx_LOG__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
Tx_LOG__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
Tx_LOG__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
Tx_LOG__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
Tx_LOG__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
Tx_LOG__PS EQU CYREG_PRT12_PS
Tx_LOG__SHIFT EQU 7
Tx_LOG__SIO_CFG EQU CYREG_PRT12_SIO_CFG
Tx_LOG__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
Tx_LOG__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
Tx_LOG__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
Tx_LOG__SLW EQU CYREG_PRT12_SLW

; CLK_LED
CLK_LED__CFG0 EQU CYREG_CLKDIST_DCFG2_CFG0
CLK_LED__CFG1 EQU CYREG_CLKDIST_DCFG2_CFG1
CLK_LED__CFG2 EQU CYREG_CLKDIST_DCFG2_CFG2
CLK_LED__CFG2_SRC_SEL_MASK EQU 0x07
CLK_LED__INDEX EQU 0x02
CLK_LED__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
CLK_LED__PM_ACT_MSK EQU 0x04
CLK_LED__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
CLK_LED__PM_STBY_MSK EQU 0x04

; TFT_LED
TFT_LED__0__INTTYPE EQU CYREG_PICU12_INTTYPE2
TFT_LED__0__MASK EQU 0x04
TFT_LED__0__PC EQU CYREG_PRT12_PC2
TFT_LED__0__PORT EQU 12
TFT_LED__0__SHIFT EQU 2
TFT_LED__AG EQU CYREG_PRT12_AG
TFT_LED__BIE EQU CYREG_PRT12_BIE
TFT_LED__BIT_MASK EQU CYREG_PRT12_BIT_MASK
TFT_LED__BYP EQU CYREG_PRT12_BYP
TFT_LED__DM0 EQU CYREG_PRT12_DM0
TFT_LED__DM1 EQU CYREG_PRT12_DM1
TFT_LED__DM2 EQU CYREG_PRT12_DM2
TFT_LED__DR EQU CYREG_PRT12_DR
TFT_LED__INP_DIS EQU CYREG_PRT12_INP_DIS
TFT_LED__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
TFT_LED__MASK EQU 0x04
TFT_LED__PORT EQU 12
TFT_LED__PRT EQU CYREG_PRT12_PRT
TFT_LED__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
TFT_LED__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
TFT_LED__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
TFT_LED__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
TFT_LED__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
TFT_LED__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
TFT_LED__PS EQU CYREG_PRT12_PS
TFT_LED__SHIFT EQU 2
TFT_LED__SIO_CFG EQU CYREG_PRT12_SIO_CFG
TFT_LED__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
TFT_LED__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
TFT_LED__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
TFT_LED__SLW EQU CYREG_PRT12_SLW

; TFT_RES
TFT_RES__0__INTTYPE EQU CYREG_PICU3_INTTYPE4
TFT_RES__0__MASK EQU 0x10
TFT_RES__0__PC EQU CYREG_PRT3_PC4
TFT_RES__0__PORT EQU 3
TFT_RES__0__SHIFT EQU 4
TFT_RES__AG EQU CYREG_PRT3_AG
TFT_RES__AMUX EQU CYREG_PRT3_AMUX
TFT_RES__BIE EQU CYREG_PRT3_BIE
TFT_RES__BIT_MASK EQU CYREG_PRT3_BIT_MASK
TFT_RES__BYP EQU CYREG_PRT3_BYP
TFT_RES__CTL EQU CYREG_PRT3_CTL
TFT_RES__DM0 EQU CYREG_PRT3_DM0
TFT_RES__DM1 EQU CYREG_PRT3_DM1
TFT_RES__DM2 EQU CYREG_PRT3_DM2
TFT_RES__DR EQU CYREG_PRT3_DR
TFT_RES__INP_DIS EQU CYREG_PRT3_INP_DIS
TFT_RES__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
TFT_RES__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
TFT_RES__LCD_EN EQU CYREG_PRT3_LCD_EN
TFT_RES__MASK EQU 0x10
TFT_RES__PORT EQU 3
TFT_RES__PRT EQU CYREG_PRT3_PRT
TFT_RES__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
TFT_RES__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
TFT_RES__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
TFT_RES__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
TFT_RES__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
TFT_RES__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
TFT_RES__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
TFT_RES__PS EQU CYREG_PRT3_PS
TFT_RES__SHIFT EQU 4
TFT_RES__SLW EQU CYREG_PRT3_SLW

; TFT_SCL
TFT_SCL__0__INTTYPE EQU CYREG_PICU12_INTTYPE4
TFT_SCL__0__MASK EQU 0x10
TFT_SCL__0__PC EQU CYREG_PRT12_PC4
TFT_SCL__0__PORT EQU 12
TFT_SCL__0__SHIFT EQU 4
TFT_SCL__AG EQU CYREG_PRT12_AG
TFT_SCL__BIE EQU CYREG_PRT12_BIE
TFT_SCL__BIT_MASK EQU CYREG_PRT12_BIT_MASK
TFT_SCL__BYP EQU CYREG_PRT12_BYP
TFT_SCL__DM0 EQU CYREG_PRT12_DM0
TFT_SCL__DM1 EQU CYREG_PRT12_DM1
TFT_SCL__DM2 EQU CYREG_PRT12_DM2
TFT_SCL__DR EQU CYREG_PRT12_DR
TFT_SCL__INP_DIS EQU CYREG_PRT12_INP_DIS
TFT_SCL__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
TFT_SCL__MASK EQU 0x10
TFT_SCL__PORT EQU 12
TFT_SCL__PRT EQU CYREG_PRT12_PRT
TFT_SCL__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
TFT_SCL__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
TFT_SCL__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
TFT_SCL__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
TFT_SCL__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
TFT_SCL__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
TFT_SCL__PS EQU CYREG_PRT12_PS
TFT_SCL__SHIFT EQU 4
TFT_SCL__SIO_CFG EQU CYREG_PRT12_SIO_CFG
TFT_SCL__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
TFT_SCL__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
TFT_SCL__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
TFT_SCL__SLW EQU CYREG_PRT12_SLW

; TFT_SDA
TFT_SDA__0__INTTYPE EQU CYREG_PICU12_INTTYPE5
TFT_SDA__0__MASK EQU 0x20
TFT_SDA__0__PC EQU CYREG_PRT12_PC5
TFT_SDA__0__PORT EQU 12
TFT_SDA__0__SHIFT EQU 5
TFT_SDA__AG EQU CYREG_PRT12_AG
TFT_SDA__BIE EQU CYREG_PRT12_BIE
TFT_SDA__BIT_MASK EQU CYREG_PRT12_BIT_MASK
TFT_SDA__BYP EQU CYREG_PRT12_BYP
TFT_SDA__DM0 EQU CYREG_PRT12_DM0
TFT_SDA__DM1 EQU CYREG_PRT12_DM1
TFT_SDA__DM2 EQU CYREG_PRT12_DM2
TFT_SDA__DR EQU CYREG_PRT12_DR
TFT_SDA__INP_DIS EQU CYREG_PRT12_INP_DIS
TFT_SDA__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
TFT_SDA__MASK EQU 0x20
TFT_SDA__PORT EQU 12
TFT_SDA__PRT EQU CYREG_PRT12_PRT
TFT_SDA__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
TFT_SDA__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
TFT_SDA__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
TFT_SDA__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
TFT_SDA__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
TFT_SDA__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
TFT_SDA__PS EQU CYREG_PRT12_PS
TFT_SDA__SHIFT EQU 5
TFT_SDA__SIO_CFG EQU CYREG_PRT12_SIO_CFG
TFT_SDA__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
TFT_SDA__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
TFT_SDA__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
TFT_SDA__SLW EQU CYREG_PRT12_SLW

; TFT_SPI
TFT_SPI_BSPIM_BitCounter__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB09_10_ACTL
TFT_SPI_BSPIM_BitCounter__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB09_10_CTL
TFT_SPI_BSPIM_BitCounter__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB09_10_CTL
TFT_SPI_BSPIM_BitCounter__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB09_10_CTL
TFT_SPI_BSPIM_BitCounter__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB09_10_CTL
TFT_SPI_BSPIM_BitCounter__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB09_10_MSK
TFT_SPI_BSPIM_BitCounter__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB09_10_MSK
TFT_SPI_BSPIM_BitCounter__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB09_10_MSK
TFT_SPI_BSPIM_BitCounter__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB09_10_MSK
TFT_SPI_BSPIM_BitCounter__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB09_ACTL
TFT_SPI_BSPIM_BitCounter__CONTROL_REG EQU CYREG_B0_UDB09_CTL
TFT_SPI_BSPIM_BitCounter__CONTROL_ST_REG EQU CYREG_B0_UDB09_ST_CTL
TFT_SPI_BSPIM_BitCounter__COUNT_REG EQU CYREG_B0_UDB09_CTL
TFT_SPI_BSPIM_BitCounter__COUNT_ST_REG EQU CYREG_B0_UDB09_ST_CTL
TFT_SPI_BSPIM_BitCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB09_MSK_ACTL
TFT_SPI_BSPIM_BitCounter__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB09_MSK_ACTL
TFT_SPI_BSPIM_BitCounter__PERIOD_REG EQU CYREG_B0_UDB09_MSK
TFT_SPI_BSPIM_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB09_10_ACTL
TFT_SPI_BSPIM_BitCounter_ST__16BIT_STATUS_REG EQU CYREG_B0_UDB09_10_ST
TFT_SPI_BSPIM_BitCounter_ST__MASK_REG EQU CYREG_B0_UDB09_MSK
TFT_SPI_BSPIM_BitCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB09_MSK_ACTL
TFT_SPI_BSPIM_BitCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB09_MSK_ACTL
TFT_SPI_BSPIM_BitCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB09_ACTL
TFT_SPI_BSPIM_BitCounter_ST__STATUS_CNT_REG EQU CYREG_B0_UDB09_ST_CTL
TFT_SPI_BSPIM_BitCounter_ST__STATUS_CONTROL_REG EQU CYREG_B0_UDB09_ST_CTL
TFT_SPI_BSPIM_BitCounter_ST__STATUS_REG EQU CYREG_B0_UDB09_ST
TFT_SPI_BSPIM_RxStsReg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB10_11_ACTL
TFT_SPI_BSPIM_RxStsReg__16BIT_STATUS_REG EQU CYREG_B0_UDB10_11_ST
TFT_SPI_BSPIM_RxStsReg__4__MASK EQU 0x10
TFT_SPI_BSPIM_RxStsReg__4__POS EQU 4
TFT_SPI_BSPIM_RxStsReg__5__MASK EQU 0x20
TFT_SPI_BSPIM_RxStsReg__5__POS EQU 5
TFT_SPI_BSPIM_RxStsReg__6__MASK EQU 0x40
TFT_SPI_BSPIM_RxStsReg__6__POS EQU 6
TFT_SPI_BSPIM_RxStsReg__MASK EQU 0x70
TFT_SPI_BSPIM_RxStsReg__MASK_REG EQU CYREG_B0_UDB10_MSK
TFT_SPI_BSPIM_RxStsReg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB10_ACTL
TFT_SPI_BSPIM_RxStsReg__STATUS_REG EQU CYREG_B0_UDB10_ST
TFT_SPI_BSPIM_sR8_Dp_u0__16BIT_A0_REG EQU CYREG_B0_UDB08_09_A0
TFT_SPI_BSPIM_sR8_Dp_u0__16BIT_A1_REG EQU CYREG_B0_UDB08_09_A1
TFT_SPI_BSPIM_sR8_Dp_u0__16BIT_D0_REG EQU CYREG_B0_UDB08_09_D0
TFT_SPI_BSPIM_sR8_Dp_u0__16BIT_D1_REG EQU CYREG_B0_UDB08_09_D1
TFT_SPI_BSPIM_sR8_Dp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB08_09_ACTL
TFT_SPI_BSPIM_sR8_Dp_u0__16BIT_F0_REG EQU CYREG_B0_UDB08_09_F0
TFT_SPI_BSPIM_sR8_Dp_u0__16BIT_F1_REG EQU CYREG_B0_UDB08_09_F1
TFT_SPI_BSPIM_sR8_Dp_u0__A0_A1_REG EQU CYREG_B0_UDB08_A0_A1
TFT_SPI_BSPIM_sR8_Dp_u0__A0_REG EQU CYREG_B0_UDB08_A0
TFT_SPI_BSPIM_sR8_Dp_u0__A1_REG EQU CYREG_B0_UDB08_A1
TFT_SPI_BSPIM_sR8_Dp_u0__D0_D1_REG EQU CYREG_B0_UDB08_D0_D1
TFT_SPI_BSPIM_sR8_Dp_u0__D0_REG EQU CYREG_B0_UDB08_D0
TFT_SPI_BSPIM_sR8_Dp_u0__D1_REG EQU CYREG_B0_UDB08_D1
TFT_SPI_BSPIM_sR8_Dp_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB08_ACTL
TFT_SPI_BSPIM_sR8_Dp_u0__F0_F1_REG EQU CYREG_B0_UDB08_F0_F1
TFT_SPI_BSPIM_sR8_Dp_u0__F0_REG EQU CYREG_B0_UDB08_F0
TFT_SPI_BSPIM_sR8_Dp_u0__F1_REG EQU CYREG_B0_UDB08_F1
TFT_SPI_BSPIM_TxStsReg__0__MASK EQU 0x01
TFT_SPI_BSPIM_TxStsReg__0__POS EQU 0
TFT_SPI_BSPIM_TxStsReg__1__MASK EQU 0x02
TFT_SPI_BSPIM_TxStsReg__1__POS EQU 1
TFT_SPI_BSPIM_TxStsReg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB11_12_ACTL
TFT_SPI_BSPIM_TxStsReg__16BIT_STATUS_REG EQU CYREG_B0_UDB11_12_ST
TFT_SPI_BSPIM_TxStsReg__2__MASK EQU 0x04
TFT_SPI_BSPIM_TxStsReg__2__POS EQU 2
TFT_SPI_BSPIM_TxStsReg__3__MASK EQU 0x08
TFT_SPI_BSPIM_TxStsReg__3__POS EQU 3
TFT_SPI_BSPIM_TxStsReg__4__MASK EQU 0x10
TFT_SPI_BSPIM_TxStsReg__4__POS EQU 4
TFT_SPI_BSPIM_TxStsReg__MASK EQU 0x1F
TFT_SPI_BSPIM_TxStsReg__MASK_REG EQU CYREG_B0_UDB11_MSK
TFT_SPI_BSPIM_TxStsReg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB11_ACTL
TFT_SPI_BSPIM_TxStsReg__STATUS_REG EQU CYREG_B0_UDB11_ST
TFT_SPI_IntClock__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
TFT_SPI_IntClock__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
TFT_SPI_IntClock__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
TFT_SPI_IntClock__CFG2_SRC_SEL_MASK EQU 0x07
TFT_SPI_IntClock__INDEX EQU 0x00
TFT_SPI_IntClock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
TFT_SPI_IntClock__PM_ACT_MSK EQU 0x01
TFT_SPI_IntClock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
TFT_SPI_IntClock__PM_STBY_MSK EQU 0x01

; UART_LOG
UART_LOG_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB10_11_ACTL
UART_LOG_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB10_11_CTL
UART_LOG_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB10_11_CTL
UART_LOG_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB10_11_CTL
UART_LOG_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB10_11_CTL
UART_LOG_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB10_11_MSK
UART_LOG_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB10_11_MSK
UART_LOG_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB10_11_MSK
UART_LOG_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB10_11_MSK
UART_LOG_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB10_ACTL
UART_LOG_BUART_sRX_RxBitCounter__CONTROL_REG EQU CYREG_B1_UDB10_CTL
UART_LOG_BUART_sRX_RxBitCounter__CONTROL_ST_REG EQU CYREG_B1_UDB10_ST_CTL
UART_LOG_BUART_sRX_RxBitCounter__COUNT_REG EQU CYREG_B1_UDB10_CTL
UART_LOG_BUART_sRX_RxBitCounter__COUNT_ST_REG EQU CYREG_B1_UDB10_ST_CTL
UART_LOG_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
UART_LOG_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
UART_LOG_BUART_sRX_RxBitCounter__PERIOD_REG EQU CYREG_B1_UDB10_MSK
UART_LOG_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB10_11_ACTL
UART_LOG_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG EQU CYREG_B1_UDB10_11_ST
UART_LOG_BUART_sRX_RxBitCounter_ST__MASK_REG EQU CYREG_B1_UDB10_MSK
UART_LOG_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
UART_LOG_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
UART_LOG_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB10_ACTL
UART_LOG_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG EQU CYREG_B1_UDB10_ST_CTL
UART_LOG_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG EQU CYREG_B1_UDB10_ST_CTL
UART_LOG_BUART_sRX_RxBitCounter_ST__STATUS_REG EQU CYREG_B1_UDB10_ST
UART_LOG_BUART_sRX_RxShifter_u0__16BIT_A0_REG EQU CYREG_B1_UDB10_11_A0
UART_LOG_BUART_sRX_RxShifter_u0__16BIT_A1_REG EQU CYREG_B1_UDB10_11_A1
UART_LOG_BUART_sRX_RxShifter_u0__16BIT_D0_REG EQU CYREG_B1_UDB10_11_D0
UART_LOG_BUART_sRX_RxShifter_u0__16BIT_D1_REG EQU CYREG_B1_UDB10_11_D1
UART_LOG_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB10_11_ACTL
UART_LOG_BUART_sRX_RxShifter_u0__16BIT_F0_REG EQU CYREG_B1_UDB10_11_F0
UART_LOG_BUART_sRX_RxShifter_u0__16BIT_F1_REG EQU CYREG_B1_UDB10_11_F1
UART_LOG_BUART_sRX_RxShifter_u0__A0_A1_REG EQU CYREG_B1_UDB10_A0_A1
UART_LOG_BUART_sRX_RxShifter_u0__A0_REG EQU CYREG_B1_UDB10_A0
UART_LOG_BUART_sRX_RxShifter_u0__A1_REG EQU CYREG_B1_UDB10_A1
UART_LOG_BUART_sRX_RxShifter_u0__D0_D1_REG EQU CYREG_B1_UDB10_D0_D1
UART_LOG_BUART_sRX_RxShifter_u0__D0_REG EQU CYREG_B1_UDB10_D0
UART_LOG_BUART_sRX_RxShifter_u0__D1_REG EQU CYREG_B1_UDB10_D1
UART_LOG_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B1_UDB10_ACTL
UART_LOG_BUART_sRX_RxShifter_u0__F0_F1_REG EQU CYREG_B1_UDB10_F0_F1
UART_LOG_BUART_sRX_RxShifter_u0__F0_REG EQU CYREG_B1_UDB10_F0
UART_LOG_BUART_sRX_RxShifter_u0__F1_REG EQU CYREG_B1_UDB10_F1
UART_LOG_BUART_sRX_RxShifter_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
UART_LOG_BUART_sRX_RxShifter_u0__PER_DP_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
UART_LOG_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB09_10_ACTL
UART_LOG_BUART_sRX_RxSts__16BIT_STATUS_REG EQU CYREG_B1_UDB09_10_ST
UART_LOG_BUART_sRX_RxSts__3__MASK EQU 0x08
UART_LOG_BUART_sRX_RxSts__3__POS EQU 3
UART_LOG_BUART_sRX_RxSts__4__MASK EQU 0x10
UART_LOG_BUART_sRX_RxSts__4__POS EQU 4
UART_LOG_BUART_sRX_RxSts__5__MASK EQU 0x20
UART_LOG_BUART_sRX_RxSts__5__POS EQU 5
UART_LOG_BUART_sRX_RxSts__MASK EQU 0x38
UART_LOG_BUART_sRX_RxSts__MASK_REG EQU CYREG_B1_UDB09_MSK
UART_LOG_BUART_sRX_RxSts__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB09_ACTL
UART_LOG_BUART_sRX_RxSts__STATUS_REG EQU CYREG_B1_UDB09_ST
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG EQU CYREG_B0_UDB11_12_A0
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG EQU CYREG_B0_UDB11_12_A1
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG EQU CYREG_B0_UDB11_12_D0
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG EQU CYREG_B0_UDB11_12_D1
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB11_12_ACTL
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG EQU CYREG_B0_UDB11_12_F0
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG EQU CYREG_B0_UDB11_12_F1
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG EQU CYREG_B0_UDB11_A0_A1
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG EQU CYREG_B0_UDB11_A0
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG EQU CYREG_B0_UDB11_A1
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG EQU CYREG_B0_UDB11_D0_D1
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG EQU CYREG_B0_UDB11_D0
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG EQU CYREG_B0_UDB11_D1
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG EQU CYREG_B0_UDB11_ACTL
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG EQU CYREG_B0_UDB11_F0_F1
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG EQU CYREG_B0_UDB11_F0
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG EQU CYREG_B0_UDB11_F1
UART_LOG_BUART_sTX_TxShifter_u0__16BIT_A0_REG EQU CYREG_B1_UDB08_09_A0
UART_LOG_BUART_sTX_TxShifter_u0__16BIT_A1_REG EQU CYREG_B1_UDB08_09_A1
UART_LOG_BUART_sTX_TxShifter_u0__16BIT_D0_REG EQU CYREG_B1_UDB08_09_D0
UART_LOG_BUART_sTX_TxShifter_u0__16BIT_D1_REG EQU CYREG_B1_UDB08_09_D1
UART_LOG_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB08_09_ACTL
UART_LOG_BUART_sTX_TxShifter_u0__16BIT_F0_REG EQU CYREG_B1_UDB08_09_F0
UART_LOG_BUART_sTX_TxShifter_u0__16BIT_F1_REG EQU CYREG_B1_UDB08_09_F1
UART_LOG_BUART_sTX_TxShifter_u0__A0_A1_REG EQU CYREG_B1_UDB08_A0_A1
UART_LOG_BUART_sTX_TxShifter_u0__A0_REG EQU CYREG_B1_UDB08_A0
UART_LOG_BUART_sTX_TxShifter_u0__A1_REG EQU CYREG_B1_UDB08_A1
UART_LOG_BUART_sTX_TxShifter_u0__D0_D1_REG EQU CYREG_B1_UDB08_D0_D1
UART_LOG_BUART_sTX_TxShifter_u0__D0_REG EQU CYREG_B1_UDB08_D0
UART_LOG_BUART_sTX_TxShifter_u0__D1_REG EQU CYREG_B1_UDB08_D1
UART_LOG_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B1_UDB08_ACTL
UART_LOG_BUART_sTX_TxShifter_u0__F0_F1_REG EQU CYREG_B1_UDB08_F0_F1
UART_LOG_BUART_sTX_TxShifter_u0__F0_REG EQU CYREG_B1_UDB08_F0
UART_LOG_BUART_sTX_TxShifter_u0__F1_REG EQU CYREG_B1_UDB08_F1
UART_LOG_BUART_sTX_TxSts__0__MASK EQU 0x01
UART_LOG_BUART_sTX_TxSts__0__POS EQU 0
UART_LOG_BUART_sTX_TxSts__1__MASK EQU 0x02
UART_LOG_BUART_sTX_TxSts__1__POS EQU 1
UART_LOG_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB08_09_ACTL
UART_LOG_BUART_sTX_TxSts__16BIT_STATUS_REG EQU CYREG_B1_UDB08_09_ST
UART_LOG_BUART_sTX_TxSts__2__MASK EQU 0x04
UART_LOG_BUART_sTX_TxSts__2__POS EQU 2
UART_LOG_BUART_sTX_TxSts__3__MASK EQU 0x08
UART_LOG_BUART_sTX_TxSts__3__POS EQU 3
UART_LOG_BUART_sTX_TxSts__MASK EQU 0x0F
UART_LOG_BUART_sTX_TxSts__MASK_REG EQU CYREG_B1_UDB08_MSK
UART_LOG_BUART_sTX_TxSts__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB08_ACTL
UART_LOG_BUART_sTX_TxSts__STATUS_REG EQU CYREG_B1_UDB08_ST
UART_LOG_IntClock__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
UART_LOG_IntClock__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
UART_LOG_IntClock__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
UART_LOG_IntClock__CFG2_SRC_SEL_MASK EQU 0x07
UART_LOG_IntClock__INDEX EQU 0x01
UART_LOG_IntClock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
UART_LOG_IntClock__PM_ACT_MSK EQU 0x02
UART_LOG_IntClock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
UART_LOG_IntClock__PM_STBY_MSK EQU 0x02
UART_LOG_RXInternalInterrupt__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
UART_LOG_RXInternalInterrupt__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
UART_LOG_RXInternalInterrupt__INTC_MASK EQU 0x01
UART_LOG_RXInternalInterrupt__INTC_NUMBER EQU 0
UART_LOG_RXInternalInterrupt__INTC_PRIOR_NUM EQU 7
UART_LOG_RXInternalInterrupt__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
UART_LOG_RXInternalInterrupt__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
UART_LOG_RXInternalInterrupt__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0
UART_LOG_TXInternalInterrupt__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
UART_LOG_TXInternalInterrupt__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
UART_LOG_TXInternalInterrupt__INTC_MASK EQU 0x02
UART_LOG_TXInternalInterrupt__INTC_NUMBER EQU 1
UART_LOG_TXInternalInterrupt__INTC_PRIOR_NUM EQU 7
UART_LOG_TXInternalInterrupt__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_1
UART_LOG_TXInternalInterrupt__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
UART_LOG_TXInternalInterrupt__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; button_1
button_1__0__INTTYPE EQU CYREG_PICU0_INTTYPE3
button_1__0__MASK EQU 0x08
button_1__0__PC EQU CYREG_PRT0_PC3
button_1__0__PORT EQU 0
button_1__0__SHIFT EQU 3
button_1__AG EQU CYREG_PRT0_AG
button_1__AMUX EQU CYREG_PRT0_AMUX
button_1__BIE EQU CYREG_PRT0_BIE
button_1__BIT_MASK EQU CYREG_PRT0_BIT_MASK
button_1__BYP EQU CYREG_PRT0_BYP
button_1__CTL EQU CYREG_PRT0_CTL
button_1__DM0 EQU CYREG_PRT0_DM0
button_1__DM1 EQU CYREG_PRT0_DM1
button_1__DM2 EQU CYREG_PRT0_DM2
button_1__DR EQU CYREG_PRT0_DR
button_1__INP_DIS EQU CYREG_PRT0_INP_DIS
button_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
button_1__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
button_1__LCD_EN EQU CYREG_PRT0_LCD_EN
button_1__MASK EQU 0x08
button_1__PORT EQU 0
button_1__PRT EQU CYREG_PRT0_PRT
button_1__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
button_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
button_1__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
button_1__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
button_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
button_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
button_1__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
button_1__PS EQU CYREG_PRT0_PS
button_1__SHIFT EQU 3
button_1__SLW EQU CYREG_PRT0_SLW

; button_2
button_2__0__INTTYPE EQU CYREG_PICU0_INTTYPE4
button_2__0__MASK EQU 0x10
button_2__0__PC EQU CYREG_PRT0_PC4
button_2__0__PORT EQU 0
button_2__0__SHIFT EQU 4
button_2__AG EQU CYREG_PRT0_AG
button_2__AMUX EQU CYREG_PRT0_AMUX
button_2__BIE EQU CYREG_PRT0_BIE
button_2__BIT_MASK EQU CYREG_PRT0_BIT_MASK
button_2__BYP EQU CYREG_PRT0_BYP
button_2__CTL EQU CYREG_PRT0_CTL
button_2__DM0 EQU CYREG_PRT0_DM0
button_2__DM1 EQU CYREG_PRT0_DM1
button_2__DM2 EQU CYREG_PRT0_DM2
button_2__DR EQU CYREG_PRT0_DR
button_2__INP_DIS EQU CYREG_PRT0_INP_DIS
button_2__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
button_2__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
button_2__LCD_EN EQU CYREG_PRT0_LCD_EN
button_2__MASK EQU 0x10
button_2__PORT EQU 0
button_2__PRT EQU CYREG_PRT0_PRT
button_2__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
button_2__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
button_2__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
button_2__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
button_2__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
button_2__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
button_2__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
button_2__PS EQU CYREG_PRT0_PS
button_2__SHIFT EQU 4
button_2__SLW EQU CYREG_PRT0_SLW

; button_3
button_3__0__INTTYPE EQU CYREG_PICU0_INTTYPE5
button_3__0__MASK EQU 0x20
button_3__0__PC EQU CYREG_PRT0_PC5
button_3__0__PORT EQU 0
button_3__0__SHIFT EQU 5
button_3__AG EQU CYREG_PRT0_AG
button_3__AMUX EQU CYREG_PRT0_AMUX
button_3__BIE EQU CYREG_PRT0_BIE
button_3__BIT_MASK EQU CYREG_PRT0_BIT_MASK
button_3__BYP EQU CYREG_PRT0_BYP
button_3__CTL EQU CYREG_PRT0_CTL
button_3__DM0 EQU CYREG_PRT0_DM0
button_3__DM1 EQU CYREG_PRT0_DM1
button_3__DM2 EQU CYREG_PRT0_DM2
button_3__DR EQU CYREG_PRT0_DR
button_3__INP_DIS EQU CYREG_PRT0_INP_DIS
button_3__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
button_3__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
button_3__LCD_EN EQU CYREG_PRT0_LCD_EN
button_3__MASK EQU 0x20
button_3__PORT EQU 0
button_3__PRT EQU CYREG_PRT0_PRT
button_3__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
button_3__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
button_3__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
button_3__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
button_3__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
button_3__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
button_3__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
button_3__PS EQU CYREG_PRT0_PS
button_3__SHIFT EQU 5
button_3__SLW EQU CYREG_PRT0_SLW

; button_4
button_4__0__INTTYPE EQU CYREG_PICU3_INTTYPE2
button_4__0__MASK EQU 0x04
button_4__0__PC EQU CYREG_PRT3_PC2
button_4__0__PORT EQU 3
button_4__0__SHIFT EQU 2
button_4__AG EQU CYREG_PRT3_AG
button_4__AMUX EQU CYREG_PRT3_AMUX
button_4__BIE EQU CYREG_PRT3_BIE
button_4__BIT_MASK EQU CYREG_PRT3_BIT_MASK
button_4__BYP EQU CYREG_PRT3_BYP
button_4__CTL EQU CYREG_PRT3_CTL
button_4__DM0 EQU CYREG_PRT3_DM0
button_4__DM1 EQU CYREG_PRT3_DM1
button_4__DM2 EQU CYREG_PRT3_DM2
button_4__DR EQU CYREG_PRT3_DR
button_4__INP_DIS EQU CYREG_PRT3_INP_DIS
button_4__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
button_4__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
button_4__LCD_EN EQU CYREG_PRT3_LCD_EN
button_4__MASK EQU 0x04
button_4__PORT EQU 3
button_4__PRT EQU CYREG_PRT3_PRT
button_4__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
button_4__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
button_4__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
button_4__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
button_4__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
button_4__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
button_4__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
button_4__PS EQU CYREG_PRT3_PS
button_4__SHIFT EQU 2
button_4__SLW EQU CYREG_PRT3_SLW

; TFT_BackLight
TFT_BackLight_PWMHW__CAP0 EQU CYREG_TMR0_CAP0
TFT_BackLight_PWMHW__CAP1 EQU CYREG_TMR0_CAP1
TFT_BackLight_PWMHW__CFG0 EQU CYREG_TMR0_CFG0
TFT_BackLight_PWMHW__CFG1 EQU CYREG_TMR0_CFG1
TFT_BackLight_PWMHW__CFG2 EQU CYREG_TMR0_CFG2
TFT_BackLight_PWMHW__CNT_CMP0 EQU CYREG_TMR0_CNT_CMP0
TFT_BackLight_PWMHW__CNT_CMP1 EQU CYREG_TMR0_CNT_CMP1
TFT_BackLight_PWMHW__PER0 EQU CYREG_TMR0_PER0
TFT_BackLight_PWMHW__PER1 EQU CYREG_TMR0_PER1
TFT_BackLight_PWMHW__PM_ACT_CFG EQU CYREG_PM_ACT_CFG3
TFT_BackLight_PWMHW__PM_ACT_MSK EQU 0x01
TFT_BackLight_PWMHW__PM_STBY_CFG EQU CYREG_PM_STBY_CFG3
TFT_BackLight_PWMHW__PM_STBY_MSK EQU 0x01
TFT_BackLight_PWMHW__RT0 EQU CYREG_TMR0_RT0
TFT_BackLight_PWMHW__RT1 EQU CYREG_TMR0_RT1
TFT_BackLight_PWMHW__SR0 EQU CYREG_TMR0_SR0

; isr_ButtonLeft
isr_ButtonLeft__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
isr_ButtonLeft__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
isr_ButtonLeft__INTC_MASK EQU 0x04
isr_ButtonLeft__INTC_NUMBER EQU 2
isr_ButtonLeft__INTC_PRIOR_NUM EQU 7
isr_ButtonLeft__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_2
isr_ButtonLeft__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
isr_ButtonLeft__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; isr_ButtonRight
isr_ButtonRight__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
isr_ButtonRight__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
isr_ButtonRight__INTC_MASK EQU 0x08
isr_ButtonRight__INTC_NUMBER EQU 3
isr_ButtonRight__INTC_PRIOR_NUM EQU 7
isr_ButtonRight__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_3
isr_ButtonRight__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
isr_ButtonRight__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; Miscellaneous
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 26
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E161069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 26
CYDEV_CHIP_MEMBER_4AA EQU 25
CYDEV_CHIP_MEMBER_4AB EQU 30
CYDEV_CHIP_MEMBER_4AC EQU 14
CYDEV_CHIP_MEMBER_4AD EQU 15
CYDEV_CHIP_MEMBER_4AE EQU 16
CYDEV_CHIP_MEMBER_4D EQU 20
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 27
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 24
CYDEV_CHIP_MEMBER_4I EQU 32
CYDEV_CHIP_MEMBER_4J EQU 21
CYDEV_CHIP_MEMBER_4K EQU 22
CYDEV_CHIP_MEMBER_4L EQU 31
CYDEV_CHIP_MEMBER_4M EQU 29
CYDEV_CHIP_MEMBER_4N EQU 11
CYDEV_CHIP_MEMBER_4O EQU 8
CYDEV_CHIP_MEMBER_4P EQU 28
CYDEV_CHIP_MEMBER_4Q EQU 17
CYDEV_CHIP_MEMBER_4R EQU 9
CYDEV_CHIP_MEMBER_4S EQU 12
CYDEV_CHIP_MEMBER_4T EQU 10
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 23
CYDEV_CHIP_MEMBER_4W EQU 13
CYDEV_CHIP_MEMBER_4X EQU 7
CYDEV_CHIP_MEMBER_4Y EQU 18
CYDEV_CHIP_MEMBER_4Z EQU 19
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 33
CYDEV_CHIP_MEMBER_FM3 EQU 37
CYDEV_CHIP_MEMBER_FM4 EQU 38
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 34
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 35
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 36
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4AA_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AB_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AC_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AD_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AE_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4W_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4X_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Y_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Z_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_Disable
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x0000000F
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END