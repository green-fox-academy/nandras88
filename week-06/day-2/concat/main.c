#include "concat.h"

// Implement a function that concatenates 2 strings (dest and source).
// The return value should be the concatenated strings.

int main()
{
    char *first = "Hello";
    char *second = "World";

    printf("The concatenated string is %s", concat(first, second));

    return 0;
}