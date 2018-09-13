#include <stdio.h>
#include <string.h>

void listAllIndex(char *array)
{

  for (int i = 0; i < strlen(array); i++)
  {
    if (array[i] == 'i')
    {

      printf("index: %d\n", i);
    }
  }
  return;
}