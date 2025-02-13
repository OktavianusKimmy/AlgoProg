#include <stdio.h>

int main(){
	int t;
	double p, n;
	scanf("%d", &t);
	for(int i = 1; i<=t; i++){
		scanf("%lf %lf", &p, &n);
		double count = (p/100)*n;
		printf("%.2lf\n", count);
	}
	return 0;
}
