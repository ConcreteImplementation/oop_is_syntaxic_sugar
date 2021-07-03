#include <stdio.h>
#include <stdlib.h>

typedef struct Employee {
	char* first_name;
	char* last_name;
	double salary;
} Employee;


Employee* new_employee(char* first_name, char* last_name, double salary) {
	Employee* employee = malloc(sizeof(Employee));
	employee->first_name = first_name;
	employee->last_name = last_name;
	employee->salary = salary;
}

void employee_print_name(Employee* employee) {
	printf("%s, %s\n", employee->last_name, employee->first_name);
}

double employee_get_salary(Employee* employee) {
	return employee->salary;
}

void employee_free(Employee* employee) {
	free(employee);
}