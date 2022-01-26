#include <stdio.h>

void sudoku (int mat[9][9], int nmat)
{
    int instancias ;
    int i, j, l[10] = {0}, c[10] = {0}, q[10] = {0}, m, b, k, count = 0 ; 
    for (instancias = 1 ; instancias <= nmat ; instancias++)
    {
        for (i = 0 ; i < 9 ; i++)
        {
            for (j = 0 ; j < 9 ; j++)
            {
                scanf ("%d", &mat[i][j]) ;
            }
        }
    //checando linhas:
    for (i = 0 ; i < 9 ; i++)
    {
        for (j = 0 ; j < 9 ; j++)
        {
            l[mat[i][j]]++ ;
        }
        for (k = 1 ; k <= 9 ; k++)
        if (l[k] != 1)
        {
            count = 1 ;
        }
            for (k = 1 ; k <= 9 ; k++)
            {
                l[k] = 0 ;
            }
    }
    //checando colunas:
    for (i = 0 ; i < 9 ; i++)
    {
        for (j = 0 ; j < 9 ; j++)
        {
            c[mat[j][i]]++ ;
        }
        for (k = 1 ; k <= 9 ; k++)
        if (c[k] != 1)
        {
            count = 1 ;
        }
            for (k = 1 ; k <= 9 ; k++)
            {
                c[k] = 0 ;
            }
    }
    //checando quadrados:
    for (m = 0 ; m < 9 ; m += 3)
    {
        for ( b = 0 ; b < 9 ; b += 3)
        {
            for (i = m ; i < m+3 ; i++)
            {
                for (j = b ; j < b+3 ; j++)
                {
                    q[mat[i][j]]++ ;
                }
            }
            for (k = 1 ; k <= 9 ; k++)
                if (q[k] != 1)
                {
                   count = 1 ;
                }
            for (k = 1 ; k <= 9 ; k++)
            {
                q[k] = 0 ;
            }
        }
    }
    printf ("Instancia %d\n", instancias) ;
        if (count == 0)
            printf ("SIM\n\n") ;
        else
            printf ("NAO\n\n") ;
    }
}

int main ()
{
    int sudok[9][9], nmat ;
    scanf ("%d", &nmat) ;
    sudoku (sudok, nmat) ;
    return 0 ;
}
