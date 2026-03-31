#include <stdio.h>

int main (void)
{
    int cod1,unidade1, cod2, unidade2;
    float valoruni1,valoruni2, valorfinal;

    scanf("%i %i %f",&cod1, &unidade1, &valoruni1);
    scanf("%i %i %f",&cod2, &unidade2, &valoruni2);

    valorfinal= (unidade1*valoruni1)+(valoruni2*unidade2);
    printf("VALOR A PAGAR: R$ %.2f\n", valorfinal);


    return 0;
}