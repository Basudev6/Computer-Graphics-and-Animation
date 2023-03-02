#include<stdio.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.1415
void display()
{
   float v1x=50, v1y=50, v1z=-70;
   float v2x=150, v2y=80, v2z=-70;
   float v3x=150, v3y=150, v3z=-70;
   float v4x=50, v4y=150, v4z=-70;
   float v5x=30, v5y=30, v5z=0;
   float v6x=130, v6y=30, v6z=0;
   float v7x=130, v7y=130, v7z=0;
   float v8x=30, v8y=130, v8z=0;
   float sx=1.5,sy=1.5,sz=1.5;

   glClearColor(1.0,1.0,1.0,1.0);
   glOrtho(-454.0,454.0,-250.0,250.0,-250.0,250.0);
   glEnable(GL_DEPTH_TEST);
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
   glColor3f (0.0, 0.0, 0.0);
   glLineWidth(5);
   glBegin(GL_LINES);                       // Plotting X-Axis
      glVertex2s(-1000 ,0);
      glVertex2s( 1000 ,0);
   glEnd();
   glBegin(GL_LINES);                       // Plotting Y-Axis
      glVertex2s(0 ,-1000);
      glVertex2s(0 , 1000);
   glEnd();
   glColor3f (0.7, 0.4, 0.7);
   glBegin(GL_QUADS);
     glVertex3f(v1x,v1y,v1z);
     glVertex3f(v2x,v2y,v2z);
     glVertex3f(v3x,v3y,v3z);
     glVertex3f(v4x,v4y,v4z);
   glEnd();

   glColor3f (0.8, 0.6, 0.5);
   glBegin(GL_QUADS);
     glVertex3f(v1x,v1y,v1z);
     glVertex3f(v2x,v2y,v2z);
     glVertex3f(v6x,v6y,v6z);
     glVertex3f(v5x,v5y,v5z);
   glEnd();

   glColor3f (0.2, 0.4, 0.7);
   glBegin(GL_QUADS);
     glVertex3f(v1x,v1y,v1z);
     glVertex3f(v4x,v4y,v4z);
     glVertex3f(v8x,v8y,v8z);
     glVertex3f(v5x,v5y,v5z);
   glEnd();

   glColor3f (0.5, 0.4, 0.3);
   glBegin(GL_QUADS);
     glVertex3f(v2x,v2y,v2z);
     glVertex3f(v3x,v3y,v3z);
     glVertex3f(v7x,v7y,v7z);
     glVertex3f(v6x,v6y,v6z);
   glEnd();

   glColor3f (0.5, 0.6, 0.2);
   glBegin(GL_QUADS);
      glVertex3f(v3x,v3y,v3z);
      glVertex3f(v4x,v4y,v4z);
      glVertex3f(v8x,v8y,v8z);
      glVertex3f(v7x,v7y,v7z);
   glEnd();

   glColor3f (0.7, 0.3, 0.4);
   glBegin(GL_QUADS);
     glVertex3f(v5x,v5y,v5z);
     glVertex3f(v6x,v6y,v6z);
     glVertex3f(v7x,v7y,v7z);
     glVertex3f(v8x,v8y,v8z);
   glEnd();

   //code for scaling
      glColor3f (0.7, 0.6, 0.7);
   glBegin(GL_QUADS);
     glVertex3f(v1x*sx,v1y*sy,v1z*sz);
     glVertex3f(v2x*sx,v2y*sy,v2z*sz);
     glVertex3f(v3x*sx,v3y*sy,v3z*sz);
     glVertex3f(v4x*sx,v4y*sy,v4z*sz);
   glEnd();

   glColor3f (0.8, 0.3, 0.5);
   glBegin(GL_POLYGON);
     glVertex3f(v1x*sx,v1y*sy,v1z*sz);
     glVertex3f(v2x*sx,v2y*sy,v2z*sz);
     glVertex3f(v6x*sx,v6y*sy,v6z*sz);
     glVertex3f(v5x*sx,v5y*sy,v5z*sz);
   glEnd();

   glColor3f (0.2, 0.2, 0.7);
   glBegin(GL_POLYGON);
     glVertex3f(v1x*sx,v1y*sy,v1z*sz);
     glVertex3f(v4x*sx,v4y*sy,v4z*sz);
     glVertex3f(v8x*sx,v8y*sy,v8z*sz);
     glVertex3f(v5x*sx,v5y*sy,v5z*sz);
   glEnd();

   glColor3f (0.5, 0.8, 0.3);
   glBegin(GL_POLYGON);
     glVertex3f(v2x*sx,v2y*sy,v2z*sz);
     glVertex3f(v3x*sx,v3y*sy,v3z*sz);
     glVertex3f(v7x*sx,v7y*sy,v7z*sz);
     glVertex3f(v6x*sx,v6y*sy,v6z*sz);
   glEnd();

   glColor3f (0.5, 0.2, 0.2);
   glBegin(GL_POLYGON);
      glVertex3f(v3x*sx,v3y*sy,v3z*sz);
      glVertex3f(v4x*sx,v4y*sy,v4z*sz);
      glVertex3f(v8x*sx,v8y*sy,v8z*sz);
      glVertex3f(v7x*sx,v7y*sy,v7z*sz);
   glEnd();

   glColor3f (0.2, 0.9, 0.4);
   glBegin(GL_POLYGON);
     glVertex3f(v5x*sx,v5y*sy,v5z*sz);
     glVertex3f(v6x*sx,v6y*sy,v6z*sz);
     glVertex3f(v7x*sx,v7y*sy,v7z*sz);
     glVertex3f(v8x*sx,v8y*sy,v8z*sz);
   glEnd();


   glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800,500);
    glutInitWindowPosition(50,50);
    glutCreateWindow("3d Scaling");
    glutDisplayFunc(display);
    glutMainLoop();
}
