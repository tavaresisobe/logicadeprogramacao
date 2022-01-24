/*Faça um programa que leia um vetor X[10]. Substitua a seguir, todos 
os valores nulos e negativos do vetor X por 1. Em seguida mostre o 
vetor X*/

#include <stdio.h>

int main ()
{
    int vetor, i ;
    for (i = 0 ; i < 10 ; i++)
    {
        scanf ("%d", &vetor) ;
            if (vetor > 0)
            {
                printf ("X[%d] = %d\n", i, vetor) ;
            }else
                printf ("X[%d] = 1\n", i) ;
    }
    
    return 0 ;
}