#include "material.h"



Material::Material(double r, double g, double b, double kd, double ks, double shine, double T, double refraction)
{
	// initializing color
	_rgb[0] = r;
	_rgb[1] = g;
	_rgb[2] = b;
	// 
	_kd = kd;
	//
	_ks = ks;
	//
	_shine = shine;
	//
	_T = T;
	//
	_refraction = refraction;
}


Material::~Material()
{
}
