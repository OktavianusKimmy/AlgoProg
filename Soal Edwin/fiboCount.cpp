#include <stdio.h>

int count = 0;

int fibo(int n){
	if(n == 0) return 1;
	if(n == 1) return 1;
	count++;
	return fibo(n-1) + fibo(n-2);
}

int main(){
	int t;
	scanf("%d", &t);
	for(int i = 1; i<=t; i++){
		int n;
		scanf("%d", &n); getchar();
		fibo(n);
		printf("%d\n", count);
		count = 0;
	}
}
