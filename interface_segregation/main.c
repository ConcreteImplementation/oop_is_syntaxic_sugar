#include <stdio.h>
#include <stdlib.h>

#include "Knight.h"
#include "WhiteMage.h"
#include "Paladin.h"

#define NEW_LINE() printf("\n\n")


void battle_demon(IWarrior* warrior, IMage* mage)
{
	pray(mage, "In nomine");
	slash(warrior, 12);
	heal(mage);
	thrust(warrior);
}


int main(int argc, char const *argv[])
{
	NEW_LINE();
	printf("Example of Interface Segration / Multiple inheritance");
	NEW_LINE();


	NEW_LINE();
	printf("Seperate classes");
	NEW_LINE();

	IWarrior* arthur = new_knight("Arthur");
	IMage* aggripa = new_whitemage("Aggripa");

	battle_demon(arthur, aggripa);
	
	free(arthur);
	free(aggripa);



	NEW_LINE();
	printf("Same class");
	NEW_LINE();

	Paladin cecil;
	new_paladin(&cecil, "Cecil");

	battle_demon(cecil.warrior, cecil.mage);

	free_paladin(cecil);

	NEW_LINE();
	return 0;
}
