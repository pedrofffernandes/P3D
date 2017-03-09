#pragma once
#include "Obj.h"

class Plane : public Obj
{
	Vect* _point1;
	Vect* _point2;
	Vect* _point3;

public:
	Plane(Vect* point1, Vect* point2, Vect* point3, Material * mat);
	~Plane();
	Vect * getPoint1() { return _point1;}
	float Plane::intersect(Vect * origin, Vect * direction);
};

