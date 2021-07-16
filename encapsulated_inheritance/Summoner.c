#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Character_internal.h"
#include "Summoner.h"

typedef struct Summoner {
	Character character;
} Summoner;



void invoke(Summoner* summoner, Character* ennemy, char* entityName) {
	char* name = get_name( & summoner->character);

	printf("%s invokes %s on %s\n", name, entityName, ennemy->name);
	
	receive_dommage(ennemy, ennemy->health);
}



static
void _escape(Character* summoner) {
	char* name = get_name( (Character*) summoner);

	printf("%s mysteriously vanished\n", name);
}



ASummoner new_summoner(char* name, int strength) {
	Summoner* summoner = malloc(sizeof(Summoner));
	if( ! summoner) {
		fprintf(stderr, "malloc failed in new_summoner()\n");
		exit(1);
	}

	summoner->character = build_character(name, strength);
	summoner->character.escape = _escape;

	ASummoner asummoner;
	memcpy((void*) &(asummoner.summoner), &summoner, sizeof(void*));
	return asummoner;
}



void free_summoner(ASummoner summoner) {
	free((void*)summoner.summoner);
}
