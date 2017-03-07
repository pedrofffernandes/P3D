#include "plane.h"



plane::plane(double px1, double py1, double pz1,
	double px2, double py2, double pz2,
	double px3, double py3, double pz3, material * mat) : obj(mat)
{
	_point1[0] = px1;
	_point1[1] = py1;
	_point1[2] = pz1;

	_point2[0] = px2;
	_point2[1] = py2;
	_point2[2] = pz2;

	_point3[0] = px3;
	_point3[1] = py3;
	_point3[2] = pz3;
	
}


plane::~plane()
{
}
