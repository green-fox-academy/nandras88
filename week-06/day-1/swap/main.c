#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 123;
    int b = 526;

    int c =  b;
    b = a;
    a = c;

    printf("%d\n",a);
    printf("%d\n",b);

    return 0;
}
