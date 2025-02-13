#include <stdio.h>

int jojonanci(int x, int a, int b){
	if(x == 0) return a;
	else if(x == 1) return b;
	
	return jojonanci(x-1, a, b) - jojonanci(x-2, a, b);
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i<n; i++){
		int a, b, x;
		scanf("%d %d %d", &x, &a, &b);
		printf("Case #%d: %d\n", i+1, jojonanci(x, a, b));
	}
}
