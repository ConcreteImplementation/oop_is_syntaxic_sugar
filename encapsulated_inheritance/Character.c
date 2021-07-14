#include <stdio.h>
#include <stdlib.h>

#include "Character_type.h"


char* get_name(Character* character) {
	return character->name;
}

int get_health(Character* character) {
	return character->health;
}

void receive_dommage(Character* character, int dommageReceive) {
	printf("%s received %d dommage\n", character->name, dommageReceive);
	character->health -= dommageReceive;
	printf("%s Health: %d\n", character->name, character->health);
}

void attack(Character* character, Character* ennemy) {
	character->attack(character, ennemy);
}

void escape(Character* character) {
	character->escape(character);
}


static
void _attack(Character* character, Character* ennemy) {
	printf("%s attacks %s\n", character->name, ennemy->name);
	receive_dommage(ennemy, character->strength);
}

static
void _escape(Character* character) {
	printf("%s escaped\n", character->name);
}

Character* new_character(char* name, int strength) {
	Character* character = malloc(sizeof(Character));
	if( ! character) {
		fprintf(stderr, "malloc failed in new_character()\n");
		exit(1);
	}

	character->name = name;
	character->health = 100;
	character->strength = strength;
	character->attack = _attack;
	character->escape = _escape;

	return character;
}