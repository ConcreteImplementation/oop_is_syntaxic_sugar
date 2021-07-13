Polymorphism via composition, pointer casting and redirection to a function pointer


```c
// composition
typedef struct Square {
	Form form; 
	double side;	
} Square;

// pointer casting
area = form_get_area( (Form*) square );

// redrection to a function pointer
double form_get_area(Form* form) {
	return form->_get_area(form);
}
```