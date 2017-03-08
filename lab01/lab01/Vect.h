#pragma once
#ifndef _VECT_H
#define _VECT_H

#include "math.h"

class Vect
{
	double _x, _y, _z;
public:
	// Basic Constructor
	Vect();
	// General Construction Function
	Vect(double x, double y, double z);
	// destructor
	~Vect();

	// METHOD functions
	// get individual coordinates
	double getVectX() { return _x; }
	double getVectY() { return _y; }
	double getVectZ() { return _z; }

};


#endif // !_VECT_H