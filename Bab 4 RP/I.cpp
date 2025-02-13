#include <stdio.h>

int main(){
	float jo, li, bi, peserta, nilaiLain, sum=0, sumall=0;
	scanf("%f", &peserta);
	scanf("%f %f %f", &jo, &li, &bi);
	for(int i = 1; i <= peserta; i++){
		scanf("%f", &nilaiLain);
		sum += nilaiLain;
	}
	sumall = (sum + jo + li + bi)/(3+peserta);
	if(jo < sumall){
		puts("Jojo tidak lolos");
	}
	else{
		puts("Jojo lolos");
	}
	if(li < sumall){
		puts("Lili tidak lolos");
	}
	else{
		puts("Lili lolos");
	}
	if(bi < sumall){
		puts("Bibi tidak lolos");
	}
	else{
		puts("Bibi lolos");
	}
	return 0;
}
