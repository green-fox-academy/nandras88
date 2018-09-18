#include <stdio.h>
#include <string.h>

typedef enum type_t
{
    MIN = 0,
    BABY = MIN,
    IN_TRANING,
    ROOKIE,
    CHAMPION,
    ULTIMATE,
    MEGA,
    MAX = MEGA

} type_t;

typedef struct digimont_t
{
    char name[128];
    int age;
    int health;
    char nameOfTamer[256];
    type_t digivolutionLevel;

} digimont_t;

int getMinimumHealth(digimont_t *inputArray, int size);
int getSameDigivolution(digimont_t *inputArray, int size, type_t type);
int getSameTamer(digimont_t *inputArray, int size, char *tamerName);
float getAvarageHealthOfSameTamer(digimont_t *inputArray, int size, char *tamerName);
