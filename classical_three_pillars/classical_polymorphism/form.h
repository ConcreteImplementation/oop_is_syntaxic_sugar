#ifndef FORM_TYPE_HEADER
#define FORM_TYPE_HEADER


typedef struct Form Form;
typedef struct Form {
	double(*_get_area)(Form*);
} Form;


#endif