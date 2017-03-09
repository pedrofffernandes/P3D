#pragma once
#include "Obj.h"

class Sphere : public Obj
{
	Vect* _position;
	float _radius;

public:
	Sphere(Vect* position, float r, Material * mat);
	~Sphere();
};

