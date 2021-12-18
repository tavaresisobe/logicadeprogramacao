/*Faça um programa que aloca dinamicamente uma matriz de 9x9.Faça 
funções para preencher a matriz com números aleatórios e para 
imprimir a matriz na tela*/

#include <stdio.h>
#include <stdlib.h>

int **alocamatriz(int m, int n)
{
    int **a;
    a = malloc (m * n * sizeof(int));
}

int LEeIMPRIMEmatriz(int m, int n )  //função para guardar elementos e imprimir a matriz
{
    int mat[m][n], i, j ;
    for ( i = 0 ; i < m ; i++ )
    {
        for ( j = 0 ; j < n ; j++ )
        {
            mat[i][j] = rand() % 10 ;  //preenche a matriz com numeros aleatorios entre [0...9] 
        }
    }
            for ( i = 0 ; i < m ; i++ )
            {
               for ( j = 0 ; j < n ; j++ )
               {
                    printf ("%d ", mat[i][j]) ;
               }
             printf ("\n") ;
            }
}

int main ()
{
    int m, n ;
    printf ("Digite o número de linhas dessa matriz:\n") ;
    scanf ("%d", &m) ;
    printf ("Digite o número de colunas dessa matriz:\n") ;
    scanf ("%d", &n) ;
    LEeIMPRIMEmatriz (m, n) ;
    alocamatriz(m, n) ;
    
    return 0 ;
}