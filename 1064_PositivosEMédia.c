#include <stdio.h>
 
int main() 
{
    double x, media = 0.0, positivos = 0.0 ; 
    int i, aux = 0 ;
    for (i = 0 ; i < 6 ; i++)
    {
        scanf ("%lf", &x) ;
        if (x > 0)
        {
            positivos += x ;
            aux += 1.0 ;
        }
    }
    media = positivos / aux ;
    printf ("%d valores positivos\n", aux) ;
    printf ("%.1lf\n", media) ;
    return 0;
}