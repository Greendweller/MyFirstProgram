//* Made by Greendweller 2015 to test and learn the C programming language *//

#include <stdio.h>

#include "menu/menu.h"
#include "circle/circleresults.h"
#include "input/input.h"

int main(void)
{
    int done = 0;
    while( !done )
    {
        menu();
        switch(menu_user_input())
        {

            case 0:
                done = 1;
                break;

            case 1:
                info_top();
                cir_user_input();
                info_bottom();
                break;

            case 2:
                system("cls");
                break;

            case 3:
                system("cls");
                break;

            case 8:
                system("cls");
                break;

            case 9:
                system("cls");
                break;

            default:
                system("cls");
                printf("\n **Wrong choice try again...**\n");
                break;
        }

    }
    return 0;
}
