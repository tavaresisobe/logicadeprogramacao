#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int linha, i, j ;
    char operacao ;
    double matriz[12][12], aux = 0.0 ;
    scanf ("%d", &linha) ;
    scanf ("%s", &operacao) ;
        for (i = 0 ; i < 12 ; i ++)
        {
            for (j = 0 ; j < 12 ; j++)
            {
              scanf ("%lf", &matriz[i][j]) ;
            
                if (linha == i)
                {
                    aux += matriz[i][j] ;
                }
            }
        }
 //    for (i = 0 ; i < 12 ; i ++)
   //  {
     //   for (j = 0 ; j < 12 ; j++)
       // {
         //      printf ("%lf ", matriz[i][j]) ;
       // }
      //printf ("\n") ;
    // }
            
     if(operacao == 'S')
        {
            printf("%.1lf\n", aux) ;
        }else 
                if(operacao =='M')
                {
                    aux = aux / 12.0 ;
                    printf ("%.1lf\n", aux) ;
                }
    return 0 ;
}
