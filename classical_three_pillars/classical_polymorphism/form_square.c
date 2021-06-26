#include <stdlib.h>
#include "form.h"

typedef struct Square {
	Form form;
	double side;	
} Square;

double _get_area_square(Form* form) {
	Square* square = (Square*) form;
	return square->side * square->side;
}

Square* new_square(double side) {
	Square* square = malloc(sizeof(Square));
	square->form._get_area = _get_area_square;
	square->side = side;
	return square;
}

