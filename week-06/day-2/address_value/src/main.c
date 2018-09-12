#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Print out the addresses with and without pointer
//print out the values with and without pointer

int main()
{
	int number = 2017;
	float Pi = 3.14;
	char letter = 't';

	int *p_number = &number;
	float *pi_number = &Pi;
	char *p_letter = &letter;

	printf("The value without pointer is: %d, %.2f, %c \n The value with pointer is: %d, %.2f, %c \n", number, Pi, letter, *p_number, *pi_number, *p_letter);
	printf("The address without pointer is: %p, %p, %p \n The address with pointer is: %p, %p, %p ", &number, &Pi, &letter, p_number, pi_number, p_letter);
	return 0;
}