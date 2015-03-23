//* Made by R.Oorschot 2015 to test and learn the C programming language *//
#include "circlefunctions.h"
#define PI 3.14

static float diameter;

float cir_user_input()
{
    if (scanf("%e",&diameter) != 1)
    {
        return menu();
    }
return diameter;
}

double get_radius()
{
    double radius = diameter / 2;
    return radius;
}

double get_surface()
{
    double radius = get_radius();
    return PI * (radius * radius);
}

double get_outline()
{
    double radius = get_radius();
    return 2 * PI * radius;
}
