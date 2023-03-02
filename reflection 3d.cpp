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
   //co-ordinates for reflection
   float rv1x=-v1x, rv1y=v1y, rv1z=v1z;
   float rv2x=-v2x, rv2y=v2y, rv2z=v2z;
   float rv3x=-v3x, rv3y=v3y, rv3z=v3z;
   float rv4x=-v4x, rv4y=v4y, rv4z=v4z;
   float rv5x=-v5x, rv5y=v5y, rv5z=v5z;
   float rv6x=-v6x, rv6y=v6y, rv6z=v6z;
   float rv7x=-v7x, rv7y=v7y, rv7z=v7z;
   float rv8x=-v8x, rv8y=v8y, rv8z=v8z;

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

   //code for reflection
      glColor3f (0.7, 0.4, 0.7);
   glBegin(GL_QUADS);
    glVertex3f(rv1x,rv1y,rv1z);
     glVertex3f(rv2x,rv2y,rv2z);
     glVertex3f(rv3x,rv3y,rv3z);
     glVertex3f(rv4x,rv4y,rv4z);
   glEnd();

   glColor3f (0.8, 0.6, 0.5);
   glBegin(GL_POLYGON);
     glVertex3f(rv1x,rv1y,rv1z);
     glVertex3f(rv2x,rv2y,rv2z);
     glVertex3f(rv6x,rv6y,rv6z);
     glVertex3f(rv5x,rv5y,rv5z);
   glEnd();

   glColor3f (0.2, 0.4, 0.7);
   glBegin(GL_POLYGON);
     glVertex3f(rv1x,rv1y,rv1z);
     glVertex3f(rv4x,rv4y,rv4z);
     glVertex3f(rv8x,rv8y,rv8z);
     glVertex3f(rv5x,rv5y,rv5z);
   glEnd();

   glColor3f (0.5, 0.4, 0.3);
   glBegin(GL_QUADS);
     glVertex3f(rv2x,rv2y,rv2z);
     glVertex3f(rv3x,rv3y,rv3z);
     glVertex3f(rv7x,rv7y,rv7z);
     glVertex3f(rv6x,rv6y,rv6z);
   glEnd();

   glColor3f (0.5, 0.6, 0.2);
   glBegin(GL_QUADS);
      glVertex3f(rv3x,rv3y,rv3z);
      glVertex3f(rv4x,rv4y,rv4z);
      glVertex3f(rv8x,rv8y,rv8z);
      glVertex3f(rv7x,rv7y,rv7z);
   glEnd();

   glColor3f (0.7, 0.3, 0.4);
   glBegin(GL_QUADS);
     glVertex3f(rv5x,rv5y,rv5z);
     glVertex3f(rv6x,rv6y,rv6z);
     glVertex3f(rv7x,rv7y,rv7z);
     glVertex3f(rv8x,rv8y,rv8z);
   glEnd();


   glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800,500);
    glutInitWindowPosition(50,50);
    glutCreateWindow("3d Reflection");
    glutDisplayFunc(display);
    glutMainLoop();
}
