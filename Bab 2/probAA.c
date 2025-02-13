#include <stdio.h>

int main(){
	double a, b, c, d;
	int t;
	scanf("%d", &t);
	int i;
	for(i = 0; i < 3; i++){
		scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
		printf("%.2lf\n", (2*a)+(2*b)+(4*c/3)+(d/2));
	}
	return 0;	
}
