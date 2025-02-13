#include <stdio.h>

int main(){
	long int a, b, c, d, x, y;
	scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
	x = a*b;
	y = c+d;
	if(x>y){
		printf("True\n");
	}
	else{
		printf("False\n");
	}
	return 0;
}
