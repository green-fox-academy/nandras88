#include "array.h"
#include "random.h"

// create two functions:
// first should create an array dynamically (the size should be a user input)
// second sould fill the array with random numbers

int main()
{
    int arrayLength;

    printf("Please enter the length of the array\n");
    scanf("%d", &arrayLength);
    printf("*****************************************\n");
    creatArray(arrayLength);
    randomNumber(arrayLength, creatArray(arrayLength));

    return 0;
}