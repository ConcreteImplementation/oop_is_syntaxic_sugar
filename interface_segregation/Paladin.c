#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "IMage.h"
#include "IWarrior.h"
#include "Paladin.h"


#define paladin_from_warrior(x) ( ((void*) warrior) - 2*sizeof(void*) )


typedef struct _Paladin {
	void (*heal)(IMage*);
	void (*pray)(IMage*, const char*);

	void (*slash)(IWarrior*, int);
	void (*thrust)(IWarrior*);

	char* name;
} _Paladin;


static
void _heal(IMage* mage){
	_Paladin* paladin = (_Paladin*) mage;

	printf("%s is healing\n", paladin->name);
}

static
void _pray(IMage* mage, const char* holyWords) {
	_Paladin* paladin = (_Paladin*) mage;

	printf("%s prays : '%s'\n", paladin->name, holyWords);
}

static
void _slash(IWarrior* warrior, int times) {
	_Paladin* paladin = paladin_from_warrior(warrior);

	printf("%s slashes the enemy %d times\n", paladin->name, times);
}

static
void _thrust(IWarrior* warrior) {
	_Paladin* paladin = paladin_from_warrior(warrior);

	printf("%s thrusts the enemy \n", paladin->name);
}


void new_paladin(Paladin* paladin, char* name) {
	_Paladin* private_paladin = malloc(sizeof(_Paladin));
	if( ! private_paladin) {
		fprintf(stderr, "malloc failed at new_paladin()\n");
		exit(1);
	}

	private_paladin->heal = _heal;
	private_paladin->pray = _pray;
	private_paladin->slash = _slash;
	private_paladin->thrust = _thrust;
	private_paladin->name = name;

	void* ptr1 = private_paladin;
	memcpy( (void*) &(paladin->mage),  &ptr1, sizeof(void*));

	void* ptr2 = & private_paladin->slash;
	// OR	void* ptr2 = ptr1 + sizeof(void*) * 2;
	// OR	ptr1 += sizeof(void*) * 2;
	memcpy( (void*) &(paladin->warrior), &ptr2 , sizeof(void*));
}


void free_paladin(Paladin paladin){
	void** ptr = (void*) &paladin; // bypass const with cast and double indirection
	free( *ptr );
}


#undef paladin_from_warrior