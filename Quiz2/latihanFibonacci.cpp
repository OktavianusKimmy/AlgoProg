#include <stdio.h>

int fibo(int n){
	if(n == 1) return 1;
	if(n == 0) return 0;
	
	if((n % 2) ==  1) return 1;
	else return fibo(n-1) + fibo(n-2);	
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", fibo(n));
}

/*
10
lorem ipsum dolor sit amet
consectetur adispiscing elit
#
sed do eiusmod tempor
incididunt ut labore et
dolore magna aliqua
#
*/
