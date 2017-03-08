#pragma once
#include <string>
#include <iostream>
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
	std::list<light*> _lights;
	std::list<obj*> _objects;

	Camera * _camera;

public:
	Scene();
	Camera * getCamera();
	bool load_nff(std::string fileName);
	std::list<light*> getLights();
	std::list<obj*> getObjects();
	void addObject(obj * object);
	void addLight(light * light);



};