#include <stdio.h>

int main (void)
{
    double A, B, media; 

    scanf ("%lf", &A);
    scanf ("%lf", &B);
    if ((A>=0 &&  B >=0) && (A<=10 && B <=10) )
    {
        media= ((A*3.5) + (B*7.5))/11.0;
        printf ("MEDIA = %.5lf",media);
    }


    return 0;
}