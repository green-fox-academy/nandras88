#include "digimon.h"

int main()
{
	digimont_t derkor;
	derkor.age = 25;
	derkor.health = 80;
	derkor.digivolutionLevel = CHAMPION;
	strcpy(derkor.name, "Drekcsi");
	strcpy(derkor.nameOfTamer, "Mczsolax");

	digimont_t csigi;
	csigi.age = 34;
	csigi.health = 90;
	csigi.digivolutionLevel = ULTIMATE;
	strcpy(csigi.name, "CsigiG");
	strcpy(csigi.nameOfTamer, "OWN");

	digimont_t bandi;
	bandi.age = 30;
	bandi.health = 99;
	bandi.digivolutionLevel = MEGA;
	strcpy(bandi.name, "BANDI");
	strcpy(bandi.nameOfTamer, "OWN");

	digimont_t claus;
	claus.age = 30;
	claus.health = 30;
	claus.digivolutionLevel = IN_TRANING;
	strcpy(claus.name, "BANDI");
	strcpy(claus.nameOfTamer, "Mczsolax");

	digimont_t listOfDigi[] = {derkor, csigi, bandi, claus};
	int sizeOfArray = sizeof(listOfDigi) / sizeof(listOfDigi[0]);

	printf("The minimum health of the Digimons is %d\n", getMinimumHealth(listOfDigi, sizeOfArray));
	printf("The number of Digimons of the same digivolution level is %d\n", getSameDigivolution(listOfDigi, sizeOfArray, 20));
	printf("We have %d piece(s) of Digimon from the same Tamer\n", getSameTamer(listOfDigi, sizeOfArray, "OWN"));
	printf("The avarage health from the same Tamer is %.f\n", getAvarageHealthOfSameTamer(listOfDigi, sizeOfArray, "OWN"));

	return 0;
}