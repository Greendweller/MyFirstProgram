//* Gemaakt door R.Oorschot 2015 als test om te leren hoe C nou precies werkt *//
#include <stdio.h>
#include "circlefunctions.h"
#include "circlemenu.h"

void info_top()

{
    system("cls");
    printf(" ----------------------------------------\n");
    printf(" Typ de diameter van de cirkel: ");

}
void info_bottom()
{
    printf(" ----------------------------------------\n");
    printf(" De straal = %f \n\n", straal  );
    printf(" De oppervlakte = %f \n\n" , oppervlakte);
    printf(" De omtrek = %f \n" , omtrek);
    printf(" ----------------------------------------\n");
}
