/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

void delay(void)
{
	for(uint32_t i = 0; i < 300000; i++);
}


int main(void)
{
	// peripheral register address
	uint32_t volatile *const pGPIODModeReg = (uint32_t*)(0x40020C00);
	uint32_t volatile *const pInputDataReg = (uint32_t*)(0x40020C00+0x10);
	uint32_t volatile *const pOutputDataReg = (uint32_t*)(0x40020C00+0x14);
	uint32_t volatile *const pClockCtrlReg = (uint32_t*)(0x40023800+0x30);
	uint32_t volatile *const pPullupDownReg = (uint32_t*)(0x40020C00+0x0C);

	//1.enable the peripheral clock of GPIOD peripheral
	*pClockCtrlReg |= (1 << 3);

	//2.configure PD0, PD1, PD2, PD3 as output (rows)
	*pGPIODModeReg &= ~(0xFF);  //clear
	*pGPIODModeReg |= 0x55;		//set

	//3.configure PD8, PD9, PD10, PD11 as input (columns)
	*pGPIODModeReg &= ~(0xFF << 16);

	//4.enable internal pull-up resistors for PD8, PD9, PD10, PD11
	*pPullupDownReg &= ~(0xFF << 16);
	*pPullupDownReg |= (0x55 << 16);

	while(1)
	{

		// make all rows HIGH
		*pOutputDataReg |= 0x0F;

		// make R1 low(PD0)
		*pOutputDataReg &= ~(1 << 0);

		// scan the columns
		// check C1(PD8) low or high
		if(!(*pInputDataReg & (1 << 8))){
			// key is pressed
			delay();
			printf("1\n");
		}
		// check C2(PD9) low or high
		if(!(*pInputDataReg & (1 << 9))){
			// key is pressed
			delay();
			printf("2\n");
		}
		// check C3(PD10) low or high
		if(!(*pInputDataReg & (1 << 10))){
			// key is pressed
			delay();
			printf("3\n");
		}
		// check C4(PD11) low or high
		if(!(*pInputDataReg & (1 << 11))){
			// key is pressed
			delay();
			printf("A\n");
		}

		// make all rows HIGH
		*pOutputDataReg |= 0x0F;

		// make R2 low(PD0)
		*pOutputDataReg &= ~(1 << 1);

		// scan the columns
		// check C1(PD8) low or high
		if(!(*pInputDataReg & (1 << 8))){
			// key is pressed
			delay();
			printf("4\n");
		}
		// check C2(PD9) low or high
		if(!(*pInputDataReg & (1 << 9))){
			// key is pressed
			delay();
			printf("5\n");
		}
		// check C3(PD10) low or high
		if(!(*pInputDataReg & (1 << 10))){
			// key is pressed
			delay();
			printf("6\n");
		}
		// check C4(PD11) low or high
		if(!(*pInputDataReg & (1 << 11))){
			// key is pressed
			delay();
			printf("B\n");
		}

		// make all rows HIGH
		*pOutputDataReg |= 0x0F;

		// make R3 low(PD0)
		*pOutputDataReg &= ~(1 << 2);

		// scan the columns
		// check C1(PD8) low or high
		if(!(*pInputDataReg & (1 << 8))){
			// key is pressed
			delay();
			printf("7\n");
		}
		// check C2(PD9) low or high
		if(!(*pInputDataReg & (1 << 9))){
			// key is pressed
			delay();
			printf("8\n");
		}
		// check C3(PD10) low or high
		if(!(*pInputDataReg & (1 << 10))){
			// key is pressed
			delay();
			printf("9\n");
		}
		// check C4(PD11) low or high
		if(!(*pInputDataReg & (1 << 11))){
			// key is pressed
			delay();
			printf("C\n");
		}

		// make all rows HIGH
		*pOutputDataReg |= 0x0F;

		// make R4 low(PD0)
		*pOutputDataReg &= ~(1 << 3);

		// scan the columns
		// check C1(PD8) low or high
		if(!(*pInputDataReg & (1 << 8))){
			// key is pressed
			delay();
			printf("*\n");
		}
		// check C2(PD9) low or high
		if(!(*pInputDataReg & (1 << 9))){
			// key is pressed
			delay();
			printf("0\n");
		}
		// check C3(PD10) low or high
		if(!(*pInputDataReg & (1 << 10))){
			// key is pressed
			delay();
			printf("#\n");
		}
		// check C4(PD11) low or high
		if(!(*pInputDataReg & (1 << 11))){
			// key is pressed
			delay();
			printf("D\n");
		}
	}
    /* Loop forever */
	for(;;);
}
