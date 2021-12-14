#include <stdio.h>

int main ()
{
    int n ;
    scanf ("%d", &n) ;
    int i , fat = 1 ;
    for (i = 2 ; i <= n ; i++)
    {
        fat = fat * i ;
    }
    printf ("%d\n", fat);
    
    return 0 ;
}