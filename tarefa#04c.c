/*Faça um programa que preencha uma matriz 3x3 com valores 
inteiros entre [1..9].*/

#include <stdio.h>

int main ()
{
    int mat[3][3], i, j ;
    printf ("Digite valores entre [1...9]\n") ;
    for ( i = 0 ; i < 3 ; i++)
    {
        for ( j = 0 ; j < 3 ; j++)
        {
            do{
           
                scanf ("%d", &mat[i][j]) ;
                
            }while ( mat[i][j] >= 10 && mat[i][j] <= 0) ;    
        }
    }
    
    for ( i = 0 ; i < 3 ; i++)
    {
        for ( j = 0 ; j < 3 ; j++)
        {
             if ( mat[i][j] >= 1 && mat[i][j] <= 9 )
             {
                printf ("%d ", mat[i][j]) ;
             }
        }
         printf ("\n") ;
    }
    
    return 0 ;
}