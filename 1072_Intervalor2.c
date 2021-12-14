#include <stdio.h>
 
int main()
{
    int x, num, i, count = 0, cont = 0 ;
    scanf ("%d", &x) ;
    for ( i = 0 ; i < x ; i++)
    {
        scanf ("%d", &num) ;
        if (num >= 10 && num <= 20)
        {
            count += 1 ;
        }else 
            cont += 1 ;
    }
    printf ("%d in\n", count) ;
    printf ("%d out\n", cont) ;
    return 0;
}