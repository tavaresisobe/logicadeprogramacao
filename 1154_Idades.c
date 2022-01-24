#include <stdio.h>

int main ()
{
   int idade, i, cont = 0;
   double guarda = 0.0 ;
   do{
        scanf("%d", &idade) ;
            if ( idade < 0)
            {
                break ;
            }
        guarda += idade ;
        cont++ ;
    
  }while (idade > 0) ;

  printf("%.2lf\n", guarda / cont) ;

}