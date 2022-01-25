#include <stdio.h>
 
int main() 
{
    int x, i, soma ;
    do{
        scanf ("%d", &x) ;
        if ( x == 0)
        {
            break ;
        }
        if ( x % 2 == 0)
        {
            soma = x + (x+2) + (x+4) + (x+6) + (x+8) ;
            printf ("%d\n", soma) ;
        }else
            if ( x % 2 == 1)
            {
                soma = (x+1) + (x+3) + (x+5) + (x+7) + (x+9) ;
                printf ("%d\n", soma) ; 
            }

    }while ( x != 0 ) ;
 
    return 0;
}