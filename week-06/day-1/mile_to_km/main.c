#include "mile.h"

// Write a program that asks for an integer that is a distance in kilometers,
// then it converts that value to miles and prints it

int main()
{
  int km;
  printf("Please give me the distance in km\n");
  scanf("%d", &km);
  printf("The calculation is the next: %.2f\n", kmToMile(km));

  return 0;
}