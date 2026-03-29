#include <stdio.h>

int main() {
    char nome[50];
    double salario_fixo, vendas, salario_final, bonus;

    scanf("%s", nome);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &vendas);

    bonus = vendas * 0.15;
    salario_final = salario_fixo + bonus;

    printf("TOTAL = %.2lf\n", salario_final);

    return 0;
}