#include "Sphere.h"



Sphere::Sphere(Vect* position, float r, Material * mat) : Obj(mat)
{
	_position = position;
	_radius = r;
}


Sphere::~Sphere()
{
}
