Encapsulation via pointer to incomplete type definition.

```c
// incomplete type definition
typedef struct Person Person;


// pointer to incomplete type
Employee* employee = new_employee("Employee", "Ann", 500.0);
```