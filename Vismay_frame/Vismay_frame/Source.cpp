#include<stdlib.h>
#include<Windows.h>
#include<gl/GL.h>
#include<GL/glut.h>
#include<math.h>
#define PI 3.1416

GLint i, x1 = 0;
void bitmap_output(double x, double y, const char  *string, void *font)
{
	int len, i;
	glRasterPos2f(x, y);
	len = (double)strlen(string);
	for (i = 0; i < len; i++)
	{
		glutBitmapCharacter(font, string[i]);
	}

}





void circle(GLdouble rad)
{
	GLint points = 50;
	GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
	GLdouble theta = 0.0;

	glBegin(GL_POLYGON);
	{
		for (i = 0; i <= 50; i++, theta += delTheta)
		{
			glVertex2f(rad * cos(theta), rad * sin(theta));
		}
	}
	glEnd();
}







void road1()
{

	glBegin(GL_POLYGON);			//table blue
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-10, -50, 0);
	glVertex3f(5, -30, 0);
	glVertex3f(-10, -10, 0);
	glVertex3f(40, -10, 0);
	glVertex3f(40, -50, 0);
	glEnd();

	glBegin(GL_POLYGON);			//table green
	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(-50, -50, 0);
	glVertex3f(-10, -50, 0);
	glVertex3f(5, -30, 0);
	glVertex3f(-10, -10, 0);
	glVertex3f(-50, -10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//boy face
	glColor3f(0.0, 1.5, 0.5);
	glVertex3f(-18, 22, 0);
	glVertex3f(-12, 22, 0);
	glVertex3f(-12, 14, 0);
	glVertex3f(-15, 11, 0);
	glVertex3f(-18, 14, 0);
	glEnd();

	glLineWidth(5);		//boy eye
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex3f(-14, 20, 0);
	glVertex3f(-13.5, 20, 0);
	glEnd();

	glBegin(GL_POLYGON);			//boy shirt
	glColor3f(0.0, 0.5, 1.0);
	glVertex3f(-20, -10, 0);
	glVertex3f(-10, -10, 0);
	glVertex3f(-10, 10, 0);
	glVertex3f(-15, 13, 0);
	glVertex3f(-20, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//boy hair
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-18, 22, 0);
	glVertex3f(-12, 22, 0);
	glVertex3f(-10, 25, 0);
	glVertex3f(-18, 25, 0);
	glEnd();

	glBegin(GL_POLYGON);			//dad hand
	glColor3f(1.35, 1.0, 0.5);
	glVertex3f(-10, 7, 0);
	glVertex3f(-10, 10, 0);
	glVertex3f(-2, 4, 0);
	glVertex3f(-2, 1, 0);
	glEnd();


	glBegin(GL_POLYGON);			//dad hand
	glColor3f(1.35, 1.0, 0.5);
	glVertex3f(6, 10, 0);
	glVertex3f(6, 13, 0);
	glVertex3f(-2, 4, 0);
	glVertex3f(-2, 1, 0);
	glEnd();

	glBegin(GL_POLYGON);			//dad face
	glColor3f(1.35, 1.0, 0.3);
	glVertex3f(10, 15, 0);
	glVertex3f(7, 17, 0);
	glVertex3f(7, 25, 0);
	glVertex3f(13, 25, 0);
	glVertex3f(13, 17, 0);
	glEnd();


	glLineWidth(5);		//dad eye
	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex3f(8.5, 23, 0);
	glVertex3f(9, 23, 0);
	glEnd();
	

	glBegin(GL_POLYGON);			//dad hair
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(7, 25, 0);
	glVertex3f(13, 25, 0);
	glVertex3f(13, 27, 0);
	glVertex3f(5, 27, 0);
	glEnd();


	glBegin(GL_POLYGON);			//dad shirt
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(5, 13, 0);
	glVertex3f(5, -10, 0);
	glVertex3f(17, -10, 0);
	glVertex3f(17, 13, 0);
	glVertex3f(10, 16, 0);
	glEnd();



}



void init(void)
{
	//glClearColor(0, 0.749, 1, 0);
	glClearColor(1.5, 0.5, 0.7, 0);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);

}

/*void spindisplay
{
	x1 += 0.01;
	if (x1 > 110)
		x1 = 50;
	glutPostRedisplay();
}*/


void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	road1();
	glPushMatrix();
	glTranslatef(x1, 0, 0);
	glPopMatrix();
	bitmap_output(-4, 35, "HAPPY", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-5, 30, "BIRTHDAY", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(30, 30, "MY BOY", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(30, 25, "123", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(30, 20, "456", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(30, 15, "789", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-40, 25, "THANK YOU DADDY", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-40, 20, "XYZ", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-40, 15, "abc", GLUT_BITMAP_HELVETICA_18);


	glFlush();
}




void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(1366, 768);
	glutCreateWindow("Frame1");
	init();
	glutDisplayFunc(display);
	glColor3f(1, 0, 0);
	glLineWidth(5.0);
	glutDisplayFunc(display);
	glutMainLoop();
}
