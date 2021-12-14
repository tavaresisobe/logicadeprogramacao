#include <stdio.h>
 
int main() 
{
    int valor;
    scanf ("%d", &valor) ;
    int nota100, nota50, nota20, nota10, nota5, nota2, nota1,
    aux100, aux50, aux20, aux10, aux5, aux2, aux1 ;
    
    nota100 = valor / 100 ;
        aux100 = valor % 100 ;
            nota50 = aux100 / 50 ;
                aux50 = aux100 % 50 ;
                    nota20 = aux50 / 20 ;
                        aux20 = aux50 % 20 ;
                            nota10 = aux20 / 10 ;
                                aux10 = aux20 % 10 ;
                                    nota5 = aux10 / 5 ;
                                        aux5 = aux10 % 5 ;
                                            nota2 = aux5 / 2 ;
                                                aux2 = aux5 % 2 ;
                                                    nota1 = aux2 / 1 ;
                                                        aux1 = aux2 % 1 ;
    printf ("%d\n", valor) ;
    printf ("%d nota(s) de R$ 100,00\n", nota100) ;
    printf ("%d nota(s) de R$ 50,00\n", nota50) ;
    printf ("%d nota(s) de R$ 20,00\n", nota20) ;
    printf ("%d nota(s) de R$ 10,00\n", nota10) ;
    printf ("%d nota(s) de R$ 5,00\n", nota5) ;
    printf ("%d nota(s) de R$ 2,00\n", nota2) ;
    printf ("%d nota(s) de R$ 1,00\n", nota1) ;
    
    return 0;
}