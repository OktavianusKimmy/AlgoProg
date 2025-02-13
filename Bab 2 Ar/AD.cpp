#include <stdio.h>

int main(){
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	double count = (0.2*a)+(0.3*b)+(0.5*c);
	printf("%.2lf\n", count);
	return 0;
}
