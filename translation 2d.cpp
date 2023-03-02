#include<stdio.h>
#include<math.h>
#include<GL/gl.h>
#include<GL/glu.h>
#define GLUT_DISABLE_ATEXIT_HACK
#include<GL/glut.h>
#define PI 3.14159265

void display()
{
    float x1=50,y1=50,x2=50,y2=150,x3=150,y3=150,x4=150,y4=50;
    float sx=0.5,sy=1.5;
    double angle=270;
    double rangle=angle*PI/180;
    float rx1,rx2,rx3,rx4,ry1,ry2,ry3,ry4;
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
        glColor3f(0.0,0.0,1.0);
        rx1=50*cos(rangle)-50*sin(rangle);
        ry1=50*sin(rangle)+50*cos(rangle);
        rx2=50*cos(rangle)-150*sin(rangle);
        ry2=50*sin(rangle)+150*cos(rangle);
        rx3=150*cos(rangle)-150*sin(rangle);
        ry3=150*sin(rangle)+150*cos(rangle);
        rx4=150*cos(rangle)-50*sin(rangle);
        ry4=150*sin(rangle)+50*cos(rangle);
        glVertex2i(rx1,ry1);
        glVertex2i(rx2,ry2);
        glVertex2i(rx3,ry3);
        glVertex2i(rx4,ry4);
    glEnd();

    glFlush();
}

int main(int argc, char **argv)
{
   glutInit(&argc,argv);
   glutInitDisplayMode(GLUT_RGB);
   glutInitWindowPosition(100,100);
   glutInitWindowSize(640,480);
   glutCreateWindow("2d translation");
   glutDisplayFunc(display);//call back function
   glutMainLoop();
}
