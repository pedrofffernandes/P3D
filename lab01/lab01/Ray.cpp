#include "Ray.h"



Ray::Ray(double ox, double oy, double oz, double dx, double dy, double dz)
{
	_origin[0] = ox;
	_origin[1] = oy;
	_origin[2] = oz;

	_direction[0] = dx;
	_direction[1] = dy;
	_direction[2] = dz;
}


Ray::~Ray()
{
}
