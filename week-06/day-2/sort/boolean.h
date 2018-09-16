#include <stdio.h>
#include <stdlib.h>

int *isItBoolean(int *inputArray, int sizeOfArray)
{

    int right = 0;
    int notRight = 0;
    int boolean = 0;

    for (int i = 0; i < sizeOfArray; i++)
    {
        if (inputArray[i] < inputArray[i + 1])
            right++;
        if (inputArray[i] > inputArray[i + 1])
            notRight++;
    }

    if (right > 0 && notRight == 1)
        boolean += 1;

    return &boolean;
}