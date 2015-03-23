//* Made by Greendweller 2015 to test and learn the C programming language *//

#include <stdio.h>
#include "circleresults.h"
#include "circlefunctions.h"

void info_top()
{
    system("cls");
    printf(" ----------------------------------------\n");
    printf(" Typ the diameter of the circle: ");
    return;
}

void info_bottom()
{
    printf(" ----------------------------------------\n");
    printf(" The radius = %f \n\n" , get_radius());
    printf(" The surface = %f \n\n" , get_surface());
    printf(" The outline = %f \n" , get_outline());
    printf(" ----------------------------------------");
    return;
}
