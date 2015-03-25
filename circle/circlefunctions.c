//* Made by Greendweller 2015 to test and learn the C programming language *//

#include "circlefunctions.h"
#include "../menu/menu.h"
#define PI 3.14

static float diameter;

float cir_user_input()
{
    if (scanf("%a",&diameter) != 1) {
        printf(" \n error 2. **Wrong choise circle measurement input, try again**\n");
        } else {
            return diameter;
        }
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
