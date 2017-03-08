#pragma once
#include "Vect.h"

class Ray
{
	Vect* _origin;
	Vect* _direction;

	double _t;

public:
	Ray(Vect* origin, Vect* direction);
	~Ray();
};

