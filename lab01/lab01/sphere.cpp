#include "sphere.h"



Sphere::Sphere(double x, double y, double z, double r, Material * mat) : Obj(mat)
{
	_position [0] = x;
	_position [1] = y;
	_position [2] = z;
	_radius = r;
}


Sphere::~Sphere()
{
}
