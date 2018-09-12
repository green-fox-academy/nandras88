#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
main()
{
    int a = 3;
    a += 10;
    printf("%d\n",a);


    int b = 100;
    b -= 7;
    printf("%d\n",b);


    int c = 44;
    c = c * c;
    printf("%d\n",c);


    int d = 125;
    d /= 5;
    printf("%d\n",d);


    int e = 8;
    e = e * e *e;
    printf("%d\n",e);


    int f1 = 123;
    int f2 = 345;
    if (f1 > f2)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }


    int g1 = 350;
    int g2 = 200;
    if (g1 < (g2 * g2))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    int h = 1357988018575474;
    if (h % 11 == 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }


    int i1 = 10;
    int i2 = 3;
    if (i1 > (i2 * i2) && i1 < (i2 * i2 * i2))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }


    int j = 1521;
    if (j % 3 == 0 || j % 5 == 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");

    }


}
