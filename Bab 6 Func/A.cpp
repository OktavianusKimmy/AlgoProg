#include <stdio.h>

int count = 0;

int f(int n){
	
	if(n == 0){
		return 1;
	}
	if(n == 1){
		return 2;
	}
	if(n % 3 == 0){
		count++;
	}
	if(n % 5 == 0){
		return n*2;
	}
	return (f(n-1)+n+f(n-2)+n-2);
}

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int n;
		count = 0;
		scanf("%d", &n);
		int result = f(n);
		printf("Case #%d: %d %d\n", i, result, count);
	}
}
