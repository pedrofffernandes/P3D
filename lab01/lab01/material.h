#pragma once
#include "vect.h"

class Material
{
	Vect* _rgb;
	double _kd;
	double _ks;
	double _shine;
	double _T; // transmitance
	double _refraction; // index of refraction
public:
	Material(Vect* rgb, double kd, double ks, double shine, double T, double refraction);
	~Material();
};

