#include <stdio.h>
#include <math.h>
int main ()
{
    double R, esfera ;
    scanf ("%lf", &R) ;
    esfera = (4/3.0) * 3.14159 * pow(R, 3) ;
    printf ("VOLUME = %.3lf\n", esfera) ;
    return 0;
}