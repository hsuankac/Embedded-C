/*
 * main.c
 *
 *  Created on: Nov 17, 2022
 *      Author: hsuankai.chang
 */
#include <stdio.h>

int main()
{
	unsigned char a = (unsigned char) (0x0087 + 0xFF00);
	float b = (float)80 / 3;

	printf("a = %#x, b = %f", a, b);

	return 0;
}

