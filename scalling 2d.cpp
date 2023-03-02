//OpenGL program using C
//To scaling the rectangle

#include<stdio.h>
#include<math.h>
#include<GL/gl.h>
#include<GL/glu.h>
#define GLUT_DISABLE_ATEXIT_HACK
#include<GL/glut.h>


void display()
{
    float x1=50,y1=50,x2=50,y2=150,x3=150,y3=150,x4=150,y4=50;
    float sx=0.5,sy=0.5;
    float sx1,sx2,sx3,sx4,sy1,sy2,sy3,sy4;
    glClearColor(1.0,0.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-200,200,-200,200);

    glBegin(GL_LINES);
      glColor3f(0.0,0.0,0.0);
      glVertex2i(0,200);
      glVertex2i(0,-200);
    glEnd();

    glBegin(GL_LINES);
       glColor3f(0.0,0.0,0.0);
       glVertex2i(200,0);
       glVertex2i(-200,0);
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(1.0,1.0,0.0);
        glVertex2f(x1,y1);
        glVertex2f(x2,y2);
        glVertex2f(x3,y3);
        glVertex2f(x4,y4);
    glEnd();

    glBegin(GL_QUADS);
        sx1=sx*x1;
 	sy1=sy*y1;
 	sx2=sx*x2;
	sy2=sy*y2;
	sx3=sx*x3;
	sy3=sy*y3;
	sx4=sx*x4;
	sy4=sy*y4;
        glColor3f(0.0,0.0,1.0);
        glVertex2i(sx1,sy1);
        glVertex2i(sx2,sy2);
        glVertex2i(sx3,sy3);
        glVertex2i(sx4,sy4);
    glEnd();


    glFlush();

}

int main(int argc, char **argv)
{
   glutInit(&argc,argv);
   glutInitDisplayMode(GLUT_RGB);
   glutInitWindowPosition(100,100);
   glutInitWindowSize(640,480);
   glutCreateWindow("2d scaling");
   glutDisplayFunc(display);//call back function
   glutMainLoop();
}
