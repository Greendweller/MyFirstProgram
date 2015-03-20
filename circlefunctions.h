//* Gemaakt door R.Oorschot 2015 als test om te leren hoe C nou precies werkt *//
#define PI 3.14

float diameter;
double straal;
double oppervlakte;
double omtrek;

void info_top()
{
    system("cls");
    printf(" ----------------------------------------\n");
    printf(" Typ de diameter van de cirkel: ");

}

void cirkel_functies()
{
    straal      = diameter / 2;
    oppervlakte = PI * (straal * straal);
    omtrek      = 2 * PI * straal;
}

void info_bottom()
{
    printf(" ----------------------------------------\n");
    printf(" De straal = %f \n\n", straal  );
    printf(" De oppervlakte = %f \n\n" , oppervlakte);
    printf(" De omtrek = %f \n" , omtrek);
    printf(" ----------------------------------------\n");
}
