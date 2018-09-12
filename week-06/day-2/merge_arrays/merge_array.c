#include <stdio.h>
#include <stdlib.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// print it the array in descending order
// delete the arrays after you don't use them

int main()
{
  int *pointer = NULL;
  pointer = (int *)calloc(20, sizeof(int));

  int *newArray;
  newArray = (int *)calloc(10, sizeof(int));

  for (int i = 0; i < 20; i++)
  {
    if (i % 2 != 0)
    {
      pointer[i] = i;
    }
    else
    {
      newArray[i] = i;
    }
  }

  for (int j = 0; j < 20; j++)
  {
    if (j % 2 != 0)
    {
      pointer[j];
    }
    else
    {
      pointer[j] = newArray[j];
    }
  }

  free(newArray);
  free(pointer);

  return 0;
}