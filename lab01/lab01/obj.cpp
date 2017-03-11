#include "Obj.h"



Obj::Obj(Material * m)
{
	_material = m;
}


Obj::~Obj()
{
}

float Obj::intersect(Ray * ray)
{
	return 0.0f;
}


