//* Gemaakt door R.Oorschot 2015 als test om te leren hoe C nou precies werkt *//
#include "circlefunctions.h"
#define PI 3.14

float diameter;
double straal;
double oppervlakte;
double omtrek;

void cirkel_functies()
{
    straal      = diameter / 2;
    oppervlakte = PI * (straal * straal);
    omtrek      = 2 * PI * straal;
}

