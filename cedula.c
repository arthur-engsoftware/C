#include <stdio.h>

int main(void)
{
    int num, resto;
    int C100, C50, C20, C10, C5, C2, C1;

    scanf("%d", &num);

    printf("%d\n", num);

    resto = num;

    C100 = resto / 100;
    resto = resto % 100;

    C50 = resto / 50;
    resto = resto % 50;

    C20 = resto / 20;
    resto = resto % 20;

    C10 = resto / 10;
    resto = resto % 10;

    C5 = resto / 5;
    resto = resto % 5;

    C2 = resto / 2;
    resto = resto % 2;

    C1 = resto;

    printf("%d nota(s) de R$ 100,00\n", C100);
    printf("%d nota(s) de R$ 50,00\n", C50);
    printf("%d nota(s) de R$ 20,00\n", C20);
    printf("%d nota(s) de R$ 10,00\n", C10);
    printf("%d nota(s) de R$ 5,00\n", C5);
    printf("%d nota(s) de R$ 2,00\n", C2);
    printf("%d nota(s) de R$ 1,00\n", C1);

    return 0;
}