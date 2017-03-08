#include "Light.h"



Light::Light(double x, double y, double z, double r, double g, double b)
{
	_position[0] = x;
	_position[1] = y;
	_position[2] = z;
	_rgb[0] = r;
	_rgb[1] = g;
	_rgb[2] = b;
}


Light::~Light()
{
}
