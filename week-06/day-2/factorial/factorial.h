#include <stdio.h>
#include <stdlib.h>

int *factorial(int number)
{
  int factorial = 1;

  for (int i = 1; i <= number; i++)
  {
    if (number == 0)
    {
      printf("Sorry you must add another number");
    }
    else
    {
      factorial *= i;
    }
  }
  int *p_factorial = &factorial;

  return p_factorial;
}