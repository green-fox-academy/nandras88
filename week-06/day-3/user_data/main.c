#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// create a program which asks for full name and age
// and stores it in a char array
// parse that array to first_name, last_name, age (use tokenizing)
// print out the the stored variables
// example:
//   printf("Your name is: %s %s and you are %d years old", first_name, last_name, age);

int main()
{

  char str[100];

  printf("give a text a baby\n");
  fgets(str, sizeof str, stdin);

  char *first_name = strtok(str, " ");
  char *last_name = strtok(NULL, " ");
  char *ages = strtok(NULL, " ");
  int age = atoi(ages);

  printf("Your name is: %s %s and you are %d years old", first_name, last_name, age);

  return 0;
}