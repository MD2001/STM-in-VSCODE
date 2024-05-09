#ifndef LCD_CONFIG_H
#define LCD_CONFIG_H


/********************************* PINS section ******************************************/

/*  modes
    1- LCD_8_BIT MODE   (defult)
    2- LCD_4_BIT MODE (the same fumctionalite but use less pins)  
*/
#define LCD_MODE    LCD_8_BIT

/**the direction of cursor
 *  options 
 *     1-   ID_left     (defult)
 *     2-   ID_right  
 * 
*/
#define ID       ID_left

/**Enable/Disaple the LCD
 *       1- SH_Enable   (defult)
 *       2- SH_Disable  
 * 
*/
#define SH       SH_Enable
/**
 * Set Display 
 * option 
 *  1- ON
 *  2- OFF
*/
#define D     ON
/**
 * Set the blink option
 * option 
 *  1- ON
 *  2- OFF
*/
#define B     ON
/**
 * set the Cursor
 * option 
 *  1- ON
 *  2- OFF
*/
#define C     ON

/**
 * use to set the number of line 
 * options
 *      1- one_LINE     
 *      2- two_LINE         (defult)
*/
#define N   two_LINE

/**use to set the font
 * options
 *   1- Font5x11 
 *   2- Font5x8  (defult)
 * 
*/
#define F      Font5x8


/**the direction of pins you have 3 options only not all GPIO configuration avilable
 *        1-  Output_PP_10MHZ		
 *        2-  Output_PP_2MHZ	(defult)
 *        3-  Output_PP_50MHZ		
 * 
*/
#define PINS_MODE       Output_PP_2MHZ


    #if LCD_MODE == LCD_8_BIT


        #define RS       MGPIO_PIN0,MGPIO_GPIOA                 // PIN0 in port A
        #define RW       MGPIO_PIN1,MGPIO_GPIOA                 // PIN1 in port A                 
        #define EN       MGPIO_PIN2,MGPIO_GPIOA                 // PIN2 in port A

        /***********    data PIN       *************/

        #define DB0      MGPIO_PIN3,MGPIO_GPIOA                 // PIN3  in port A
        #define DB1      MGPIO_PIN4,MGPIO_GPIOA                 // PIN4  in port A
        #define DB2      MGPIO_PIN5,MGPIO_GPIOA                 // PIN5  in port A
        #define DB3      MGPIO_PIN6,MGPIO_GPIOA                 // PIN6  in port A
        #define DB4      MGPIO_PIN7,MGPIO_GPIOA                 // PIN7  in port A
        #define DB5      MGPIO_PIN8,MGPIO_GPIOA                 // PIN8  in port A
        #define DB6      MGPIO_PIN9,MGPIO_GPIOA                 // PIN9  in port A
        #define DB7      MGPIO_PIN10,MGPIO_GPIOA                // PIN10 in port A  

        #define DL       1

    #elif LCD_MODE == LCD_4_BIT

        #define RS       MGPIO_PIN0,MGPIO_GPIOA					// PIN0 in port A
        #define RW       MGPIO_PIN1,MGPIO_GPIOA                 // PIN1 in port A 
        #define EN       MGPIO_PIN2,MGPIO_GPIOA                 // PIN2 in port A
                                                                
        /***********    data PIN       *************/           
                                                                
        #define DB0      MGPIO_PIN3,MGPIO_GPIOA                 // PIN3 in port A
        #define DB1      MGPIO_PIN4,MGPIO_GPIOA                 // PIN4 in port A
        #define DB2      MGPIO_PIN5,MGPIO_GPIOA                 // PIN5 in port A
        #define DB3      MGPIO_PIN6,MGPIO_GPIOA                 // PIN6 in port A

        #define DL       0

    #else
        #error "you choise wrong configration"

    #endif

#endif