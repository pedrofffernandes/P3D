#include "Camera.h"



Camera::Camera()
{
	_vrp = new Vect(1, 1, 1);
	_vpn = new Vect(1, 0, 0);
	_vuv = new Vect(1, 1, 0);
}
Camera::Camera(Vect* vrp, Vect* vpn, Vect* vuv)
{
	_vrp = vrp;
	_vpn = vpn;
	_vuv = vuv;
}
Camera::Camera(Vect* vrp, Vect* vpn, Vect* vuv, int resX, int resY, float fov)
{
	_vrp = vrp;
	_vpn = vpn;
	_vuv = vuv;
	_fov = fov;
	_resX = resX;
	_resY = resY;
	_ze = (_vrp->minus(_vpn))->normalize();
	_xe = (_vuv->crossP(_ze))->normalize();
	_ye = _ze->crossP(_xe);
}

Camera::~Camera()
{
}

int Camera::getResX() {
	return _resX;
}

int Camera::getResY() {
	return _resY;
}

Ray * Camera::PrimaryRay(int x, int y)
{
	
	return nullptr;
}
