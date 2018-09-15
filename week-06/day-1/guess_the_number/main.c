#include <stdio.h>

// Write a program that stores a number, and the user has to figure it out.
// The user can input guesses, after each guess the program would tell one
// of the following:
//
// The stored number is higher
// The stried number is lower
// You found the number: 8

int main()
{
  int promptNumber = 8;
  int guessNumber = 0;

  while (guessNumber != promptNumber)
  {
    printf("Guess a number:\n");
    scanf("%d", &guessNumber);
  }

  if (guessNumber == promptNumber)
  {
    printf("You find the number %d!\n", promptNumber);
  }

  return (0);
}
