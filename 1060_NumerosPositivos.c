#include <stdio.h>
 
int main() 
{
    double num ;
    int i, count = 0 ;
    for ( i = 0 ; i < 6 ; i++)
    {
        scanf ("%lf", &num) ;
            if ( num > 0 )
            {
                count += 1 ;
            }
    }
    printf ("%d valores positivos\n", count) ;
    return 0;
}