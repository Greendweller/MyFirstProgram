//* Made by R.Oorschot 2015 to test and learn the C programming language *//
#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "../circle/circlefunctions.h"

int menu_user_input()
{
    int number;
    if (scanf(" %d", &number) !=1);
    printf("\n ***Not a valid menu choise*** ");

        return number;
}

float cir_user_input()
{
    scanf(" %e", &diameter);
    return diameter;
}
