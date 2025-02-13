#include <stdio.h>

// 3 2
// 4
// 3 2 5 7 12

int notfib(int a, int b, int c){
	if(c == 0) return a;
	else if (c == 1) return b;
	else return notfib(a, b, c-1)+notfib(a, b, c-2);
}

int main(){
	int a, b;
	int indeks;
	scanf("%d %d", &a, &b);
	scanf("%d", &indeks);
	printf("%d\n", notfib(a, b, indeks));
	
	return 0;
}
