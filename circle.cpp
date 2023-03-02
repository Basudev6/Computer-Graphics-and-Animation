#include <GL/glut.h>
#include<stdio.h>
#include<math.h>

void drawCircle(int xc=100, int yc=100, int r=50)
{
  int x = 0;
  int y = r;
  int d = 1 - r;
 glClearColor(0.5,0.5,0.5,0.5);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-200,200,-200,200);
  glBegin(GL_POINTS);
  glVertex2i(xc + x, yc + y);
  glVertex2i(xc - x, yc + y);
  glVertex2i(xc + x, yc - y);
  glVertex2i(xc - x, yc - y);
  glVertex2i(xc + y, yc + x);
  glVertex2i(xc - y, yc + x);
  glVertex2i(xc + y, yc - x);
  glVertex2i(xc - y, yc - x);
  glEnd();

  while (y > x)
  {
    if (d < 0)
        {
      d += 2 * x + 3;
    }
    else
    {
      d += 2 * (x - y) + 5;
      y--;
    }
    x++;
    glColor3f(1.0,1.0,1.0);

    glBegin(GL_POINTS);
    glVertex2i(xc + x, yc + y);
    glVertex2i(xc - x, yc + y);
    glVertex2i(xc + x, yc - y);
    glVertex2i(xc - x, yc - y);
    glVertex2i(xc + y, yc + x);
    glVertex2i(xc - y, yc + x);
    glVertex2i(xc + y, yc - x);
    glVertex2i(xc - y, yc - x);
    glEnd();
  }
}

void display()
{
  glClear(GL_COLOR_BUFFER_BIT);
  drawCircle(0, 0, 50);
  glFlush();
}

int main(int argc, char** argv)
{
  glutInit(&argc, argv);
  glutCreateWindow("Circle");
    glutInitWindowPosition(50,50);
    glutInitWindowSize(800,800);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}
