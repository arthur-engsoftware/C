#include <stdio.h>

int main (void)
{
    float A, B, C, media;

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
    if ((A>=0 && A<=10.0) && (B>=0 && B<=10.0)&& (C>=0 && C<=10.0) )
    {
        media= ((A*2) + (B*3) + (C*5))/10;
        printf ("MEDIA = %.1f\n", media);
    }
    
    return 0;
}