#include<GL/glut.h>
GLsizei wh=500,ww=500;
GLfloat size=3.0;
void myInit()
{
  glViewport(0,0,ww,wh);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2d(0,0,(GLdouble) ww,0.0,(GLdouble) wh);
  glMatrixMode(GL_MODELVIEW);
  glClearColor(0.0,0.0,0.0,1.0);
  glColor3f(1.0,0.0,0.0);

}

void drawSquare(int x,int y)
{
y=wh-y;
glBegin(GL_POLYGON);
glVertex2f(x+size,y+size);
glVertex2f(x-size,y+size);
glVertex2f(x-size,y-size);
glVertex2f(x+size,y-size);
glEnd();
glFlush();
}
void myMouse(int btn,int state,int x,int y)
{
if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN) drawSqare(x,y);
if(btn==GLUT_RIGHT_BUTTON && state==GLUT_DOWN) exit(0);
}
void myDisplay()
{
 glClear(GL_COLOR_BUFFER_BIT);
}

void main(int argc,char **argv)
{
int sub_menu;
glutInit(&argc,argv);
glutInitWindowSize(ww,wh);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutCreateWindow("square");
glutDisplayFunc(myDisplay);
myInit();
glutMouseFunc(myMouse);
glutMainLoop();
}
