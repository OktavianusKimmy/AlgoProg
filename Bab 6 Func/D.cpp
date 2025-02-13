#include <stdio.h>

long long int f(long long int n){
	if(n == 1){
		return 1;
	}
	else if(n % 2 == 0) return f(n/2);
	else return f(n-1)+f(n+1);
}

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		long long int n;
		scanf("%lld", &n);
		long long int result = f(n);
		printf("Case #%d: %lld\n", i, result);
	}
}
