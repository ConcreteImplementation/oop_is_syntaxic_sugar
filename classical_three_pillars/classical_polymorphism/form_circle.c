#include <stdlib.h>
#include "form.h"

#define PI 3.14159

typedef struct Circle {
	Form form;
	double radius;
} Circle;


double _get_area_circle(Form* form) {
	Circle* circle = (Circle*) form;
	return PI * circle->radius * circle->radius;
}

Circle* new_circle(double radius) {
	Circle* circle = malloc(sizeof(Circle));
	circle->form._get_area = _get_area_circle;
	circle->radius = radius;
	return circle;
}
