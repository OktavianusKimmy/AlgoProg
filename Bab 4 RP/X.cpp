#include <stdio.h>

int main(){
	long long int n = 1, q;
	scanf("%lld", &q);
	if(q == 0){
		printf("1\n");
	}
	else{
		for(int i=1; i<=q; i++){
			n = n*2 + 1;
		}
		printf("%lld\n", n);
	}
	return 0;
}
