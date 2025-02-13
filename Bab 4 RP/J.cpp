#include <stdio.h>

int main(){
	long long int testCase, item, qty;
	scanf("%lld", &testCase);
	for(int i = 1; i <= testCase; i++){
		scanf("%lld", &item);
		long long int jumlah = 0;
		for(int a = 1; a <= item; a++){
			scanf("%lld", &qty);
			jumlah += qty;
		}
		printf("Case #%lld: %lld\n", i, jumlah);
	}
	return 0;
}
