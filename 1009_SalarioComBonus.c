#include <stdio.h>
 
int main() 
{
    char nome ;
    scanf ("%s", &nome) ;
    double salary_fixed, sales, i = 0 ;
    scanf ("%lf %lf", &salary_fixed, &sales) ;
    i = salary_fixed + (sales * 0.15) ;
    printf ("TOTAL = R$ %.2lf\n", i) ;
 
    return 0;
}