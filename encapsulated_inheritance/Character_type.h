#ifndef _CHARACTER_TYPE_HEADER_
#define _CHARACTER_TYPE_HEADER_

typedef struct Character Character;
typedef struct Character {
	char* name;
	int health;
	int strength;

	void(*attack)(Character*, Character*);
	void(*escape)(Character*);
} Character;


#endif