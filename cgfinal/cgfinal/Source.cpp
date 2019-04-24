#include<stdlib.h>
#include<Windows.h>
#include<gl/GL.h>
#include<GL/glut.h>
#include<math.h>
#define PI 3.1416

GLint i, x1 = 0;
GLfloat cx1 = 24;
GLfloat cx2 = -45;
GLfloat cx3 = -45;
GLfloat cx4 = 30;
GLfloat cx5 = -45;
GLfloat cx6 = -41;
GLfloat cx7 = -34;


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

void cloudB()

{
	//left

	glPushMatrix();
	glTranslatef(4, 5.5, 0);
	circle(4);
	glPopMatrix();

	//right

	glPushMatrix();
	glTranslatef(-8, 5.5, 0);
	circle(3.5);
	glPopMatrix();

	//top left

	glPushMatrix();
	glTranslatef(-3.5, 9, 0);
	circle(3.5);
	glPopMatrix();

	//top right

	glPushMatrix();
	glTranslatef(1, 9, 0);
	circle(3);
	glPopMatrix();

	//middle

	glPushMatrix();

	//glColor3f (1, 1 ,1);
	glTranslatef(-1.5, 5.5, 0);
	circle(4);
	glPopMatrix();

}

void a()                                        //mini Cloud

{
	//left

	glPushMatrix();
	glTranslatef(4, 5.5, 0);
	circle(4);
	glPopMatrix();

	//right

	glPushMatrix();
	glTranslatef(-8, 5.5, 0);
	circle(3.5);
	glPopMatrix();

	//top left

	glPushMatrix();
	glTranslatef(-3.5, 9, 0);
	circle(3.5);
	glPopMatrix();

	//top right

	glPushMatrix();
	glTranslatef(1, 9, 0);
	circle(3);
	glPopMatrix();

	//middle

	glPushMatrix();
	glTranslatef(-1.5, 5.5, 0);
	circle(4);
	glPopMatrix();

}

void c()                                        //One Single Cloud
{
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(35, 10, 0);
	a();
	glPopMatrix();


	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(28, 16, 0);
	a();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(20, 10, 0);
	a();
	glPopMatrix();
}

void cloud()                                     // Three Cloud
{
	glPushMatrix();
	glTranslatef(-15.0, 30.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(20.0, 25.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-60.0, 25.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c();
	glPopMatrix();

}

void draw_tree()
{
	//1st tree
	glColor3f(0.1f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-30.0, 5.0);
	glVertex2f(-25.0, 5.0);
	glVertex2f(-25.0, 10.0);
	glVertex2f(-30.0, 10.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-17.5, 10.0);
	glVertex2f(-22.5, 15.0);
	glVertex2f(-32.5, 15.0);
	glVertex2f(-37.5, 10.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-20.0, 15.0);
	glVertex2f(-25.0, 20.0);
	glVertex2f(-30.0, 20.0);
	glVertex2f(-35.0, 15.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-22.5, 20.0);
	glVertex2f(-27.5, 25.0);
	glVertex2f(-32.5, 20.0);
	glEnd();

	//2nd tree
	glColor3f(0.1f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(30.0, 5.0);
	glVertex2f(25.0, 5.0);
	glVertex2f(25.0, 10.0);
	glVertex2f(30.0, 10.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(17.5, 10.0);
	glVertex2f(22.5, 15.0);
	glVertex2f(32.5, 15.0);
	glVertex2f(37.5, 10.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(20.0, 15.0);
	glVertex2f(25.0, 20.0);
	glVertex2f(30.0, 20.0);
	glVertex2f(35.0, 15.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(22.5, 20.0);
	glVertex2f(27.5, 25.0);
	glVertex2f(32.5, 20.0);
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
void car()
{
	glBegin(GL_POLYGON);			//car body
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-45, -20, 0);
	glVertex3f(-45, -12, 0);
	glVertex3f(-42, -12, 0);
	glVertex3f(-40, -5, 0);
	glVertex3f(-35, -5, 0);
	glVertex3f(-32, -12, 0);
	glVertex3f(-30, -12, 0);
	glVertex3f(-30, -20, 0);
	glEnd();

	glBegin(GL_POLYGON);			//car window
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-40, -6, 0);
	glVertex3f(-35, -6, 0);
	glVertex3f(-35, -11, 0);
	glVertex3f(-40, -11, 0);
	glEnd();

	glBegin(GL_POLYGON);			//black line 
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-37.5, -6, 0);
	glVertex3f(-37, -6, 0);
	glVertex3f(-37, -11, 0);
	glVertex3f(-37.5, -11, 0);
	glEnd();

	glBegin(GL_POLYGON);			//car bottom red
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(-44, -19, 0);
	glVertex3f(-44, -13, 0);
	glVertex3f(-31, -13, 0);
	glVertex3f(-31, -19, 0);
	glEnd();

	glPushMatrix();
	//glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(cx6, -20.0, 0.0);
	glScalef(0.7, 1.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	circle(3);
	glPopMatrix();

	glPushMatrix();
	//glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(cx7, -20.0, 0.0);
	glScalef(0.7, 1.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	circle(3);
	glPopMatrix();
}


void road()
{
	glBegin(GL_POLYGON);			//garden
	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(-50, -50, 0);
	glVertex3f(50, -50, 0);
	glVertex3f(50, -30, 0);
	glVertex3f(-50, -30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road lower
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -30, 0);
	glVertex3f(50, -30, 0);
	glVertex3f(50, -20, 0);
	glVertex3f(-50, -20, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road upper
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -17, 0);
	glVertex3f(50, -17, 0);
	glVertex3f(50, -7, 0);
	glVertex3f(-50, -7, 0);
	glEnd();
}

void road1()
{
	glBegin(GL_POLYGON);			//floor
	glColor3f(0.0, 1.0, 0.0);
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

	glBegin(GL_POLYGON);			//book rak
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(30, -5, 0);
	glVertex3f(45, -20, 0);
	glVertex3f(45, 5, 0);
	glVertex3f(30, 20, 0);
	glEnd();

	glBegin(GL_POLYGON);			//book1 in rak
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(32, -5, 0);
	glVertex3f(38, -11, 0);
	glVertex3f(38, -8, 0);
	glVertex3f(32, -2, 0);
	glEnd();

	glBegin(GL_POLYGON);			//book2 in rak
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex3f(32, 1, 0);
	glVertex3f(38, -5, 0);
	glVertex3f(38, -8, 0);
	glVertex3f(32, -2, 0);
	glEnd();

	glBegin(GL_POLYGON);			//book3 in rak
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(32, 1, 0);
	glVertex3f(38, -5, 0);
	glVertex3f(38, -2, 0);
	glVertex3f(32, 4, 0);
	glEnd();

	glBegin(GL_POLYGON);			//book4 in rak
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(32, 1, 0);
	glVertex3f(38, -2, 0);
	glVertex3f(38, -1, 0);
	glVertex3f(32, 4, 0);
	glEnd();


	/*glBegin(GL_LINE_LOOP);			//child  nose
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-4.5, 20, 0);
	glVertex3f(-5.0, 25, 0);
	//glVertex3f(-5.3, 10, 0);
	glEnd();*/

	glBegin(GL_POLYGON);			//child face
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-5, 25, 0);
	glVertex3f(-8, 35, 0);
	glVertex3f(-8, 40, 0);
	glVertex3f(-2, 40, 0);
	glVertex3f(-2, 35, 0);
	glEnd();


	glBegin(GL_LINE_LOOP);			//child left eye
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-4, 20, 0);
	glVertex3f(-4.5, 35, 0);
	
	glEnd();

	glBegin(GL_LINE_LOOP);			//child  right eye
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-6.0, 20, 0);
	glVertex3f(-6.5, 35, 0);
	glEnd();

	glBegin(GL_POLYGON);			//black line 
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0, 33, 0);
	glVertex3f(-5,33, 0);
	glVertex3f(-5, 35, 0);
	glVertex3f(0, 35, 0);
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
	glVertex3f(-6, 40, 0);
	glVertex3f(-8, 40, 0);
	glEnd();

	glBegin(GL_POLYGON);			//child right hand
	glColor3f(1.0f, 0.5f, 0.0f);
	glVertex3f(0, 25, 0);
	glVertex3f(2, 25, 0);
	glVertex3f(-2, 40, 0);
	glVertex3f(-4, 40, 0);
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

	glBegin(GL_POLYGON);			//book on table
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(0, 14, 0);
	glVertex3f(-10, 14, 0);
	glVertex3f(-10, 17, 0);
	glVertex3f(0, 17, 0);
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

void road4()
{
	glBegin(GL_POLYGON);//left
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(-50, -50, 0);
	glVertex3f(-50, 50, 0);
	glVertex3f(-20, 50, 0);
	glVertex3f(-20, -50, 0);
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

void road5()
{

	glBegin(GL_POLYGON);//Background
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-50, -50, 0);
	glVertex3f(-50, 50, 0);
	glVertex3f(50, 50, 0);
	glVertex3f(50, -50, 0);
	glEnd();


	glBegin(GL_POLYGON);//bottle 1
	glColor3f(0.0, 1.0, 1.0);
	glVertex3f(-40, -10, 0);
	glVertex3f(-40, 20, 0);
	glVertex3f(-30, 20, 0);
	glVertex3f(-30, -10, 0);
	glEnd();

	glBegin(GL_POLYGON);//bottle 1 lid
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-39, 25, 0);
	glVertex3f(-39, 20, 0);
	glVertex3f(-31, 20, 0);
	glVertex3f(-31, 25, 0);
	glEnd();

	glBegin(GL_POLYGON);//bottle 1 base
	glColor3f(1.0, 0.0, 1.0);
	glVertex3f(-40, -10, 0);
	glVertex3f(-40, -15, 0);
	glVertex3f(-30, -15, 0);
	glVertex3f(-30, -10, 0);
	glEnd();

	glBegin(GL_POLYGON);//bottle2
	glColor3f(0.0, 1.0, 1.0);
	glVertex3f(-20, -10, 0);
	glVertex3f(-20, 20, 0);
	glVertex3f(-10, 20, 0);
	glVertex3f(-10, -10, 0);
	glEnd();

	glBegin(GL_POLYGON);//bottle2 lid
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-19, 25, 0);
	glVertex3f(-19, 20, 0);
	glVertex3f(-11, 20, 0);
	glVertex3f(-11, 25, 0);
	glEnd();

	glBegin(GL_POLYGON);//bottle2 base
	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(-20, -10, 0);
	glVertex3f(-20, -15, 0);
	glVertex3f(-10, -15, 0);
	glVertex3f(-10, -10, 0);
	glEnd();

	glBegin(GL_POLYGON);//bottle3
	glColor3f(0.0, 1.0, 1.0);
	glVertex3f(10, -10, 0);
	glVertex3f(10, 20, 0);
	glVertex3f(20, 20, 0);
	glVertex3f(20, -10, 0);
	glEnd();

	glBegin(GL_POLYGON);//bottle3 lid
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(11, 25, 0);
	glVertex3f(11, 20, 0);
	glVertex3f(19, 20, 0);
	glVertex3f(19, 25, 0);
	glEnd();

	glBegin(GL_POLYGON);//bottle3 base
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex3f(10, -10, 0);
	glVertex3f(10, -15, 0);
	glVertex3f(20, -15, 0);
	glVertex3f(20, -10, 0);
	glEnd();

	glBegin(GL_POLYGON);//bottle4
	glColor3f(0.0, 1.0, 1.0);
	glVertex3f(30, -10, 0);
	glVertex3f(30, 20, 0);
	glVertex3f(40, 20, 0);
	glVertex3f(40, -10, 0);
	glEnd();

	glBegin(GL_POLYGON);//bottle4 lid
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(31, 25, 0);
	glVertex3f(31, 20, 0);
	glVertex3f(39, 20, 0);
	glVertex3f(39, 25, 0);
	glEnd();

	glBegin(GL_POLYGON);//bottle4 base
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(30, -10, 0);
	glVertex3f(30, -15, 0);
	glVertex3f(40, -15, 0);
	glVertex3f(40, -10, 0);
	glEnd();


}

void tution()
{
	glBegin(GL_POLYGON);			//tution
	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(-40, -7, 0);
	glVertex3f(-25, -7, 0);
	glVertex3f(-25, 15, 0);
	glVertex3f(-40, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//tution door
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-35, 6, 0);
	glVertex3f(-32, 6, 0);
	glVertex3f(-32, -7, 0);
	glVertex3f(-35, -7, 0);
	glEnd();

	glBegin(GL_POLYGON);			//tution window 
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-30, 6, 0);
	glVertex3f(-26, 6, 0);
	glVertex3f(-26, 10, 0);
	glVertex3f(-30, 10, 0);
	glEnd();

	glBegin(GL_LINES);			//tution window rod
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-30, 8, 0);
	glVertex3f(-26, 8, 0);
	glEnd();

	glBegin(GL_LINES);			//tution window rod
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-28, 6, 0);
	glVertex3f(-28, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//school
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-15, -7, 0);
	glVertex3f(15, -7, 0);
	glVertex3f(15, 30, 0);
	glVertex3f(-15, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//school door
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-5, -7, 0);
	glVertex3f(5, -7, 0);
	glVertex3f(5, 15, 0);
	glVertex3f(-5, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//school window left bottom
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-14, 0, 0);
	glVertex3f(-6, 0, 0);
	glVertex3f(-6, 8, 0);
	glVertex3f(-14, 8, 0);
	glEnd();

	glBegin(GL_POLYGON);			//school window left top
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-14, 16, 0);
	glVertex3f(-6, 16, 0);
	glVertex3f(-6, 24, 0);
	glVertex3f(-14, 24, 0);
	glEnd();
	glBegin(GL_POLYGON);			//school middle window
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-5, 16, 0);
	glVertex3f(5, 16, 0);
	glVertex3f(5, 24, 0);
	glVertex3f(-5, 24, 0);
	glEnd();


	glBegin(GL_POLYGON);			//school window right bottom
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(6, 0, 0);
	glVertex3f(14, 0, 0);
	glVertex3f(14, 8, 0);
	glVertex3f(6, 8, 0);
	glEnd();

	glBegin(GL_POLYGON);			//school window right top
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(6, 24, 0);
	glVertex3f(14, 24, 0);
	glVertex3f(14, 16, 0);
	glVertex3f(6, 16, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(25, -7, 0);
	glVertex3f(25, 30, 0);
	glVertex3f(35, 30, 0);
	glVertex3f(35, 10, 0);
	glVertex3f(45, 10, 0);
	glVertex3f(45, -7, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home top
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(30, 40, 0);
	glVertex3f(25, 30, 0);
	glVertex3f(35, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home door
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(28, -7, 0);
	glVertex3f(28, 7, 0);
	glVertex3f(32, 7, 0);
	glVertex3f(32, -7, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home door top
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(28, 10, 0);
	glVertex3f(28, 20, 0);
	glVertex3f(32, 20, 0);
	glVertex3f(32, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home side window
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(38, -2, 0);
	glVertex3f(38, 5, 0);
	glVertex3f(42, 5, 0);
	glVertex3f(42, -2, 0);
	glEnd();
}

void display5(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	road5();
	glPushMatrix();
	glTranslatef(x1, 0, 0);
	glPopMatrix();
	bitmap_output(-10, 40, "DIFFERENT PRODUCTS OF HORLICKS", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-39, 2, "HORLICKS", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-19, 2, "HORLICKS", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(11, 2, "HORLICKS", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(31, 2, "HORLICKS", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-39, -20, "WOMEN'S", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-18, -20, "PISTA", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(11, -20, "CHOCOLATY", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(31, -20, "CHILDREN'S", GLUT_BITMAP_HELVETICA_18);
	glFlush();
}

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

void display3(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	road2();
	glPushMatrix();
	glTranslatef(cx4, 10, 0);
	mom();
	glPopMatrix();
	/*glPushMatrix();
	glTranslatef(x1, 0, 0);
	glPopMatrix();*/
	bitmap_output(-20, 35, "CHOCOLATY", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-20, 32, "HORLICKS", GLUT_BITMAP_HELVETICA_18);
	glFlush();
}

void display2(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	road1();
	glPushMatrix();
	glTranslatef(x1, 0, 0);
	glPopMatrix();
	bitmap_output(-20, 35, "FAIL CG", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(10, 35, "EXAM FEAR", GLUT_BITMAP_HELVETICA_18);
	glFlush();
}

void display1(void)
{

	glClear(GL_COLOR_BUFFER_BIT);
	//bitmap_output(0,0, "TUTION CLASSES", GLUT_BITMAP_TIMES_ROMAN_24);
	//SUN
	glPushMatrix();
	glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(-20.0, 40.0, 0.0);
	glScalef(1.0, 1.5, 0.0);
	glColor3f(1.0, 1.0, 0.0);
	circle(3);
	glPopMatrix();

	

	//Cloud1
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(cx1, 17.0, 0.0);
	cloudB();
	glPopMatrix();

	//Cloud2
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(cx2, 20.0, 0.0);
	cloudB();
	glPopMatrix();

	//Cloud3
	glPushMatrix();
	glTranslatef(cx3, 0.0, 0.0);
	glScalef(0.8, 1, 0);
	cloud();
	glPopMatrix();
	draw_tree();

	road();

	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(cx5, -5.0, 0.0);
	car();
	glPopMatrix();

	glPushMatrix();
	//glTranslatef(10,10,0);
	glTranslatef(x1, 0, 0);
	tution();
	glPopMatrix();
	bitmap_output(-40, 12, "TUTION CLASSES", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-5, 25, "DSI SCHOOL", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(25, 24, "SWEET HOME", GLUT_BITMAP_TIMES_ROMAN_24);
	glFlush();
}

void spindisplay4()
{
	for (int i = 0; i < 32000; i++)
		for (int j = 0; j < 32000; j++)
			{
			}
	glutDisplayFunc(display5);
	glutPostRedisplay();
}

void spindisplay3()
{
	cx4 -= 0.01;
	if (cx4 < -20)
	{
		cx4 = -20;
		for (int i = 0; i < 32000; i++)
			for (int j = 0; j < 32000; j++)
				{ }
		glutDisplayFunc(display4);
		glutIdleFunc(spindisplay4);
	}
	glutPostRedisplay();
}

void spindisplay2()
{
	for (int i = 0; i < 40000; i++)
		for (int j = 0; j < 40000; j++)
			{
			}
	glutDisplayFunc(display3);
	glutIdleFunc(spindisplay3);
	glutPostRedisplay();
}

void spindisplay1()
{

	cx1 += 0.01;
	cx2 += 0.01;
	cx3 += 0.01;
	cx5 += 0.03;
	if (cx1 > 74)
	{
		glutDisplayFunc(display2);
		glutIdleFunc(spindisplay2);
	}
	glutPostRedisplay();
}


void init(void)
{
	glClearColor(0, 0.749, 0.5, 0);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);

}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	bitmap_output(-20, 40, "DAYANANDA SAGAR COLLEGE OF ENGINEERING", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-15, 30, "COMPUTER SCIENCE AND ENGINEERING", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-18, 20, "COMPUTER GRAPHICS AND VISUALIZATION PROJECT", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-14, 0, "ADVERTISEMENT FOR HORLICKS", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-13, -20, "Project By", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-13, -25, "Murulidhara M          1DS16CS063", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-13, -30, "Prathviraj             1DS16CS080", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-13, -35, "Mohan                  1DS16CS059", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-8, 5, "Press ESC to exit", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-10, 10, "Press spacebar to start", GLUT_BITMAP_HELVETICA_18);

	glFlush();
}

void processNormalKeys(unsigned char key, int x, int y)
{
	if (key == 27)
		exit(0);
	else if (key = 32)
	{
		glutDisplayFunc(display1);
		glutIdleFunc(spindisplay1);
	}
}

void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(1366, 768);
	glutCreateWindow("Frame1");
	init();
	glColor3f(1, 0, 0);
	glLineWidth(5.0);
	glutDisplayFunc(display);
	glutKeyboardFunc(processNormalKeys);
	glutMainLoop();
}

