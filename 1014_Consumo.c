#include <stdio.h>
 
int main() 
{
    int x ;
    double y, i ;
    scanf ("%d", &x) ;
    scanf ("%lf", &y) ;
    i = x / y ;
    printf ("%.3lf km/l\n", i) ;
    
    return 0;
}