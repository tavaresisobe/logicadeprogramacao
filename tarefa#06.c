/*Faça um programa que aloca dinamicamente uma matriz de 9x9. Faça funções para
preencher a matriz com números aleatórios e para imprimir a matriz na tela*/

#include<stdio.h>
#include <stdlib.h>

void lermatriz(int mat[9][9], int l, int c)
{
    int i, j ;
    for (i = 0 ; i < l ; i ++)
    {
        for (j = 0 ; j < c ; j ++)
        {
            mat[i][j] = rand () %10 ;
        }
    }
    return ;
}
void imprimirmatriz(int mat[9][9],int li, int co)
{
    int b, c ;
        for (b = 0 ; b < li ; b++)
        {
            for ( c = 0 ; c < co ; c++)
            {
                printf ("%d ", mat[b][c]) ;
            }
            printf ("\n") ;
        }
        return ;
}
void desaloca() ;

int main ()
{
    int i = 9 , j = 9 ;
    int mat[i][j] ;
    int **P =  (int**) malloc (sizeof (int* )*9) ;
    for (int a = 0 ; a < 9 ; a++)
    {
        P[a] = (int*)malloc (sizeof (int)*9);
    }
    lermatriz(mat, i , j) ;
    imprimirmatriz(mat, i, j) ;
    return 0 ;
}

void desaloca (int **P, int linhas )
{
  int aux ; 
    for (aux = 0 ; aux < linhas ; aux ++)
    {
      free (P[aux]) ;
    } 

    free (P) ;
}
