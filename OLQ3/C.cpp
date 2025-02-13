#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	if(a%2 == 0){
		printf("%d = %d + %d\n", a, a/2, a/2);
	}
	else{
		printf("%d = %d + %d\n", a, (a/2), (a/2)+1);
	}
	return 0;
}
