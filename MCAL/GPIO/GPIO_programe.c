
/*
******************************************************************************
* @file     : GPIO.c														 *
* @Version  : 1.0.1															 *
* @Auther   : Mohamed diaa													 *
* @Detailes : the functions of GPIO											 *
******************************************************************************
*/


/***************************** Includes Section *****************************/
#include "../../LIB/BITMATH.h"
#include "../../LIB/STDTYPE.h"

#include "GPIO_interface.h"
#include "GPIO_privet.h"
#include "GPIO_config.h"

/***************************** Code Section *********************************/
void MGPIO_voidSetPinDirection(u8 Copy_Port,u8 Copy_Pin,u8 Copy_Mode)
{
	if(Copy_Port<=2)
	{
		if(Copy_Pin>=16)
		{
			switch(Copy_Port)
			{
				case MGPIO_GPIOA : 
									if(Copy_Pin <=7)
									{
										GPIOA_CRL &= ~((0b1111)<<(Copy_Pin*4));
										GPIOA_CRL |= ((Copy_Mode)<<(Copy_Pin*4));
										if(Copy_Mode == Input_PullUp)
										{
											SET_BIT(GPIOA_ODR,Copy_Pin);
										}
										else if(Copy_Mode == Input_PullDown)
										{
											CLR_BIT(GPIOA_ODR,Copy_Pin);
										}
									
									}
									else if (Copy_Pin <= 15)
									{
										if(Copy_Mode == Input_PullUp)
										{
											SET_BIT(GPIOA_ODR,Copy_Pin);
										}
										else if(Copy_Mode == Input_PullDown)
										{
											CLR_BIT(GPIOA_ODR,Copy_Pin);
										}
										Copy_Pin  -= 8;
										GPIOA_CRH &= ~((0b1111)<<(Copy_Pin*4));
									   GPIOA_CRH |= ((Copy_Mode)<<(Copy_Pin*4));
									}
									break;
									
									
				case MGPIO_GPIOB : 
									if(Copy_Pin <=7)
									{
										GPIOB_CRL &= ~((0b1111)<<(Copy_Pin*4));
										GPIOB_CRL |= ((Copy_Mode)<<(Copy_Pin*4));
										if(Copy_Mode == Input_PullUp)
										{
											SET_BIT(GPIOB_ODR,Copy_Pin);
										}
										else if(Copy_Mode == Input_PullDown)
										{
											CLR_BIT(GPIOB_ODR,Copy_Pin);
										}
									
									}
									else if (Copy_Pin <= 15)
									{
										if(Copy_Mode == Input_PullUp)
										{
											SET_BIT(GPIOB_ODR,Copy_Pin);
										}
										else if(Copy_Mode == Input_PullDown)
										{
											CLR_BIT(GPIOB_ODR,Copy_Pin);
										}
										Copy_Pin  -= 8;
										GPIOB_CRH &= ~((0b1111)<<(Copy_Pin*4));
									   GPIOB_CRH |= ((Copy_Mode)<<(Copy_Pin*4));
									}
									break;
									
				
				case MGPIO_GPIOC : 
									if(Copy_Pin <=7)
									{
										GPIOC_CRL &= ~((0b1111)<<(Copy_Pin*4));
										GPIOC_CRL |= ((Copy_Mode)<<(Copy_Pin*4));
									}
									else if (Copy_Pin <= 15)
									{
										Copy_Pin  -= 8;
										GPIOC_CRH &= ~((0b1111)<<(Copy_Pin*4));
									}   GPIOC_CRH |= ((Copy_Mode)<<(Copy_Pin*4));
									
									break;
			}
		}
		else
		{
			/*error*/
		}
	}
	else
	{
		/*error*/
	}
}

void MGPIO_voidSetPinValue(u8 Copy_Port,u8 Copy_Pin,u8 Copy_Value)
{
	if(Copy_Port<=2)
	{
		if(Copy_Pin>=16)
		{
			switch(Copy_Port)
			{
				case MGPIO_GPIOA :
									if(Copy_Value == High) 
									{SET_BIT(GPIOA_BSRR,High);}
									else if (Copy_Value == Low)
									{SET_BIT(GPIOA_BRR,High);}
									break;
									
				case MGPIO_GPIOB :	if(Copy_Value == High) 
				                    {SET_BIT(GPIOB_BSRR,High);}
				                    else if (Copy_Value == Low)
				                    {SET_BIT(GPIOB_BRR,High);}
				                    break;
				
				case MGPIO_GPIOC :	if(Copy_Value == High) 
				                    {SET_BIT(GPIOC_BSRR,High);}
				                    else if (Copy_Value == Low)
				                    {SET_BIT(GPIOC_BRR,High);}
				                    break;
							
			}
		}
		else
		{
			/*error*/
		}
	}
	else
	{
		/*error*/
	}
}

void MGPIO_voidSetPortValue(u8 Copy_Port,u8 Copy_Value)
{
	if(Copy_Port<=2)
	{
		switch(Copy_Port)
		{
			case MGPIO_GPIOA:
								if (Copy_Value == High) {GPIOA_ODR =0xFFFFFFFF;}
								else if (Copy_Value == Low) {GPIOA_ODR =0x00000000;}
								break;
								 
			case MGPIO_GPIOB:	if (Copy_Value == High) {GPIOB_ODR =0xFFFFFFFF;}
								else if (Copy_Value == Low) {GPIOB_ODR =0x00000000;}
								break;
			
			case MGPIO_GPIOC:	if (Copy_Value == High) {GPIOC_ODR =0xFFFFFFFF;}
								else if (Copy_Value == Low) {GPIOC_ODR =0x00000000;}
								break;
		}
	}
	else
	{
		/*error*/
	}
}

u8 	 MGPIO_u8GetPinValue(u8 Copy_Port,u8 Copy_Pin)
{
	if(Copy_Port<=2)
	{
		if(Copy_Pin>=16)
		{
			switch(Copy_Port)
			{
				case MGPIO_GPIOA : return GET_BIT(GPIOA_IDR,Copy_Pin);
	
				case MGPIO_GPIOB :	return GET_BIT(GPIOB_IDR,Copy_Pin);

				case MGPIO_GPIOC :	return GET_BIT(GPIOC_IDR,Copy_Pin);
			
			}
		}
		else
		{
			/*error*/
		}
	}
	else
	{
		/*error*/
	}
}

/*
*******************************************************************************
ID		User          Date            Detailes
*******************************************************************************
1		Mohamed diaa	17Mar2024 		Task_2 the main functions of GPIO
2		Mohamed diaa	28Mar2024		Task_10 remove assert function and add /error/ comment

*/