#include <stdio.h>
#include "person.h"

void person_print_name(Person* person) {
	printf("%s, %s\n", person->last_name, person->first_name);
}