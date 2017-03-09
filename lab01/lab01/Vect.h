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

	// METHOD functions
	// get individual coordinates
	float getVectX() { return _x; }
	float getVectY() { return _y; }
	float getVectZ() { return _z; }

};
#endif // !_VECT_H