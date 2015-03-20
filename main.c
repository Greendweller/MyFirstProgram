//* Made by R.Oorschot 2015 to test and learn the C programming language *//
#include <stdio.h>

#include "menu/menu.h"
#include "input/input.h"
#include "circle/circlefunctions.h"
#include "circle/circlemenu.h"

int main(void)
{
    while(1)
{
    menu();
    switch(menu_user_input())
{
    case 1:

        info_top();
        cir_user_input();
        circle_functions();
        info_bottom();
        break;

    case 2:
        system("cls");

    case 3:
        system("cls");

    case 9:
        system("cls");
        break;

    case 0:
        return(0);
}

}
 return 0;
}
