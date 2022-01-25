/*Escreva um algoritmo que leia 2 valores inteiros X e Y calcule a 
soma dos números que não são múltiplos de 13 entre X e Y, incluindo 
ambos.*/

#include <stdio.h>
 
int main() 
{
    int x, y, i, guarda = 0 ;
    scanf ("%d %d", &x, &y) ;
    for ( i = x ; i <= y ; i++)
    {
        if ((i + i) % 13 != 0)
        {
            guarda += i ;
        }
    }
    printf ("%d\n", guarda) ;
    return 0;
}