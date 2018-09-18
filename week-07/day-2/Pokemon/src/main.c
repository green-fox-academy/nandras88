#include "pokemon.h"
/*
 *
 * The "pokemon"-s are stored in an array.
 *
 * Write the following functions:
 * 1) Get faster pokemons than
 *      - parameters:
 *          - array
 *          - array length
 *          - speed
 *      - it returns the count of the faster pokemons than the parameter "speed"
 * 2) Get type count
 *      - parameters:
 *          - array
 *          - array length
 *          - type
 *      - it returns the count of pokemons which are "type"
 * 3) Get strongest type
 *      - parameters:
 *          - array
 *          - array length
 *          - strength
 *      - it returns the type of the strongest pokemon
 * 4) Get maximal strength of a type
 *      - parameters:
 *          - array
 *          - array length
 *          - type
 *      - it returns the highest strength among the "type" type pokemons
 *
 * Don't forget to handle invalid inputs (NULL pointers, invalid values etc.)
 */

int main()
{
	pokemon_t gergo;
	gergo.age = 34;
	strcpy(gergo.name, "CsigiG");
	gergo.speed = 8.5;
	gergo.strength = 9.2;
	gergo.type = WATER;

	pokemon_t drekor;
	drekor.age = 24;
	strcpy(drekor.name, "Drekcsi");
	drekor.speed = 2.14;
	drekor.strength = 3.5;
	drekor.type = BUG;

	pokemon_t blackWizzard;
	strcpy(blackWizzard.name, "BLACKWIZZARD");
	blackWizzard.age = 30;
	blackWizzard.speed = 9.30;
	blackWizzard.strength = 9.5;
	blackWizzard.type = DARK;

	pokemon_t listOfPokemons[] = {gergo, drekor, blackWizzard};
	int sizeOfList = sizeof(listOfPokemons) / sizeof(listOfPokemons[0]);
	char character[300];
	strcpy(character, "The strongest type is ");

	printf("The fastest pokemon(s) amount is %d\n", getFaster(listOfPokemons, sizeOfList, 11.0));
	printf("We have the following piece(s) %d of Pokemons in this type\n", getTypeCount(listOfPokemons, sizeOfList, 25));
	printf("The most powerfull Pokemon strenght is %.f\n", getMaximalStrenght(listOfPokemons, sizeOfList, BUG));

	switch (getStrongest(listOfPokemons, sizeOfList))
	{
	case NORMAL:
		strcat(character, "NORMAL");
		printf("%s \n", character);
		break;
	case FIRE:
		strcat(character, "FIRE");
		printf("%s \n", character);
		break;
	case WATER:
		strcat(character, "WATER");
		printf("%s \n", character);
		break;
	case ELECTRIC:
		strcat(character, "ELECTRIC");
		printf("%s \n", character);
		break;
	case GRASS:
		strcat(character, "GRASS");
		printf("%s \n", character);
		break;
	case ICE:
		strcat(character, "ICE");
		printf("%s \n", character);
		break;
	case FIGHTING:
		strcat(character, "FIGHTING");
		printf("%s \n", character);
		break;
	case POISON:
		strcat(character, "POISON");
		printf("%s \n", character);
		break;
	case GROUND:
		strcat(character, "GROUND");
		printf("%s \n", character);
		break;
	case FLYING:
		strcat(character, "FLYING");
		printf("%s \n", character);
		break;
	case PSYCHIC:
		strcat(character, "PSYCHIC");
		printf("%s \n", character);
		break;
	case BUG:
		strcat(character, "BUG");
		printf("%s \n", character);
		break;
	case ROCK:
		strcat(character, "ROCK");
		printf("%s \n", character);
		break;
	case GHOST:
		strcat(character, "GHOST");
		printf("%s \n", character);
		break;
	case DRAGON:
		strcat(character, "DRAGON");
		printf("%s \n", character);
		break;
	case DARK:
		strcat(character, "DARK");
		printf("%s \n", character);
		break;
	case STEEL:
		strcat(character, "STEEL");
		printf("%s \n", character);
		break;
	case FAIRY:
		strcat(character, "FAIRY");
		printf("%s \n", character);
		break;
	}

	return 0;
}
