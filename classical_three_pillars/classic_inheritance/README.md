Inheritance via composition and pointer casting.

```c
// composition
typedef struct Employee {
	Person person; // Inherited type must be first
	double salary;
} Employee;


// pointer casting
person_print_name( (Person*) employee);
```