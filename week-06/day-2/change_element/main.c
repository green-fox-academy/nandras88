#include <stdio.h>
#include <stdlib.h>

// - Create an array variable named `s`
//   with the following content: `[1, 2, 3, 8, 5, 6]`
// - Change the 8 to 4
// - Print the fourth element

int main()
{
    int s[] = {1, 2, 3, 8, 5, 6};

    s[3] = 4;

    printf("The Forth element is: %d", s[3]);

    return 0;
}
