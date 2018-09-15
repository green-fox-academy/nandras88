#include "bigger.h"

// Write a program that asks for two numbers and prints the bigger one

int main()
{

  int a;
  int b;
  printf("Please add me two numbers\n");
  scanf(" %d %d", &a, &b);

  printBigger(a, b);
  return 0;
}