#pragma once
#include "obj.h"

class sphere : public obj
{
	double _position[3];
	double _radius;

public:
	sphere(double x, double y, double z, double r, material * mat) : obj(mat) {};
	~sphere();
};

