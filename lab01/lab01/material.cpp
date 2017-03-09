#include "Material.h"



Material::Material(Vect* rgb, float kd, float ks, float shine, float T, float refraction)
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
