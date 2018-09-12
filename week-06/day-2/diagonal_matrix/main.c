#include <stdio.h>
#include <stdlib.h>

// - Create (dynamically) a two dimensional array
//   with the following matrix. Use a loop!
//
//   1 0 0 0
//   0 1 0 0
//   0 0 1 0
//   0 0 0 1
//
// - Print this two dimensional array to the output

int a = 0;
int b = 1;
int lineCount = 4;

int main()
{
    for(int i = 0; i < lineCount; i++)
    {
        for(int j= 0; j < lineCount; j++)
        {
            if(i == j)
            {
                printf("%d", b);

            }
            else
            {
                printf("%d", a);

            }


        }
        printf("\n");

    }




    return 0;
}
