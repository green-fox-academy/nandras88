#include <stdio.h>
#include <stdlib.h>

// Write a program that prints the remaining seconds (as an integer) from a
// day if the current time is represented by the variables

int main()
{
  int currentHours = 14;
  int currentMinutes = 34;
  int currentSeconds = 42;
  int totalSeconds = 86400;
  int remainingSeconds = totalSeconds - currentSeconds - (currentMinutes * 60) - (currentHours * 60 * 60);

  printf("The reamaining second is the next: %d\n ", remainingSeconds);

  return 0;
}