/*
 * main.c
 *
 *  Created on: Nov 21, 2022
 *      Author: hsuankai.chang
 */

#include <stdio.h>
#include <stdint.h>

// uint8_t const data = 10; put it here is wrong, program will stuck or no effect

int main(void)
{
	uint8_t const data = 10;

	printf("Value = %u\n", data);

	uint8_t *ptr = (uint8_t*)&data;

	*ptr = 50;

	printf("Value = %u\n", data);

	getchar();

	return 0;
}
