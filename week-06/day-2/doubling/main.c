#include "doubling.h"

// - Create a function called `doubling` that doubles it's input parameter and returns with an integer
// - parameter should be a pointer to the variable you want to double

int main()
{

  int number = 5;
  int *p_number = &number;

  printf("The item is %d and the doubled value is %d", number, doubling(p_number));

  return 0;
}