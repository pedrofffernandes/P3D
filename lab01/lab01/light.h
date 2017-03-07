#pragma once
class light
{
	double _position[3];
	double _rgb[3];

public:
	light(double x, double y, double z, double r, double g, double b);
	~light();
};

