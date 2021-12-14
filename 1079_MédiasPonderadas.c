#include <stdio.h>
 
int main()
{
    int n, i ;
    double n1, n2, n3 ;
    double medias = 0 ;
    scanf ("%d", &n) ;
    for ( i = 0 ; i < n ; i++)
    {
        scanf ("%lf%lf%lf", &n1, &n2, &n3) ;
        medias = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / (2 + 3 + 5) ;
        printf ("%.1lf\n", medias) ;
    }
    
    return 0;
}