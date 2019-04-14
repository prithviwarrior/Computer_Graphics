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

	glBegin(GL_POLYGON);			//Building 1
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-0.95f, 0.013f);
	glVertex2f(-0.5, 0.013f);
	glVertex2f(-0.5, 0.75f);
	glVertex2f(-0.75f, 0.75f);
	glVertex2f(-0.85f, 0.5);
	glVertex2f(-0.95f, 0.5);
	glEnd();

	/*glBegin(GL_POLYGON);			//Building 2 change coord
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-0.95f,0.013f);
	glVertex2f(-0.5,0.013f);
	glVertex2f(-0.5,0.75);
	glVertex2f(-0.95f,0.5);
	glEnd();*/
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	/*glBegin(GL_LINES);
	glVertex2f(-1,-0.5);
	glVertex2f(1,-0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-1,0);
	glVertex2f(1,0);
	glEnd();*/				//This is for lines.
	road();
	glFlush();
}

void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1366, 768);
	glutCreateWindow("CG PROJECT FASTRACK");
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();

}