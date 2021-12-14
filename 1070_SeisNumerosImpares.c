#include <stdio.h>

int main() 
{
    int X, i ;
    scanf("%d", &X) ;
    if (X % 2 == 0)   //verifica se o numero digitado eh par
        X++ ;         //se sim, incrementa +1 a variavel
    while (i < 6)     
    {
        printf("%d\n", X) ; //esse laço ira imprimir os proximos 6
        i++ ;               // valores impares consecutivos da variavel
        X += 2 ;
    }
    
    return 0;
}