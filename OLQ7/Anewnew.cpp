#include <stdio.h>


long long int func(long long m, long long n){
	if(m == 0) return 0;
	return m + (n-1) + (n-1) * func(m-1, n-1) % 1000000000;
}

int main(){
	int t;
	scanf("%d", &t);
	for(int i = 1; i<=t; i++){
		int m, n;
		scanf("%d %d", &m, &n);
		printf("Case #%d: %lld\n", i, func(m, n));
	}
	return 0;
}
