/*
 * main.c
 *
 *  Created on: Nov 21, 2022
 *      Author: hsuankai.chang
 */


#include <stdint.h>
#include <stdio.h>

struct carModel
{
	uint32_t carNumber;
	uint32_t carPrice;
	uint16_t carMaxSpeed;
	float carWeight;
};

int main(void)
{
	struct carModel carBMW = {2021, 15000, 220, 1330};

	printf("Sizeof of struct carModel is %u\n", sizeof(struct carModel));

//	printf("Details of car BMW is as follows\n");
//	printf("Car number = %u\n", carBMW.carNumber);
//	printf("Car price = %u\n", carBMW.carPrice);
//	printf("Car max speed = %u\n", carBMW.carMaxSpeed);
//	printf("Car weight = %f\n", carBMW.carWeight);
	getchar();

	return 0;
}