#include "swap.h"

// - Create an array variable named `abc`
//   with the following content: `["first", "second", "third"]`
// - Swap the first and the third element of `abc` by using a function
// - That function should take an array as a parameter and return the correct array

int main()
{
  char *abc[] = {"first", "second", "third"};

  swap(abc);

  return 0;
}