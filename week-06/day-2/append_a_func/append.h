#include <stdio.h>
#include <stdlib.h>

char *appendA(char *input)
{

  char str2[] = "a";
  int i;
  int j;
  i = 0;
  while (input[i] != '\0')
  {
    i++;
  }
  j = 0;
  while (str2[j] != '\0')
  {
    input[i] = str2[j];
    j++;
    i++;
  }

  return input;
}
