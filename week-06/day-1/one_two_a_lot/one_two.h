#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void oneTwoLot(int inputNumber)
{
  if (inputNumber <= 0)
  {
    printf("Not enough\n");
  }
  else if (inputNumber == 1)
  {
    printf("One\n");
  }
  else if (inputNumber == 2)
  {
    printf("Two\n");
  }
  else
  {
    printf("Lot\n");
  }
}