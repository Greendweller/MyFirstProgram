//* Gemaakt door R.Oorschot 2015 als test om te leren hoe C nou precies werkt *//
#define PI 3.14

float diameter;
double straal;
double oppervlakte;
double omtrek;

cirkel_functies()
{
    double straal      = diameter / 2 ;
    double oppervlakte = PI * (straal * straal);
    double omtrek      = 2 * PI * straal;
};
