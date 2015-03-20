//* Made by R.Oorschot 2015 to test and learn the C programming language *//
#include <stdio.h>
#include "circlefunctions.h"
#include "circlemenu.h"

void info_top()
{
    system("cls");
    printf(" ----------------------------------------\n");
    printf(" Typ the diameter of the circle: ");
}

void info_bottom()
{
    printf(" ----------------------------------------\n");
    printf(" The radius = %f \n\n", radius);
    printf(" The surface = %f \n\n" , surface);
    printf(" The outline = %f \n" , outline);
    printf(" ----------------------------------------\n");
}
