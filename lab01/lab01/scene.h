#pragma once
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <list>

#include "Camera.h"
#include "Light.h"
#include "Material.h"
#include "Ray.h"
#include "Plane.h"
#include "Sphere.h"
#include "Vect.h"

class Scene {
	std::list<Light*> _lights;
	std::list<Obj*> _objects;

	Camera * _camera;

public:
	Scene();
	Camera * getCamera();
	bool load_nff(std::string fileName);
	std::list<Light*> getLights();
	std::list<Obj*> getObjects();
	void addObject(Obj * object);
	void addLight(Light * light);

	static void parseComment(FILE * f);


	bool Scene::parseFile(FILE *file, int width, int height);
	void Scene::parseViewpoint(FILE *file, int width, int height);



};