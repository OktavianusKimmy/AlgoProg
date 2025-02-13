#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		long long int angka;
		scanf("%lld", &angka);
		long long int count = 1;
		while(angka>=10){
			angka = angka/10;
			count++;
		}
		printf("Case #%d: %lld\n", i, count);
	}
}
