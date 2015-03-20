#include <stdio.h>
#include "../input/input.h"

int menu_user_input()
{
    int number; // store user input to this variable
    scanf(" %d", &number);
    return number; // return the user input so that it can be used outside the function
}

float cir_user_input()
{
    scanf(" %e", &diameter);
    return diameter; // return the user input so that it can be used outside the function
}

