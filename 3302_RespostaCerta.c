#include <stdio.h>

int main ()
{
    int n, i, cola ;
    scanf ("%d", &n) ;
    for (i = 1 ; i <= n ; i++)
    {
        scanf ("%d", &cola) ;
        printf ("resposta %d: %d\n", i, cola) ;
    }
    return 0 ;
}