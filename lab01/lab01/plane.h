#pragma once
#include "obj.h"
class plane : obj
{
	double _point1[3];
	double _point2[3];
	double _point3[3];
public:
	plane(double px1, double py1, double pz1,
		double px2, double py2, double pz2,
		double px3, double py3, double pz3, material * mat) : obj(mat) {};
	~plane();
};

