#include <stdio.h>
#include <string.h>
 
int main() 
{
    int n, i ;
    char s[100] ;
    while (n > 0)
    {
        for (i = 0 ; i < 100 ; i++)
        {
            scanf ("%s", &s[i]) ;
        }
        n-- ;
    }
    printf ("Ciencia da Computacao\n") ;
    return 0 ;
}