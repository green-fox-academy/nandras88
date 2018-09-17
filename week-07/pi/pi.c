#include "pi.h"

int areaCalculator(int radius)
{
    int area = 0;
    area = radius * radius * PI;

    return area;
}

int circumFerence(int radius)
{
    int circum = 2 * radius * PI;

    return circum;
}