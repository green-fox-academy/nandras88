#include <string.h>
#include <stdio.h>

typedef enum transmission
{
    MANUAL,
    AUTOMATIC,
    CVT,
    SEMI_AUTOMAIC,
    DUAL_CLUTCH,
} transmission_t;

typedef struct car
{
    char name[256];
    float price;
    int year;
    enum transmission type;

} car_t;

int get_older_cars_than(car_t *inputArray, int sizeOfLength, int age);
int get_transmission_count(car_t *inputArray, int sizeOfLength, enum transmission);