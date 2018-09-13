#include "count_lines.h"

// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file

int main()
{
  char input[] = "test.txt";

  printf("The number of the lines is: %d \n", countLines(input));
}