#include <stdio.h>

int main (void){

    int tempo_horas, velocidade;
    float autonomia;

    scanf("%d",&tempo_horas);
    scanf("%d",&velocidade);

    autonomia = (tempo_horas * velocidade)/ 12.0; 

    printf ("%.3f",autonomia);

    return 0;
}