#include <stdio.h>

int main(){
	int t;
	float c;
	scanf("%d", &t);
	for(int i = 1; i<=t; i++){
		scanf("%f", &c);
		double countR = (c*4/5);
		double countF = (c*9/5)+32;
		double countK = (c+273);
		printf("%.2lf %.2lf %.2lf\n", countR, countF, countK);
	}
	return 0;
}
