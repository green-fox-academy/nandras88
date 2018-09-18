#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef enum type_t
{
    MIN = 0,
    NORMAL = MIN,
    FIRE,
    WATER,
    ELECTRIC,
    GRASS,
    ICE,
    FIGHTING,
    POISON,
    GROUND,
    FLYING,
    PSYCHIC,
    BUG,
    ROCK,
    GHOST,
    DRAGON,
    DARK,
    STEEL,
    FAIRY,
    MAX = FAIRY

} type_t;

typedef struct pokemon_t
{
    char name[256];
    int age;
    float strength;
    float speed;
    enum type_t type;

} pokemon_t;

int getFaster(pokemon_t *inputArray, int lengthOfArray, float speed);
int getTypeCount(pokemon_t *inputArray, int lengthOfArray, type_t type);
type_t getStrongest(pokemon_t *inputArray, int lengthOfArray);
float getMaximalStrenght(pokemon_t *inputArray, int lengthOfArray, type_t type);
