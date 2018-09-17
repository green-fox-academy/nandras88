#include <stdio.h>
#include <string.h>

/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/

typedef struct
{
    char name[32];
    float price;
    float weight;
} sandwich;

float pricingOrder(sandwich typeOfSandwich, int numberOfSandwich);
int main()
{
    sandwich chees_burger;
    strcpy(chees_burger.name, "Buger");
    chees_burger.price = 2.50;
    chees_burger.weight = 1.10;

    printf("The price of the order is %.2f", pricingOrder(chees_burger, 5));

    return 0;
}

float pricingOrder(sandwich typeOfSandwich, int numberOfSandwich)
{
    float price = 0;

    for (int i = 1; i <= numberOfSandwich; i++)
    {
        price += typeOfSandwich.price;
    }

    return price;
}