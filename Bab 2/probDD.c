#include <stdio.h>

int main(){
	long long int a, win = 1;
	scanf("%lld", &a);
	for(int i = 1; i<=a; i++){
		win *= 2;
	}
	printf("%lld\n", win-1);
	return 0;
}