#pragma once
class Light
{
	//test
	double _position[3];
	double _rgb[3];

public:
	Light(double x, double y, double z, double r, double g, double b);
	~Light();
};

