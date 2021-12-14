#include <stdio.h>
 
int main() 
{
    int num, i, negativo = 0, positivo = 0, impar = 0, 
    par = 0 ;
    for (i = 0 ; i < 5 ; i++)
    {
        scanf ("%d", &num) ;
            if ( num % 2 == 0)
            {
                par += 1 ;
            }else
                if (num % 2 == 1)
                {
                    impar += 1 ;
                }
                    if (num > 0)
                    {
                        positivo += 1 ;
                    }else
                        if ( num < 0)
                        {
                            negativo += 1 ;
                        }
    }
    printf ("%d valor(es) par(es)\n", par) ;
    printf ("%d valor(es) impar(es)\n", impar) ;
    printf ("%d valor(es) positivo(s)\n", positivo) ;
    printf ("%d valor(es) negativo(s)\n", negativo) ;
    
    return 0 ;
}