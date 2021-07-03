#ifndef PERSON_HEADER
#define PERSON_HEADER

typedef struct Person {
	char* first_name;
	char* last_name;
} Person;

void person_print_name(Person* person);

#endif