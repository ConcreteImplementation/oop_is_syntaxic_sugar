#include "person.h"

typedef struct Employee {
	Person person;
	double salary;
} Employee;

double employee_get_anual_salary(Employee employee);