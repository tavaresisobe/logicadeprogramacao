/*Programa que verifica se numero eh primo*/
#include<stdio.h>

void funcao (testes)
{
    int n, i, j, resultado = 0 ;
    for (i = 1 ; i <= testes ; i++)
    {
        scanf ("%d", &n) ;
        for (j = 2 ; j <= n / 2; j++) 
        {
            if (n % i == 0)
            {
                resultado++ ;
                break ;
            }
        }
            if (resultado == 0)
            {
                printf ("%d eh primo\n", n) ;
            }else
                printf ("%d nao eh primo\n", n) ;
    }
}        

int main()
{
    int testes, imprime = 0 ;
    scanf("%d", &testes) ;
    funcao(testes) ;
    return 0 ;
}