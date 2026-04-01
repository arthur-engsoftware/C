#include <stdio.h>

int main (void)
{
	int distancia; 
	float total_litros, autonomia;
	
	scanf("%d", &distancia);
	scanf("%f", &total_litros);
	
	autonomia= distancia / total_litros; 
	
	printf ("%.3f km/l \n", autonomia);

	return 0;
}
