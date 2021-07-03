#include <stdlib.h>

#include "person.h"
#include "employee.h"


int main(int argc, char const *argv[])
{
	Person person;
	person.last_name = "HandSome";
	person.first_name = "One";

	person_print_name(&person);

	Employee* employee = malloc(sizeof(Employee));
	employee->person.last_name = "Ann";
	employee->person.first_name = "Employee";
	employee->salary = 500.0;

	person_print_name( (Person*) employee);

	free(employee);

	return 0;
}
