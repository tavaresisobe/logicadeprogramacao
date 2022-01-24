/*Faça um programa que leia um valor T e preencha um vetor N[1000] com 
a sequência de valores de 0 até T-1 repetidas vezes, conforme exemplo
abaixo. Imprima o vetor N.*/

#include <stdio.h>

int main() 
{
	int N[1000], T, i, aux = 0 ;

	scanf("%d", &T);

	for(i = 0; i < 1000; i++) 
	{
		if(aux >= T) 
		{
			aux = 0;
		}
		N[i] = aux;
		
		printf("N[%d] = %d\n", i, N[i]);
		
		aux++ ;
	}
	return 0;
}