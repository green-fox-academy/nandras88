#include "pi.h"
// define a variable called PI with the value of 3.14
// create a function which takes the radius of a circle as a parameter
// and return the area of that cirle
// area = radius * radius * PI

int areaCalculator(int radius)
{
    int area = 0;
    area = radius * radius * PI;

    return area;
}