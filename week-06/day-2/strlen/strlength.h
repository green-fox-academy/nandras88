#include <stdio.h>
#include <stdlib.h>

int checkLength(char *inputString)
{
    int strLength;

    while (inputString[strLength] != '\0')
    {
        strLength++;
    }

    return strLength;
}