#include <stdio.h>

int main(){
	char x[4];
	for(int i = 1; i<=3; i++){
		scanf("%s", x);
		char y = x[1];
		printf("%c\n", y);
	}
	return 0;
}
