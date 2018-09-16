#include "sort.h"
#include "boolean.h"

//  Create a function that takes a list of numbers as parameter
//  Returns a list where the elements are sorted in ascending numerical order
//  Make a second boolean parameter, if it's `true` sort that list descending

int main()
{
  int numbers[] = {4, 13, 2, 55, 7};
  int size = sizeof(numbers) / sizeof(numbers[0]);
  int sorted[] = {1, 2, 3, 4, 5, 6};
  int sizeOfSort = sizeof(sorted) / sizeof(sorted[0]);

  if (isItBoolean(sorted, sizeOfSort) == 1)
  {
    printf("The array is sorted");
  }
  else
  {
    sort(sorted, sizeOfSort);
    for (int i = 0; i < size; i++)
    {
      printf("The sorted order is %d\n", numbers[i]);
    }
  }

  return 0;
}