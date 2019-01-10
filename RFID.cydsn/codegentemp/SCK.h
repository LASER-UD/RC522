/*******************************************************************************
* File Name: SCK.h  
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

#if !defined(CY_PINS_SCK_H) /* Pins SCK_H */
#define CY_PINS_SCK_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "SCK_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 SCK__PORT == 15 && ((SCK__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    SCK_Write(uint8 value);
void    SCK_SetDriveMode(uint8 mode);
uint8   SCK_ReadDataReg(void);
uint8   SCK_Read(void);
void    SCK_SetInterruptMode(uint16 position, uint16 mode);
uint8   SCK_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the SCK_SetDriveMode() function.
     *  @{
     */
        #define SCK_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define SCK_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define SCK_DM_RES_UP          PIN_DM_RES_UP
        #define SCK_DM_RES_DWN         PIN_DM_RES_DWN
        #define SCK_DM_OD_LO           PIN_DM_OD_LO
        #define SCK_DM_OD_HI           PIN_DM_OD_HI
        #define SCK_DM_STRONG          PIN_DM_STRONG
        #define SCK_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define SCK_MASK               SCK__MASK
#define SCK_SHIFT              SCK__SHIFT
#define SCK_WIDTH              1u

/* Interrupt constants */
#if defined(SCK__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in SCK_SetInterruptMode() function.
     *  @{
     */
        #define SCK_INTR_NONE      (uint16)(0x0000u)
        #define SCK_INTR_RISING    (uint16)(0x0001u)
        #define SCK_INTR_FALLING   (uint16)(0x0002u)
        #define SCK_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define SCK_INTR_MASK      (0x01u) 
#endif /* (SCK__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define SCK_PS                     (* (reg8 *) SCK__PS)
/* Data Register */
#define SCK_DR                     (* (reg8 *) SCK__DR)
/* Port Number */
#define SCK_PRT_NUM                (* (reg8 *) SCK__PRT) 
/* Connect to Analog Globals */                                                  
#define SCK_AG                     (* (reg8 *) SCK__AG)                       
/* Analog MUX bux enable */
#define SCK_AMUX                   (* (reg8 *) SCK__AMUX) 
/* Bidirectional Enable */                                                        
#define SCK_BIE                    (* (reg8 *) SCK__BIE)
/* Bit-mask for Aliased Register Access */
#define SCK_BIT_MASK               (* (reg8 *) SCK__BIT_MASK)
/* Bypass Enable */
#define SCK_BYP                    (* (reg8 *) SCK__BYP)
/* Port wide control signals */                                                   
#define SCK_CTL                    (* (reg8 *) SCK__CTL)
/* Drive Modes */
#define SCK_DM0                    (* (reg8 *) SCK__DM0) 
#define SCK_DM1                    (* (reg8 *) SCK__DM1)
#define SCK_DM2                    (* (reg8 *) SCK__DM2) 
/* Input Buffer Disable Override */
#define SCK_INP_DIS                (* (reg8 *) SCK__INP_DIS)
/* LCD Common or Segment Drive */
#define SCK_LCD_COM_SEG            (* (reg8 *) SCK__LCD_COM_SEG)
/* Enable Segment LCD */
#define SCK_LCD_EN                 (* (reg8 *) SCK__LCD_EN)
/* Slew Rate Control */
#define SCK_SLW                    (* (reg8 *) SCK__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define SCK_PRTDSI__CAPS_SEL       (* (reg8 *) SCK__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define SCK_PRTDSI__DBL_SYNC_IN    (* (reg8 *) SCK__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define SCK_PRTDSI__OE_SEL0        (* (reg8 *) SCK__PRTDSI__OE_SEL0) 
#define SCK_PRTDSI__OE_SEL1        (* (reg8 *) SCK__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define SCK_PRTDSI__OUT_SEL0       (* (reg8 *) SCK__PRTDSI__OUT_SEL0) 
#define SCK_PRTDSI__OUT_SEL1       (* (reg8 *) SCK__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define SCK_PRTDSI__SYNC_OUT       (* (reg8 *) SCK__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(SCK__SIO_CFG)
    #define SCK_SIO_HYST_EN        (* (reg8 *) SCK__SIO_HYST_EN)
    #define SCK_SIO_REG_HIFREQ     (* (reg8 *) SCK__SIO_REG_HIFREQ)
    #define SCK_SIO_CFG            (* (reg8 *) SCK__SIO_CFG)
    #define SCK_SIO_DIFF           (* (reg8 *) SCK__SIO_DIFF)
#endif /* (SCK__SIO_CFG) */

/* Interrupt Registers */
#if defined(SCK__INTSTAT)
    #define SCK_INTSTAT            (* (reg8 *) SCK__INTSTAT)
    #define SCK_SNAP               (* (reg8 *) SCK__SNAP)
    
	#define SCK_0_INTTYPE_REG 		(* (reg8 *) SCK__0__INTTYPE)
#endif /* (SCK__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_SCK_H */


/* [] END OF FILE */
