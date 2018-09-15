#include <stdio.h>
#include <stdlib.h>

void doubleItem(int *inputArray)
{

  for (int i = 0; i < 5; i++)
  {
    inputArray[i] = inputArray[i] * 2;
  }
  printf("%d\n", inputArray[2]);
}