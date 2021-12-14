#include <stdio.h>
 
int main() 
{
    int n, x, y, i ;
    scanf ("%d", &n) ;
    for (i = 0 ; i < n ; i++)
    {
        scanf ("%d%d", &x, &y) ;
        double divisao = (double) x / y ;
        if ( y != 0)
        {
            printf ("%.1lf\n", divisao) ;
        }else
            printf ("divisao impossivel\n") ;
    }
    return 0;
}