#include "Camera.h"



Camera::Camera()
{
	_vrp = new Vect(1, 1, 1);
	_vpn = new Vect(1, 0, 0);
	_vuv = new Vect(1, 1, 0);
}
Camera::Camera(Vect vrp, Vect vpn, Vect vuv)
{
	_vrp = vrp;
	_vpn = new Vect(1, 0, 0);
	_vuv = new Vect(1, 1, 0);
}
Camera::Camera(Vect vrp, Vect vpn, Vect vuv, double angle)
{
	_vrp = new Vect(1, 1, 1);
	_vpn = new Vect(1, 0, 0);
	_vuv = new Vect(1, 1, 0);
}

Camera::~Camera()
{
}
