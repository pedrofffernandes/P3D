#include "Plane.h"



Plane::Plane(Vect* point1, Vect* point2, Vect* point3, Material * mat) : Obj(mat)
{
	_point1 = point1;
	_point2 = point2;
	_point3 = point3;
	
}


Plane::~Plane()
{
}

float Plane::intersect(Ray * ray)
{
	float x, y, z, a, b, c, d, den;
	Vect * p12 = _point2->minus(_point1);
	Vect * p13 = _point3->minus(_point1);
	Vect * n =  (p12->crossP(p13))->normalize();
	if ((d = n->dotP(_point1)) < 0)
		n = n->multiply(-1);
	a = n->getX();
	b = n->getY();
	c = n->getZ();
	if (n->dotP(ray->getD()) < 1e-6)
		return 0.0f;
	den = (a*a + b*b + c*c);
	x = (a*d) / den;
	y = (b*d) / den;
	z = (c*d) / den;
	Vect * p0 = new Vect(x, y, z);

	return ((p0->minus(ray->getO()))->dotP(n)) / ray->getD()->dotP(n);
}
