#pragma once
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <list>

#include "Camera.h"
#include "light.h"
#include "material.h"
#include "Ray.h"
#include "plane.h"
#include "sphere.h"

class Scene {
	std::list<light> lights;
	std::list<obj> objects;

	camara camera;
public:

};