#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Write a program that asks for 5 integers in a row,
// then it should print the sum and the average of these numbers like:
//
// Sum: 22, Average: 4.4

int main()
{
  int number;
  int sum = 0;

  for (int i = 1; i < 6; i++)
  {
    printf("give me a num\n");
    scanf(" %d", &number);
    sum += number;
  }
  int average = sum / 5;
  printf("The avarage is : %d\n", average);

  return 0;
}