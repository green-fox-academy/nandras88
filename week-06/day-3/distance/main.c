#include <stdio.h>
#include "distance.h"
// create a function which takes a char array as a parameter and
// returns the distance between the first and last occurance of character 's'

int main()
{
  char str[] = "This is a sample string";

  printf("The distance of the s is: %d", distance(str));

  return 0;
}