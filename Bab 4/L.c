#include <stdio.h>

int main(){
	long long int n, i, brg, j, qty, total = 0;
	scanf("%lld", &n);
	for(i=1; i<=n; i++){
		total = 0;
		scanf("%lld", &brg);
		for(j=1; j<=brg; j++){
			scanf("%lld", &qty);
			total+= qty;
		}
		printf("Case #%lld: %lld\n", i, total);
		total = 0;
	}
	return 0;
}
