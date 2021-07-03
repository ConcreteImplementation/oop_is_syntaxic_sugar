#include <stdio.h>

#include "employee.h"


int main(int argc, char const *argv[])
{
	Employee* employee = new_employee("Employee", "Ann", 500.0);
	
	employee_print_name(employee);
	printf("earns $%.2f a year\n", employee_get_salary(employee) * 12 );
	
	employee_free(employee);

	return 0;
}
