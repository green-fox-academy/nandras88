#include <stdio.h>

// print the value of number using the "number_pointer"

int main()
{
	int number = 1234;
	int *number_pointer = &number;
	printf("The value of the number %d is: %d\n", number, *number_pointer);
	return 0;
}