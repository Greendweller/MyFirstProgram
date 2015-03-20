//* Gemaakt door R.Oorschot 2015 als test om te leren hoe C nou precies werkt *//
#include <stdio.h>

#include "menu.h"
#include "circlefunctions.h"
#include "input.h"

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
        cirkel_functies();
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
