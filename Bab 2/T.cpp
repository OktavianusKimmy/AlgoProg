#include <stdio.h>

int main(){
	char x[100];
	int h1, m1, h2, m2;
	for(int i = 1; i<=5; i++){
		scanf("%s %d:%d-%d:%d", &x, &h1, &m1, &h2, &m2);
		getchar();
		int houra=h1-1;
		int hourb=h2-1;
		printf("%s %02d:%02d-%02d:%02d\n", x, houra, m1, hourb, m2);
	}
	return 0;
}
