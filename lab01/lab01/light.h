#pragma once
#include "Vect.h"

class Light
{
	Vect* _position;
	Vect* _rgb;

public:
	Light(Vect* position, Vect* rgb);
	~Light();
	void setColor(Vect * rgb);
	Vect * getLVect(Vect * hit);
};

