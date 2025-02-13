#include <stdio.h>

int main(){
	float hargaAwal, hargaAkhir;
	scanf("%f %f", &hargaAwal, &hargaAkhir);
	float count = (1-(hargaAkhir/hargaAwal))*100;
	printf("%.2f%%\n", count);
	return 0;
}
