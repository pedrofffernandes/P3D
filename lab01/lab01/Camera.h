#pragma once
#ifndef _CAMERA_H
#define _CAMERA_H

#include "Vect.h"


class Camera
{
	// Camera Parameters
	// Camera Position (eyepoint)
	// VRP (View Reference Point)
	Vect* _vrp;
	// Camera Direction
	// VPN (View Plane Normal)
	Vect* _vpn;
	// Camera Rotation
	// VUV (View Up Vector)
	Vect* _vuv;

	int _resX;
	int _resY;
	// Camera Angle
	// (aka.: How wide you can see?)
	// FOV (Field of View)
	float _fov;



	// Window settings
	// not to be used in here
	/*
		float _fovy;
		float _near, _far;
		int _ResX, _ResY;
		float _w, _h;
		double _xe[3], _ye[3], _ze[3];
	*/

public:
	// Default Camera
	Camera();
	// Camera without the FOV (angle)
	Camera(Vect* vrp, Vect* vpn, Vect* vuv);
	// Camera with the FOV (angle)
	Camera(Vect* vrp, Vect* vpn, Vect* vuv, int resX, int resY, float fov);
	// destructor
	~Camera();
};

#endif // !_CAMERA_H