
#include<GL/glut.h>
#include<stdio.h>
#include<math.h>

void display()
{

    int x1=20,y1=20,x2=155,y2=250;
    int x,y;
    int dx=abs(x2-x1),dy=abs(y2-y1),p;
    glClearColor(0.5,0.5,0.5,1);
    glClear(GL_COLOR);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0,500,0,500);

    if(dx>dy)
    {
        p=2*dy-dx;
        for(int i=0;i<dx;i++)
        {
            glBegin(GL_POINTS);
                glVertex2d(x,y);
            glEnd();
            if(p<0)
            {
                x=x+1;
                p=p+2*dy;
                y=y;
            }
            else
            {
                x=x+1;
                y=y+1;
                p=p+2*dy-2*dx;
            }
        }

    }
    else
    {
         p=2*dx-dy;
        for(int i=0;i<dx;i++)
        {
            glColor3f(1.0,0.0,0.0);
            glBegin(GL_POINTS);
                glVertex2d(x,y);
            glEnd();
            if(p<0)
            {
                x=x;
                p=p+2*dy;
                y=y+1;
            }
            else
            {
                x=x+1;
                y=y+1;
                p=p+2*dx-2*dy;
            }
        }
    }
    glFlush();

}

int main (int argc,char **str)
{

    glutInit(&argc,str);
    glutCreateWindow("Bresenham line drawing");
    glutInitWindowPosition(500,500);
    glutInitWindowSize(500,500);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutDisplayFunc(display);
    glutMainLoop();

}
