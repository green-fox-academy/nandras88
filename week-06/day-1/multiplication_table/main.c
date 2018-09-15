#include <stdio.h>

// Create a program that asks for a number and prints the multiplication table with that number
//
// Example:
// The number 15 should print:
//
// 1 * 15 = 15
// 2 * 15 = 30
// 3 * 15 = 45
// 4 * 15 = 60
// 5 * 15 = 75
// 6 * 15 = 90
// 7 * 15 = 105
// 8 * 15 = 120
// 9 * 15 = 135
// 10 * 15 = 150

int main()
{
  int number;
  printf("Please add me a number and I gonna create a multiplication table with that number\n");
  scanf("%d", &number);
  printf("***********************************************************************************\n");

  for (int i = 1; i <= 10; i++)
  {
    printf("%d * %d = %d\n", i, number, (i * number));
  }
  return 0;
}
