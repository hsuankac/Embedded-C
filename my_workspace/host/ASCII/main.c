/*
 * main.c
 *
 *  Created on: Nov 18, 2022
 *      Author: hsuankai.chang
 */

#include <stdio.h>

int main()
{
	char c1, c2, c3, c4, c5, c6;
	printf("Enter any 6 characters of your choice : ");
	scanf("%c %c %c %c %c %c", &c1, &c2, &c3, &c4, &c5, &c6);

	printf("ASCII code : %u, %u, %u, %u, %u, %u", c1, c2, c3, c4, c5, c6);

	printf("\nPress enter key to exit the application");
	while(getchar() != '\n')
	{

	}
	getchar();
}