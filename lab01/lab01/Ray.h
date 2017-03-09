#pragma once
#include "Vect.h"

class Ray
{
	Vect* _origin;
	Vect* _direction;

	float _t;

public:
	Ray(Vect* origin, Vect* direction);
	~Ray();
};

