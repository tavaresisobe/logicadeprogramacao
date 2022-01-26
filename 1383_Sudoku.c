/*Gustavo Henrique Tavares Isobe
  Exercicio número 1383 URI online: 
  https://www.beecrowd.com.br/judge/pt/problems/view/1383 
  Data: 26/01/2022 */
#include <stdio.h>
#include <stdlib.h>

void sudoku (int matriz[9][9], int nmat)
{
    int i, j, k, jogadores, vetor[10], count = 0 ;
 // printf ("%d\n", nmat) ;
    for (jogadores = 1 ; jogadores <= nmat ; jogadores++)
    {
      for ( i = 0 ; i < 9 ; i++)
      {
         for ( j = 0 ; j < 9 ; j++)
         {
             scanf ("%d", &matriz[i][j]) ;
		    //condição para checar se elementos digitados estão entre [1...9]
                    if (matriz [i][j] < 1 || matriz[i][j] > 9)
                    {
                        count = 1 ;
                    }
         }
      }
    //checar linhas:
    for(i = 0 ; i < 9 && count != 1 ; i++)//se count for 1 temos que interromper o laço
    {
        for(j = 0 ; j < 10 ; j++)
        {
            vetor[j] = 0 ; //colocando zeros para poder verificar a próxima linha
        }
        for(j = 0 ; j < 9 && count != 1 ; j++) //se count for 1 temos que interromper o laço
        { 
            if(vetor[matriz[i][j]] == 0)
            {
                vetor[matriz[i][j]] = 1 ; //vendo aquele número naquela linha pela primeira vez
            }
            else{
                    count = 1 ; //vendo aquele número naquela linha mais de uma vez
                }
        }
    }
    //checar colunas:
    for(j = 0 ; j < 9 && count != 1 ; j++)//se count for 1 temos que interromper o laço
    {
        for(i = 0 ; i < 10 ; i++)
        {
            vetor[i] = 0 ; //colocando zeros para poder verificar a próxima linha
        }
        for(i = 0 ; i < 9 && count != 1 ; i++) //se count for 1 temos que interromper o laço
        { 
            if(vetor[matriz[i][j]] == 0)
            {
                vetor[matriz[i][j]] = 1 ; //vendo aquele número naquela linha pela primeira vez
            }
            else{
                    count = 1 ; //vendo aquele número naquela linha mais de uma vez
                }
        }
    }
    //checar quadrados:
    for(i = 2 ; i < 9 && count != 1  ; i += 3)
    {
       vetor[10] = 0 ;
	      	for(j = i - 2 ; j <= i && count != 1 ; j++)
	      	{
	    		for(k = i - 2; k <= i && count != 1 ; k++)
	    		{
	      			if(vetor[matriz[j][k]])
	        			vetor[matriz[j][k]] = 1 ;
	      			else
	        		    count = 1 ;
	    		}
	      	}
     }
        printf("Instancia %d\n", jogadores) ;
         if (count == 0)
            printf("SIM\n\n") ;
         else
            printf ("NAO\n\n") ;
    }
}
int main ()

{
    int nmatrix ;
    scanf ("%d", &nmatrix) ;
    int mat [9][9] ;
    sudoku (mat, nmatrix) ;
    return 0 ;
}
        
