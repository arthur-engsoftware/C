#include <stdio.h>

int main() {
    double valor;
    int resto;

    scanf("%lf", &valor);

    // Converte para centavos 
    resto = (int)(valor * 100 + 0.5);

    int n100, n50, n20, n10, n5, n2;
    int m1, m050, m025, m010, m005, m001;

 
    n100 = resto / 10000;
    resto %= 10000;

    n50 = resto / 5000;
    resto %= 5000;

    n20 = resto / 2000;
    resto %= 2000;

    n10 = resto/ 1000;
    resto %= 1000;

    n5 = resto / 500;
    resto %= 500;

    n2 = resto / 200;
    resto %= 200;

    
    m1 = resto / 100;
    resto %= 100;

    m050 = resto/ 50;
    resto %= 50;

    m025 = resto / 25;
    resto %= 25;

    m010 = resto / 10;
    resto %= 10;

    m005 = resto / 5;
    resto %= 5;

    m001 = resto;


    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m1);
    printf("%d moeda(s) de R$ 0.50\n", m050);
    printf("%d moeda(s) de R$ 0.25\n", m025);
    printf("%d moeda(s) de R$ 0.10\n", m010);
    printf("%d moeda(s) de R$ 0.05\n", m005);
    printf("%d moeda(s) de R$ 0.01\n", m001);

    return 0;
}