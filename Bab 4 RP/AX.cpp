#include <stdio.h>

int main(){
	long long int n, total = 0;
	long long int a;
	scanf("%lld", &n);
	for(int i = 1; i<=n; i++){
		scanf("%lld", &a);
		if(a<0){
			total += 0;
		}
		else{
			total += a;
		}
		
	}
	printf("%lld\n", total);
	return 0;
}
