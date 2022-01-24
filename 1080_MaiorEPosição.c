/*Leia 100 valores inteiros. Apresente então o maior valor lido e a 
posição dentre os 100 valores lidos.*/
#include <stdio.h>

int main ()
{
    int num, i, maior = 0, aux = 0 ;
        for ( i = 1 ; i <= 100 ; i++)
        {
            scanf ("%d", &num) ;
                if (num > maior)
                {
                    maior = num ;
                    aux = i ;
                }
        }
    printf ("%d\n%d\n", maior, aux) ;
    return 0 ;
}