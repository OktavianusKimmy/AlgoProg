#include <stdio.h>

int main(){
	double d1, p1;
	double d2, p2;
	double d3, p3;
	double d4, p4;
	
	scanf("%lf %lf", &d1, &p1);
	scanf("%lf %lf", &d2, &p2);
	scanf("%lf %lf", &d3, &p3);
	scanf("%lf %lf", &d4, &p4);
	
	printf("$%.2lf\n", p1/(100-d1)*100);
	printf("$%.2lf\n", p2/(100-d2)*100);
	printf("$%.2lf\n", p3/(100-d3)*100);
	printf("$%.2lf\n", p4/(100-d4)*100);
	return 0;
}
