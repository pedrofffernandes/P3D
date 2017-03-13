#include "Plane.h"
#include <stdio.h>
#include <iostream>


Plane::Plane(Vect* point1, Vect* point2, Vect* point3, Material * mat) : Obj(mat)
{
	_point1 = point1;
	_point2 = point2;
	_point3 = point3;
	std::cout << _point1->getX() << '\n';
	std::cout << _point1->getY() << '\n';
	std::cout << _point1->getZ() << '\n';
	std::cout << _point2->getX() << '\n';
	std::cout << _point2->getY() << '\n';
	std::cout << _point2->getZ() << '\n';
	std::cout << _point3->getX() << '\n';
	std::cout << _point3->getY() << '\n';
	std::cout << _point3->getZ() << '\n';
	
}


Plane::~Plane()
{
}

float Plane::intersect(Ray * ray)
{
	
	float x, y, z, a, b, c, d, den;
	Vect * p12 = _point2->minus(_point1);
	Vect * p13 = _point3->minus(_point1);
	//Get normal
	Vect * n =  p12->crossP(p13);
	//Get d(from plane equation)
	if ((n->dotP(_point1)) < 0) {
		n = n->multiply(-1);
	}
	a = n->getX();
	b = n->getY();
	c = n->getZ();
	d = a*_point1->getX() + b*_point1->getY() + c*_point1->getZ();
	
	n->normalize();
	
	//if (n->dotP(ray->getD()) < 1e-6 && n->dotP(ray->getD()) > -1e-6)
	//	return 0.0f;
	//Get closest point from origim to plane
	den = (a*a + b*b + c*c);
	x = (a*d) / den;
	y = (b*d) / den;
	z = (c*d) / den;
	Vect * p0 = new Vect(x, y, z);
	//float dp0 = p0->length();
	//float deno = n->dotP(ray->getD());
	//float cima = n->dotP(ray->getO()) + dp0;
	//return -(cima / deno);
	//printf("%f", -(d + ray->getO()->getZ()*c + ray->getO()->getY()*b + ray->getO()->getX()*a) / (ray->getD()->getZ()*c + ray->getD()->getY()*b + ray->getD()->getX()*a));

	return ((p0->minus(ray->getO()))->dotP(n)) / ray->getD()->dotP(n);
}
