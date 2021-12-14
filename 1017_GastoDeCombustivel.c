#include <stdio.h>
 
int main() 
{
    int tempo, vmedia,distancia ;
    scanf ("%d%d", &tempo, &vmedia) ;
    distancia = tempo * vmedia ;
    double litros ;
    litros = distancia / 12.00 ;
    printf("%.3lf\n", litros) ; 
    return 0;
}