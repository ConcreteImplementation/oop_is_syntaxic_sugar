#include <stdlib.h>
#include "form.h"

typedef struct Rectangle {
	Form form;
	double length;
	double height;
} Rectangle;

double _get_area_rectangle(Form* form) {
	Rectangle* rectangle = (Rectangle*) form;
	return rectangle->length * rectangle->height;
}


Rectangle* new_rectangle(double length, double height) {
	Rectangle* rectangle = malloc(sizeof(Rectangle));
	rectangle->form._get_area = _get_area_rectangle;
	rectangle->length = length;
	rectangle->height = height;
	return rectangle;
}
