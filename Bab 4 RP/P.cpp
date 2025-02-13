#include <stdio.h>

int main(){
	double persen, setelahDiskon;
	for(int i = 1; i<=4; i++){
		double count = 0;
		scanf("%lf %lf", &persen, &setelahDiskon);
		count = (setelahDiskon/(1-(persen/100)));
		printf("$%.2lf\n", count);
	}
	return 0;
}
