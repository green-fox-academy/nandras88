#include "car_register.h"

/* Write a car register!
 * You should store the following data in a structure, called "car":
 *  - the manufacturer's name (which is shorter than 256 characters)
 *  - the price of the car (in euros, stored as a floating point number)
 *  - the year of manufacture
 *  - the type of the transmission (as a custom type, see below)
 *
 * You should store the transmission type in an enumeration ("transmission"),
 * the valid types are:
 *  - manual
 *  - automatic
 *  - CVT
 *  - semi-automatic
 *  - dual-clutch
 *
 * The "car"-s are stored in an array.
 *
 * Write the following functions:
 *  - get_older_cars_than(struct car* array, int array_length, int age)
 *      - it returns the count of the older cars than "age"
 *  - get_transmission_count(struct car* array, int array_length, enum transmission trnsm)
 *      - it returns the count of cars which has "trnsm" transmission
 */

int main()
{
    car_t bmw;
    strcpy(bmw.name, "Beamer");
    bmw.price = 10000;
    bmw.type = AUTOMATIC;
    bmw.year = 2012;

    car_t mercedes;
    strcpy(mercedes.name, "CLA");
    mercedes.price = 8000;
    mercedes.type = SEMI_AUTOMAIC;
    mercedes.year = 2016;

    car_t bmw_electro;
    strcpy(bmw_electro.name, "I3");
    bmw_electro.price = 7500;
    bmw_electro.type = AUTOMATIC;
    bmw_electro.year = 2017;

    int age = 2015;
    Car listOfCars[] = {bmw, mercedes, bmw_electro};
    int size = sizeof(listOfCars) / sizeof(listOfCars[0]);

    printf("We have  %d piece(s) of older car then %d\n", get_older_cars_than(listOfCars, size, age), age);
    printf("The specified transmission type is available in %d cars\n", get_transmission_count(listOfCars, size, AUTOMATIC));

    return 0;
}
