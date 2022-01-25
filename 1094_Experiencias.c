#include <stdio.h>
 
int main()
{
    int aux = 0, testes, quantia, c = 0, r = 0, s = 0, i ;
    char animal ;
    scanf ("%d", &testes) ;
    for (i = 1 ; i <= testes ; i++)
    {
        scanf ("%d %c", &quantia, &animal) ;
        aux += quantia ;
            if (animal == 'C') 
            {
                c += quantia ;
            }else
                 if (animal == 'R') 
                 {
                   r += quantia ;
                 }else
                  if (animal == 'S') 
                  {
                      s += quantia ;
                  }
    }
    double percentc, percentr, percents, real = (double) aux ;
    
    percentc = (c / real) * 100 ;
    percentr = (r / real) * 100 ;
    percents = (s / real) * 100 ;

    printf ("Total: %d cobaias\n", aux) ;
    printf ("Total de coelhos: %d\n", c) ;
    printf ("Total de ratos: %d\n", r) ;
    printf ("Total de sapos: %d\n", s) ;
    printf ("Percentual de coelhos: %.2lf %\n", percentc) ;
    printf ("Percentual de ratos: %.2lf %\n", percentr) ;
    printf ("Percentual de sapos: %.2lf %\n", percents) ;
    return 0;
}