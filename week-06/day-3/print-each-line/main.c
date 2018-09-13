#include <stdio.h>
#include <string.h>

// Write a program that opens a file called "my-file.txt", then prints
// each of lines form the file.
// You have to create the file, you can use C-programming but it is not mandatory

int main()
{

  FILE *myFile;
  myFile = fopen("program.txt", "w");
  fprintf(myFile, "Hello , I am the first file what Andrew created\nYou know how he is doing");
  fclose(myFile);

  FILE *myText;
  myText = fopen("program.txt", "r");
  char lineSet[200];

  while (!feof(myText))
  {
    fgets(lineSet, 200, myText);
    puts(lineSet);
  }
  fclose(myText);

  return 0;
}