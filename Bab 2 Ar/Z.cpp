#include <stdio.h>

int main(){
	int t;
	double a, b, c, d;
	scanf("%d", &t);
	for(int i = 1; i<=t; i++){
		scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
		double count = (2*a)+(2*b)+(4*(c/3))+(d/2);
		printf("%.2lf\n", count);
	}
	return 0;
}
