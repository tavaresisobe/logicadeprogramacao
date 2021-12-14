#include <stdio.h>
 
int main()
{
    int a, b ; 
    double preco = 0 ;
    scanf ("%d%d", &a, &b) ;
    if (a == 1)
    {
        preco = 4.00 * b ;
    }else
        if (a == 2)
        {
            preco = 4.50 * b ; 
        }else
            if (a == 3)
            {
                preco = 5.00 * b ;
            }else
                if (a == 4)
                {
                    preco = 2.00 * b ;
                }else
                    if (a == 5)
                    {
                        preco = 1.50 * b ;
                    }
    printf ("Total: R$ %.2lf\n", preco) ;
    
    return 0;
}