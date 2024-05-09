
/*
******************************************************************************
* @file     : main.c														 *
* @Version  : 1.0.0															 *
* @Auther   : Mohamed diaa										 			 *
* @Detailes : the main application								     		 *
******************************************************************************
*/


/***************************** Includes Section *****************************/

#include "../LIB/BITMATH.h"
#include "../LIB/STDTYPE.h"
#include "../MCAL/RCC/RCC_interface.h"
#include "../MCAL/GPIO/GPIO_interface.h"




/***************************** Function protype Section *****************************/


/***************************** Globale variable Section *****************************/



/***************************** main code Section *****************************/

int main()
{
    MRCC_voidInitSysClock();
    MRCC_voidEnablePeripheral(RCC_APB2, 2);
    MGPIO_voidSetPinDirection(MGPIO_GPIOA,MGPIO_PIN1,Output_PP_2MHZ);
    MGPIO_voidSetPinValue(MGPIO_GPIOA,MGPIO_PIN1,High);
    while(1)
    {
        
    }
    return 0;
}


/*
*******************************************************************************
ID		User          Date            Detailes
*******************************************************************************
1		Mohamed diaa	17Mar2024 		Task_11 mange the main file

*/
