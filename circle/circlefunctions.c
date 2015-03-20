//* Made by R.Oorschot 2015 to test and learn the C programming language *//
#include <stdio.h>
#include "circlefunctions.h"
#define PI 3.14

float   diameter;
double  radius;
double  surface;
double  outline;

void circle_functions()
{
    radius   = diameter / 2;
    surface  = PI * (radius * radius);
    outline  = 2 * PI * radius;
}
