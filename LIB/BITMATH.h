
#ifndef RCC_BITMATH_H
#define RCC_BITMATH_H


/*Bit-Math macros*/
#define SET_BIT(REG , BIT)     REG |= 1<<BIT
#define CLR_BIT(REG , BIT)     REG &= ~(1<<BIT)
#define TOG_BIT(REG , BIT)     REG ^= 1<<BIT
#define GET_BIT(REG , BIT)     ((REG >> BIT) & 1)

#define NULL_PTR_FUNCTION ((void *)0)

#define CONCATE(x,y)        x##y

#endif
