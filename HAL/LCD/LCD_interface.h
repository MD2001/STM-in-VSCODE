#ifndef LCD_INTERFACE_H
#define LCD_INTERFACE_H

  #if LCD_MODE == LCD_8_BIT 
  /* use this function to set the LCD to 8-bit mode  */
    void HLCD_voidInit(void); 
  /*write function that use to send data to LCD */
    void HLCD_voidSendData(u8 Copy_data);
  /*to chick if the right pins get config in right way*/
  void HLCD_voidInitPins(void);
 /*write function that use to send Command to LCD */
    void HLCD_voidSendCommand(u8 Copy_data);

  #elif LCD_MODE == LCD_4_BIT

  #else
   #error "you choise wrong configration"

  #endif

#endif

/*
*******************************************************************************
ID		User          Date            Detailes
*******************************************************************************
1		    Mohamed diaa	  07MAY2024 	  	Task_42 setup the files for LCD Driver
2       Mohamed diaa    08MAY2024       Task_43 creat functions  { init }
*/