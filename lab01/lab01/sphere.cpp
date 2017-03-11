#include "Sphere.h"



Sphere::Sphere(Vect* position, float r, Material * mat) : Obj(mat)
{
	_position = position;
	_radius = r;
}


Sphere::~Sphere()
{
}

float Sphere::intersect(Ray * ray)
{
	float dx = ray->getD()->getX();
	float dy = ray->getD()->getY();
	float dz = ray->getD()->getZ();

	float ox = ray->getO()->getX();
	float oy = ray->getO()->getY();
	float oz = ray->getO()->getZ();

	float cx = _position->getX();
	float cy = _position->getY();
	float cz = _position->getZ();

	float d = (cy - oy)*(cy - oy) + (cy - oy)*(cy - oy) + (cz - oz)*(cz - oz);
	if (d == _radius*_radius)
		return 0.0f;
	float b = dx*(cx - ox) + dy*(cy - oy) + dz*(cz - oz);
	if (d > _radius*_radius)	
		if (b < 0)
			return 0.0f;
	float R = b*b - d + _radius*_radius;
	if (R < 0)
		return 0.0f;
	if (d > _radius*_radius)
		return b - sqrt(R);
	if (d < _radius*_radius)
		return b + sqrt(R);
}
