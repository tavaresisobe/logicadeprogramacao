#include <stdio.h>

int main(void)
{
    double salario, reajuste ;
    scanf ("%lf", &salario) ;
    int i ;
    if (salario >= 0 && salario <= 400)
    {
        reajuste = (salario * 15.0) / 100.0 ;
        salario += reajuste ;
        i = 15 ;
    }else
        if (salario > 400.0 && salario <= 800.0)
        {
            reajuste = (salario * 12.0) / 100.0 ;
            salario += reajuste ;
            i = 12  ;
        }else
            if (salario > 800.0 && salario <= 1200.0)
            {
                reajuste = (salario * 10.0) / 100.0 ;
                salario += reajuste ;
                i = 10 ;
            }else
                if (salario > 1200.0 && salario <= 2000.0)
                {
                    reajuste = (salario * 7.0) / 100.0 ;
                    salario += reajuste ;
                    i = 7 ;
                }else
                    if (salario > 2000.0)
                    {
                        reajuste = (salario * 4.0) / 100.0 ;
                        salario += reajuste ; 
                        i = 4 ;
                    }
    printf ("Novo salario: %.2lf\n", salario) ;
    printf ("Reajuste ganho: %.2lf\n", reajuste) ;
    printf ("Em percentual: %d %\n", i) ;

  return 0;
}