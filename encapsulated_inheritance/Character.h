#ifndef _CHARACTER_HEADER_
#define _CHARACTER_HEADER_


typedef struct Character Character;

char* get_name(Character* character);
int get_health(Character* character);
void receive_dommage(Character* character, int dommageReceive);

void attack(Character* character, Character* ennemy);
void escape(Character* character);

Character* new_character(char* name, int strength);


#endif