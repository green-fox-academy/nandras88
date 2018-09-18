#include "car_register.h"

int get_older_cars_than(car_t *inputArray, int sizeOfLength, int age)
{
    int counter = 0;

    for (int i = 0; i < sizeOfLength; i++)
    {
        if (inputArray[i].year < age)
        {
            counter++;
        }
    }

    return counter;
}

int get_transmission_count(car_t *inputArray, int sizeOfLength, transmission_t inputParam)
{
    int counter = 0;

    for (int j = 0; j < sizeOfLength; j++)
    {
        if (inputArray[j].type == inputParam)
        {
            counter++;
        }
    }
    return counter;
}