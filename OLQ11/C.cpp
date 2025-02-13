#include <stdio.h>

int fib(int n){
	if(n<=1){
		return n;
	}
	else if(n%3 == 0){
		return 10;
	}
	else{
		return (fib(n-1) + fib(n-2));
	}
}

int main(){
	int urutan;
	scanf("%d", &urutan);
	for(int i = 0; i<urutan; i++){
		printf("%d ", fib(i));
	}
	printf("\n");
}
