#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int c ;
    char t ;
    double mat[12][12], guarda = 0.0 ; 
    int i, j  ;
    scanf ("%d", &c) ;
    scanf ("%s", &t) ;
    for (i = 0 ; i < 12 ; i++){
        for (j = 0 ; j < 12 ; j++)
        {
            scanf ("%lf", &mat[i][j]) ; 
                if (c == j)
                {
                    guarda += mat[i][j] ;
                }
        }
    }
    if (t == 'S')
        printf ("%.1lf", guarda) ;
    else if (t == 'M')
    {
        guarda = guarda / 12.0 ;
        printf ("%.1lf", guarda) ;
    }
    
    return 0 ;
}
