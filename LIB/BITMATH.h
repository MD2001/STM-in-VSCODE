
#ifndef RCC_BITMATH_H
#define RCC_BITMATH_H


#define SET_BIT(reg,bit)	((1<<bit)|reg)
#define CLR_BIT(reg,bit)	((~(1<<bit))&reg)
#define GET_BIT(reg,bit)	((reg<<bit)&1)

#define NULL_PTR_FUNCTION ((void *)0)

#endif