#include <stdio.h>
#include <stdlib.h>

void doubleItem(int *inputArray)
{

  for (int i = 0; i < sizeof(inputArray) / sizeof(int); i++)
  {
    inputArray[i] = inputArray[i] * 2;
  }

  printf("The element value is %d", inputArray[1]);
}