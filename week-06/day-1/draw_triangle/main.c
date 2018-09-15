#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Write a program that reads a number from the standard input, then draws a
// triangle like this:
//
// *
// **
// ***
// ****
//
// The triangle should have as many lines as the number was

int main()
{

  char star = '*';
  int lineCount;
  printf("Please add me a lineCount\n");
  scanf("%d", &lineCount);
  int starcounter;

  for (int j = 0; j < lineCount; j++)
  {
    starcounter = j;
    for (int i = 0; i <= starcounter; i++)
    {
      printf("%c", star);
    }
    printf("\n");
  }
  return 0;
}