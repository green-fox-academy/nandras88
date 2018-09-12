#include <stdio.h>
#include <stdlib.h>

// - Create an array variable named `p1`
//   with the following content: `[1, 2, 3]`
// - Create an array variable named `p2`
//   with the following content: `[4, 5]`
// - Print if `p2` has more elements than `p1`

int main()
{
    int p1[] = {1, 2, 3,};
    int p2[] = {4, 5};

    if (sizeof(p1)/sizeof(int) < sizeof(p2)/sizeof(int))
    {
        printf("True");

    }
    else
    {
        printf("False");
    }


    return 0;
}
