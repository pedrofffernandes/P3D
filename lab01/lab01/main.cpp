#include <stdlib.h>
#include <GL/glut.h>
#include <iostream>
#include <stdio.h>
#include "scene.h"
#include <vector>

#define MAX_DEPTH 6
Scene * scene = NULL;
int RES_X, RES_Y;
Vect * rayTracing(Ray * ray, int depth, float ior);


void reshape(int w, int h)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, RES_X - 1, 0, RES_Y - 1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

// Draw function by primary ray casting from the eye towards the scene's objects

void drawScene()
{	
	for (int y = 0; y < RES_Y; y++)
	{
		for (int x = 0; x < RES_X; x++)
		{	
			Ray * ray = scene->getCamera()->PrimaryRay(x, y);
			Vect * color = rayTracing(ray, 1, 1.0); //depth=1, ior=1.0
			glBegin(GL_POINTS);
			glColor3f(color->getX(), color->getY(), color->getZ());
			glVertex2f(x, y);
			glEnd();
			glFlush();
			
		}
	}
	
	printf("Terminou!\n");
}

Vect * rayTracing(Ray * ray, int depth, float ior) {
	std::list<Obj*> objs = scene->getObjects();
	std::list<Obj*>::iterator itO;

	Obj* closest = nullptr;
	float dist = 9999, distNew;
	for (itO = objs.begin(); itO != objs.end(); itO++) {
		distNew = ((Obj*)*itO)->intersect(ray);				//Intersect

		if (distNew > 1e-6 && distNew < dist) {
			dist = distNew;
			closest = (Obj*)*itO;
		}		
	}
	if (closest == nullptr)
		return scene->getBackground();
	return new Vect(1, 0, 0);

	std::list<Light*> lights = scene->getLights();
	std::list<Light*>::iterator itL;
	for (itL = lights.begin(); itL != lights.end(); itL++) {
		//Vect * lVect = ((Light*)*itL)->getLVect(ray);
		//if(lVect->normal > 0) {
		//	Ray * newRay = new Ray(hit, lVect);
		//	if(!point in shadow)
		//		color += diffuse color + specular color;
	}


	//return nullptr;
}


int main(int argc, char**argv)
{
	scene = new Scene();
	if (!(scene->load_nff("jap.nff"))) return 0;
	

	
	RES_X = scene->getCamera()->getResX();
	RES_Y = scene->getCamera()->getResY();
	
	printf("resx = %d resy= %d.\n", RES_X, RES_Y);

	
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);

	glutInitWindowSize(RES_X, RES_Y);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("JAP Ray Tracing");
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glutReshapeFunc(reshape);
	glutDisplayFunc(drawScene);
	glDisable(GL_DEPTH_TEST);
	glutMainLoop();
	return 0;
}