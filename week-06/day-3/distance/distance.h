#include <string.h>

int distance(char *inputArray)
{
  int a;
  int b;

  for (int i = 0; i < strlen(inputArray); i++)
  {
    if (inputArray[i] == 's')
    {
      a = i;
    }
  }

  for (int j = strlen(inputArray); j >= 0; j--)
  {
    if (inputArray[j] == 's')
    {
      b = j;
    }
  }
  return a - b;
}