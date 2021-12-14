#include <stdio.h>
 
int main() 
{
    int num, i, count = 0 ;
    for ( i = 0 ; i < 5 ; i++)
    {
        scanf ("%d", &num) ;
        if (num % 2 == 0)
        {
            count += 1 ;
        }
    }
    printf ("%d valores pares\n", count) ;
    return 0;
}