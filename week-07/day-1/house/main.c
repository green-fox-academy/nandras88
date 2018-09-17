#include "house.h"

/*
Create a struct that represents a House
It should store:
 - The address of the house
 - The price in EUR
 - The number of rooms
 - The area of the house in square meters
The market price of the houses is 400 EUR / square meters
Create a function that takes a pointer to a house and decides if it's worth to buy
(if the price is lower than the calculated price from it's area)
Create a function that takes an array of houses (and it's length), and counts the
houses that are worth to buy.
*/

int main()
{
    House my_house;
    my_house.address = "ELM";
    my_house.numberOfRooms = 6;
    my_house.areaOfTheHouse = 300;
    my_house.priceInEuro = 2000;

    House other_house;
    other_house.address = "OKTOGON";
    other_house.numberOfRooms = 4;
    other_house.areaOfTheHouse = 120;
    other_house.priceInEuro = 1000;

    House big_flat;
    big_flat.address = "KASSAI";
    big_flat.numberOfRooms = 8;
    big_flat.areaOfTheHouse = 600;
    big_flat.priceInEuro = 500000;

    House dataBase[] = {my_house, other_house, big_flat};
    int sizeOfDataBase = sizeof(dataBase) / sizeof(dataBase[0]);

    goodDeal(my_house);
    printf("In the hood we have %d deal(s)\n", goodDeals(dataBase, sizeOfDataBase));

    return 0;
}