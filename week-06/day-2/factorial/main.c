#include "factorial.h"

// - Create a function called `factorio`
//   that returns it's input's factorial

int main()
{
  int factNumber = 10;

  printf("The factorial of the %d is: %d", factNumber, *factorial(factNumber));

  return 0;
}