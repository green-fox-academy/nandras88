#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concat(char *firstInput, char *secondInput)
{
    char *concatStrings = malloc(strlen(firstInput) + strlen(secondInput) + 1);
    strcpy(concatStrings, firstInput);
    strcat(concatStrings, secondInput);

    return concatStrings;
}