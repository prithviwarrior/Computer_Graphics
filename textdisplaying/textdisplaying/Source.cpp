#include<stdlib.h>
#include<Windows.h>

#include<gl/GL.h>

#include<GL/glut.h>
#include<math.h>

#define PI 3.1416


GLint i,x1=0;

void bitmap_output(double x, double y,  const char  *string, void *font)
{
	int len, i;
	glRasterPos2f(x, y);
	len = (double)strlen(string);
	for (i = 0; i < len; i++)
	{
		glutBitmapCharacter(font, string[i]);
	}

}




//circle 




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

void road()
{
	glBegin(GL_POLYGON);			//garden
	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(-50,-50, 0);
	glVertex3f(50,-50, 0);
	glVertex3f(50, -30, 0);
	glVertex3f(-50,-30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road lower
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -30, 0);
	glVertex3f(50, -30, 0);
	glVertex3f(50, -20, 0);
	glVertex3f(-50, -20, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road center
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50, -18, 0);
	glVertex3f(50, -18, 0);
	glVertex3f(50, -20, 0);
	glVertex3f(-50, -20, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road upper
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -18, 0);
	glVertex3f(50, -18, 0);
	glVertex3f(50, -7, 0);
	glVertex3f(-50, -7, 0);
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
	glVertex3f(15,30,0);
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
	glVertex3f(25,-7 , 0);
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

void init(void)
{
	glClearColor(0, 0.749, 1, 0);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);

}

/*void spindisplay
{
	x1 += 0.01;
	if (x1 > 110)
		x1 = 50;
	glutPostRedisplay();
}*/


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
	glTranslatef(0, 17.0, 0.0);
	cloudB();
	glPopMatrix();

	//Cloud2
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(0, 20.0, 0.0);
	cloudB();
	glPopMatrix();

	//Cloud3
	glPushMatrix();
	glTranslatef(0, 0.0, 0.0);
	glScalef(0.8, 1, 0);
	cloud();
	glPopMatrix();
	draw_tree();

	road();
	
	glPushMatrix();
	//glTranslatef(10,10,0);
	glTranslatef(x1,0,0);
	tution();
	glPopMatrix();
	bitmap_output(-40,12 , "TUTION CLASSES", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-5, 25, "DSI SCHOOL", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(25, 24, "SWEET HOME", GLUT_BITMAP_TIMES_ROMAN_24);
	glFlush();
}




void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(1366, 768);
	glutCreateWindow("Frame1");
	init();
	glutDisplayFunc(display1);
	//glutIdleFunc(spinDisplay);
	//glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1, 0, 0);
	glLineWidth(5.0);
	glutDisplayFunc(display1);
	//glutIdleFunc(spindisplay);
	//glutReshapeFunc(reshape);
	glutMainLoop();
}



/*#include<stdlib.h>
#include<Windows.h>
#include<gl/GL.h>
#include<GL/glut.h>
#include<math.h>
#define PI 3.1416

GLint i;
GLfloat c1x = 25.0;
GLfloat c2x = 5.0;
GLfloat c3x = -10.0;


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



void car1()
{
	
	glColor3f(1.0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex3f(10,10, 0);
	glVertex3f(-10, 10, 0);
	glVertex3f(-10, -10, 0);
	glVertex3f(10, -10, 0);
	glEnd();

	
}


void car2()
{
	//bottom
	glColor3f(0.2, 0, 0.4);
	glBegin(GL_POLYGON);
	glVertex3f(-0.52, 0.2, 0);
	glVertex3f(-0.9, 0.2, 0);
	glVertex3f(-0.87, 0.5, 0);
	glVertex3f(-0.52, 0.5, 0);
	glEnd();

	//front
	glColor3f(0.2, 0, 0.4);
	glBegin(GL_POLYGON);
	glVertex3f(-0.43, 0.2, 0);
	glVertex3f(-0.52, 0.2, 0);
	glVertex3f(-0.52, 0.5, 0);
	glVertex3f(-0.46, 0.45, 0);
	glEnd();

	//top
	glColor3f(0.6, 0.7, 0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-0.53, 0.5, 0);
	glVertex3f(-0.83, 0.5, 0);
	glVertex3f(-0.77, 0.8, 0);
	glVertex3f(-0.56, 0.8, 0);
	glEnd();


	glColor3f(0.0, 0.0, 0.0);///sss
	glPushMatrix();
	glTranslatef(-.78, .2, 0);
	circle(0.06);
	glPopMatrix();

	glColor3f(0.0, 0.0, 0.0);///sss
	glPushMatrix();
	glTranslatef(-.5, .2, 0);
	circle(0.06);
	glPopMatrix();

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-.5, .2, 0);
	circle(0.02);
	glPopMatrix();

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-.78, .2, 0);
	circle(0.02);
	glPopMatrix();
}


void car3()
{
	//bottom
	glColor3f(0.6, 0.1, 0.4);
	glBegin(GL_POLYGON);
	glVertex3f(-0.52, 0.2, 0);
	glVertex3f(-0.9, 0.2, 0);
	glVertex3f(-0.87, 0.5, 0);
	glVertex3f(-0.52, 0.5, 0);
	glEnd();

	//front
	glColor3f(0.6, 0.1, 0.4);
	glBegin(GL_POLYGON);
	glVertex3f(-0.43, 0.2, 0);
	glVertex3f(-0.52, 0.2, 0);
	glVertex3f(-0.52, 0.5, 0);
	glVertex3f(-0.46, 0.45, 0);
	glEnd();

	//top
	glColor3f(0.6, 0.7, 0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-0.53, 0.5, 0);
	glVertex3f(-0.83, 0.5, 0);
	glVertex3f(-0.77, 0.8, 0);
	glVertex3f(-0.56, 0.8, 0);
	glEnd();


	glColor3f(0.0, 0.0, 0.0);///sss
	glPushMatrix();
	glTranslatef(-.78, .2, 0);
	circle(0.06);
	glPopMatrix();

	glColor3f(0.0, 0.0, 0.0);///sss
	glPushMatrix();
	glTranslatef(-.5, .2, 0);
	circle(0.06);
	glPopMatrix();

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-.5, .2, 0);
	circle(0.02);
	glPopMatrix();

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-.78, .2, 0);
	circle(0.02);
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


void init(void)
{
	glClearColor(0, 0.749, 1, 0);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
}


void spinDisplay()
{
	c1x = c1x + .001;
	c2x = c2x + .04;
	c3x = c3x + .04;
	//if (c1x > 80 || c2x > 80 || c3x > 80)
		//c1x = -60;
		//c2x = -60;
		//c3x = -60;

	glutPostRedisplay();
}


void display(void)
{

	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(0.0f, 1.0f, 1.0f);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, 50.0);
	glVertex2f(50.0, 50.0);
	glVertex2f(50.0, 12.5);
	glVertex2f(-50.0, 12.5);
	glEnd();

	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, 12.5);
	glVertex2f(50.0, 12.5);
	glVertex2f(50.0, 0.0);
	glVertex2f(-50.0, 0.0);
	glEnd();


	glColor3f(0.1f, 0.1f, 0.1f);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, 0.0);
	glVertex2f(50.0, 0.0);
	glVertex2f(50.0, -25.0);
	glVertex2f(-50.0, -25.0);
	glEnd();

	glColor4f(255.0, 255.0, 0.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, -11.25);
	glVertex2f(50.0, -11.25);
	glVertex2f(50.0, -13.75);
	glVertex2f(-50.0, -13.75);
	glEnd();

	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, -25.0);
	glVertex2f(50.0, -25.0);
	glVertex2f(50.0, -50.0);
	glVertex2f(-50.0, -50.0);
	glEnd();


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
	glTranslatef(0, 17.0, 0.0);
	cloudB();
	glPopMatrix();

	//Cloud2
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(0, 20.0, 0.0);
	cloudB();
	glPopMatrix();

	//Cloud3
	glPushMatrix();
	glTranslatef(0, 0.0, 0.0);
	glScalef(.8, 1, 0);
	cloud();
	glPopMatrix();

	draw_start_line();
	draw_tree();

	//CARS
	glPushMatrix();
	glTranslatef(c1x, -15, 0);
	//glScalef(40, 20, 0);
	car1();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(c2x, -10, 0);
	glScalef(40, 20, 0);
	car2();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(c3x, -25, 0);
	glScalef(40, 20, 0);
	car3();
	glPopMatrix();

	glFlush();
}*/



/*
void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Frame1");
	init();
	glutDisplayFunc(display);
	glutIdleFunc(spinDisplay);
	glutMainLoop();
}*/