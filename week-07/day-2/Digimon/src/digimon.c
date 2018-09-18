#include "digimon.h"

int getMinimumHealth(digimont_t *inputArray, int size)
{
    int minimumHealth = inputArray[0].health;

    for (int i = 0; i < size; i++)
    {
        if (minimumHealth > inputArray[i].health)
        {
            minimumHealth = inputArray[i].health;
        }
    }
    return minimumHealth;
}

int getSameDigivolution(digimont_t *inputArray, int size, type_t type)
{
    int counterOfType = 0;

    if (type > MAX || type < MIN)
    {
        printf("You add an invalid type\n!!");
    }
    else
    {
        for (int j = 0; j < size; j++)
        {
            if (inputArray[j].digivolutionLevel == type)
            {
                counterOfType++;
            }
        }
    }
    return counterOfType;
}

int getSameTamer(digimont_t *inputArray, int size, char *tamerName)
{
    int counterOfTamer = 0;

    if (tamerName == NULL)
    {
        printf("You add an invalid Tamer name\n");
    }
    else
    {

        for (int k = 0; k < size; k++)
        {
            if (strcmp(inputArray[k].nameOfTamer, tamerName) == 0)
            {

                counterOfTamer++;
            }
        }
    }
    return counterOfTamer;
}

float getAvarageHealthOfSameTamer(digimont_t *inputArray, int size, char *tamerName)
{
    int counterOfHealth = 0;
    int sumOfHealth = 0;

    if (tamerName == NULL)
    {
        printf("You add an invalid Tamer name\n");
    }
    else
    {

        for (int l = 0; l < size; l++)
        {
            if (strcmp(inputArray[l].nameOfTamer, tamerName) == 0)
            {
                sumOfHealth += inputArray[l].health;
                counterOfHealth++;
            }
        }
    }
    return sumOfHealth / counterOfHealth;
}
