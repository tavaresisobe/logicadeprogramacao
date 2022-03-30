/*Faça um programa que aloca dinamicamente um vetor de 5000 inteiros
e preencha de zero a 4999*/

#include <stdio.h>

int main ()
{
    int n = 5000, i ;
    int *vet = malloc (n * sizeof (int)) ;  //5000 * 4
    for ( i = 0 ; i < n ; i++)  //laço para atribuir elementos ao vetor
    {
        vet[i] = 0 ;            //preenchendo de zeros a 4999 posições
        
    //    printf ("%d\n", vet[i]) ;  //se quiser printar só tirar o "//"
    }
    return 0 ;
}
