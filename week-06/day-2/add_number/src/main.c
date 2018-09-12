#include <stdio.h>
#include <stdlib.h>

//Add two numbers using pointers

int main()
{
	int a = 20;
	int b = 17;
	int *p_apointer = &a;
	int *p_bpointer = &b;
	int sum = *p_apointer + *p_bpointer;

	printf("The result of two numbers with pointer is: %d ", sum);

	return 0;
}