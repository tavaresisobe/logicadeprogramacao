#include <stdio.h>
#include <stdlib.h>

void sudoku (int matriz[9][9], int nmat)
{
    int i, j, sum, jogadores, vetor[10], count = 0, linhaGrade, colunaGrade ;
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
    //checa colunas:
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
    for(i = 2 ; i < 9 && !count ; i += 3)
    {
	      	memset(vetor, 0, sizeof(vetor)) ;
	      	for(j = i - 2 ; j <= i && !count ; j++)
	      	{
	    		for(k = i - 2; k <= i && !count ; k++)
	    		{
	      			if(vetor[matriz[j][k]])
	        			count = 1 ;
	      			else
	        			vetor[matriz[j][k]] = 1 ;
	    		}
	      	}
	 }
        printf("Instancia %d\n", jogadores) ;
        if (count == 0)
        {
            printf("SIM\n\n") ;
        }else
            printf ("NAO\n\n") ;
    }
    return ;
}

int main ()
{
    int nmatrix ;
    scanf ("%d", &nmatrix) ;
    int mat [9][9] ;
    sudoku (mat, nmatrix) ;
    return 0 ;
}
