#include <stdio.h>
#include <string.h>

int countLines(char *inputParam)
{
  FILE *in_file;
  char line[1000];

  in_file = fopen(inputParam, "r");
  if (in_file == NULL)
  {
    return 0;
  }

  int counter = 0; /*Number of lines*/

  while (fgets(line, sizeof(line), in_file) != NULL)
  {
    counter++;
  }

  return counter;
}
