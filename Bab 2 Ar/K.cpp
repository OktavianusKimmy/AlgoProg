#include <stdio.h>

int main(){
	double modalAwal, modalAkhir;
	double persen;
	scanf("%lf %lf", &modalAwal, &persen);
	double persenDes = persen/100;
	double a=1;
	int i = 1;
	while (i<=3){
		a *= (1+persenDes);
		i++;
	}
	modalAkhir = modalAwal*a;
	printf("%.2lf\n", modalAkhir);
	return 0;
}
