#include<stdio.h>

int main (void)
{
    int num_funcionarios, horas;
    float valor_hora,salario;

    scanf("%i",&num_funcionarios);
    scanf("%i",&horas);
    scanf("%f",&valor_hora);
    
    salario= valor_hora *horas;

    printf("NUMBER = %i\n",num_funcionarios);
    printf ("SALARY = U$ %.2f\n",salario);

    return 0; 
}