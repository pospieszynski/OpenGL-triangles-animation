#include <GL/glut.h>
#include <GL/gl.h>
#include <cstdlib>
 
//Drawing funciton
void draw(void)
{
  //Background color
  glClearColor(1,0,1,1);
  glClear(GL_COLOR_BUFFER_BIT);
  //Draw order
    glBegin(GL_POLYGON);
 
    glColor4f(0.0f, 0.0f, 1.0f, 1.0f);
 
    glVertex2f(250.0f, 250.0f);
 
    glVertex2f(240.0f, 250.0f);
 
    glVertex2f(250.0f, 240.0f);
 
    glEnd();
    glFlush();
}
 
//Main program
int main(int argc, char **argv)
{
  glutInit(&argc, argv);
  //Simple buffer
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB );
  glutInitWindowPosition(400,80);
  glutInitWindowSize(700,700);
  glutCreateWindow("Triangles");
  glutDisplayFunc(draw);
  glutMainLoop();
  return 0;
}
