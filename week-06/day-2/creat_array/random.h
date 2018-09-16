#include <stdio.h>
#include <stdlib.h>

void randomNumber(int size, int *inputArray)
{
    for (int i = 0; i < size; i++)
    {
        inputArray[i] = rand();
    }

    for (int k = 0; k < size; k++)
    {
        printf("%d\n", inputArray[k]);
    }
}