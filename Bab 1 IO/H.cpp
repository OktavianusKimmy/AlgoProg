#include <stdio.h>

int main(){
	char x[100];
	scanf("%[^\n]", &x);
	printf("Congrats \"%s\" for joining the CS department at BINUS.\n", x);
	return 0;
}
