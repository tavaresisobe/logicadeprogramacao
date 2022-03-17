#include <stdio.h>
#include <string.h>
int contador(int g)
{
    int i ;
    char vet[20] ;
    for (i = 0 ; i < 20 ; i++)
    {
        scanf ("%s", &vet[i]) ;
    }
    g = strlen(vet) ;
    return g ;
}

int main ()
{
    int guarda, n ;
    n = contador (guarda) ;
    if (n >= 10)
        printf ("palavrao\n") ;
    else
        printf ("palavrinha\n") ;
    return 0 ; 
}