#include <stdio.h>

// print the memory address of the variable

int main()
{
	int num = 1234;
	int *pnum = &num;
	printf("Value: %d\nAdress: %p\nPointer value: %d\nPointer adress: %p\n\n", num, &num, *pnum, pnum);
	return 0;
}