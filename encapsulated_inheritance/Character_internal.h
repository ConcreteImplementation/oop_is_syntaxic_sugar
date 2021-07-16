#ifndef _CHARACTER_INTERNAL_HEADER_
#define _CHARACTER_INTERNAL_HEADER_

typedef struct Character Character;
typedef struct Character {
	char* name;
	int health;
	int strength;

	void(*attack)(Character*, Character*);
	void(*escape)(Character*);
} Character;

Character build_character(char* name, int strength) ;

#endif