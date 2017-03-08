#include "Vect.h"

// Vector class to define points and arrays

Vect::Vect()
{
	//test
	_x = 0;
	_y = 0;
	_z = 0;
}

Vect::Vect(double x, double y, double z)
{
	_x = x;
	_y = y;
	_z = z;
}

Vect::~Vect()
{
}
