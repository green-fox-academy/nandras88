#include <stdio.h>
#include <stdlib.h>

int *creatArray(int sizeOfArray)
{

    int *createdArray = malloc(sizeOfArray * sizeof(int));

    return createdArray;
}