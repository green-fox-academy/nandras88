#include <stdio.h>
#include <string.h>

// Open a file called "my-file.txt"
// Write your name in it as a single line

int main()
{

  FILE *myFile = fopen("my-file.txt", "w");
  fprintf(myFile, "%s", "Andrew");
  fclose(myFile);

  return 0;
}