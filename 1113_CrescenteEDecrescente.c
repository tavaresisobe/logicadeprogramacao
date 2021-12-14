#include <stdio.h>
 
int main() 
{
    int a, b ;
    do {
        scanf ("%d %d", &a, &b) ;
        if ( a > b )
        {
            printf ("Decrescente\n") ;
        }else
            if ( b > a )
            {
                printf ("Crescente\n") ;
            }
        
    }while ( a != b ) ;
    
    return 0;
}