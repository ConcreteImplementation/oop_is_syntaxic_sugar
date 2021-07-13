#include <stdio.h>
#include <stdlib.h>

#include "IWarrior.h"


typedef struct _Knight {
	void (*slash)(IWarrior*, int);
	void (*thrust)(IWarrior*);

	char* name;
} _Knight;


static
void _slash(IWarrior* warrior, int times) {
	_Knight* knight = (_Knight*) warrior;

	printf("%s slashes the enemy %d times\n", knight->name, times);
}

static
void _thrust(IWarrior* warrior) {
	_Knight* knight = (_Knight*) warrior;

	printf("%s thrusts the enemy \n", knight->name);
}


IWarrior* new_knight(char* name) {
	_Knight* knight = malloc(sizeof(_Knight));
	if( ! knight) {
		fprintf(stderr, "malloc failed at new_knight()\n");
		exit(1);
	}

	knight->slash = _slash;
	knight->thrust = _thrust;
	knight->name = name;

	return (IWarrior*) knight;
}