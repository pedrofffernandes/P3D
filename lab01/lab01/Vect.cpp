#include "Vect.h"

// Vector class to define points and arrays

Vect::Vect()
{
	_x = 0;
	_y = 0;
	_z = 0;
}

Vect::Vect(float x, float y, float z)
{
	_x = x;
	_y = y;
	_z = z;
}

Vect::~Vect()
{
}

Vect * Vect::normalize() {
	float length = this->length();
	_x = _x * (1 / length);
	_y = _y * (1 / length);
	_z = _z * (1 / length);
	return this;
}

Vect * Vect::minus(Vect * vect) {
	return new Vect(_x - vect->getX(), _y - vect->getY(), _z - vect->getZ());
}

Vect * Vect::crossP(Vect * vect) {
	float x, y, z;
	x = (this->_y * vect->getZ()) - (this->_z * vect->getY());
	y = (this->_x * vect->getZ()) - (this->_z * vect->getX());
	z = (this->_x * vect->getY()) - (this->_y * vect->getX());
	return new Vect(x, y, z);
}

float Vect::length() {
	return sqrt(_x*_x + _y*_y + _z*_z);
}