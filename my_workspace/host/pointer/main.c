#include <stdio.h>

int main(void){

	char data = 100;
	printf("value of data is: %d\n", data);
	printf("Address of the variable data is: %p\n", &data);

	char* pAddress = &data;
	char value = *pAddress;
	printf("read value is: %d\n", value);

	*pAddress = 65;
	printf("the value of data is %d\n", data);

	return 0;
}
