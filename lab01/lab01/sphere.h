#pragma once
#include "Obj.h"

class Sphere : public Obj
{
	double _position[3];
	double _radius;

public:
	Sphere(double x, double y, double z, double r, Material * mat) : Obj(mat) {};
	~Sphere();
};

