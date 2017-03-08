#pragma once
class Ray
{
	double _origin[3];
	double _direction[3];

	double _t;

public:
	Ray(double ox, double oy, double oz, double px, double py, double pz);
	~Ray();
};

