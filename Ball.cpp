#include "Ball.h"
using namespace std;

TCone tc;
GLUquadric *s = gluNewQuadric();

Ball::~Ball()
{
    tc.~TCone();
}

void Ball::build()
{
    tc.build();
    gluQuadricOrientation(s, GLU_OUTSIDE);
    gluQuadricNormals(s, GLU_SMOOTH);
}

void Ball::render() const
{
    glColor3f(0, 0, 1);
    glPushMatrix();
    glPushMatrix();
    glRotated(90, 0, 0, 1);
    glScaled(0.25f, 0.25f, 0.25f);
    glTranslated(0, 0, 0);
    tc.render();
    glPopMatrix();
    
    
    //glRotated(90, 0, 0, 1);
    glScaled(0.25f, 0.25f, 0.25f);
    glTranslated(0, 0, 1);
    gluSphere(s, 1, 10, 10);
    glPopMatrix();
}