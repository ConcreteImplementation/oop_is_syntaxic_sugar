#include <stdio.h>
#include <stdlib.h>
#include "IMage.h"



typedef struct _WhiteMage {
	void (*heal)(IMage*);
	void (*pray)(IMage*, const char*);

	char* name;
} _WhiteMage;


static
void _heal(IMage* mage){
	_WhiteMage* whiteMage = (_WhiteMage*) mage;

	printf("%s is healing\n", whiteMage->name);
}


static
void _pray(IMage* mage, const char* holyWords) {
	_WhiteMage* whiteMage = (_WhiteMage*) mage;

	printf("%s prays : '%s'\n", whiteMage->name, holyWords);
}

IMage* new_whitemage(char* name) {
	_WhiteMage* whiteMage = malloc(sizeof(_WhiteMage));

	whiteMage->heal = _heal;
	whiteMage->pray = _pray;
	whiteMage->name = name;

	return (IMage*) whiteMage;
}