#include <stdio.h>
#include <stdlib.h>

int sort(int *inputArray, int sizeOfArray)
{

  int temporary = 0;

  for (int j = 0; j < sizeOfArray; j++)
  {
    for (int k = 0; k < sizeOfArray - 1; k++)
    {
      if (inputArray[k] > inputArray[k + 1])
      {
        temporary = inputArray[k];
        inputArray[k] = inputArray[k + 1];
        inputArray[k + 1] = temporary;
      }
    }
  }
  return *inputArray;
}
