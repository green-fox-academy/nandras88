#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char **inputArray)
{

  char *correctedArray[4];

  for (int i = 3 - 1; i >= 0; i--)
  {
    for (int j = 0; j <= 3; j++)
      correctedArray[j] = inputArray[i];
    printf("%s\n", correctedArray[i]);
  }
}
