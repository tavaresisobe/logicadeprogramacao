/*Na matemática, um número perfeito é um número inteiro para o qual a 
soma de todos os seus divisores positivos próprios 
(excluindo ele mesmo) é igual ao próprio número. Por exemplo o número 
6 é perfeito, pois 1+2+3 é igual a 6. Sua tarefa é escrever um 
programa que imprima se um determinado número é perfeito ou não.*/

#include <stdio.h>
int main() 
{
   int testes ;
   scanf ("%d", &testes) ;
   int n, soma, divisor, i;
   soma = 0;
   for (i = 1 ; i <= testes && 1<=testes<= 20; i++)
   {
      scanf("%d", &n) ;
        for (divisor = 1; divisor < n; divisor++)
        {
            if (n % divisor == 0)
                soma = soma + divisor;
        }
            if (n == soma)
                printf("%d eh perfeito\n", n) ;
            else 
                printf("%d nao eh perfeito\n", n) ;
   }
  return 0;
}
