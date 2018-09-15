#include <stdio.h>

int main()
{
  // Modify this program in the printf() to greet user instead of the World!
  // The program should ask for the age of the user

  char name[20];
  int age;

  printf("Please enter your name\n");
  scanf("%s", name);
  printf("Hello, %s!\n", name);

  printf("Please type your age:\n");
  scanf("%d", &age);
  printf("You are pretty young");

  return 0;
}