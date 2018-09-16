#include <stdio.h>
#include <stdlib.h>

int sort(int *inputArray, int sizeOfArray, int boolean)
{
  if (boolean == 1)
  {
    printf("This is already sorted");
  }
  else
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
  }
  for (int l = 0; l < sizeOfArray; l++)
  {
    printf("%d\n", inputArray[l]);
  }

  return *inputArray;
}
