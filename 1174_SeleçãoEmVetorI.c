/*Faça um programa que leia um vetor A[100]. No final, mostre todas
as posições do vetor que armazenam um valor menor ou igual a 10 e o 
valor armazenado em cada uma das posições*/

#include <stdio.h>

int main ()
{
    double vetor ; 
    int i ;
    for (i = 0 ; i < 100 ; i++)
    {
        scanf ("%lf", &vetor) ;
            if (vetor <= 10)
            {
                printf ("A[%d] = %.1lf\n", i, vetor) ;
            }
    }
    return 0 ;
}