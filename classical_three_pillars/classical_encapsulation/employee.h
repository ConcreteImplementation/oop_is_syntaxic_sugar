#ifndef EMPLOYEE_HEADER
#define EMPLOYEE_HEADER

typedef struct Employee Employee;

Employee* new_employee(const char* first_name, const char* last_name, double salary);
void employee_print_name(Employee* employee);
double employee_get_salary(Employee* employee);
void employee_free(Employee* employee);

#endif