#include "strlength.h"

// Create a function which receives a string as parameter, and returns
// the numbers of characters in the string.
// Don't use the strlen() function!

int main()
{
    char *testString = "Hello";

    printf("The length of the string is %d", checkLength(testString));

    return 0;
}