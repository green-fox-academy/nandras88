#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Create a point struct which has two float variables: x and y
Create a function that constructs a point
It should take it's x and y coordinate as parameter
Create a function that takes 2 points and returns the distance between them
Example:
int main()
{
	point_t p1 = create_point(1, 1);
	point_t p2 = create_point(1, 5.5);
	float dist = distance(p1, p2);
	printf("%f", dist);
	return 0;
}
*/

typedef struct
{
    float x;
    float y;

} Point;

Point create_point(float a, float b);
float distance(Point one, Point two);

int main()
{
    Point p1 = create_point(1, 1);
    Point p2 = create_point(1, 5.5);
    float dist = distance(p1, p2);
    printf("%f", dist);

    return 0;
}
Point create_point(float a, float b)
{
    Point p1;
    p1.x = a;
    p1.y = b;
    return p1;
}

float distance(Point one, Point two)
{

    float distanceOfpoints = ((two.x - one.x) * (two.x - one.x)) + ((two.y - one.y) * (two.y - one.y));
    float distances = sqrt(distanceOfpoints);

    return distances;
}