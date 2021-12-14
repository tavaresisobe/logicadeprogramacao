#include <stdio.h>
 
int main() 
{
    int n, i, aux ;
    scanf ("%d", &n) ;
    for ( i = 1 ; i <= n ; i++)
    {
        aux = i * i ;
        printf ("%d %d %d\n", i , aux, aux * i) ;
    }
 
    return 0;
}