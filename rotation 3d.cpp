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
   int angle=45;
   float rangle=angle*PI/180;
   float rv1x,rv1y,rv2x,rv2y,rv3x,rv3y,rv4x,rv4y;
   float rv5x,rv5y,rv6x,rv6y,rv7x,rv7y,rv8x,rv8y;

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

   rv1x=v1x*cos(rangle)-v1y*sin(rangle);
   rv1y=v1x*sin(rangle)+v1y*cos(rangle);
   rv2x=v2x*cos(rangle)-v2y*sin(rangle);
   rv2y=v2x*sin(rangle)+v2y*cos(rangle);
   rv3x=v3x*cos(rangle)-v3y*sin(rangle);
   rv3y=v3x*sin(rangle)+v3y*cos(rangle);
   rv4x=v4x*cos(rangle)-v4y*sin(rangle);
   rv4y=v4x*sin(rangle)+v4y*cos(rangle);
   rv5x=v5x*cos(rangle)-v5y*sin(rangle);
   rv5y=v5x*sin(rangle)+v5y*cos(rangle);
   rv6x=v6x*cos(rangle)-v6y*sin(rangle);
   rv6y=v6x*sin(rangle)+v6y*cos(rangle);
   rv7x=v7x*cos(rangle)-v7y*sin(rangle);
   rv7y=v7x*sin(rangle)+v7y*cos(rangle);
   rv8x=v8x*cos(rangle)-v8y*sin(rangle);
   rv8y=v8x*sin(rangle)+v8y*cos(rangle);
   glBegin(GL_QUADS);
     glVertex3f(rv1x,rv1y,v1z);
     glVertex3f(rv2x,rv2y,v2z);
     glVertex3f(rv3x,rv3y,v3z);
     glVertex3f(rv4x,rv4y,v4z);
   glEnd();

   glColor3f (0.8, 0.6, 0.5);
   glBegin(GL_QUADS);
     glVertex3f(rv1x,rv1y,v1z);
     glVertex3f(rv2x,rv2y,v2z);
     glVertex3f(rv6x,rv6y,v6z);
     glVertex3f(rv5x,rv5y,v5z);
   glEnd();

   glColor3f (0.2, 0.4, 0.7);
   glBegin(GL_QUADS);
     glVertex3f(rv1x,rv1y,v1z);
     glVertex3f(rv4x,rv4y,v4z);
     glVertex3f(rv8x,rv8y,v8z);
     glVertex3f(rv5x,rv5y,v5z);
   glEnd();

   glColor3f (0.5, 0.4, 0.3);
   glBegin(GL_QUADS);
     glVertex3f(rv2x,rv2y,v2z);
     glVertex3f(rv3x,rv3y,v3z);
     glVertex3f(rv7x,rv7y,v7z);
     glVertex3f(rv6x,rv6y,v6z);
   glEnd();

   glColor3f (0.5, 0.6, 0.2);
   glBegin(GL_QUADS);
      glVertex3f(rv3x,rv3y,v3z);
      glVertex3f(rv4x,rv4y,v4z);
      glVertex3f(rv8x,rv8y,v8z);
      glVertex3f(rv7x,rv7y,v7z);
   glEnd();

   glColor3f (0.7, 0.3, 0.4);
   glBegin(GL_QUADS);
     glVertex3f(rv5x,rv5y,v5z);
     glVertex3f(rv6x,rv6y,v6z);
     glVertex3f(rv7x,rv7y,v7z);
     glVertex3f(rv8x,rv8y,v8z);
   glEnd();
   glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800,500);
    glutInitWindowPosition(50,50);
    glutCreateWindow("3d Rotation");
    glutDisplayFunc(display);
    glutMainLoop();
}
