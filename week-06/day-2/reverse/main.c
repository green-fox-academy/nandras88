#include <stdio.h>
#include <stdlib.h>

// - Create an array variable named `aj`
//   with the following content: `[3, 4, 5, 6, 7]`
// - Reverse the order of the elements in `aj`
// - Print the elements of the reversed `aj`

int main()
{
  int aj[] = {3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(aj) / sizeof(int);
  int *temp = (int *)calloc(size, sizeof(int));
  int counter = 0;

  for (int i = size - 1; i >= 0; i--)
  {
    temp[counter] = aj[i];
    counter++;
  }

  for (int k = 0; k < size; k++)
  {
    printf("%d\n", temp[k]);
  }
  return 0;
}