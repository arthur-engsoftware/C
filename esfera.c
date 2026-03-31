#include <stdio.h>
#include <math.h>

int main(void)
{
    const double pi= 3.14159;
    double raio, volume;

    scanf("%lf", &raio);
    
    volume= (4.0/3) * pi * pow(raio,3.0);

    printf("VOLUME = %.3lf\n", volume);
    return 0;
}