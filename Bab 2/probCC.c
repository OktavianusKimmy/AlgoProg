#include <stdio.h>

int main(){
	long long int base = 0, bonus=50;
	int n, i;
	scanf("%d", &n);
	for(i = 0; i<n; i++){
		base += (100 + (bonus*i));
	}
	printf("%lld\n", base);
	return 0;
}
