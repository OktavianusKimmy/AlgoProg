#include <stdio.h>

int main(){
	int n, i, a;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(a=1; a<=n; a++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
