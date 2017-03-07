#include "sphere.h"



sphere::sphere(double x, double y, double z, double r, material * mat) : obj(mat)
{
	_position [0] = x;
	_position [1] = y;
	_position[2] = z;
	_radius = r;
}


sphere::~sphere()
{
}
