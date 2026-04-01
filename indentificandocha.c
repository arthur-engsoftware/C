#include <stdio.h>

int main() {
    int T, a, b, c, d, e;
    int corretos = 0;

    scanf("%d", &T);
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a == T) corretos++;
    if (b == T) corretos++;
    if (c == T) corretos++;
    if (d == T) corretos++;
    if (e == T) corretos++;

    printf("%d\n", corretos);

    return 0;
}
