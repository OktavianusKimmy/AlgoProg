#include <stdio.h>

int main(){
	char x[100];
	int h1, m1, h2, m2;
	for(int i = 1; i<=5; i++){
		scanf("%s %d:%d-%d:%d", x, &h1, &m1, &h2, &m2);
		getchar();
		printf("%s %02d:%02d-%02d:%02d\n", x, h1-1, m1, h2-1, m2);
	}
	return 0;
}
