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
    for ( linhaGrade = 0; linhaGrade < 3; linhaGrade++)
        {
            for (colunaGrade = 0 ; colunaGrade < 3 ; colunaGrade++)
            {
                //Estamos conferindo aqui, entao é aqui que resetamos a soma pra 0, porque estamos em outra matriz 3 por 3
                sum = 0;
                for (i = 0 ; i < 3 ; i++)
                {
                    for (j = 0 ; j < 3 ; j++)
                    {
                        sum = sum + matriz[linhaGrade * 3 + i][colunaGrade * 3 + j] ;
                    }
                }
                //Conferir se teve repeticao:
                if (sum != 45) 
                    count = 1 ; 
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
