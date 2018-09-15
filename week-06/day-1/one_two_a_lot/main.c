#include "one_two.h"

int main()

// Write a program that reads a number form the standard input,
// If the number is zero or smaller it should print: Not enough
// If the number is one it should print: One
// If the number is two it should print: Two
// If the number is more than two it should print: A lot

{

  int number;
  printf("Please add me a number\n");
  scanf("%d", &number);
  oneTwoLot(number);

  return 0;
}