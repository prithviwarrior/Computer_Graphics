// Frame1.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include<GL/glut.h>
#include<stdio.h>
void myinit()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
}

void road()
{
	glBegin(GL_POLYGON);			//Bottom road
	glColor3f(0.3f, 0.3f, 0.3f);
	glVertex2f(-1.0, -0.45f);
	glVertex2f(1.0, -0.45f);
	glVertex2f(1.0, -0.235f);
	glVertex2f(-1.0, -0.235f);
	glEnd();

	glBegin(GL_POLYGON);			//Top road
	glColor3f(0.3f, 0.3f, 0.3f);
	glVertex2f(-1.0, -0.225f);
	glVertex2f(1.0, -0.225f);
	glVertex2f(1.0, 0.0);
	glVertex2f(-1.0, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);		//Garden
	glVertex2f(-1.0, -0.46f);
	glVertex2f(1.0, -0.46f);
	glVertex2f(1.0, -1.0);
	glVertex2f(-1.0, -1.0);
	glEnd();

	/*glBegin(GL_POLYGON);			//Building 1
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-0.95f, 0.013f);
	glVertex2f(-0.5, 0.013f);
	glVertex2f(-0.5, 0.75f);
	glVertex2f(-0.75f, 0.75f);
	glVertex2f(-0.85f, 0.5);
	glVertex2f(-0.95f, 0.5);
	glEnd();*/

	glBegin(GL_POLYGON);			//Building 2 tution
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-0.95f,0.013f);
	glVertex2f(-0.65f,0.013f);
	glVertex2f(-0.65f,0.5);
	glVertex2f(-0.95f,0.5);
	glEnd();

	glBegin(GL_POLYGON);			//Building 2 tution door
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-0.9f, 0.014f);
	glVertex2f(-0.8f, 0.014f);
	glVertex2f(-0.8f, 0.25f);
	glVertex2f(-0.9f, 0.25f);
	glEnd();

	glBegin(GL_POLYGON);			//Building 2 tution window
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-0.77f, 0.15f);
	glVertex2f(-0.69f, 0.15f);
	glVertex2f(-0.69f, 0.3f);
	glVertex2f(-0.77f, 0.3f);
	glEnd();

	glBegin(GL_POLYGON);	//Building 3 school
	glColor3f(0.0, 0.0, 1.0);
	//glColor3f(0.1, 0.7, 0.8);
	glVertex2f(-0.5f, 0.013f);
	glVertex2f(0.15f, 0.013f);
	glVertex2f(0.15f, 0.85f);
	glVertex2f(-0.5f, 0.85f);
	glEnd();

	glBegin(GL_POLYGON);			//Building 3 school door
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-0.25f, 0.014f);
	glVertex2f(-0.135f, 0.014f);
	glVertex2f(-0.135f, 0.35f);
	glVertex2f(-0.25f, 0.35f);
	glEnd();

	glBegin(GL_POLYGON);			//Building 3 school window bottom left window
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-0.450f, 0.1f);
	glVertex2f(-0.35f, 0.1f);
	glVertex2f(-0.35f, 0.25f);
	glVertex2f(-0.45f, 0.25f);
	glEnd();

	glBegin(GL_POLYGON);			//Building 3 school window bottom right window
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(0.0f, 0.1f);
	glVertex2f(0.1f, 0.1f);
	glVertex2f(0.1f, 0.25f);
	glVertex2f(0.0f, 0.25f);
	glEnd();

	glBegin(GL_POLYGON);			//Building 3 school middle left window
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-0.450f, 0.5f);
	glVertex2f(-0.35f, 0.5f);
	glVertex2f(-0.35f, 0.35f);
	glVertex2f(-0.45f, 0.35f);
	glEnd();

	glBegin(GL_POLYGON);			//Building 3 school top left window
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-0.450f, 0.75f);
	glVertex2f(-0.35f, 0.75f);
	glVertex2f(-0.35f, 0.6f);
	glVertex2f(-0.45f, 0.6f);
	glEnd();

	glBegin(GL_POLYGON);			//Building 3 school middle right window
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.1f, 0.5f);
	glVertex2f(0.1f, 0.35f);
	glVertex2f(0.0f, 0.35f);
	glEnd();

	glBegin(GL_POLYGON);			//Building 3 school top right window
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(0.0f, 0.75f);
	glVertex2f(0.1f, 0.75f);
	glVertex2f(0.1f, 0.6f);
	glVertex2f(0.0f,0.6f);
	glEnd();

	glBegin(GL_POLYGON);			//Building 3 school top middle window
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-0.25f, 0.75f);
	glVertex2f(-0.135f, 0.75f);
	glVertex2f(-0.135f, 0.6f);
	glVertex2f(-0.25f, 0.6f);
	glEnd();

	glBegin(GL_POLYGON);			//Building 3 school middle middle window
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-0.25f, 0.4f);
	glVertex2f(-0.135f, 0.4f);
	glVertex2f(-0.135f, 0.5f);
	glVertex2f(-0.25f, 0.5f);
	glEnd();





	glBegin(GL_POLYGON);			//Building 4 home bottom
	glColor3f(0.0, 1.0, 0.5);
	glVertex2f(0.85f, 0.013f);
	glVertex2f(0.45f, 0.013f);
	glVertex2f(0.45f, 0.4f);
	glVertex2f(0.85f, 0.4f);
	glEnd();

	glBegin(GL_POLYGON);			//Building 4 home door
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(0.61f, 0.014f);
	glVertex2f(0.5f, 0.014f);
	glVertex2f(0.5f, 0.25f);
	glVertex2f(0.61f, 0.25f);
	glEnd();

	glBegin(GL_POLYGON);			//Building 4 home window
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(0.65f, 0.1f);
	glVertex2f(0.8f, 0.1f);
	glVertex2f(0.8f, 0.25f);
	glVertex2f(0.65f, 0.25f);
	glEnd();

	glBegin(GL_POLYGON);			//Building 4 home top
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2f(0.65f, 0.6f);
	glVertex2f(0.45f, 0.6f);
	glVertex2f(0.45f, 0.405f);
	glVertex2f(0.65f, 0.405f);
	glEnd();

	

	glBegin(GL_POLYGON);			//sky right top
	glColor3f(0.5, 1.0, 1.0);
	glVertex2f(0.65f, 0.405f);
	glVertex2f(1.0f, 0.405f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(0.65f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);			//sky btwn school n home
	glColor3f(0.5, 1.0, 1.0);
	glVertex2f(0.15f, 0.013f);
	glVertex2f(0.45f, 0.013f);
	glVertex2f(0.45f, 1.0f);
	glVertex2f(0.15f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);			//sky home bottom right
	glColor3f(0.5, 1.0, 1.0);
	glVertex2f(0.85f, 0.013f);
	glVertex2f(1.0f, 0.013f);
	glVertex2f(1.0f, 0.405f);
	glVertex2f(0.85f, 0.405f);
	glEnd();

	glBegin(GL_POLYGON);			//sky btwn tution n school
	glColor3f(0.5, 1.0, 1.0);
	glVertex2f(-0.5f, 0.013f);
	glVertex2f(-0.65f, 0.013f);
	glVertex2f(-0.65f, 1.0);
	glVertex2f(-0.5f, 1.0);
	glEnd();

	glBegin(GL_POLYGON);			//sky left
	glColor3f(0.5, 1.0, 1.0);
	glVertex2f(-0.65f, 0.5f);
	glVertex2f(-0.65f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(-1.0f, 0.5f);
	//glVertex2f(-0.95f, 0.013f);
	//glVertex2f(-0.95f, 0.5f);
	glEnd();

	glBegin(GL_POLYGON);			//sky left
	glColor3f(0.5, 1.0, 1.0);
	glVertex2f(-0.95f, 0.5f);
	glVertex2f(-0.95f, 0.013f);
	glVertex2f(-1.0f, 0.013f);
	glVertex2f(-1.0f, 0.5f);
	glEnd();

	glBegin(GL_POLYGON);			//sky school top
	glColor3f(0.5, 1.0, 1.0);
	glVertex2f(-0.5f, 1.0f);
	glVertex2f(0.15f, 1.0f);
	glVertex2f(0.15f, 0.85f);
	glVertex2f(-0.5f, 0.85f);
	glEnd();

	glBegin(GL_POLYGON);			//sky home hut
	glColor3f(0.5, 1.0, 1.0);
	glVertex2f(0.65f, 0.6f);
	glVertex2f(0.45f, 0.6f);
	glVertex2f(0.45f, 1.0f);
	glVertex2f(0.65f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);			//Building 4 home hut
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.65f, 0.6f);
	glVertex2f(0.45f, 0.6f);
	glVertex2f(0.55f, 0.75f);
	glEnd();

	/*glBegin(GL_POLYGON);			//sky blue
	glColor3f(0.5, 1.0, 1.0);
	glVertex2f(-1.0, 0.0);
	glVertex2f(-0.95f, 0.0f);
	glVertex2f(-0.95f, 0.5);
	glVertex2f(-0.65, 0.5);
	glVertex2f(-0.65, 0.0f);
	glVertex2f(-0.5f, 0.0f);
	glVertex2f(-0.5f, 0.85);
	glVertex2f(0.15, 0.85);
	glVertex2f(0.15, 0.0f);
	glVertex2f(0.45f, 0.0f);
	glVertex2f(0.45, 0.6f);
	glVertex2f(0.55f, 0.75);
	glVertex2f(0.65f, 0.6f);
	glVertex2f(0.65f, 0.4f);
	glVertex2f(0.85f, 0.4);
	glVertex2f(0.85f, 0.0);
	glVertex2f(1.0f, 0.0);
	glVertex2f(1.0f, 1.0);
	glVertex2f(-1.0f, 1.0);
	glEnd();*/

    /*glBegin(GL_POLYGON);			//sky blue
	glColor3f(0.5, 1.0, 1.0);
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(-0.95f, 0.0f);
	glVertex2f(-0.95f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
	*/

	/*glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-0.5,0.5);
	glVertex2f(-0.75,0.5);
	glVertex2f(-0.75,0.5);
	glEnd();
	*/
}

/*void bitmap_output(int x, int y, const char *String, void *font)
{
	int len, i;
	glRasterPos2f(x, y);
	len = (int)strlen(String);
	for (i = 0; i < len; i++)
	{
		glutBitmapCharacter(font, String[i]);
	}
}*/


void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	//bitmap_output(40, 35, "TUTION",GLUT_BITMAP_TIMES_ROMAN_24);

	road();
	glFlush();
}

/*void reshape(int w,int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, w, 0, h);
	glScalef(1, -1, 1);
	glTranslatef(0, -h, 0);
	glMatrixMode(GL_MODELVIEW);
}*/

void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1366, 768);
	glutCreateWindow("CG PROJECT FASTRACK");
	glutDisplayFunc(display);
	//glutReshapeFunc(reshape);
	myinit();
	glutMainLoop();

}