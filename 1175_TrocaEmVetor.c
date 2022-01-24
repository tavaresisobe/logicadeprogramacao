/*Faça um programa que leia um vetor N[20]. Troque a seguir, o 
primeiro elemento com o último, o segundo elemento com o penúltimo, 
etc., até trocar o 10º com o 11º. Mostre o vetor modificado.*/
#include <stdio.h>

int main ()
{
  int vetor[20], i, aux = 0;
  for (i = 0 ; i < 20 ; i++)
  {
    scanf ("%d", &vetor[i]) ;
  }

  for (i = 19 ; i >= 0 ; i--)
  {
    printf ("N[%d] = %d\n",aux * 1, vetor[i]) ;
    aux += 1 ;
  }

  return 0 ;
}