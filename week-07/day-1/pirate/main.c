#include "pirate.h"

int main()
{
    Pirate myG;
    strcpy(myG.name, "Brada");
    myG.gold_count = 20;
    myG.has_wooden_leg = 1;

    Pirate sparrow;
    strcpy(sparrow.name, "Funky");
    sparrow.gold_count = 10;
    sparrow.has_wooden_leg = 0;

    Pirate junkie;
    strcpy(junkie.name, "Wilson");
    junkie.gold_count = 50;
    junkie.has_wooden_leg = 1;

    Pirate branch[] = {myG, sparrow, junkie};
    int size = sizeof(branch) / sizeof(branch[0]);
    char *returnName = (char *)malloc(20);

    printf("The super branch has %d amount of Gold\n", sumAllOfGold(branch, size));
    printf("The super branch has the %d avarage of Gold\n", averageOfGold(branch, size));
    printf("The richest gangster is %s\n", richestGangster(branch, size, returnName));

    free(returnName);

    return 0;
}