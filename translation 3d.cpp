#include<stdio.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.1415
void display()
{
   float v1x=80, v1y=80, v1z=-100;
   float v2x=180, v2y=80, v2z=-100;
   float v3x=180, v3y=180, v3z=-100;
   float v4x=80, v4y=180, v4z=-100;
   float v5x=60, v5y=60, v5z=0;
   float v6x=160, v6y=60, v6z=0;
   float v7x=160, v7y=160, v7z=0;
   float v8x=60, v8y=160, v8z=0;
   float tx=-100,ty=-100,tz=-100;
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

   //code for translation
      glColor3f (0.7, 0.4, 0.7);
   glBegin(GL_QUADS);
     glVertex3f(v1x+tx,v1y+ty,v1z+tz);
     glVertex3f(v2x+tx,v2y+ty,v2z+tz);
     glVertex3f(v3x+tx,v3y+ty,v3z+tz);
     glVertex3f(v4x+tx,v4y+ty,v4z+tz);
   glEnd();

   glColor3f (0.8, 0.6, 0.5);
   glBegin(GL_POLYGON);
     glVertex3f(v1x+tx,v1y+ty,v1z+tz);
     glVertex3f(v2x+tx,v2y+ty,v2z+tz);
     glVertex3f(v6x+tx,v6y+ty,v6z+tz);
     glVertex3f(v5x+tx,v5y+ty,v5z+tz);
   glEnd();

   glColor3f (0.2, 0.4, 0.7);
   glBegin(GL_POLYGON);
     glVertex3f(v1x+tx,v1y+ty,v1z+tz);
     glVertex3f(v4x+tx,v4y+ty,v4z+tz);
     glVertex3f(v8x+tx,v8y+ty,v8z+tz);
     glVertex3f(v5x+tx,v5y+ty,v5z+tz);
   glEnd();

   glColor3f (0.5, 0.4, 0.3);
   glBegin(GL_POLYGON);
     glVertex3f(v2x+tx,v2y+ty,v2z+tz);
     glVertex3f(v3x+tx,v3y+ty,v3z+tz);
     glVertex3f(v7x+tx,v7y+ty,v7z+tz);
     glVertex3f(v6x+tx,v6y+ty,v6z+tz);
   glEnd();

   glColor3f (0.5, 0.6, 0.2);
   glBegin(GL_POLYGON);
      glVertex3f(v3x+tx,v3y+ty,v3z+tz);
      glVertex3f(v4x+tx,v4y+ty,v4z+tz);
      glVertex3f(v8x+tx,v8y+ty,v8z+tz);
      glVertex3f(v7x+tx,v7y+ty,v7z+tz);
   glEnd();

   glColor3f (0.7, 0.3, 0.4);
   glBegin(GL_POLYGON);
     glVertex3f(v5x+tx,v5y+ty,v5z+tz);
     glVertex3f(v6x+tx,v6y+ty,v6z+tz);
     glVertex3f(v7x+tx,v7y+ty,v7z+tz);
     glVertex3f(v8x+tx,v8y+ty,v8z+tz);
   glEnd();


   glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800,500);
    glutInitWindowPosition(50,50);
    glutCreateWindow("3d Translation");
    glutDisplayFunc(display);
    glutMainLoop();
}
