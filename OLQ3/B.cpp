#include <stdio.h>

int main(){
	long long int a, count = 1;
	scanf("%d", &a);
	for(int i = 1; i<=a; i++){
		count *= 2;
		
	}
	printf("%lld\n", count-1);
	return 0;
}
