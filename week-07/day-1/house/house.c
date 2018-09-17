#include "house.h"

void goodDeal(House inputFlat)
{
    if ((inputFlat.priceInEuro / inputFlat.areaOfTheHouse) < 400)
    {
        printf("This house on the %s street is a good deal Buddy\n", inputFlat.address);
    }
    else
    {
        printf("Ohhh it's a bit expensive do not move on the %s street \n", inputFlat.address);
    }
}

int goodDeals(House *inputFlats, int length)
{
    int counter = 0;

    for (int i = 0; i < length; i++)
    {
        if ((inputFlats[i].priceInEuro / inputFlats[i].areaOfTheHouse) < 400)
        {
            counter++;
        }
    }
    return counter;
}