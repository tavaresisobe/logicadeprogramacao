#include <stdio.h>
 
int main() 
{
    int peca, npeca, peca2, npeca2 ;
    double valorpeca, valorpeca2 ;
    scanf ("%d %d %lf", &peca, &npeca, &valorpeca) ;
    scanf ("%d %d %lf", &peca2, &npeca2, &valorpeca2) ;
    double valor = 0 ;
    valor = ( npeca * valorpeca) + ( npeca2 * valorpeca2) ;
    printf ("VALOR A PAGAR: R$ %.2lf\n", valor ) ;
    
    return 0;
}