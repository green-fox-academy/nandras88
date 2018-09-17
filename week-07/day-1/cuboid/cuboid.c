#include <stdio.h>

// Write a function called "GetSurface" that takes a RectangularCuboid
// and returns it's surface
// Write a function called "GetVolume" that takes a RectangularCuboid
// and returns it's volume

typedef struct rectangular_cuboid
{
    double a;
    double b;
    double c;
} rectangular_cuboid;

double getSurface(rectangular_cuboid input);
double getVolume(rectangular_cuboid input);

int main()
{
    rectangular_cuboid my_cub;
    my_cub.a = 10.0;
    my_cub.b = 10.0;
    my_cub.c = 10;

    printf("%.f\n", getSurface(my_cub));
    printf("%.f\n", getVolume(my_cub));

    return 0;
}

double getSurface(rectangular_cuboid input)
{
    double surface = ((input.a * input.b) + (input.c * input.a) + (input.b * input.c)) * 2;

    return surface;
}

double getVolume(rectangular_cuboid input)
{
    double volume = input.a * input.b * input.c;

    return volume;
}