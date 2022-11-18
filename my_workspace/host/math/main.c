/*
 * main.c
 *
 *  Created on: Nov 17, 2022
 *      Author: hsuankai.chang
 */

#include <stdio.h>
#include "math.h"

int main(void)
{
	printf("Add %#x\n", math_add(0X0FFF1111, 0X0FFF1111));
	printf("Multiply %#I64x\n", math_mult(0X0FFF1111, 0X0FFF1111));
	printf("Multiply %0.2f\n", math_div(100, 8));

	return 0;
}
