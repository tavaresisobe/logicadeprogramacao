#include <stdio.h>
 
int main() 
{
 
    double n1, n2, n3, n4, media = 0, exame = 0, mediafinal = 0 ;
    scanf ("%lf%lf%lf%lf", &n1, &n2, &n3, &n4) ;
    media = ((n1*2) + (n2*3) + (n3*4) + (n4* 1)) / (2 + 3 + 4 + 1) ;
     if (media >= 7.0)
     {
         printf ("Media: %.1lf\n", media) ;
         printf ("Aluno aprovado.\n") ;
     }else
        if (media < 5.0)
        {
            printf ("Media: %.1lf\n", media) ;
            printf ("Aluno reprovado.\n") ;
        }else
            if (media >= 5.0 && media < 7.00)
            {
                printf ("Media: %.1lf\n", media) ;
                printf("Aluno em exame.\n") ;
                scanf ("%lf", &exame) ;
                printf ("Nota do exame: %.1lf\n", exame) ;
                mediafinal = (media + exame) / 2 ;
                    if (mediafinal >= 5.00)
                    {
                        printf ("Aluno aprovado.\n") ;
                        printf ("Media final: %.1lf\n", mediafinal) ;
                    }else
                        if (mediafinal < 5.0)
                        {
                            printf ("Aluno reprovado.\n") ;
                            printf ("Media final: %.1lf\n", mediafinal) ;
                        }
            }
    return 0;
}