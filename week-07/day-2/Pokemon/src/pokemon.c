#include "pokemon.h"

int getFaster(pokemon_t *inputArray, int lengthOfArray, float speed)
{
    int counter = 0;
    if (inputArray == NULL)
    {
        printf("Sorry but the array is invalid\n");
    }
    else if (speed > 10.00 || speed < 00.00)
    {
        printf("Sorry but the SPEED value is not valid\n");
        exit(-1);
    }
    else
    {
        for (int i = 0; i < lengthOfArray; i++)
        {
            if (inputArray[i].speed > speed)
            {
                counter++;
            }
        }
    }
    return counter;
}

int getTypeCount(pokemon_t *inputArray, int lengthOfArray, type_t type)
{
    int counter = 0;

    if (type > MAX || type < MIN)
    {
        printf("Please add me a valid type\n");
    }
    else
    {

        for (int j = 0; j < lengthOfArray; j++)
        {
            if (inputArray[j].type == type)
            {
                counter++;
            }
        }
    }
    return counter;
}

type_t getStrongest(pokemon_t *inputArray, int lengthOfArray)
{
    float strong = inputArray[0].strength;
    int index = 0;

    for (int k = 0; k < lengthOfArray; k++)
    {
        if (strong < inputArray[k].strength)
        {
            strong = inputArray[k].strength;
            index = k;
        }
    }
    return inputArray[index].type;
}

float getMaximalStrenght(pokemon_t *inputArray, int lengthOfArray, type_t type)
{
    float mostStrenght = inputArray[0].strength;

    if (type < MIN || type > MAX)
    {
        printf("Please add me a valid type\n");
    }
    else
    {

        for (int l = 0; l < lengthOfArray; l++)
        {
            if (mostStrenght < inputArray[l].strength && inputArray[l].type == type)
            {
                mostStrenght = inputArray[l].strength;
            }
        }
    }
    return mostStrenght;
}