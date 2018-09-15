#include <stdio.h>
#include <stdlib.h>

// Write a program that stores 3 sides of a cuboid as variables (doubles)
// The program should write the surface area and volume of the cuboid like:
//
// Surface Area: 600
// Volume: 1000

int main()
{
  double sideB = 10;
  double sideA = 10;
  double sideC = 10;

  double surfaceArea = 2 * ((sideA * sideB) + (sideB * sideC) + (sideA * sideC));
  double volume = sideA * sideB * sideC;

  printf("Surface Area: %.f\nVolume: %.f\n", surfaceArea, volume);

  return 0;
}