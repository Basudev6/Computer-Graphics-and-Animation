#include <GL/glut.h>
#include<stdio.h>
#include<math.h>

void drawEllipse(int xc=100, int yc=200, int a=50, int b=100)
{
  int x = 0;
  int y = b;
  int d1 = b * b - a * a * b + a * a / 4;
    glClearColor(0.5,0.5,0.5,0.5);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-200,200,-200,200);
  glBegin(GL_POINTS);
  glVertex2i(xc + x, yc + y);
  glVertex2i(xc - x, yc + y);
  glVertex2i(xc + x, yc - y);
  glVertex2i(xc - x, yc - y);
  glEnd();

  while (a * a * (y - 0.5) > b * b * (x + 1))
    {
    if (d1 < 0)
    {
      d1 += b * b * (2 * x + 3);
    } else
    {
      d1 += b * b * (2 * x + 3) + a * a * (-2 * y + 2);
      y--;
    }
    x++;

    glBegin(GL_POINTS);
    glVertex2i(xc + x, yc + y);
    glVertex2i(xc - x, yc + y);
    glVertex2i(xc + x, yc - y);
    glVertex2i(xc - x, yc - y);
    glEnd();
  }

  int d2 = b * b * (x + 0.5) * (x + 0.5) + a * a * (y - 1) * (y - 1) - a * a * b * b;

  while (y > 0)
    {
    if (d2 < 0)
    {
      d2 += b * b * (2 * x + 2) + a * a * (-2 * y + 3);
      x++;
    }
  else
    {
      d2 += a * a * (-2 * y + 3);
    }
    y--;

    glBegin(GL_POINTS);
    glVertex2i(xc + x, yc + y);
    glVertex2i(xc - x, yc + y);
    glVertex2i(xc + x, yc - y);
    glVertex2i(xc - x, yc - y);
    glEnd();
  }
}

void display()
{
  glClear(GL_COLOR_BUFFER_BIT);
  drawEllipse(0, 0, 50, 30);
  glFlush();
}

int main(int argc, char** argv)
{
  glutInit(&argc, argv);
  glutCreateWindow("Ellipse");
  glutInitWindowPosition(200,200);
  glutInitWindowSize(800,800);
  glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}
