//* Made by Greendweller 2015 to test and learn the C programming language *//

#include <stdio.h>

#include "menu/menu.h"
#include "circle/circleresults.h"
#include "input/input.h"

int main(void)                    /* start program */
{
    int done = 0;                 /* initialize variable "done" to value 0 */
    while( !done )                /* start and continue while loop while !done == 0 */
    {
        menu();                   /* call the user menu that will get printed to the console */
        switch(menu_user_input()) /* start switch statement and wait for the user input */
        {

            case 0:               /* switch case 0, */
                done = 1;         /* if the user choses this, it will reset the variable 'done' to 1 and escapes the loop and end the program */
                break;            /* switch termination */

            case 1:               /* switch case 1 */
                info_top();       /* display user input choises on console */
                cir_user_input(); /* accept user input */
                info_bottom();    /* show results of the user input */
                break;            /* switch termination */

            case 2:               /* switch case 2 */
                system("cls");    /* call windows function to clear the console screen */
                break;            /* switch termination */

            case 3:               /* switch case 3 */
                system("cls");    /* call windows function to clear the console screen */
                break;            /* switch termination */

            case 8:               /* switch case 8 */
                system("cls");    /* call windows function to clear the console screen */
                break;            /* switch termination */

            case 9:               /* switch case 9 */
                system("cls");    /* call windows function to clear the console screen */
                break;            /* switch termination */

            default:              /* if none of the user choises == the case expression(s); execute the following code */
                system("cls");    /* call windows function to clear the console screen */
                printf(" **Wrong choice try again...**"); /* print error code on connsole */
        }                         /*  end switch */

    }                             /* end while loop */
    return 0;
}                                 /* end program */
