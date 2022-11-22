/*
 * main.c
 *
 *  Created on: Nov 18, 2022
 *      Author: hsuankai.chang
 */

#include <stdio.h>

int main()
{
	float number1, number2, number3;
	float average;

	printf("Enter three number: ");
	fflush(stdout);
	scanf("%f %f %f", &number1, &number2, &number3);


	average = (number1 + number2 + number3) / 3;
	printf("\nAverage is: %f\n", average);

	printf("Press enter key to exit the application");
	while(getchar() != '\n')
	{

	}
	getchar();

	return 0;
}
