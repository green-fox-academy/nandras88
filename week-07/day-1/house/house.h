#include <stdlib.h>
#include <stdio.h>

typedef struct House
{
    char *address;
    double priceInEuro;
    int numberOfRooms;
    double areaOfTheHouse;
} House;

void goodDeal(House inputFlat);
int goodDeals(House *inputFlats, int length);
