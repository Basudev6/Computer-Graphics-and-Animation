//2d reflection on y-axis
#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
void reflection()
{
    int x1=50,y1=50,x2=100,y2=100,x3=100,y3=50;
    int rx1,ry1,rx2,ry2,rx3,ry3;
    glClearColor(0.5,0.5,0.5,0.5);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-300,300,-300,300);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINES);
    glVertex2i(-300,0);
    glVertex2i(300,0);
    glBegin(GL_LINES);
    glVertex2i(0,-300);
    glVertex2i(0,300);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2i(x1,y1);
    glVertex2i(x2,y2);
    glVertex2i(x3,y3);
    glEnd();
    rx1=-x1;
    rx2=-x2;
    rx3=-x3;
    ry1=y1;
    ry2=y2;
    ry3=y3;
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(rx1,ry1);
    glVertex2i(rx2,ry2);
    glVertex2i(rx3,ry3);
    glEnd();
    glFlush();
}
int main(int argc,char **argv)
{
glutInit(&argc,argv);
glutInitWindowPosition(50,50);
glutInitWindowSize(500,500);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutCreateWindow("2d Reflection");
glutDisplayFunc(reflection);
glutMainLoop();
}
