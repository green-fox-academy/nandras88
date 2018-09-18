#include "pirate.h"

/*
Create a struct that represents a pirate
It should store:
 - name
 - an int value which tells us if he/she has a wooden leg? 
 - gold count
Create a function that takes an array of pirates (and it's length) then returns the sum of the golds of all pirates
Create a function that takes an array of pirates (and it's length) then returns the average of the gold / pirate
Create a function that takes an array of pirates (and it's length) then returns the name of the
richest that has wooden leg
*/

int sumAllOfGold(Pirate *inputArray, int size)
{
    int summarizeGold = 0;

    for (int i = 0; i < size; i++)
    {
        summarizeGold += inputArray[i].gold_count;
    }

    return summarizeGold;
}

int averageOfGold(Pirate *inputArray, int size)
{

    int summa = 0;

    for (int j = 0; j < size; j++)
    {
        summa += inputArray[j].gold_count;
    }

    return summa / size;
}

char *richestGangster(Pirate *inputArray, int size, char *richest)
{
    int gold = inputArray[0].gold_count;

    for (int k = 0; k < size; k++)
    {
        if (gold < inputArray[k].gold_count && inputArray[k].has_wooden_leg > 0)
        {
            gold = inputArray[k].gold_count;
        }
    }

    for (int h = 0; h < size; h++)
    {
        if (gold == inputArray[h].gold_count)
        {
            strcpy(richest, inputArray[h].name);
        }
    }
    return richest;
}
