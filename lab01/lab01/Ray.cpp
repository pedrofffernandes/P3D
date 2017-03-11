#include "Ray.h"



Ray::Ray(Vect* origin, Vect* direction)
{
	_origin = origin;
	_direction = direction;
}


Ray::~Ray()
{
}

Vect * Ray::getD()
{
	return _direction;
}

Vect * Ray::getO()
{
	return _origin;
}
