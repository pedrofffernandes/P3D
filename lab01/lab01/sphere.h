#pragma once
#include "Obj.h"

class Sphere : public Obj
{
	Vect* _position;
	double _radius;

public:
	Sphere(Vect* position, double r, Material * mat) : Obj(mat) {};
	~Sphere();
};

