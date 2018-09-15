#include <stdio.h>
#include <stdlib.h>

int sumAllElements(int *inputArray, int sizeOfArray)
{
  int sum = 0;

  for (int i = 0; i < sizeOfArray; i++)
  {
    sum += inputArray[i];
  }
  printf("%d", sum);
  return sum;
}