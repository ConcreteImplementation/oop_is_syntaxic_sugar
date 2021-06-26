typedef struct Form Form;
typedef struct Square Square;
typedef struct Rectangle Rectangle;
typedef struct Circle Circle;

double form_get_area(Form* form);

Square* 	new_square(double side);
Rectangle*	new_rectangle(double length, double height);
Circle*		new_circle(double radius);
