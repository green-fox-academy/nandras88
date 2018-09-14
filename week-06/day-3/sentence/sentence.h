#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sentence(char *inputArray)
{
  int counter = 1;

  for (int i = 0; i < strlen(inputArray); i++)
  {
    if (inputArray[i] == ' ')
    {
      counter++;
    }
  }

  printf("number: %d\n", counter);

  char **resultArray = (char **)malloc(sizeof(char *) * counter);
  resultArray[0] = strtok(inputArray, " ");

  for (int i = 1; i < counter; i++)
  {
    resultArray[i] = strtok(NULL, " ");
  }

  for (int j = 0; j < counter; j++)
  {
    printf("The elements is: %s\n", resultArray[j]);
  }
}
