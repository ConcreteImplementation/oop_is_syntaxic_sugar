#ifndef _SUMMONER_HEADER_
#define _SUMMONER_HEADER_

#include "Character.h"

typedef struct Summoner Summoner;

typedef const union ASummoner {
	Character* character;
	Summoner* summoner;
} ASummoner;


ASummoner new_summoner(char* name, int strength);
void free_summoner(ASummoner summoner);

void invoke(Summoner* summoner, Character* ennemy, char* entityName);

#endif