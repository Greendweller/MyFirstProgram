//* Made by R.Oorschot 2015 to test and learn the C programming language *//
#include <stdio.h>
#include "../input/input.h"

int menu_user_input()
{
    int number;
    scanf(" %d", &number);
    return number;
}

float cir_user_input()
{
    float diameter;
    scanf(" %e", &diameter);
    return diameter;
}
