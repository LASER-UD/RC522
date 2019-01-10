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
#include "RC522.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
        //Debe salir 91H 
        LCD_Position(0,0);
        LCD_PrintNumber(PCD_ReadRegister(VersionReg));
        CyDelay(2000);
        LCD_Position(0,0);
        LCD_PrintString("      ");
        CyDelay(2000);
        //PCD_WriteRegister(TxModeReg,0x0);        
    }
}

/* [] END OF FILE */
