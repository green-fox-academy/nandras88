#include <stdio.h>
#include <string.h>

// Create a struct to store coordinates (for example: int x and int y)
// Create an array which can store coordinates, do not create multidimensonal arrays here
// Fill up the coordinates in the array with random number.

typedef struct
{
    int x;
    int y;

} Cord;

int main()
{
    Cord my_cord;

    Cord cords[10];
    int size = sizeof(cords) / sizeof(cords[0]);

    for (int i = 0; i < size; i++)
    {
        cords[i].x = my_cord.x = rand();
        cords[i + 1].y = my_cord.y = rand();
    }

    for (int j = 0; j < size; j++)
    {
        printf("The element is %d  %d \n", j, cords[j]);
    }

    return 0;
}