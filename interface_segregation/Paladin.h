#ifndef _PALADIN_HEADER_
#define _PALADIN_HEADER_

#include <stdlib.h>
#include "IMage.h"
#include "IWarrior.h"



typedef const struct Paladin {
	IMage* mage;
	IWarrior* warrior;
} Paladin;

void new_paladin(Paladin*, char*) ;
void free_paladin(Paladin);


#endif