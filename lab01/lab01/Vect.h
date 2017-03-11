#pragma once
#ifndef _VECT_H
#define _VECT_H

#include "math.h"

class Vect
{
	float _x, _y, _z;
public:
	// Basic Constructor
	Vect();
	// General Construction Function
	Vect(float x, float y, float z);
	// destructor
	~Vect();

	Vect * normalize();

	Vect * minus(Vect * vect);

	Vect * crossP(Vect * vect);

	float length();

	// METHOD functions
	// get individual coordinates
	float getX() { return _x; }
	float getY() { return _y; }
	float getZ() { return _z; }

};
#endif // !_VECT_H