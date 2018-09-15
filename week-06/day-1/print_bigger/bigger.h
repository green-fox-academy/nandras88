#include <stdio.h>
#include <stdlib.h>

void printBigger(int firstNumber, int secondNumber)
{
  if (firstNumber > secondNumber)
  {
    printf("The bigger is %d\n", firstNumber);
  }
  else
  {
    printf("The bigger is %d\n", secondNumber);
  }
}