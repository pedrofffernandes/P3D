#include "Sphere.h"



Sphere::Sphere(Vect* position, double r, Material * mat) : Obj(mat)
{
	_position = position;
	_radius = r;
}


Sphere::~Sphere()
{
}
