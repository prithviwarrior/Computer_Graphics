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

void road4()
{
	glBegin(GL_POLYGON);//left
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(-50,-50,0);
	glVertex3f(-50,50,0);
	glVertex3f(-20,50,0);
	glVertex3f(-20,-50,0);
	glEnd();

	glBegin(GL_POLYGON);//middle  black border
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-49, -2, 0);
	glVertex3f(-49, 37, 0);
	glVertex3f(-21, 37, 0);
	glVertex3f(-21, -2, 0);
	glEnd();

	glBegin(GL_POLYGON);//middle  white board
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-47, 0, 0);
	glVertex3f(-47, 35, 0);
	glVertex3f(-23, 35, 0);
	glVertex3f(-23, 0, 0);
	glEnd();

	glBegin(GL_POLYGON);//middle
	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(20, -50, 0);
	glVertex3f(20, 50, 0);
	glVertex3f(-20, 50, 0);
	glVertex3f(-20, -50, 0);
	glEnd();

	glBegin(GL_POLYGON);//middle  black border
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(17, -2, 0);
	glVertex3f(17, 37, 0);
	glVertex3f(-17, 37, 0);
	glVertex3f(-17, -2, 0);
	glEnd();

	glBegin(GL_POLYGON);//middle  white board
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(15, 0, 0);
	glVertex3f(15, 35, 0);
	glVertex3f(-15, 35, 0);
	glVertex3f(-15, 0, 0);
	glEnd();

	glBegin(GL_POLYGON);//right
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(20, -50, 0);
	glVertex3f(20, 50, 0);
	glVertex3f(50, 50, 0);
	glVertex3f(50, -50, 0);
	glEnd();

	/*glBegin(GL_POLYGON);//middle  white board
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(23, 0, 0);
	glVertex3f(23, 35, 0);
	glVertex3f(47, 35, 0);
	glVertex3f(47, 0, 0);
	glEnd();
	*/
	glBegin(GL_POLYGON);//right
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(49.9, -50, 0);
	glVertex3f(49.9, 50, 0);
	glVertex3f(50, 50, 0);
	glVertex3f(50, -50, 0);
	glEnd();
}





void init(void)
{
	glClearColor(0, 0.749, 0.5, 0);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);

}

/*void spindisplay
{
	x1 += 0.01;
	if (x1 > 110)
		x1 = 50;
	glutPostRedisplay();
}*/


void display4(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	road4();
	glPushMatrix();
	glTranslatef(x1, 0, 0);
	glPopMatrix();
	bitmap_output(-5, 30, "MATHEMATICS", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-10, 20, "(a+b)2=a2+b2+2ab", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-10, 12, "(a-b)2=a2+b2-2ab", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-10, 4, "a2-b2=(a+b)(a-b)", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-5, -20, "SOLVED", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-40, 20, "2Na+Cl2=2NaCl", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-40, 12, "H2+Cl2=2HCl", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-40, 4, "2Na+Br2=2NaBr", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-38, 30, "CHEMISTRY", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-35, -20, "SOLVED", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(35, 30, "NO ", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(34, 20, "MORE", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(34, 10, "EXAM", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(32, 0, "FEAR!!!!!!!!!!!", GLUT_BITMAP_HELVETICA_18);
	
	glFlush();
}




void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(1366, 768);
	glutCreateWindow("Frame1");
	init();
	glutDisplayFunc(display4);
	glColor3f(1, 0, 0);
	glLineWidth(5.0);
	glutDisplayFunc(display4);
	glutMainLoop();
}


