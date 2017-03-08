#pragma once
#include "Obj.h"

class Plane : Obj
{
	Vect* _point1;
	Vect* _point2;
	Vect* _point3;

public:
	Plane(Vect* point1, Vect* point2, Vect* point3, Material * mat) : Obj(mat) {};
	~Plane();
};

