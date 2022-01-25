/*Escreva um programa que leia um valor inteiro N. Este N é a 
quantidade de linhas de saída que serão apresentadas na execução do
programa.*/

#include <stdio.h>
int main() 
{
    int n, i, j, count = 1 ;
    
    scanf("%d",&n) ;
    
    for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= 3 ; j++)
        {
            printf("%d ", count++) ;
        }
        count++ ;
        printf("PUM\n") ;
    }
    return 0 ;
}