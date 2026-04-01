#include <stdio.h>
#include <math.h>

int main (void){
	
	double x1,y1,x2,y2;
	double dist, result;
	double r1, r2;
	
	scanf("%lf %lf",&x1,&y1);
	scanf("%lf %lf",&x2,&y2);
		
	
	dist = pow((x2-x1),2) + pow((y2-y1),2);
	result= sqrt(dist);
	
	printf("%.4lf", result);
	
	
	return 0;
}
