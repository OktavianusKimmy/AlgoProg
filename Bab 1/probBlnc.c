#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int i, c = (a+b)-1;
	for(i = a; i<=c; i++){
		printf("%d\n", a++);
	}
	return 0;
}
