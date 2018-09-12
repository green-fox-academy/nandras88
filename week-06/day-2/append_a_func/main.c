#include "append.h"

// - Create a char array variable named `typo` and assign the value `Chinchill` to it
// - Write a function called `appendAFunc` that gets a string as an input,
//   appends an 'a' character to its end and returns with a string
// - Print the result of `appendAFunc(typo)`

int main()
{
  char typo[] = "Chincill";
  char *proto = typo;

  printf("%s", appendA(proto));

  return 0;
}
