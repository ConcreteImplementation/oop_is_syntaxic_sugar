#include <stdio.h>
#include <stdlib.h>

#include "Summoner.h"

#define NEW_LINE() printf("\n\n")

int main(int argc, char const *argv[])
{
	NEW_LINE();
	printf("Example of encapsulated ingeriance");
	NEW_LINE();

	Character* boris = new_character("Boris", 10);
	Character* demon = new_character("Demon", 15);
	ASummoner aggripa = new_summoner("Aggripa", 3);

	
	attack(boris, demon);
	escape(boris);
	
	NEW_LINE();

	attack(aggripa.character, demon);
	invoke(aggripa.summoner, demon, "Apocalypse knights");
	escape(aggripa.character);


	free(boris);
	free_summoner(aggripa);
	free(demon);

	NEW_LINE();
	return 0;
}
