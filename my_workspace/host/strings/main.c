/*
 * main.c
 *
 *  Created on: Nov 22, 2022
 *      Author: hsuankai.chang
 */


#include <stdio.h>

int main()
{
//	char name[30];
//	printf("Enter your name :");
//	fflush(stdout);
//	scanf("%s", name);
//
//	printf("Hi, %s\n", name);

	char name[30];
	printf("Enter your full name: ");
	fflush(stdout);
	scanf("%[^\n]s", name);
	printf("Your name is : %s\n", name);

	return 0;
}
