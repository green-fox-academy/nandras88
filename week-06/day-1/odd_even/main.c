#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Write a program that reads a number from the standard input,
// Then prints "Odd" if the number is odd, or "Even" if it is even.

int main()
{
  int number;

  printf("Please give me a number and I gonna tell if it is Odd or Even\n");
  scanf("%d", &number);

  if (number % 2 == 0)
  {
    printf("Even\n");
  }
  else
  {
    printf("Odd\n");
  }

  return 0;
}