#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Pirate
{
    char name[256];
    int has_wooden_leg;
    int gold_count;

} Pirate;

int sumAllOfGold(Pirate *inputArray, int size);
int averageOfGold(Pirate *inputArray, int size);
char *richestGangster(Pirate *inputArray, int size, char *richest);
