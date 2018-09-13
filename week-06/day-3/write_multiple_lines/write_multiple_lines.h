#include <stdio.h>
#include <string.h>

void *writeMultipleLines(char *path, char *word, int counter)
{
  FILE *pFile;

  pFile = fopen("myfile.txt", "w");
  for (int n = 0; n < counter; n++)
  {
    puts(word);
    fprintf(pFile, "%s\n", word);
  }
  fclose(pFile);

  return 0;
}