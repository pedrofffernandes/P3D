#pragma once
class material
{
	double _rgb [3];
	double _kd;
	double _ks;
	double _shine;
	double _T; // transmitance
	double _refraction; // index of refraction
public:
	material(double r, double g, double b, double kd, double ks, double shine, double T, double refraction);
	~material();
};

