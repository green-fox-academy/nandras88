#include "animal.h"

// Write a program that asks for two integers
// The first represents the number of chickens the farmer has
// The second represents the number of pigs owned by the farmer
// It should print how many legs all the animals have

int main()
{
  int chickens;
  int pigs;

  printf("Please give me a number of chicken(s)\n");
  scanf("%d", &chickens);
  printf("Please enter the number of pig(s)\n");
  scanf("%d", &pigs);
  printf("I am going to calculate the number of legs\n");

  legsCalculation(chickens, pigs);
  return 0;
}