#include <stdio.h>

int main(){
	long long int n;
	long long int total = 1;
	scanf("%lld", &n);
	for(int i=1; i<=n; i++){
		total*=2;
	}
	printf("%lld\n", total-1);
	return 0;
}
