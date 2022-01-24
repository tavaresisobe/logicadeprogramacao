/*Escreva um algoritmo para calcular e escrever o valor de S, sendo S dado pela fórmula:
S = 1 + 1/2 + 1/3 + … + 1/100*/

#include <stdio.h>

int main ()
{
    double s, i ;
        for (i = 1 ; i <= 100 ; i++)
        {
            s += 1 / i ;
        }
    printf ("%.2lf\n", s) ;
    
    return 0 ;
}