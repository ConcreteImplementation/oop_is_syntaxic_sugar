#include <stdio.h>
#include <stdlib.h>

#include "geometry.h"

int main(int argc, char const *argv[])
{
	Square* square = new_square(5);
	Rectangle* rectangle = new_rectangle(5, 4);
	Circle* circle = new_circle(5);


	double area = 0.0;

	area = form_get_area( (Form*) square );
	printf("Area of square    : %f\n", area);

	area = form_get_area( (Form*) rectangle );
	printf("Area of rectangle : %f\n", area);

	area = form_get_area( (Form*) circle );
	printf("Area of circle    : %f\n", area);


	free(square);
	free(rectangle);
	free(circle);

	return 0;
}
