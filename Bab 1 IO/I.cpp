#include <stdio.h>

int main(){
	char x[100];
	scanf("%[^\n]", &x);
	printf("Hello %s!\n", x);
	return 0;
}
