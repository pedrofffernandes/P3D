#include "Material.h"



Material::Material(Vect* rgb, double kd, double ks, double shine, double T, double refraction)
{
	// initializing color
	_rgb = rgb;
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
