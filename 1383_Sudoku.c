#include <stdio.h>

void sudoku (int matriz[9][9], int nmat)
{
    int i, j, sum = 0, x = 0, k = 0, sumC = 0, sumL = 0, jogadores ;
    printf ("%d\n", nmat) ;
    for (jogadores = 1 ; jogadores <= nmat ; jogadores++)
    {
      for ( i = 0 ; i < 9 ; i++)
      {
         for ( j = 0 ; j < 9 ; j++)
         {
             scanf ("%d", &matriz[i][j]) ;
         }
      }
    //checar quadrados:
        int count = 0 ;

        if (matriz[0][0] + matriz[0][1] + matriz[0][2] + matriz[1][0] +
            matriz[1][1] + matriz[1][2] + matriz[2][0] + matriz[2][1] + matriz[2][2] != 45)
        {
            count = 1 ;
        }
            if (matriz[0][3] + matriz[0][4] + matriz[0][5] + matriz[1][3] +
            matriz[1][4] + matriz[1][5] + matriz[2][3] + matriz[2][4] + matriz[2][5] != 45)
            {
                count = 1 ;
            }
        if (matriz[0][6] + matriz[0][7] + matriz[0][8] + matriz[1][6] +
         matriz[1][7] + matriz[1][8] + matriz[2][6] + matriz[2][7] + matriz[2][8] != 45)
        {
            count = 1 ;

        }
            if (matriz[3][0] + matriz[3][1] + matriz[3][2] + matriz[4][0] +
            matriz[4][1] + matriz[4][2] + matriz[5][0] + matriz[5][1] + matriz[5][2] != 45)
             {
                  count = 1 ;
             }
         if (matriz[3][3] + matriz[3][4] + matriz[3][5] + matriz[4][3] +
        matriz[4][4] + matriz[4][5] + matriz[5][3] + matriz[5][4] + matriz[5][5] != 45)
        {
            count = 1 ;
        }
            if (matriz[3][6] + matriz[3][7] + matriz[3][8] + matriz[4][6] +
            matriz[4][7] + matriz[4][8] + matriz[5][6] + matriz[5][7] + matriz[5][8] != 45)
             {
               count = 1 ;
             }
        if (matriz[6][0] + matriz[6][1] + matriz[6][2] + matriz[7][0] +
        matriz[7][1] + matriz[7][2] + matriz[8][0] + matriz[8][1] + matriz[8][2] != 45)
        {
            count = 1 ;
        }
            if (matriz[6][3] + matriz[6][4] + matriz[6][5] + matriz[7][3] +
            matriz[7][4] + matriz[7][5] + matriz[8][3] + matriz[8][4] + matriz[8][5] != 45)
            {
                count = 1 ;
            }
        if (matriz[6][6] + matriz[6][7] + matriz[6][8] + matriz[7][6] +
        matriz[7][7] + matriz[7][8] + matriz[8][6] + matriz[8][7] + matriz[8][8] != 45)
        {
            count = 1 ;
        }
    //checar linhas e colunas:
        for(i = 0 ; i < 9 ; i++)
        {
            sumC = 0;
            for(j = 0 ; j < 9 ; j++)
            {
                sumC = sumC + matriz[j][k];
            }
                if (sumC != 45)
                {
                    count = 1 ;
                }else{
                        k++ ;
                     }
                        sumL = 0 ;
            for(j = 0 ; j < 9 ; j++)
            {
                sumL = sumL + matriz[i][j] ;
            }
                    if(sumL != 45)
                    {
                        count = 1 ;
                    }
        }
        printf("Instancia %d\n", jogadores) ;
        if (count != 0)
        {
	        printf("SIM\n") ;
        }else
            printf ("NÂO\n") ;

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