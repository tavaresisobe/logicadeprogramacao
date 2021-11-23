#include <stdio.h>
 
int main() {
 
    int numero, horas ;
    double moneyforhours , salario ;
    scanf ("%d%d", &numero, &horas) ;
    scanf ("%lf", &moneyforhours) ;
    salario = horas * moneyforhours ;
    printf ("NUMBER = %d\n", numero) ;
    printf ("SALARY = U$ %.2lf\n", salario) ;
 
    return 0;
}