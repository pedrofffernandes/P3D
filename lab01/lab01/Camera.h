#pragma once
class Camera
{
	double _eye[3], _at[3], up[3];
	float _fovy;
	float _near, _far;
	int _ResX, _ResY;

	float _w, _h;
	double _xe[3], _ye[3], _ze[3];
public:
	Camera(double eyex, double eyey, double eyez,
			double atx, double aty, double atz,
			double upx,double upy, double upz,
			float fovy, float near, float far,
			int resx, int rexy, float w, float h,
			double xex, double xey, double xez,
			double yex, double yey, double yez,
			double zex, double zey, double zez);
	~Camera();
};

