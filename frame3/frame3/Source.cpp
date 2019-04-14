#include<stdlib.h>
#include<Windows.h>
#include<gl/GL.h>
#include<GL/glut.h>
#include<math.h>
#define PI 3.1416

GLint i, x1 = 0;
GLfloat cx1 = 24;
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


void road2()
{
	glBegin(GL_POLYGON);			//floor
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-50, -50, 0);
	glVertex3f(50, -50, 0);
	glVertex3f(50, -5, 0);
	glVertex3f(-50, -5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//Table top
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex3f(-30, 0, 0);
	glVertex3f(20, 0, 0);
	glVertex3f(17, 20, 0);
	glVertex3f(-27, 20, 0);
	glEnd();

	glLineWidth(10);		//teble leg 1
	glBegin(GL_LINES);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex3f(-28, 0, 0);
	glVertex3f(-28, -20, 0);
	glEnd();


	glLineWidth(10);		//teble leg 2
	glBegin(GL_LINES);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex3f(-25, 0, 0);
	glVertex3f(-25, -15, 0);
	glEnd();

	glLineWidth(10);		//teble leg 3
	glBegin(GL_LINES);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex3f(15, 0, 0);
	glVertex3f(15, -15, 0);
	glEnd();

	glLineWidth(10);		//teble leg 4
	glBegin(GL_LINES);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex3f(18, 0, 0);
	glVertex3f(18, -20, 0);
	glEnd();

	glBegin(GL_POLYGON);			//child face
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-5, 25, 0);
	glVertex3f(-8, 35, 0);
	glVertex3f(-8, 40, 0);
	glVertex3f(-2, 40, 0);
	glVertex3f(-2, 35, 0);
	glEnd();

	glBegin(GL_POLYGON);			//child hair
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-8, 45, 0);
	glVertex3f(-8, 40, 0);
	glVertex3f(-2, 40, 0);
	glVertex3f(-2, 45, 0);
	glEnd();

	glBegin(GL_POLYGON);			//child body
	glColor3f(1.0f, 0.5f, 1.0f);
	glVertex3f(0, 20, 0);
	glVertex3f(-10, 20, 0);
	glVertex3f(-10, 30, 0);
	glVertex3f(0, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//child left hand
	glColor3f(1.0f, 0.5f, 0.0f);
	glVertex3f(-12, 25, 0);
	glVertex3f(-10, 25, 0);
	glVertex3f(-6, 32, 0);
	glVertex3f(-8, 32, 0);
	glEnd();

	glBegin(GL_POLYGON);			//child left hand
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-8, 27, 0);
	glVertex3f(-4, 27, 0);
	glVertex3f(-4, 32, 0);
	glVertex3f(-8, 32, 0);
	glEnd();

	
	glLineWidth(5);		//teble leg 4
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.5, 33, 0);
	glVertex3f(-3.5, 33, 0);
	glEnd();

	glBegin(GL_POLYGON);			//book on table
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-2, 20, 0);
	glVertex3f(-8, 20, 0);
	glVertex3f(-10, 17, 0);
	glVertex3f(0, 17, 0);
	glEnd();

	glBegin(GL_POLYGON);			//child right hand
	glColor3f(1.0f, 0.5f, 0.0f);
	glVertex3f(0, 28, 0);
	glVertex3f(2, 28, 0);
	glVertex3f(-2, 15, 0);
	glVertex3f(-4, 15, 0);
	glEnd();


	glBegin(GL_POLYGON);			//book on table
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(0, 14, 0);
	glVertex3f(-10, 14, 0);
	glVertex3f(-10, 17, 0);
	glVertex3f(0, 17, 0);
	glEnd();
}

void mom()
{
	
	

	glBegin(GL_POLYGON);			//mom head
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(34, 10, 0);
	glVertex3f(38, 10, 0);
	glVertex3f(38, 20, 0);
	glVertex3f(32, 20, 0);
	glVertex3f(32, 13, 0);
	glEnd();

	glBegin(GL_POLYGON);			//mom hair
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(32, 20, 0);
	glVertex3f(32, 22, 0);
	glVertex3f(40, 22, 0);
	glVertex3f(40, 0, 0);
	glVertex3f(38, 0, 0);
	glVertex3f(38, 10, 0);
	//glVertex3f(38, 18, 0);
	glEnd();


	glBegin(GL_POLYGON);			//mom top
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(32, 10, 0);
	glVertex3f(38, 10, 0);
	glVertex3f(38, -20, 0);
	glVertex3f(32, -20, 0);
	glEnd();


	glBegin(GL_POLYGON);			//mom hand
	glColor3f(1.0f, 0.5f, 0.0f);
	glVertex3f(32, 10, 0);
	glVertex3f(34, 10, 0);
	glVertex3f(30, -5, 0);
	glVertex3f(28, -5, 0);
	glEnd();


	glBegin(GL_POLYGON);			//mom plate in hand
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(30, -5, 0);
	glVertex3f(25, -5, 0);
	glVertex3f(25, -3, 0);
	glVertex3f(30, -3, 0);
	glEnd();

	glBegin(GL_POLYGON);			// glass on plate in mom hand
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(29, 1, 0);
	glVertex3f(26, 1, 0);
	glVertex3f(26, -3, 0);
	glVertex3f(29, -3, 0);
	glEnd();

	glBegin(GL_POLYGON);			//mom pant
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(33, -5, 0);
	glVertex3f(37, -5, 0);
	glVertex3f(37, -25, 0);
	glVertex3f(33, -25, 0);
	glEnd();

	glBegin(GL_POLYGON);			//mom leg
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(36, -25, 0);
	glVertex3f(32, -25, 0);
	glVertex3f(32, -27, 0);
	glVertex3f(30, -29, 0);
	glVertex3f(36, -29, 0);
	glEnd();
}


void init(void)
{
	glClearColor(0, 0.749, 0.5, 0);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);

}

void spindisplay3()
{
	cx1 -= 0.01;
	if (cx1 < -40)
		cx1 = -40;
	glutPostRedisplay();
}


void display3(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	road2();
	glPushMatrix();
	glTranslatef(cx1, 10, 0);
	mom();
	glPopMatrix();
	/*glPushMatrix();
	glTranslatef(x1, 0, 0);
	glPopMatrix();*/
	bitmap_output(-20, 35, "CHOCOLATY", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-20, 32, "HORLICKS", GLUT_BITMAP_HELVETICA_18);
	glFlush();
}


void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(1366, 768);
	glutCreateWindow("Frame1");
	init();
	//glColor3f(1, 0, 0);
	//glLineWidth(5.0);
	glutDisplayFunc(display3);
	glutIdleFunc(spindisplay3);
	glutMainLoop();
}


